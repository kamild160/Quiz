﻿using System.Collections;
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
using System.IO;
using System;
using FullSerializer;
using System.Text;

public class Scoresmulti : MonoBehaviour
{

    //Zliczanie punktów i wyświetlanie wyniku
    public static int pointssum = 0;
    public Text points;
    private string user;

   



    USers scorres = new USers();

    public static fsSerializer serializer = new fsSerializer();


    void Start()
    {
        //Posttodb();
        Debug.Log("wykonano");
        
    }

  

    void Update()
    {

     points.text = "Poprawne odpowiedzi:  " + pointssum;
        
    }

    private void Posttodb()
    {
        user = nazwagracza.Playernick;

        if (user != null)
        {
            USers users = new USers();

            RestClient.Put("https://quizgame-inz.firebaseio.com/names/" + user + ".json", users);
        }
    }

   

    


}

