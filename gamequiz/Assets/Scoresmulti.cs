using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon;
using Photon.Pun;
using Proyecto26;
using UnityEditor;

public class Scoresmulti: MonoBehaviour
{

    //Zliczanie punktów i wyświetlanie wyniku
    public static int pointssum = 0;
    public Text points;
    private string user; 



    void Start()
    {
        points = GetComponent<Text>();
        Posttodb();




    }

  
    void Update()
    {

     points.text = "Poprawne odpowiedzi:  " + pointssum;
        
    }

    private void Posttodb()
    {
        
        user = nazwagracza.Playernick;

        if (user!= null)
        {
            USers users = new USers();

            RestClient.Put("https://quizgame-inz.firebaseio.com/" + user + ".json", users);

        }

    
      
        
    }

    private void Getdata()
    {
        

        USers users = new USers();

        RestClient.GetArray<USers>("https://quizgame-inz.firebaseio.com/").Then(allUsers => {
            EditorUtility.DisplayDialog("JSON Array", JsonHelper.ArrayToJsonString<USers>(allUsers, true), "Ok");
        });


    }


}
