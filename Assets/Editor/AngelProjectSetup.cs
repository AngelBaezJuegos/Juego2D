#if UNITY_EDITOR
using System.IO;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

/// <summary>
/// Al abrir el proyecto por primera vez crea la escena "Main" (cámara + objeto Juego),
/// la añade a Build Settings y ajusta el nombre y la ventana del juego.
/// También disponible desde el menú:  Angel vs la Mafia > Preparar proyecto.
/// </summary>
[InitializeOnLoad]
public static class AngelProjectSetup
{
    const string ScenePath = "Assets/Scenes/Main.unity";

    static AngelProjectSetup() { EditorApplication.delayCall += AutoSetup; }

    static void AutoSetup()
    {
        if (EditorApplication.isPlayingOrWillChangePlaymode || EditorApplication.isCompiling) return;
        if (!File.Exists(ScenePath)) CreateScene();
    }

    [MenuItem("Angel vs la Mafia/Preparar proyecto (crear escena y ajustes)")]
    public static void Setup() { CreateScene(); }

    static void CreateScene()
    {
        Directory.CreateDirectory("Assets/Scenes");
        var scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);

        var camGo = new GameObject("Main Camera");
        camGo.tag = "MainCamera";
        var cam = camGo.AddComponent<Camera>();
        cam.clearFlags = CameraClearFlags.SolidColor;
        cam.backgroundColor = Color.black;
        cam.orthographic = true;
        camGo.AddComponent<AudioListener>();

        var go = new GameObject("Juego");
        go.AddComponent<AngelGame>();

        EditorSceneManager.SaveScene(scene, ScenePath);
        EditorBuildSettings.scenes = new[] { new EditorBuildSettingsScene(ScenePath, true) };

        PlayerSettings.productName = "Angel vs la Mafia";
        PlayerSettings.companyName = "Wascar Pujols";
        PlayerSettings.defaultScreenWidth = 1280;
        PlayerSettings.defaultScreenHeight = 720;
        PlayerSettings.fullScreenMode = FullScreenMode.Windowed;
        PlayerSettings.resizableWindow = true;
        PlayerSettings.runInBackground = true;

        AssetDatabase.SaveAssets();
        Debug.Log("[Angel vs la Mafia] Escena creada en " + ScenePath + ". Pulsa Play para jugar.");
    }
}
#endif
