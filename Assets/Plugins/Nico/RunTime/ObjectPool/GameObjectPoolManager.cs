using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace Nico.ObjectPool
{
    public class GameObjectPoolManager : GlobalSingleton<GameObjectPoolManager>
    {
        [field: SerializeField] public PoolConfig PoolConfig { get; private set; }

        public bool autoCreatePool = true;
        //在Editor中只读
        private GameObject pools;
        private Dictionary<Type, GameObjectPool> poolDict = new();

        protected override void Awake()
        {
            base.Awake();
            //如果配置文件不为空 则加载配置文件中的预制体配置信息
            if (PoolConfig == null)
            {
                Debug.LogError($"{GetType()}->PoolSetting is null:{DateTime.Now}");
                return;
            }
            pools = new GameObject("Pools");
            pools.transform.SetParent(null);
            DontDestroyOnLoad(pools);
            AutoCreatePool();
        }

        private void AutoCreatePool()
        {
           
            //对每一个要生成的预制体进行初始化
            foreach (var prefab in PoolConfig.prefabs)
            {
                if (prefab == null) continue;
                //尝试从prefab中获取IPoolObj接口
                if (!prefab.TryGetComponent(out IPoolGameObj poolObj)) continue;
                //如果获取成功
                //获取对象的真实类型 用于创建对应的对象池
                var objType = poolObj.GetType();
                //如果对应的对象池还不存在 则创建一个对应对象的对象池
                if (poolDict.ContainsKey(objType)) continue;
                
                // 创建对象池
                var poolComponent = pools.AddComponent<GameObjectPool>();
                // 设置对象池的预制体
                poolComponent.SetPrefab(prefab, objType);
                // 添加对象池到字典中
                poolDict.Add(objType, poolComponent);
            }
        }

        public bool Contain<T>() where T : IPoolGameObj
        {
            return poolDict.ContainsKey(typeof(T));
        }

        public bool Contain(Type type)
        {
            return poolDict.ContainsKey(type);
        }

        /// <summary>
        /// 此处的T必须是IPoolObj的实现类.已经使用class, IPoolObj, new()强制约束
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        /// <exception cref="DesignException"></exception>
        public T Get<T>() where T : IPoolGameObj
        {
            //获取对象的真实类型
            var objType = typeof(T);
            //如果对象池中存在对应的对象池 则从对象池中获取对象
            if (poolDict.TryGetValue(objType, out var value))
            {
                return value.Get<T>();
            }
#if UNITY_EDITOR
            //从Asset中查找带有这个组件的预制体prafab 然后加入对象池
            string[] guids = AssetDatabase.FindAssets($"t:{objType.Name}", null);
            foreach (var guid in guids)
            {
                string prefabPath = AssetDatabase.GUIDToAssetPath(guid);
                GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(prefabPath);
                var pool = CreatePool(prefab, objType);
                return (T)pool.Get(objType);
            }

            throw new DesignException($"there are not prefab for type:{objType} !!!! create one first");
#else
            throw new DesignException($"{objType} has no pool please register it in poolsetting");
#endif
        }

        public IPoolGameObj Get(Type objType)
        {
            //如果对象池中存在对应的对象池 则从对象池中获取对象
            if (poolDict.TryGetValue(objType, out var value))
            {
                return value.Get(objType);
            }

            throw new DesignException($"{objType} has no pool");
        }

        public void Return(GameObject obj)
        {
            //尝试获取其IPoolObj接口
            if (obj.TryGetComponent(out IPoolGameObj poolObj))
            {
                Return(poolObj);
                return;
            }

            throw new DesignException($"{obj} is no an IPoolObj");
        }

        public void Return(IPoolGameObj obj)
        {
            if (obj == null)
            {
                Debug.LogWarning("you are returning a null obj !!!!!!!!!!!!!!!!!!!!!!!!!!");
                return;
            }
            //将对象放回对象池
            var objType = obj.GetType();
            if (poolDict.TryGetValue(objType, out var value))
            {
                value.Return(obj);
                return;
            }

            if (autoCreatePool)
            {
                var poolComponent = CreatePool(obj.GetGameObject(), objType);
                poolComponent.Return(obj);
            }
            else
            {
                throw new DesignException($"{objType} has no pool");
            }
        }

        private GameObjectPool CreatePool(GameObject obj, Type objType)
        {
            var poolComponent = pools.AddComponent<GameObjectPool>();
            poolComponent.SetPrefab(obj, objType);
            poolDict.Add(objType, poolComponent);
            poolComponent.SetPrefab(obj, objType);
            return poolComponent;
        }
    }
}