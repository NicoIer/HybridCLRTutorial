namespace Nico
{
#if UNITY_EDITOR
using Nico.Editor;
    [Parse]
#endif
    [System.Serializable]
    public struct TestStruct1
    {
		public int id;

		public int num;


    }
}