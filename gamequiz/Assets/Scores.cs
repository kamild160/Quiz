using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon;
using Photon.Pun;
using Proyecto26;

public class Scores: MonoBehaviour
{
    public nazwagracza nazwagracza; 
    //Zliczanie punktów i wyświetlanie wyniku
    public static int pointssum = 0;
    Text points;
    USers userdb;
    


    void Start()
    {
        points = GetComponent<Text>();


    }

  
    void Update()
    {
        
        //PhotonNetwork.Player.
        points.text = "Poprawne odpowiedzi:  " + pointssum;
        
    }

   
}
