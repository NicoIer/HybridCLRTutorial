using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Nico
{
    public static class TableDataManager
    {
        private static readonly Dictionary<Type, IDataTable> _dataTables = new Dictionary<Type, IDataTable>();

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        public static void Init()
        {
            _dataTables.Clear();
            var types = ReflectionUtils.GetTypesWithInterface<IDataTable>();

            foreach (var type in types)
            {
                ScriptableObject dataTable = null;
                try
                {
                    //从 Addressables 中加载
                    dataTable = Addressables.LoadAssetAsync<ScriptableObject>("DataTable/" + type.Name)
                        .WaitForCompletion();
                }
                catch (Exception e)
                {
                    Debug.LogError($"load {type.Name} failed skip it.  error:{e}");
                    continue;
                }

                if (dataTable == null)
                {
                    Debug.LogError($"[TableDataManager] Load {type.Name} failed");
                    continue;
                }

                if (dataTable is not IDataTable table)
                {
                    Debug.LogError($"[TableDataManager] {type.Name} is not IDataTable");
                    continue;
                }

                _dataTables[type] = table;
            }
        }

        public static TData Get<TData>(int id) where TData : ITableData
        {
            var type = typeof(TData);
            if (!_dataTables.TryGetValue(type, out IDataTable dataTable))
            {
                throw new ArgumentException($"[TableDataManager] {type.Name} not found");
            }

            return (TData)dataTable.Get(id);
        }

        public static TDataTable Get<TDataTable>() where TDataTable : IDataTable
        {
            var type = typeof(TDataTable);
            if (!_dataTables.TryGetValue(type, out IDataTable dataTable))
            {
                throw new ArgumentException($"[TableDataManager] {type.Name} not found");
            }

            return (TDataTable)dataTable;
        }
    }
}