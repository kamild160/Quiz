using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using System;

public class lobby : MonoBehaviourPunCallbacks
{
    [SerializeField] private GameObject findOpponent = null;
    [SerializeField] private GameObject waitStatus = null;
    [SerializeField] private TextMeshProUGUI waitText = null;

    private bool connection = false;
   

    private const string GameVersion = "0.01"; //aby nawiązać połączenie wersjie gracy muszą być takie same
    private const int PlayersinRoom = 2; //liczba graczy potrzeba aby zacząć grę


    private void Awake()
    {
        PhotonNetwork.AutomaticallySyncScene = true;//potrzebne do synchornizacji scen między graczami
    }

    public void Findplayer()
    {
        connection = true;
        findOpponent.SetActive(false);
        waitStatus.SetActive(true);

        waitText.text = "Szukam graczy...";

        if (PhotonNetwork.IsConnected)
        {
            PhotonNetwork.JoinRandomRoom();

        }
        else
        {
            PhotonNetwork.GameVersion = GameVersion;
            PhotonNetwork.ConnectUsingSettings();

        }

    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Połączone z mistrzem");

        if (connection)
        {
            PhotonNetwork.JoinRandomRoom();
        }

    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        waitStatus.SetActive(false);
        findOpponent.SetActive(true);

        Debug.Log($"disconnected {cause} ");
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        Debug.Log("no clients are wainting, crate new room");
        PhotonNetwork.CreateRoom(null, new RoomOptions { MaxPlayers = PlayersinRoom });

    }
    //dla nowo dołączającej osoby 
    public override void OnJoinedRoom()
    {
        Debug.Log("Joined room");

        int playerCount = PhotonNetwork.CurrentRoom.PlayerCount;

        if (playerCount != PlayersinRoom)
        {
            waitText.text = "Czekam";


        }
        else
        {
            waitText.text = "Znaleziono gracza";
        }


    }
    //dla czekającego, osoby w lobby 
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount == PlayersinRoom)
        {
            PhotonNetwork.CurrentRoom.IsOpen = false; //uniemożniwia dołączenie jeżeli liczba graczy jest maksymalna
            waitText.text = "Znaleziono gracza";

            PhotonNetwork.LoadLevel("Questiontype");
        }
    }

   
}
