using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class GameMenager : MonoBehaviour
{
    public Question[] questions;
    private static List<Question> unAnswered;

    private Question currentQuestion;

    private void Start()
    {
        if (unAnswered == null || unAnswered.Count == 0) //Jeżeli jest puste lub odpwoeidzniano na wszystkie pytania
        {
            unAnswered = questions.ToList<Question>();


        }

        GetRandomQuestion();
        Debug.Log(currentQuestion.question + " is " + currentQuestion.isTrue);
       
    }

    void GetRandomQuestion()//wybieramy randomowe pytanie z listy
    {
        int randomQuestionID = Random.Range(0, unAnswered.Count);
        currentQuestion = unAnswered[randomQuestionID];

        unAnswered.RemoveAt(randomQuestionID); //usuwamy to pytanie z listy 

    }

}
