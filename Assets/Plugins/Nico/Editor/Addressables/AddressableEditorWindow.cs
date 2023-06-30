using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using HybridCLR.Editor.Commands;
using Nico.AddressablesUpdater;
using UnityEditor;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Settings;
using UnityEditor.AddressableAssets.Settings.GroupSchemas;
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


        private Button _hotUpdateButton;
        private DropdownField _hotUpdateLabelSelect;
        private DropdownField _hotUpdateTargetSelect;


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
            QueryHotUpdate();
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

        private void QueryHotUpdate()
        {
            VisualElement hotUpdate = rootVisualElement.Q<VisualElement>("hot_update");
            _hotUpdateButton = hotUpdate.Q<Button>();
            _hotUpdateButton.clickable.clicked += HotUpdate;


            _hotUpdateLabelSelect = hotUpdate.Q<DropdownField>("label");
            _hotUpdateLabelSelect.choices = config.labels.Values.ToList();
            _hotUpdateLabelSelect.index = 1;

            _hotUpdateTargetSelect = hotUpdate.Q<DropdownField>("target");
            //获取BuildTarget的所有枚举值
            _hotUpdateTargetSelect.choices = System.Enum.GetNames(typeof(BuildTarget)).ToList();
            _hotUpdateTargetSelect.value = BuildTarget.StandaloneWindows64.ToString();
        }

        private void HotUpdate()
        {
            _hotUpdateButton.SetEnabled(false);
            var target = _hotUpdateTargetSelect.value;
            BuildTarget buildTarget = (BuildTarget)System.Enum.Parse(typeof(BuildTarget), target);
            //通知HybirdCLR编译热更程序集
            CompileDllCommand.CompileDll(buildTarget);
            //
            var label = _hotUpdateLabelSelect.value;

            // Debug.Log($"label:{label},target:{target}");
            string originFolder = $"HybridCLRData/HotUpdateDlls/{target}/";
            List<AddressableAssetEntry> entries = new List<AddressableAssetEntry>();
            foreach (var assetGroup in config.groups.Values)
            {
                foreach (var entry in assetGroup.entries)
                {
                    if (entry.labels.Contains(label))
                    {
                        entries.Add(entry);
                    }
                }
            }

            foreach (var entry in entries)
            {
                string address = entry.AssetPath;
                //确认是以.dll.bytes结尾的文件
                if (!address.EndsWith(".dll.bytes"))
                {
                    Debug.LogWarning($"不是以.dll.bytes结尾的文件:{address}");
                    continue;
                }

                //拿到dll的名称
                string dllName = entry.address.Split('/').Last();

                string originPath = $"{originFolder}{dllName}";
                FileUtil.ReplaceFile(originPath, address);
            }

            AssetDatabase.Refresh();
            Debug.Log("热更dll完成");
            _hotUpdateButton.SetEnabled(true);
        }

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

            var schema = group.AddSchema<BundledAssetGroupSchema>();
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