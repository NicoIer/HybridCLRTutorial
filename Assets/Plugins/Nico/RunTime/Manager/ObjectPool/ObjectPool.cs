using System.Collections.Generic;

namespace Nico
{
    internal static class ObjectPool<T> where T : IPoolObject, new()
    {
        private static readonly Queue<T> _objects = new Queue<T>();

        internal static T Get()
        {
            if (_objects.Count == 0)
            {
                return new T();
            }

            return _objects.Dequeue();
        }

        internal static void Return(T obj)
        {
            obj.OnRecycle();
            _objects.Enqueue(obj);
        }
    }
}