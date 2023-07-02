using System;
using System.Collections.Generic;
using System.Net.NetworkInformation;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Nico
{
    public static class ObjectPoolManager
    {
        private static Dictionary<string, Queue<GameObject>> pool = new Dictionary<string, Queue<GameObject>>();
        public static T Get<T>() where T : IPoolObject, new() => ObjectPool<T>.Get();
        public static void Return<T>(T obj) where T : IPoolObject, new() => ObjectPool<T>.Return(obj);

        public static GameObject Get(string prefabPath)
        {
            //TODO 计划 从 AddressablesResources/PoolPrefab 中加载
            throw new NetworkInformationException();
        }

        public static void Return(GameObject gameObject)
        {
            throw new NetworkInformationException();
        }
    }

    internal class PrefabPool
    {
        private Queue<GameObject> gameObjects = new Queue<GameObject>();
        private GameObject prefab;
        private string prefabPath;

        internal PrefabPool(GameObject prefab, string prefabPath)
        {
            this.prefab = prefab;
            this.prefabPath = prefabPath;
        }

        internal GameObject Get()
        {
            if (gameObjects.Count == 0)
            {
                return Object.Instantiate(prefab);
            }

            return gameObjects.Dequeue();
        }

        internal void Return(GameObject gameObject)
        {
            throw new NotImplementedException();
        }
    }

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

    public interface IPoolObject
    {
        void OnSpawn();
        void OnRecycle();
    }
}