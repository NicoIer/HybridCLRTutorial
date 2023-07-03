using System;
using System.Collections.Generic;
using System.Net.NetworkInformation;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Object = UnityEngine.Object;

namespace Nico
{
    public static class ObjectPoolManager
    {
        private static readonly Dictionary<string, PrefabPool> _pool = new Dictionary<string, PrefabPool>();
        public static T Get<T>() where T : IPoolObject, new() => ObjectPool<T>.Get();
        public static void Return<T>(T obj) where T : IPoolObject, new() => ObjectPool<T>.Return(obj);


        private static readonly AssetLabelReference _poolObjectPrefabLabel = new AssetLabelReference()
            { labelString = GlobalConst.POOL_OBJECT_PREFAB_LABEL };

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        private static void Init()
        {
            //加载所有的对象池游戏预制体
            Addressables.LoadAssetsAsync<GameObject>(_poolObjectPrefabLabel, OnPrefabLoaded);
        }

        private static void OnPrefabLoaded(GameObject prefab)
        {
            if (prefab == null) return;
            if (_pool.ContainsKey(prefab.name))
            {
                return;
            }

            _pool.Add(prefab.name, new PrefabPool(prefab, prefab.name));
        }

        public static GameObject Get(string prefabName)
        {
            if (_pool.TryGetValue(prefabName, out var value))
            {
                return value.Get();
            }

            Debug.LogError(
                $"ObjectPoolManager.Get({prefabName}) failed. it has not been register into addressables yet. please using label{_poolObjectPrefabLabel} to tag it.");
            return null;
        }


        public static void Return(GameObject gameObject)
        {
            if (_pool.TryGetValue(gameObject.name, out var value))
                value.Return(gameObject);
            else
            {
                Debug.LogWarning(
                    $"ObjectPoolManager.Return({gameObject.name}). it has not been register into addressables yet. please using label{_poolObjectPrefabLabel} to tag it. now will create a temp pool to store it.");
                _pool.Add(gameObject.name, new PrefabPool(gameObject, gameObject.name));
            }
        }
    }
}