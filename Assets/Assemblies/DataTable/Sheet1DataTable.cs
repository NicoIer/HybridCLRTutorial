using UnityEngine;
using System.Collections.Generic;
using System;

namespace Nico
{
    public class Sheet1DataTable : ScriptableObject, IDataTable
    {
        [SerializeField]private SerializableDictionary<int, Sheet1Data> _dataDict = new SerializableDictionary<int, Sheet1Data>();

        public ITableData Get(int id)
        {
            return _dataDict[id];
        }
        
#if UNITY_EDITOR
        public void Add(ITableData tableData)
        {
            if (tableData == null)
            {
                Debug.LogWarning($"{GetType().Name} can not add null");
                return;
            }
            if (tableData is not Sheet1Data data)
            {
                Debug.LogWarning($"Type mismatch {tableData.GetType()} can not add to {GetType()}");
                return;
            }

            if (_dataDict.ContainsKey(data.id))
            {
                Debug.LogWarning($"{GetType().Name} has already contains key: " + data.id);
            }
            else
            {
                _dataDict.Add(data.id, data);
            }

            Debug.LogWarning($"{tableData.GetType()} can added to {GetType()}");
        }
#endif
    }

    [Serializable]
    public struct Sheet1Data : ITableData
    {

		public int id;

		public string name;

		public TestClass1 testClass1;

		public Vector2Int pos;

		public int[] intArray;

		public TestClass1[] testclassesArray;

		public List<int> intList;


#if UNITY_EDITOR
        public bool Parse(string[] values)
        {
			if(!Nico.Editor.ParserManager.Parse<string,int>(values[0], out id)) return false;

			if(!Nico.Editor.ParserManager.Parse<string,string>(values[1], out name)) return false;

			if(!Nico.Editor.ParserManager.Parse<string,TestClass1>(values[2], out testClass1)) return false;

			if(!Nico.Editor.ParserManager.Parse<string,Vector2Int>(values[3], out pos)) return false;

			if(!Nico.Editor.ParserManager.Parse<string,int[]>(values[4], out intArray)) return false;

			if(!Nico.Editor.ParserManager.Parse<string,TestClass1[]>(values[5], out testclassesArray)) return false;

			if(!Nico.Editor.ParserManager.Parse<string,List<int>>(values[6], out intList)) return false;


            return true;
        }
#endif
    }
}