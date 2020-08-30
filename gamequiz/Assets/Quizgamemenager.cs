using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Quizgamemenager : MonoBehaviour
{
    [SerializeField]
    private UI ui;

    [SerializeField]
    private List<Quizdata> quizDB;

    [SerializeField]
    private float waitforquestion = 1f;

    private List<Question> questions;

    private Question selectQuestion;

    nazwagracza nazwagracza;


    private GameStatus gamestatus = GameStatus.Next;
    public GameStatus Gamestatus { get { return gamestatus; } }

    public void StartQuiz(int index)
    {
        
        questions =new List<Question>();

        for (int i=0;i< quizDB[index].questions.Count; i++)
        {
            questions.Add(quizDB[index].questions[i]); //zapobiega załkowitemu usuwaniu pytań z listy
        }

        SetCurrentquestion();
        gamestatus = GameStatus.Plaing;
    }

    void SetCurrentquestion()//wybieramy losowe pytanie z listy
    {

        int randomQuestionID = UnityEngine.Random.Range(0, questions.Count);
        selectQuestion = questions[randomQuestionID];
        
        ui.Setquestion(selectQuestion);

        questions.RemoveAt(randomQuestionID);
                

    }

    public bool Answer(string answered) //obsługa wybierania odpowiedzi
    {
        bool correctanswer = false;

        if(answered == selectQuestion.rightAnswer)

        {
            Scoresmulti.pointssum += 1;
            correctanswer = true;

        }

        if (questions.Count > 0) //jeżeli isnieje jeszcze pytanie załaduj je 
        {
            Invoke("SetCurrentquestion", 1f);
        }
        else
        {
            SceneManager.LoadScene("sumup multi"); //jeżeli nie ma juz pytań pokaż ekran podsumowania

        }
        return correctanswer;

    }
    [System.Serializable]
    public enum GameStatus
    {
        Next,
        Plaing
    }

   

}


