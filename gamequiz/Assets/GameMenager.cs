using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class GameMenager : MonoBehaviour
{
    public Question[] questions;
    public List<Question> unAnswered;

    private Question currentQuestion;

    [SerializeField]
    private Text questionText;

    [SerializeField]
    private float waitforquestion = 1f;

    [SerializeField]
    private Text Truebuttontext;

    [SerializeField]
    private Text Falsebuttontext;

    [SerializeField]
    private Text Nextbuttontext;

    [SerializeField]
    private Animator animationmove;

    void Start()
    {
        

        Debug.Log("dodano");

        Screen.fullScreen = !Screen.fullScreen;
    
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
            Nextbuttontext.text = "Przechodzę do następnego pytania";

        }else
        {

            Truebuttontext.text = "Niestety nie tym razem ";
            Falsebuttontext.text = "BRAWO ! Oby tak dalej ";
            Nextbuttontext.text = "Przechodzę do następnego pytania";

        }

    }

    public void TruePressed() //wciśnięcie przysisku prawda
    {
        animationmove.SetTrigger("False");

        if (currentQuestion.isTrue)
        {
            Scores.pointssum += 1;
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
            Scores.pointssum += 1;
            Debug.Log("YES");
        }
        else
        {
            Debug.Log("NO");
        }

        StartCoroutine(GotoNextQuestion());
    }

    public void NextPressed()//wciśnięcie przysisku nie wiem 
    {
        animationmove.SetTrigger("Next");
        
        StartCoroutine(GotoNextQuestion());
    }

    IEnumerator GotoNextQuestion()
    {
        unAnswered.Remove(currentQuestion); //usuwamy obecne pytanie
        Debug.Log("usunięte");
        if (unAnswered == null || unAnswered.Count == 0)
        {
            yield return new WaitForSeconds(waitforquestion);
            SceneManager.LoadScene("sumup");
        }
        else { }
        yield return new WaitForSeconds(waitforquestion); //czekamy chwile zanim załadujemy kolejne
        Screen.fullScreen = !Screen.fullScreen;

        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);

    }
    }

