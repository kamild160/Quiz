using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon;
using Photon.Pun;
using Proyecto26;
using UnityEditor;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;

public class Scoresmulti: MonoBehaviour
{

    //Zliczanie punktów i wyświetlanie wyniku
    public static int pointssum = 0;
    //public Text points;
    private string user;
    public Text scoresboard;

    USers users = new USers();



    void Start()
    {
        //points = GetComponent<Text>();
        Posttodb();
        Getdata();



    }

    private void getscore()
    {
        scoresboard.text = users.ToString();

    }
    void Update()
    {

     //points.text = "Poprawne odpowiedzi:  " + pointssum;
        
    }

    private void Posttodb()
    {        user = nazwagracza.Playernick;

        if (user != null)
        {
            USers users = new USers();

            RestClient.Put("https://quizgame-inz.firebaseio.com/" + user + ".json", users);
        }      
    }

    private void Getdata()
    {
        

        RestClient.Get<USers>("https://quizgame-inz.firebaseio.com/.json?orderBy='scores'&startAt=0").Then(response =>
        {

            users = response;
            getscore();

        });

     


}


}
