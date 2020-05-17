using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scores: MonoBehaviour
{

    public static int pointssum = 0;
    Text points;
    // Start is called before the first frame update
    void Start()
    {
        points = GetComponent<Text>();

    }

    // Update is called once per frame
    void Update()
    {
        points.text = "Zdobyte punkty " + pointssum;
    }
}
