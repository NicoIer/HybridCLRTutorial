using System.Collections.Generic;
using System.Threading.Tasks;
using Nico.AddressablesUpdater;
using UnityEditor;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Settings;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEditor.UIElements;
using UnityEngine.AddressableAssets;
using UnityEngine.Serialization;


namespace Nico.Edotor
{
    public partial class AddressableEditorWindow : EditorWindow
    {
        public AddressAblesUpdateConfig config;
        private VisualTreeAsset uxml => config.uxml;
        private StyleSheet uss => config.uss;

        private Button _initAddressableButton;

        private Button _updateAddressableButton;
        private ProgressBar _updateAddressableProgressBar;

        private Button _openGroupButton;

        [MenuItem("Tools/Nico/AddressableEditorWindow")]
        public static void ShowExample()
        {
            AddressableEditorWindow wnd = GetWindow<AddressableEditorWindow>();
            wnd.titleContent = new GUIContent("AddressableEditorWindow");
        }

        public void CreateGUI()
        {
            VisualElement root = rootVisualElement;
            VisualElement labelFromUxml = uxml.Instantiate();
            labelFromUxml.styleSheets.Add(uss);
            root.Add(labelFromUxml);

            QueryVisualElement();
            ReSetVisualElement();
        }

        private void QueryVisualElement()
        {
            QueryAddressableInit();
            QueryAddressableUpdate();
            // QueryAddressableGroup();
        }


        #region ReSet

        private void ReSetVisualElement()
        {
            if (AddressableAssetSettingsDefaultObject.SettingsExists)
            {
                _initAddressableButton.SetEnabled(false);
            }
        }

        #endregion

        #region Query

        private void QueryAddressableInit()
        {
            VisualElement initAddressable = rootVisualElement.Q<VisualElement>("init_addressable");
            _initAddressableButton = initAddressable.Q<Button>();
            _initAddressableButton.clickable.clicked += InitAddressable;
        }


        private void QueryAddressableUpdate()
        {
            VisualElement updateAddressable = rootVisualElement.Q<VisualElement>("update_addressables");
            _updateAddressableButton = updateAddressable.Q<Button>();
            _updateAddressableProgressBar = updateAddressable.Q<ProgressBar>();
            _updateAddressableButton.clickable.clicked += UpdateAddressable;
            _updateAddressableProgressBar.value = 100;
            _updateAddressableProgressBar.title = "100%";
        }

        // private void QueryAddressableGroup()
        // {
        //     VisualElement openGroup = rootVisualElement.Q<VisualElement>("open_group");
        //     _openGroupButton = openGroup.Q<Button>();
        //     _openGroupButton.clickable.clicked += OpenGroup;
        // }

        #endregion


        #region Bind

        private void InitAddressable()
        {
            if (AddressableAssetSettingsDefaultObject.SettingsExists)
            {
                return;
            }

            AddressableAssetSettingsDefaultObject.GetSettings(true);
            _initAddressableButton.SetEnabled(false);
        }

        private void UpdateAddressable()
        {
            _updateAddressableProgressBar.value = 0;
            _updateAddressableProgressBar.title = "0%";
            string searchFolder = config.AddressablesResourcesPath;
            //搜索所有searchFolder下的文件夹
            string[] folders = AssetDatabase.FindAssets("t:Folder", new[] { searchFolder });
            //遍历所有文件夹
            foreach (string folderGuid in folders)
            {
                //获取文件夹的路径
                UpdateFolder(folderGuid);
                _updateAddressableProgressBar.value += 1f / folders.Length * 100;
                _updateAddressableProgressBar.title = $"{_updateAddressableProgressBar.value}%";
            }
        }

        private void UpdateFolder(string folderGuid)
        {
            string folderPath = AssetDatabase.GUIDToAssetPath(folderGuid);
            //获取文件夹的名字
            string folderName = folderPath.Substring(folderPath.LastIndexOf('/') + 1);
            //判断组存在不存在
            // 为这个文件夹创建组
            if (!config.groups.TryGetValue(folderName, out var group))
            {
                group = config.settings.CreateGroup(folderName, false, false, false, null);
                config.groups[folderName] = group;
            }

            bool hasLabel = config.folderToLabel.TryGetValue(folderName, out var label);

            //遍历资源 添加到组中
            var paths = SearchAssetsByFolder(folderPath, true);
            foreach (var assetPath in paths)
            {
                Debug.Log(assetPath);
                var guid = AssetDatabase.AssetPathToGUID(assetPath);
                //添加资源到组中
                var entry = config.settings.CreateOrMoveEntry(guid, group, false, false);
                var assetName = assetPath.Substring(assetPath.LastIndexOf('/') + 1);
                //去除assetName的后缀 (如果资源是A.b.c呢) 则只去除c
                assetName = assetName.Substring(0, assetName.LastIndexOf('.'));
                entry.address = $"{folderName}/{assetName}";
                //设置资源的label
                if (hasLabel)
                {
                    entry.SetLabel(label, true, true);
                }
            }
        }

        private List<string> SearchAssetsByFolder(string folderPath, bool deep = true)
        {
            //搜索文件夹下的所有资源
            string[] guids = AssetDatabase.FindAssets("", new[] { folderPath });
            //遍历 如果 是文件夹 且 deep 则递归搜索
            List<string> assets = new List<string>();
            foreach (var guid in guids)
            {
                string path = AssetDatabase.GUIDToAssetPath(guid);
                if (AssetDatabase.IsValidFolder(path))
                {
                    if (deep)
                    {
                        assets.AddRange(SearchAssetsByFolder(path));
                    }
                }
                else
                {
                    assets.Add(path);
                }
            }

            return assets;
        }


        // private void OpenGroup()
        // {
        //     //打开AddressableGroup [MenuItem("Window/Asset Management/Addressables/Settings", priority = 2051)]
        //     var window = UnityEditor.EditorWindow.GetWindow();
        //     
        //
        // }

        #endregion
    }
}