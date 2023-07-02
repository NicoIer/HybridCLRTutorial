using System;
using UnityEngine;

namespace Nico
{
    public static partial class GlobalManager
    {
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        public static void Init()
        {
            TableDataManager.Init();
            
            
            
            Application.quitting -= OnApplicationQuitting;
            Application.quitting += OnApplicationQuitting;
        }

        private static void OnApplicationQuitting()
        {
            TableDataManager.OnApplicationQuitting();
        }
    }
#if UNITY_EDITOR
    public static partial class GlobalManager
    {
    }
#endif
}