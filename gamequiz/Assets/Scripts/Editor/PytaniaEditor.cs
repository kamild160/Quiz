using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.Text;

using GDataDB;
using GDataDB.Linq;

using UnityQuickSheet;

///
/// !!! Machine generated code !!!
///
[CustomEditor(typeof(Pytania))]
public class PytaniaEditor : BaseGoogleEditor<Pytania>
{	    
    public override bool Load()
    {        
        Pytania targetData = target as Pytania;
        
        var client = new DatabaseClient("", "");
        string error = string.Empty;
        var db = client.GetDatabase(targetData.SheetName, ref error);	
        var table = db.GetTable<PytaniaData>(targetData.WorksheetName) ?? db.CreateTable<PytaniaData>(targetData.WorksheetName);
        
        List<PytaniaData> myDataList = new List<PytaniaData>();
        
        var all = table.FindAll();
        foreach(var elem in all)
        {
            PytaniaData data = new PytaniaData();
            
            data = Cloner.DeepCopy<PytaniaData>(elem.Element);
            myDataList.Add(data);
        }
                
        targetData.dataArray = myDataList.ToArray();
        
        EditorUtility.SetDirty(targetData);
        AssetDatabase.SaveAssets();
        
        return true;
    }
}
