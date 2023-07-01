using System;
using System.Collections.Generic;
using System.Reflection;
using System.Threading.Tasks;
using UnityEditor.Callbacks;
using UnityEngine;

namespace Nico.Editor
{
    public delegate bool ParseDelegate<in TData, TResult>(TData value, out TResult result);

    internal static class Parser<TData, TResult>
    {
        public static ParseDelegate<TData, TResult> parser;
    }

    [AttributeUsage(AttributeTargets.Class | AttributeTargets.Enum | AttributeTargets.Struct, Inherited = false)]
    public class ParseAttribute : Attribute
    {
    }

    public static class ParserManager
    {
        private const string _parserName = "parser";
        private static Dictionary<Type, HashSet<Type>> _cacheDict = new Dictionary<Type, HashSet<Type>>();
        private static readonly Type _strType = typeof(string);

        private static readonly Type _buildInParserType = typeof(BuildInParser);

        private static readonly Type _buildInGenericParserType = typeof(BuildInGenericParser);

        private static readonly MethodInfo _buildInEnumParser =
            _buildInGenericParserType.GetMethod(nameof(BuildInGenericParser.EnumParser));

        private static readonly MethodInfo _buildInListParser =
            _buildInGenericParserType.GetMethod(nameof(BuildInGenericParser.ListParser));

        private static readonly MethodInfo _buildInDictParser =
            _buildInGenericParserType.GetMethod(nameof(BuildInGenericParser.DictParser));

        private static readonly MethodInfo _buildInArrayParser =
            _buildInGenericParserType.GetMethod(nameof(BuildInGenericParser.ArrayParser));


        [DidReloadScripts]
        internal static void OnAssemblyReload()
        {
            _cacheDict.Clear();
            //注册所有的buildIn 解析器
            foreach (var methodInfo in _buildInParserType.GetMethods())
            {
                __register_parser_method(methodInfo);
            }

            //找到所有的ParseAttribute 标注的类型,为他们自动生成解析器
            foreach (var type in ReflectionUtils.GetTypesWithAttribute<ParseAttribute>())
            {
                __generate_string_parser(type);
            }
            //为上面注册过的所有解析器生成泛型(List,Array)解析器
            foreach (var type in _cacheDict.Keys)
            {
                Debug.Log($"generic container :{type}");
                Type arrayType = type.MakeArrayType();
                Debug.Log($"arrayType :{arrayType}");
                __generate_string_parser(arrayType);
                Type listType = typeof(List<>).MakeGenericType(type);
                Debug.Log($"listType :{listType}");
                __generate_string_parser(listType);
            }
        }

        private static void __generate_string_parser(Type resultType)
        {
            //判断 string , type 的 Parse是否已经注册
            if (Contains(_strType, resultType))
            {
                return;
            } 
            if (resultType.IsAbstract || resultType.IsInterface) return;
            // 是枚举
            if (resultType.IsEnum)
            {
                MethodInfo methodInfo = _buildInEnumParser.MakeGenericMethod(resultType);
                __register_parser_method(methodInfo);
                return;
            }

            //是泛型
            if (resultType.IsGenericType)
            {
                // 是List
                if (resultType.IsList())
                {
                    Type eleType = resultType.GetGenericArguments()[0];
                    __generate_string_parser(eleType);
                    MethodInfo methodInfo = _buildInListParser.MakeGenericMethod(eleType);
                    __register_parser_method(methodInfo);
                    return;
                }
            }

            //是数组
            if (resultType.IsArray)
            {
                Type eleType = resultType.GetElementType();
                __generate_string_parser(eleType);
                MethodInfo methodInfo = _buildInArrayParser.MakeGenericMethod(eleType);
                __register_parser_method(methodInfo);
                return;
            }

            //是class 或者 struct
            if (resultType.IsClass || resultType.IsStruct())
            {
            }
        }

        private static void __register_parser_method(MethodInfo methodInfo)
        {
            var parameters = methodInfo.GetParameters();
            if (parameters.Length != 2)
            {
                // Debug.LogWarning($"{methodInfo} must contains 2 params");
                return;
            }

            Type dataType = parameters[0].ParameterType;

            Type resultType = parameters[1].ParameterType;

            //第二个参数必须是out类型
            if (!parameters[1].IsOut)
            {
                // Debug.LogWarning($"{methodInfo} must has an out param at position 2");
                return;
            }

            //out转正常
            resultType = resultType.GetElementType();

            //创建parser泛型实例
            var parseDelegateType = typeof(ParseDelegate<,>).MakeGenericType(dataType, resultType);
            //创建parser泛型实例
            Delegate parser = Delegate.CreateDelegate(parseDelegateType, methodInfo);
            //将parser赋值给Parser<,>.parser
            RegisterParser(dataType, resultType, parser);
            // Debug.Log($"dataType:{dataType},dataType:{resultType}");
        }

        private static FieldInfo __get_parser_field_info(Type dataType, Type resultType)
        {
            //获取Parser<,>的泛型类
            var parserType = typeof(Parser<,>).MakeGenericType(dataType, resultType);
            //获取泛型类的静态字段
            var parserField = parserType.GetField(_parserName);
            return parserField;
        }

        public static void RegisterParser(Type dataType, Type resultType, Delegate parser)
        {
            // Debug.Log($"{dataType},{resultType} --> {parser}");
            //将parser赋值给Parser<,>.parser
            var parserField = __get_parser_field_info(dataType, resultType);
            parserField.SetValue(null, parser);

            //记录下
            // Debug.Log("set value ");
            if (_cacheDict == null)
            {
                _cacheDict = new Dictionary<Type, HashSet<Type>>();
            }

            if (!_cacheDict.ContainsKey(dataType))
            {
                _cacheDict.Add(dataType, new HashSet<Type>());
            }

            _cacheDict[dataType].Add(resultType);
        }


        public static bool Contains(Type dataType, Type resultType)
        {
            return _cacheDict.TryGetValue(dataType, out var set) && set.Contains(resultType);
        }

        public static bool Parse<TData, TResult>(TData data, out TResult result)
        {
            result = default;
            var parser = Parser<TData, TResult>.parser;
            if (parser != null)
            {
                return parser(data, out result);
            }

            return false;
        }
    }


    public static class BuildInParser
    {
        public static bool IntParse(string value, out int result)
        {
            return int.TryParse(value, out result);
        }

        public static bool FloatParse(string value, out float result)
        {
            return float.TryParse(value, out result);
        }

        public static bool StringParse(string value, out string result)
        {
            result = value;
            return true;
        }

        public static bool BoolParse(string value, out bool result)
        {
            return bool.TryParse(value, out result);
        }

        public static bool Vector2Parse(string value, out UnityEngine.Vector2 result)
        {
            var values = value.Split(',');
            if (values.Length != 2)
            {
                result = UnityEngine.Vector2.zero;
                return false;
            }

            if (!float.TryParse(values[0], out var x))
            {
                result = UnityEngine.Vector2.zero;
                return false;
            }

            if (!float.TryParse(values[1], out var y))
            {
                result = UnityEngine.Vector2.zero;
                return false;
            }

            result = new UnityEngine.Vector2(x, y);
            return true;
        }

        public static bool Vector2IntParse(string value, out UnityEngine.Vector2Int result)
        {
            var values = value.Split(',');
            if (values.Length != 2)
            {
                result = UnityEngine.Vector2Int.zero;
                return false;
            }

            if (!int.TryParse(values[0], out var x))
            {
                result = UnityEngine.Vector2Int.zero;
                return false;
            }

            if (!int.TryParse(values[1], out var y))
            {
                result = UnityEngine.Vector2Int.zero;
                return false;
            }

            result = new UnityEngine.Vector2Int(x, y);
            return true;
        }

        public static bool Vector3Parse(string value, out UnityEngine.Vector3 result)
        {
            var values = value.Split(',');
            if (values.Length != 3)
            {
                result = UnityEngine.Vector3.zero;
                return false;
            }

            if (!float.TryParse(values[0], out var x))
            {
                result = UnityEngine.Vector3.zero;
                return false;
            }

            if (!float.TryParse(values[1], out var y))
            {
                result = UnityEngine.Vector3.zero;
                return false;
            }

            if (!float.TryParse(values[2], out var z))
            {
                result = UnityEngine.Vector3.zero;
                return false;
            }

            result = new UnityEngine.Vector3(x, y, z);
            return true;
        }

        public static bool Vector3IntParse(string value, out UnityEngine.Vector3Int result)
        {
            var values = value.Split(',');
            if (values.Length != 3)
            {
                result = UnityEngine.Vector3Int.zero;
                return false;
            }

            if (!int.TryParse(values[0], out var x))
            {
                result = UnityEngine.Vector3Int.zero;
                return false;
            }

            if (!int.TryParse(values[1], out var y))
            {
                result = UnityEngine.Vector3Int.zero;
                return false;
            }

            if (!int.TryParse(values[2], out var z))
            {
                result = UnityEngine.Vector3Int.zero;
                return false;
            }

            result = new UnityEngine.Vector3Int(x, y, z);
            return true;
        }

        public static bool Vector4Parse(string value, out UnityEngine.Vector4 result)
        {
            var values = value.Split(',');
            if (values.Length != 4)
            {
                result = UnityEngine.Vector4.zero;
                return false;
            }

            if (!float.TryParse(values[0], out var x))
            {
                result = UnityEngine.Vector4.zero;
                return false;
            }

            if (!float.TryParse(values[1], out var y))
            {
                result = UnityEngine.Vector4.zero;
                return false;
            }

            if (!float.TryParse(values[2], out var z))
            {
                result = UnityEngine.Vector4.zero;
                return false;
            }

            if (!float.TryParse(values[3], out var w))
            {
                result = UnityEngine.Vector4.zero;
                return false;
            }

            result = new UnityEngine.Vector4(x, y, z, w);
            return true;
        }
    }

    public static class BuildInGenericParser
    {
        public static bool EnumParser<T>(string value, out T result)
        {
            var parseResult = Enum.Parse(typeof(T), value);
            if (parseResult is T tParseReuslt)
            {
                result = tParseReuslt;
                return true;
            }

            result = default;
            return false;
        }

        public static bool ArrayParser<T>(string value, out T[] result)
        {
            var values = value.Split(';');
            result = new T[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!Parser<string, T>.parser(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
        }

        public static bool ListParser<T>(string value, out List<T> result)
        {
            var values = value.Split(';');
            result = new List<T>(values.Length);
            for (var i = 0; i < values.Length; i++)
            {
                if (!Parser<string, T>.parser(values[i], out var item))
                {
                    return false;
                }

                result.Add(item);
            }

            return true;
        }

        public static bool DictParser<TKey, TValue>(string value, out Dictionary<TKey, TValue> result)
        {
            var values = value.Split(';');
            result = new Dictionary<TKey, TValue>(values.Length);
            for (var i = 0; i < values.Length; i++)
            {
                var kv = values[i].Split(':');
                if (kv.Length != 2)
                {
                    return false;
                }

                if (!Parser<string, TKey>.parser(kv[0], out var key))
                {
                    return false;
                }

                if (!Parser<string, TValue>.parser(kv[1], out var value1))
                {
                    return false;
                }

                result.Add(key, value1);
            }

            return true;
        }
    }
}