using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Concurrent;

public class startgame : MonoBehaviour
{
   

    public void LoadScene(string level)
    {
        Screen.fullScreen = !Screen.fullScreen;
        SceneManager.LoadScene(level);
    }
}