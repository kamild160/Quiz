using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


//CZAS FILMU ODC 3 14:00

public class GameMenager : MonoBehaviour
{
    public Question[] questions;
    private static List<Question> unAnswered;

    private Question currentQuestion;

    [SerializeField]
    private Text questionText;

    [SerializeField]
    private float waitforquestion = 1.5f;

    [SerializeField]
    private Text Truebuttontext;

    [SerializeField]
    private Text Falsebuttontext;

    [SerializeField]
    private Animator animationmove;

    void Start()
    {
        if (unAnswered == null || unAnswered.Count == 0) //Jeżeli jest puste lub odpwoeidzniano na wszystkie pytania
        {
            unAnswered = questions.ToList<Question>();

            
        }

        SetCurrentquestion();


    }

    void SetCurrentquestion()//wybieramy pytanie z listy
    {
        int randomQuestionID = Random.Range(0, unAnswered.Count);
        currentQuestion = unAnswered[randomQuestionID];



        questionText.text = currentQuestion.question; //wyświetl pytanie

        if (currentQuestion.isTrue)
        {
            Truebuttontext.text = "BRAWO ! Oby tak dalej ";
            Falsebuttontext.text = "Niestety nie tym razem ";
        }else
        {

            Truebuttontext.text = "Niestety nie tym razem ";
            Falsebuttontext.text = "BRAWO ! Oby tak dalej ";
        }

    }

    public void TruePressed() //wciśnięcie przysisku prawda
    {
        animationmove.SetTrigger("False");

        if (currentQuestion.isTrue)
        {
            Debug.Log("YES");

        }
        else
        {
            Debug.Log("NO");
        }
        StartCoroutine(GotoNextQuestion()); //przejdź do kolejnego pytania
    }

    public void FalsePressed()//wciśnięcie przysisku fałsz
    {
        animationmove.SetTrigger("True");
        if (!currentQuestion.isTrue)
        {
            Debug.Log("YES");
        }
        else
        {
            Debug.Log("NO");
        }

        StartCoroutine(GotoNextQuestion());
    }

    IEnumerator GotoNextQuestion()
    {
        unAnswered.Remove(currentQuestion); //usuwamy obecne pytanie
        yield return new WaitForSeconds(waitforquestion); //czekamy chwile zanim załadujemy kolejne
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);

    }
}