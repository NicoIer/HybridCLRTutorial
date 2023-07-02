using System;
using System.Collections.Generic;
using UnityEngine;

namespace Nico
{
    public static class ObjectPoolManager
    {
        public static T Get<T>()
        {
            throw new System.NotImplementedException();
        }
        
        public static GameObject Get(string prefabName)
        {
            //TODO 计划 从 AddressablesResources/PoolPrefab 中加载
            throw new System.NotImplementedException();
        }
    }

    internal static class ObjectPool<T>
    {
        internal static Queue<T> objects;
    }
}