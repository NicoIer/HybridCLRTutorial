using System.IO;
using System.Threading.Tasks;
using Nico.Editor;
using NUnit.Framework;
using UnityEditor;
using UnityEngine;

namespace Nico.Tests
{
    [TestFixture]
    public class DefineCreateTest
    {
        private const string _folderPath = "Assets/Plugins/Nico/Editor/Addressables/";

        private readonly AddressAblesUpdateConfig config =
            AssetDatabase.LoadAssetAtPath<AddressAblesUpdateConfig>(_folderPath + "AddressablesUpdateConfig.asset");

        [Test]
        public void CreateEnum()
        {
        }

        [Test]
        public void TestDataTable()
        {
            TestData data = default;
            data.Parse(1, new string[] { "1", "124", "123,0" });
            Assert.AreEqual(true, 1 == data.id);
            Assert.AreEqual(true, "124" == data.name);
            Assert.AreEqual(true, new Vector2Int(123, 0) == data.pos);
        }

        [Test]
        public void CreateTable()
        {
            string tableName = "Test";
            //加载 AddressablesUpdateConfig.asset
            string tableCode = DefineCreator.CreateDataTable(
                config.tableDataConfig.DataTableTemplate,
                tableName,
                new string[] { "id", "name", "pos" },
                new string[] { "int", "string", "Vector2Int" }
            );
            var scriptPath = $"{config.DataTableScriptsPath}/{tableName}.cs";
            Nico.Editor.FileUtil.Write(scriptPath, tableCode);
            var definePath = $"{config.DataTableScriptsPath}/DataTable.asmdef";
            Nico.Editor.FileUtil.ReplaceContent(config.tableDataConfig.TDataTableAssemblyDefineTemplate, definePath);
            AssetDatabase.Refresh();
        }
    }
}