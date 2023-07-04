using System;
using System.Collections.Generic;
using System.Reflection;
using Cysharp.Threading.Tasks;
using HybridCLR;
using Nico;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.Serialization;

namespace Main
{
    public class EntryManager : MonoBehaviour
    {
        // Addressables中资源的标签和引用
        // 也可以使用Addressables.LoadAssetAsync<T>(path)来加载资源 dll aot 资源
        // 这里使用标签和引用来加载资源 是为了简单
        public AssetLabelReference hotUpdateDllLabelRef; // 热更DLL标签
        public AssetLabelReference aotMetadataDllLabelRef; // AOT元数据DLL标签

        public List<AssetReference> hotScenes = new List<AssetReference>(); // 热更游戏场景

        [HideInInspector] public List<string> hotSceneNames = new List<string>();

        // 热更入口 从这里开始
        private void Start()
        {
            //在Start中调用执行更新检查的任务
            _check_update().Forget();
        }


        private async UniTask _check_update()
        {
            //检查资源更新任务
            await _update_address_ables();
            //加载AOT元数据DLL任务
            await _load_meta_data_for_aot_dlls();
            //加载热更DLL任务
            await _load_hotfix_dlls();
        }

        private async UniTask _update_address_ables()
        {
            // 初始化Addressables
            await Addressables.InitializeAsync().Task;

            // 检查文件更新
            // 这一步会根据Addressables中的资源组来依次检查更新
            // 打包后 会 从配置中的RemoteBuildPath中下载资源
            // Addressables 会自动根据catalog中各个资源的hash值来判断是否需要更新
            List<string> catalogs = await Addressables.CheckForCatalogUpdates();

            if (catalogs.Count <= 0)
            {
                //没有需要更新的资源
                Debug.Log("没有需要更新的资源");
                return;
            }

            //需要更新资源  则 根据catalogs 拿到需要更新的资源位置 
            List<IResourceLocator> resourceLocators = await Addressables.UpdateCatalogs(catalogs);
            Debug.Log($"需要更新:{resourceLocators.Count}个资源");

            foreach (IResourceLocator resourceLocator in resourceLocators)
            {
                Debug.Log($"开始下载资源:{resourceLocator}");
                await _download(resourceLocator);
                Debug.Log($"下载资源:{resourceLocator}完成");
            }
        }

        private async UniTask _download(IResourceLocator resourceLocator)
        {
            var size = await Addressables.GetDownloadSizeAsync(resourceLocator.Keys);
            // Debug.Log($"更新:{resourceLocator}资源,总大小:{size}");
            if (size <= 0) return;
            var downloadHandle =
                Addressables.DownloadDependenciesAsync(resourceLocator.Keys, Addressables.MergeMode.Union);
            // float progress = 0;
            // while (downloadHandle.Status == AsyncOperationStatus.None)
            // {
            // float percentageComplete = downloadHandle.GetDownloadStatus().Percent;
            // if (percentageComplete > progress * 1.01) // Report at most every 10% or so
            // {
            //     progress = percentageComplete; // More accurate %
            //     print($"下载百分比：{progress * 100}%");
            // }

            // await UniTask.WaitForFixedUpdate();
            // }

            await downloadHandle;

            // Debug.Log("更新完毕!");
            Addressables.Release(downloadHandle);
        }

        private async UniTask _load_hotfix_dlls()
        {
            // 加载热更DLL
            // 这里使用标签来加载资源 Addressables会自动根据标签来加载所有资源
            var dlls = await Addressables.LoadAssetsAsync<TextAsset>(hotUpdateDllLabelRef, null);
            foreach (var asset in dlls)
            {
                Debug.Log("加载热更DLL:" + asset.name);
                Assembly.Load(asset.bytes);
                Debug.Log("加载热更DLL:" + asset.name + "完成");
            }
        }

        private async UniTask _load_meta_data_for_aot_dlls()
        {
            //这一步实际上是为了解决AOT 泛型类的问题 
            HomologousImageMode mode = HomologousImageMode.SuperSet;
            var aots = await Addressables.LoadAssetsAsync<TextAsset>(aotMetadataDllLabelRef, null);
            foreach (var asset in aots)
            {
                LoadImageErrorCode errorCode = RuntimeApi.LoadMetadataForAOTAssembly(asset.bytes, mode);
                if (errorCode == LoadImageErrorCode.OK)
                {
                    continue;
                }

                Debug.LogError($"加载AOT元数据DLL:{asset.name}失败,错误码:{errorCode}");
            }
        }

        private async void _enter_hotfix_main_scene(AssetReference assetReference)
        {
            // 加载热更主场景
            var scene = await Addressables.LoadSceneAsync(assetReference);
            // 激活场景
            await scene.ActivateAsync();
        }

        private async UniTask _wait_for_enter_input()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.WindowsPlayer:
                    while (!Input.GetKey(KeyCode.Space))
                    {
                        await UniTask.WaitForFixedUpdate();
                    }

                    break;
                case RuntimePlatform.Android:
                    while (Input.touchCount == 0)
                    {
                        await UniTask.WaitForFixedUpdate();
                    }

                    break;
            }
        }
        
#if UNITY_EDITOR
        private void OnValidate()
        {
            hotSceneNames.Clear();
            foreach (var assetReference in hotScenes)
            {
                hotSceneNames.Add(assetReference.editorAsset.name);
            }
        }
#endif

        private void OnGUI()
        {
            //按钮大小 200,100
            //屏幕中心绘制选择场景按钮列表
            for (int i = 0; i < hotScenes.Count; i++)
            {
                var sceneName = hotSceneNames[i];
                var sceneRef = hotScenes[i];
                //获取按钮的位置
                if (GUILayout.Button(sceneName, GUILayout.Width(200), GUILayout.Height(100)))
                {
                    _enter_hotfix_main_scene(sceneRef);
                }
            }
        }
    }
}