using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Nico
{
    public static class ReflectionUtils
    {
        
        private static AppDomain _appDomain = AppDomain.CurrentDomain;
        public static IEnumerable<Type> GetTypesWithInterface<T>(bool skipAbstract = true, bool skipInterface = true)
        {
            var type = typeof(T);
            if (!type.IsInterface)
            {
                throw new ArgumentException($"T:[{type}] must be an interface ");
            }
            //拿到_appDomain中所有的程序集
            var assemblies = _appDomain.GetAssemblies();
            //遍历所有的程序集 拿到实现了T接口的所有类型
            foreach (var assembly in assemblies)
            {
                var types = assembly.GetTypes();
                foreach (var t in types)
                {
                    if (t.IsAbstract && skipAbstract) continue;
                    if (t.IsInterface && skipInterface) continue;
                    if (t.GetInterface(type.FullName) != null)
                    {
                        yield return t;
                    }
                }
            }
        }
    }
}