using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEditor.UIElements;


public class HybridCLREditorWindow : EditorWindow
{
    [MenuItem("Window/UI Toolkit/HybridCLREditorWindow")]
    public static void ShowExample()
    {
        HybridCLREditorWindow wnd = GetWindow<HybridCLREditorWindow>();
        wnd.titleContent = new GUIContent("HybridCLREditorWindow");
    }

    public void CreateGUI()
    {
        // Each editor window contains a root VisualElement object
        VisualElement root = rootVisualElement;

        // VisualElements objects can contain other VisualElement following a tree hierarchy.
        VisualElement label = new Label("Hello World! From C#");
        root.Add(label);

        // Import UXML
        var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Plugins/Nico/Editor/HybridCLR/HybridCLREditorWindow.uxml");
        VisualElement labelFromUXML = visualTree.Instantiate();
        root.Add(labelFromUXML);

        // A stylesheet can be added to a VisualElement.
        // The style will be applied to the VisualElement and all of its children.
        var styleSheet = AssetDatabase.LoadAssetAtPath<StyleSheet>("Assets/Plugins/Nico/Editor/HybridCLR/HybridCLREditorWindow.uss");
        VisualElement labelWithStyle = new Label("Hello World! With Style");
        labelWithStyle.styleSheets.Add(styleSheet);
        root.Add(labelWithStyle);
    }
}