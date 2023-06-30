using System;
using System.Collections.Generic;
using Unity.Collections;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Settings;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UIElements;

namespace Nico.AddressablesUpdater
{
    [CreateAssetMenu(fileName = "AddressablesUpdateConfig", menuName = "Config/AddressablesUpdateConfig", order = 0)]
    public class AddressAblesUpdateConfig : ScriptableObject
    {
        [SerializeReference] public readonly string AddressablesResourcesPath = "Assets/AddressablesResources";

        public AddressableAssetSettings settings => AddressableAssetSettingsDefaultObject.GetSettings(true);
        [SerializeField] public VisualTreeAsset uxml;
        [SerializeField] public StyleSheet uss;
        public SerializableDictionary<string, string> folderToLabel = new();
        public SerializableDictionary<string, AddressableAssetGroup> groups = new();
        [SerializeField] public SerializableDictionary<string, string> labels = new();
        // 对应文件夹的配置项目

        private void OnValidate()
        {
            groups.Clear();
            foreach (var assetGroup in settings.groups)
            {
                groups[assetGroup.Name] = assetGroup;
            }
            foreach (var label in folderToLabel.Values)
            {
                settings.AddLabel(label);
            }
            labels.Clear();
            foreach (var label in settings.GetLabels())
            {
                labels[label] = label;
            }
        }
    }
}