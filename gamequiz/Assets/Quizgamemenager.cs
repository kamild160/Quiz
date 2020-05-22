using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Quizgamemenager : MonoBehaviour
{
    [SerializeField]
    private UI ui;
    [SerializeField]
    private List<Question> questions;
    private Question selectQuestion;

    // Start is called before the first frame update
    void Start()
    {
        SetCurrentquestion();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void SetCurrentquestion()//wybieramy pytanie z listy
    {


        int randomQuestionID = UnityEngine.Random.Range(0, questions.Count);
        selectQuestion = questions[randomQuestionID];

    
        ui.Setquestion(selectQuestion);
    }

    public bool Answer(string answered)
    {
        bool correctanswer = false;

        if(answered == selectQuestion.rightAnswer)

        {
            correctanswer = true;

        }
        else
        {

        }
        Invoke("SetCurrentquestion", 0.5f);
        return correctanswer;

    }

   
}


