using UnityEngine;
using System.Collections;

// Zamyka program po wciśnięciu ESC

public class Quit : MonoBehaviour
{
    void Update()
    {
        if (Input.GetKey("escape"))
        {
            Application.Quit();
        }
    }
}