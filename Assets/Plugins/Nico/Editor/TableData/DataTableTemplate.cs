using System;
using UnityEngine;

namespace Nico.Editor
{
    public class DataTableTemplate : ScriptableObject, IDataTable
    {
        internal SerializableDictionary<int, TableDataTemplate> dict =
            new SerializableDictionary<int, TableDataTemplate>();

        public ITableData Get(int id)
        {
            return dict[id];
        }

        public void Add(int id, ITableData tableData)
        {
            if (tableData is TableDataTemplate data)
            {
                dict.Add(id, data);
            }
#if UNITY_EDITOR
            Debug.LogWarning("TableDataTemplate Add Error");
#endif
        }
    }

    [Serializable]
    public struct TableDataTemplate : ITableData
    {
        public int id { get; set; }
    }
}