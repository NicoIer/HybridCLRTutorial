using System;
using UnityEngine;
using UnityEngine.Assertions;

namespace Nico.Editor
{
    internal class TableDataCreator
    {
        internal bool Create(out ITableData tableData, Type type, int id, string[] fieldNames, string[] values)
        {
            tableData = null;
            if (fieldNames.Length != values.Length)
            {
                return false;
            }
            
            var data = Activator.CreateInstance(type) as ITableData;
            if (data == null)
            {
                return false;
            }

            data.id = id;

            for (int i = 0; i < fieldNames.Length; i++)
            {
                var fieldName = fieldNames[i];
                var value = values[i];
                var field = type.GetField(fieldName);
                if (field == null)
                {
                    return false;
                }
                Type fieldType = field.FieldType;
                if (Parse(fieldType, value, out object result))
                {
                    return false;
                }
                field.SetValue(data, result);
            }

            return true;
        }

        internal bool Parse(Type type,string value,out object res)
        {
            // if (type == typeof(int))
            // {
            //     Parse<int>.Read(value, out int result);
            // }
            throw new NotImplementedException();
        }
    }

    internal class DataTableCreator
    {
    }
}