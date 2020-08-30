using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Proyecto26;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;


public class QuizDataSaver : MonoBehaviour
{
    Question question = new Question();
    string questions;



    [SerializeField]
    public Text quest;

    public void Getdata()
    {
        GetformDb();
    }
    private void Showdata()
    {
        quest.text = question.ToString();
    }
    
    public void GetformDb()
    {
        RestClient.Get<Question>("https://quizgame-inz.firebaseio.com/" + questions + ".json").Then(response =>
        {
            question = response;
            Showdata();
        });
        
    }
}