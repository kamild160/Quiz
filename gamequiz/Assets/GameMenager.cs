using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class GameMenager : MonoBehaviour
{
    private List<Question> unAnswered;

    private Question currentQuestion;

   

    [SerializeField]
    private Text questionText;

    [SerializeField]
    private float waitforquestion = 1f;

    [SerializeField]
    private List<Button> categorybtn;

    [SerializeField]
    private GameObject categoryPanel;

    [SerializeField]
    private Button Truebtn;
    [SerializeField]
    private Button Falsebtn;

    [SerializeField]
    private Color correctColor;

    [SerializeField]
    private Color wrongColor;

    [SerializeField]
    private Color ColorstandardColor;

    [SerializeField]
    private List<QuestionTF> quizDB;

    void Startgame(int index)
    {
        //int index =0;
        unAnswered = new List<Question>();

        for (int i = 0; i < quizDB[index].questionstf.Count; i++)
        {
            unAnswered.Add(quizDB[index].questionstf[i]);
        }
      
        SetCurrentquestion();

    }
    void Awake()
    {
        for (int i = 0; i < categorybtn.Count; i++)
        {
            Button localbtn = categorybtn[i];
            localbtn.onClick.AddListener(() => Click(localbtn));
        }
    }
    private void Click(Button btn)
    {
        switch (btn.name)
        {
            case "Kategoria 1":
                Startgame(0);
                Debug.Log("start");
                categoryPanel.SetActive(false);
                break;
            case "Kategoria 2":
                Startgame(1);
                categoryPanel.SetActive(false);
                break;
            case "Kategoria 3":
                Startgame(2);
                categoryPanel.SetActive(false);
                break;
        }

         
    }


    void SetCurrentquestion()//wybieramy pytanie z listy
    {
        Truebtn.image.color = ColorstandardColor;
        Falsebtn.image.color = ColorstandardColor;
        int randomQuestionID = Random.Range(0, unAnswered.Count);
        currentQuestion = unAnswered[randomQuestionID];

        bool isanswered = false;
        questionText.text = currentQuestion.question; //wyświetl pytanie
        

        unAnswered.RemoveAt(randomQuestionID); //usuwamy obecne pytanie

    }

    public void TruePressed() //wciśnięcie przysisku prawda
    {
               
        if (currentQuestion.isTrue)
        {

            Scoresmulti.pointssum += 1;
            Truebtn.image.color = correctColor;

        }
        else
        {
            Truebtn.image.color = wrongColor;
        }

        if (unAnswered.Count > 0)
        {
            Invoke("SetCurrentquestion", 1.5f);
        }
        else
        {
            Wait();
            SceneManager.LoadScene("sumup multi");

        }
    }

    public void FalsePressed()//wciśnięcie przysisku fałsz
    {
        
        if (!currentQuestion.isTrue)
        {
            Scoresmulti.pointssum += 1;
            Falsebtn.image.color = correctColor;

        }
        else
        {
            Falsebtn.image.color = wrongColor;

        }

        if (unAnswered.Count > 0)
        {
            Invoke("SetCurrentquestion", 1.5f);
        }
        else
        {
            Wait();
            SceneManager.LoadScene("sumup multi");

        }
    }


    IEnumerator Wait()
    {
        yield return new WaitForSeconds(1.5f);
    }

   
    }

