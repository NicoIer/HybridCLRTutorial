using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Nico
{
    public static class ObjectPoolManager
    {
        private static readonly Dictionary<string, PrefabPool> _pool = new Dictionary<string, PrefabPool>();

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static T Get<T>() where T : IPoolObject, new() => ObjectPool<T>.Get();

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void Return<T>(T obj) where T : IPoolObject, new() => ObjectPool<T>.Return(obj);


        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        private static void Init()
        {
            Addressables.LoadAssetsAsync<GameObject>(GlobalConst.POOL_OBJECT_PREFAB_LABEL, OnPrefabLoaded)
                .WaitForCompletion();
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        private static void OnPrefabLoaded(GameObject prefab)
        {
            if (prefab == null)
            {
                Debug.LogWarning(" loaded prefab is null");
                return;
            }

            if (_pool.ContainsKey(prefab.name))
            {
                Debug.LogWarning($" loaded prefab name:{prefab.name} is already in pool");
                return;
            }

            _pool.Add(prefab.name, new PrefabPool(prefab, prefab.name));
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static GameObject Get(string prefabName)
        {
            if (_pool.TryGetValue(prefabName, out var value))
            {
                return value.Get();
            }

            Debug.LogError(
                $"ObjectPoolManager.Get({prefabName}) failed. it has not been register into addressables yet. please using label{GlobalConst.POOL_OBJECT_PREFAB_LABEL} to tag it.");
            return null;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void Return(GameObject gameObject)
        {
            if (_pool.TryGetValue(gameObject.name, out var value))
                value.Return(gameObject);
            else
            {
                Debug.LogWarning(
                    $"ObjectPoolManager.Return({gameObject.name}). it has not been register into addressables yet. please using label{GlobalConst.POOL_OBJECT_PREFAB_LABEL} to tag it. now will create a temp pool to store it.");
                var pool = new PrefabPool(gameObject, gameObject.name);
                pool.Return(gameObject);
                _pool.Add(gameObject.name, pool);
            }
        }
    }
}