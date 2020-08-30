using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

[System.Serializable]
public class USers : MonoBehaviour
{

    public string username;
    public int scores;


    public USers()
    {
        username = nazwagracza.Playernick;
        scores = Scoresmulti.pointssum;

    }
}