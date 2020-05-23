using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Quizgamemenager : MonoBehaviour
{
    [SerializeField]
    private UI ui;
    [SerializeField] private Quizdata quizDB;
    private List<Question> questions;
    private Question selectQuestion;
    [SerializeField]
    private float waitforquestion = 1f;

    // Start is called before the first frame update
    void Start()
    {
        questions = quizDB.questions;
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
       

        if (questions == null || questions.Count == 0)
        {
            
            SceneManager.LoadScene("sumup");
        }
        else {
            questions.RemoveAt(randomQuestionID);
        }

    }

    public bool Answer(string answered)
    {
        bool correctanswer = false;

        if(answered == selectQuestion.rightAnswer)

        {
            Scores.pointssum += 1;
            correctanswer = true;
            

        }
        else
        {

        }
        Invoke("SetCurrentquestion", 1f);
        return correctanswer;

    }

   
}


