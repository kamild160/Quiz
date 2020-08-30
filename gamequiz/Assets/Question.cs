using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

[System.Serializable]
public class Question
{
    
    public string question;
    public List<string> optionsanswers;
    public string rightAnswer;
    public bool isTrue;
   

    public Question()
    {
        question = Addquestions.questions;
        rightAnswer = Addquestions.answer;
        optionsanswers = new List<string>();
        optionsanswers.Add(Addquestions.answer1);
        optionsanswers.Add(Addquestions.answer2);
        optionsanswers.Add(Addquestions.answer3);
        optionsanswers.Add(Addquestions.answer4);

        isTrue = Addquestions.istrue;


    }
}
