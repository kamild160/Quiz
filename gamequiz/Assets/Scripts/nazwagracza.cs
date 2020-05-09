using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Photon;
using Photon.Pun;

public class nazwagracza : MonoBehaviour
{
    [SerializeField] private InputField nameInput = null;
    [SerializeField] private Button contininueButton = null;

    private const string Playernick = "PlayerName";

   
    private void Start()
    {
        SetUpInputField();
    }

    private void SetUpInputField()
    {
        if (!PlayerPrefs.HasKey(Playernick))
        { return; }

        string defaultName = PlayerPrefs.GetString(Playernick);
        nameInput.text = defaultName;

        SetPlayerName(defaultName);
    }

    public void SetPlayerName(string name)
    {
        contininueButton.interactable = !string.IsNullOrEmpty(name);

    }

    public void SaveName()
    {
        string playerName = nameInput.text;

        PhotonNetwork.NickName = playerName;
        PlayerPrefs.SetString(Playernick, playerName);


    }
}
