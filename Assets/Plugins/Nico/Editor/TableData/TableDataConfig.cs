using UnityEngine;

namespace Nico.Editor
{
    [CreateAssetMenu(fileName = "TableDataConfig", menuName = "Config/TableDataConfig", order = 0)]
    public class TableDataConfig : ScriptableObject
    {
        public TextAsset tdataTableTemplate;
        public TextAsset tTableDataTemplate;
        public TextAsset tEnumTemplate;
        public TextAsset tClassTemplate;
        public TextAsset tStructTemplate;

        public string DataTableTemplate => tdataTableTemplate.text;
        public string TableDataTemplate => tTableDataTemplate.text;
        public string TEnumTemplate => tEnumTemplate.text;
        public string TClassTemplate => tClassTemplate.text;
        public string TStrauctTemplate => tStructTemplate.text;
    }
}