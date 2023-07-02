using System;
using UnityEngine;

namespace Nico
{
    public class GlobalManager : MonoBehaviour
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
}