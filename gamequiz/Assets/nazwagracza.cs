using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon;
using Photon.Pun;
using Proyecto26;

public class nazwagracza : MonoBehaviour
{
    [SerializeField] public InputField nameInput;
    [SerializeField] public Button contininueButton;
    [SerializeField] public Button randomplayer;

    public static string Playernick;
    public static int score;

    Scoresmulti scoresmulti;
    



    private void Start()
    {
        SetUpInputField();
    }

    private void SetUpInputField()
    {
        if (!PlayerPrefs.HasKey(Playernick))
        { return; }

        string defaultName = nameInput.text;

       
        SetPlayerName(defaultName);
        SavePlayerName();
    }

    public void SetPlayerName(string name)
    {
        contininueButton.interactable = !string.IsNullOrEmpty(name);
       
    }

    public void randombtn()
    {
        string randomuser = Guid.NewGuid().ToString("N").ToLower()
                      .Replace("1", "").Replace("o", "").Replace("0", "")
                      .Substring(0, 10);

        nameInput.text = randomuser;
    }

    public void SavePlayerName()
    {
        Playernick = nameInput.text;
        
        Posttodb();
        
        
    }

    private void Posttodb()
    {
        USers users = new USers();
        RestClient.Put("https://quizgame-inz.firebaseio.com/" + Playernick + ".json", users);

    }



}
