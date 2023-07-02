using UnityEngine;


namespace Nico
{
    public class TestDataTable : ScriptableObject, IDataTable
    {
        [SerializeField]private SerializableDictionary<int, TestData> _dataDict = new SerializableDictionary<int, TestData>();

        public ITableData Get(int id)
        {
            return _dataDict[id];
        }
        
#if UNITY_EDITOR
        public void Add(int id, ITableData tableData)
        {
            if (_dataDict.ContainsKey(id))
            {
                Debug.LogWarning($"{GetType().Name} has already contains key: " + id);
            }
            if (tableData is TestData data)
            {
                _dataDict[id] = data;
                return;
            }
            Debug.LogWarning($"{tableData.GetType()} can added to {GetType()}");

        }
#endif
    }


    public struct TestData : ITableData
    {
        public int id { get; set; }

		public string name;

		public Vector2Int pos;


#if UNITY_EDITOR
        public bool Parse(int id, string[] values)
        {
            this.id = id;
			if(!Nico.Editor.ParserManager.Parse<string,string>(values[0], out name)) return false;

			if(!Nico.Editor.ParserManager.Parse<string,Vector2Int>(values[1], out pos)) return false;


            return true;
        }
#endif
    }
}