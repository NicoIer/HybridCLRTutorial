using UnityEngine;
namespace Nico
{
#if UNITY_EDITOR
using Nico.Editor;
    [Parse]
#endif
    [System.Serializable]
    public class TestClass1
    {
		public int id;

		public string name;

		public Vector2Int pos;


    }
}