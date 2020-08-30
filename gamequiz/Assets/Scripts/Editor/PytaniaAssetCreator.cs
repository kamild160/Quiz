using UnityEngine;
using UnityEditor;
using System.IO;
using UnityQuickSheet;

///
/// !!! Machine generated code !!!
/// 
public partial class GoogleDataAssetUtility
{
    [MenuItem("Assets/Create/Google/Pytania")]
    public static void CreatePytaniaAssetFile()
    {
        Pytania asset = CustomAssetUtility.CreateAsset<Pytania>();
        asset.SheetName = "MySpreadSheet";
        asset.WorksheetName = "Pytania";
        EditorUtility.SetDirty(asset);        
    }
    
}