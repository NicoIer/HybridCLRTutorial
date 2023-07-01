using System;
using System.Text;
using UnityEngine;

namespace Nico.Editor
{
    internal static class TableDataCreator
    {
        internal static bool Create<T>(out ITableData tableData, int id, string[] fieldNames, string[] values)
        {
            return Create(out tableData, typeof(T), id, values);
        }

        internal static bool Create(out ITableData tableData, Type type, int id, string[] values)
        {
            tableData = null;
            var data = Activator.CreateInstance(type) as ITableData;
            if (data == null)
            {
                return false;
            }

            return data.Parse(id, values);
        }
    }

    // CodeGenerator
    internal static class TableDataDefineCreator
    {
        public static string Create(TextAsset asset, string tableName, string[] fieldNames, string[] fieldTypes)
        {
            string code = asset.text;

            //替换表名
            code = code.Replace("DataTableNameTemplate", $"{tableName}DataTable");

            //替换数据名
            code = code.Replace("TableDataNameTemplate", $"{tableName}Data");

            //生成成员变量定义
            string fields = CreateFields(fieldNames, fieldTypes);
            
            //替换成员变量
            code = code.Replace("//fieldsTemplate", fields);

            //生成解析函数定义
            string parsers = CreateParsers(fieldNames, fieldTypes);
            //替换解析函数
            code = code.Replace("//parseFieldsTemplate", parsers);
            
            
            return code;
        }

        internal static string CreateParsers(string[] fieldNames, string[] fieldTypes)
        {
            StringBuilder sb = new StringBuilder();
            for (int i = 1; i < fieldNames.Length; i++)
            {
                var fieldName = fieldNames[i];
                var fieldType = fieldTypes[i];
                //这里 i+1 是因为 Field第一个是id 而 id 是不需要解析的
                sb.AppendLine(CreateParser(fieldName, fieldType, i ));
                sb.AppendLine();
            }

            return sb.ToString();
        }
        internal static string CreateParser(string fieldName, string fieldType, int idx)
        {
            return $"\tif(!Nico.Editor.ParserManager.Parse<string,{fieldType}>(values[{idx}], out {fieldName})) return false;";
        }
        
        internal static string CreateField(string fieldName, string fieldType)
        {
            return $"\tpublic {fieldType} {fieldName};";
        }

        internal static string CreateFields(string[] fieldNames, string[] fieldTypes)
        {
            StringBuilder sb = new StringBuilder();
            for (int i = 1; i < fieldNames.Length; i++)
            {
                var fieldName = fieldNames[i];
                var fieldType = fieldTypes[i];
                sb.AppendLine(CreateField(fieldName, fieldType));
                sb.AppendLine();
            }

            return sb.ToString();
        }
    }
}