using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scores: MonoBehaviour
{
    //Zliczanie punktów i wyświetlanie wyniku
    public static int pointssum = 0;
    Text points;
   
    void Start()
    {
        points = GetComponent<Text>();

    }

  
    void Update()
    {
        points.text = "Poprawne odpowiedzi:  " + pointssum;
    }
}
