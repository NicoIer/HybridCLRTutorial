using System;
using System.Collections.Generic;
using System.Reflection;
using System.Threading.Tasks;
using UnityEditor.Callbacks;

namespace Nico.Editor
{
    public delegate bool ParseDelegate<in TData, TResult>(TData value, out TResult result);
    
    internal static class Parser<TData, TResult>
    {
        public static ParseDelegate<TData, TResult> parser;
    }


    public static class ParserManager
    {
        private const string _parserName = "parser";

        [DidReloadScripts]
        internal static void OnAssemblyReload()
        {
            Type buildInParsers = typeof(BuildInParser);

            //下面的操作可以并行
            Parallel.ForEach(buildInParsers.GetMethods(), __register_parser);
            
            //找到所有的
        }

        private static void __register_parser(MethodInfo methodInfo)
        {
            var parameters = methodInfo.GetParameters();
            if (parameters.Length != 2)
            {
                return;
            }

            Type dataType = parameters[0].ParameterType;
            Type resultType = parameters[1].ParameterType;
            //第二个参数必须是out类型
            if (!parameters[1].IsOut)
            {
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
        }

        public static void RegisterParser<TData, TResult>(ParseDelegate<TData, TResult> parser)
        {
            RegisterParser(typeof(TData), typeof(TResult), parser);
        }

        public static void RegisterParser(Type dataType, Type resultType, Delegate parser)
        {
            //获取Parser<,>的泛型类
            var parserType = typeof(Parser<,>).MakeGenericType(dataType, resultType);
            //获取泛型类的静态字段
            var parserField = parserType.GetField(_parserName);
            //将parser赋值给Parser<,>.parser
            parserField.SetValue(null, parser);
        }
        
        public static bool Parse<TData, TResult>(TData data, out TResult result)
        {
            result = default;
            var parser = Parser<TData, TResult>.parser;
            if (parser == null)
            {
                return false;
            }

            return parser(data, out result);
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

        public static bool IntArrayParse(string value, out int[] result)
        {
            var values = value.Split(',');
            result = new int[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!int.TryParse(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
        }

        public static bool FloatArrayParse(string value, out float[] result)
        {
            var values = value.Split(',');
            result = new float[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!float.TryParse(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
        }

        public static bool StringArrayParse(string value, out string[] result)
        {
            result = value.Split("\\;");
            return true;
        }

        public static bool BoolArrayParse(string value, out bool[] result)
        {
            var values = value.Split(',');
            result = new bool[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!bool.TryParse(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
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
        
        
        public static bool Vector2ArrayParse(string value, out UnityEngine.Vector2[] result)
        {
            var values = value.Split(';');
            result = new UnityEngine.Vector2[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!Vector2Parse(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
        }
        
        public static bool Vector2IntArrayParse(string value, out UnityEngine.Vector2Int[] result)
        {
            var values = value.Split(';');
            result = new UnityEngine.Vector2Int[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!Vector2IntParse(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
        }
        
        public static bool Vector3ArrayParse(string value, out UnityEngine.Vector3[] result)
        {
            var values = value.Split(';');
            result = new UnityEngine.Vector3[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!Vector3Parse(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
        }
        
        public static bool Vector3IntArrayParse(string value, out UnityEngine.Vector3Int[] result)
        {
            var values = value.Split(';');
            result = new UnityEngine.Vector3Int[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!Vector3IntParse(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
        }
        
        public static bool Vector4ArrayParse(string value, out UnityEngine.Vector4[] result)
        {
            var values = value.Split(';');
            result = new UnityEngine.Vector4[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!Vector4Parse(values[i], out result[i]))
                {
                    return false;
                }
            }

            return true;
        }
    }

    internal static class BuildInGenericParser
    {
        public static bool EnumParse<T>(string value, out T result) where T : struct, Enum
        {
            if (Enum.TryParse(value, out result))
            {
                return true;
            }

            result = default;
            return false;
        }

        public static bool EnumArrayParse<T>(string value, out T[] result) where T : struct, Enum
        {
            var values = value.Split(';');
            result = new T[values.Length];
            for (var i = 0; i < values.Length; i++)
            {
                if (!EnumParse(values[i], out result[i]))
                {
                    return false;
                }
            }
            return true;
            
        }
    }
}