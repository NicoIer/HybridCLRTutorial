using System.Collections.Generic;
using UnityEngine;

namespace HotUpdate
{
    public class CubeComponent : MonoBehaviour
    {
        void Start()
        {
            Debug.Log("CubeComponent Start");
            List<CubeComponent> cubeComponents = new List<CubeComponent>();
            cubeComponents.Add(this);
            foreach (var component in cubeComponents)
            {
                Debug.Log(component);
            }
        }
    }
}
