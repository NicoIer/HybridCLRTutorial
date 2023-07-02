using System;
using System.Collections.Generic;
using UnityEngine;

namespace Nico.ObjectPool
{
    [CreateAssetMenu(fileName = "PoolConfig", menuName = "Config/PoolConfig")]
    public class PoolConfig : ScriptableObject
    {
        [field: SerializeField] public List<GameObject> prefabs { get; private set; }

        private void OnValidate()
        {
            //不允许Null的预制体存在
            prefabs.RemoveAll(prefab => prefab == null);
            //不允许重复的预制体存在
            HashSet<GameObject> hashSet = new HashSet<GameObject>();
            prefabs.RemoveAll(prefab => !hashSet.Add(prefab));
        }
    }
}