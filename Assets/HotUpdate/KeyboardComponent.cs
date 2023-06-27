using System;
using UnityEngine;

namespace HotUpdate
{
    public class KeyboardComponent : MonoBehaviour
    {
        private void Awake()
        {
            Debug.Log("Awake");
        }

        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                Debug.Log("Update KeypadEnter Down");
            }
        }
    }
}