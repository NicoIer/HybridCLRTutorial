using System;
using System.Collections.Generic;
using UnityEngine;

namespace Nico.ObjectPool
{
    public class GameObjectPool : MonoBehaviour, IGameObjectPool
    {
#if UNITY_EDITOR
        [SerializeReference]
#endif
        private GameObject _prefab;
#if UNITY_EDITOR
        [SerializeReference]
#endif
        private Type _objType;

#if UNITY_EDITOR
        [SerializeReference]
#endif
        //TODO 修改成Queue 以提高性能
        private readonly LinkedList<GameObject> _pool = new LinkedList<GameObject>();

        public void SetPrefab(GameObject prefab, Type objType)
        {
            _prefab = prefab;
            _objType = objType;
        }


        public void Return<T>(T poolObj) where T : IPoolGameObj
        {
            poolObj.OnReturn();
            //将obj放回对象池
            var obj = poolObj.GetGameObject();
            obj.transform.SetParent(transform);
            _pool.AddLast(obj);
        }

        public T Get<T>() where T : IPoolObj
        {
            if (typeof(T) != _objType)
                throw new DesignException($"ObjectPool中的对象类型为{_objType} 与要获取的对象类型{typeof(T)}不一致");
            //如果对象池中有对象 则直接从对象池中获取
            if (_pool.Count > 0)
            {
                var node = _pool.First;
                _pool.RemoveFirst();
                var obj = node.Value.GetComponent<T>();
                obj.OnGet();
                return obj;
            }

            //如果对象池中没有对象 则创建一个新的对象
            IPoolGameObj o = _CreateObj();
            o.OnGet();
            return (T)o;
        }

        public IPoolGameObj Get(Type objType)
        {
            if (objType != _objType)
                throw new DesignException($"ObjectPool中的对象类型为{_objType} 与要获取的对象类型{objType}不一致");
            //如果对象池中有对象 则直接从对象池中获取
            if (_pool.Count > 0)
            {
                var node = _pool.First;
                _pool.RemoveFirst();
                var obj = node.Value.GetComponent(objType);
                IPoolGameObj poolGameObj = (IPoolGameObj)Convert.ChangeType(obj, objType);
                poolGameObj.OnGet();
                return poolGameObj;
            }

            IPoolGameObj o = _CreateObj();
            o.OnGet();
            return o;
        }

        private IPoolGameObj _CreateObj()
        {
            var newObj = Instantiate(_prefab, transform).GetComponent(_objType);
            IPoolGameObj poolGameObj = (IPoolGameObj)Convert.ChangeType(newObj, _objType);
            return poolGameObj;
        }
    }
}