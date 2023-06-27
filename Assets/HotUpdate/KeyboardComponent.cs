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
            var hor = Input.GetAxis("Horizontal");
            var ver = Input.GetAxis("Vertical");
            if (Math.Abs(hor) > 0.01f || Math.Abs(ver) > 0.01f)
            {
                transform.position += new Vector3(hor, ver, 0);
                Debug.Log($"Update hor:{hor} ver:{ver}");
            }
            
            if (Input.GetKeyDown(KeyCode.Space))
            {
                Debug.Log("Update KeypadEnter Down");
            }
        }
    }
}