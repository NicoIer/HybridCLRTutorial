using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Nico
{
    public static class TableDataManager
    {
        private static bool _initialized = false;
        private static Dictionary<Type, IDataTable> _dataTables = new Dictionary<Type, IDataTable>();

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        public static void Initialize()
        {
            _dataTables.Clear();
            var types = ReflectionUtils.GetTypesWithInterface<IDataTable>();

            foreach (var type in types)
            {
                //从 Addressables 中加载
                var dataTable = Addressables.LoadAssetAsync<ScriptableObject>(type.Name).WaitForCompletion();
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

                _dataTables.Add(type, table);
            }

            _initialized = true;
            Application.quitting -= Reset;
            Application.quitting += Reset;
        }

        private static void Reset()
        {
            _initialized = false;
        }


        public static TData Get<TData>(int id) where TData : ITableData
        {
            if (!_initialized) Initialize();
            var type = typeof(TData);
            if (!_dataTables.TryGetValue(type, out IDataTable dataTable))
            {
                throw new ArgumentException($"[TableDataManager] {type.Name} not found");
            }

            return (TData)dataTable.Get(id);
        }

        public static TDataTable Get<TDataTable>() where TDataTable : IDataTable
        {
            if (!_initialized) Initialize();
            var type = typeof(TDataTable);
            if (!_dataTables.TryGetValue(type, out IDataTable dataTable))
            {
                throw new ArgumentException($"[TableDataManager] {type.Name} not found");
            }

            return (TDataTable)dataTable;
        }
    }
}