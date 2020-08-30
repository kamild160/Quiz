using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Proyecto26;
using UnityEngine.UI;
using TMPro;
using UnityEngine.EventSystems;

public class Addquestions : MonoBehaviour
{
    public static string questions;
    public TMP_InputField questiontext;
    public static string answer;
    public TMP_InputField answertext;
    public static string answer1;
    public TMP_InputField answer1text;
    public static string answer2;
    public TMP_InputField answer2text;
    public static string answer3;
    public TMP_InputField answer3text;
    public static string answer4;
    public TMP_InputField answer4text;
    public static bool istrue = false;
    public Button isTure;
    public Button add;
    public bool Click = false;



    public void Addquestion()
    {
        questions = questiontext.text;
        answer = answertext.text;
        answer1 = answer1text.text;
        answer2 = answer2text.text;
        answer3 = answer3text.text;
        answer4 = answer4text.text;

        Update();
       
        
        Posttodb();
        
              
    }
       
    private void Posttodb()
    {
        Question question = new Question();
        RestClient.Put("https://quizgame-inz.firebaseio.com/"+questions + ".json", question);

    }
    public void ValueChange()
    {
        Click = true;
        
    }
    void Update()
    {
        if (Click == true)
        {
            istrue = true;
            Click = false;
        }
    }


}
