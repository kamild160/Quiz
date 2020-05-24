using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class UI : MonoBehaviour
{
    [SerializeField]
    private Quizgamemenager quizgamemenager;

    [SerializeField]
    private Text questionSentence;

    [SerializeField]
    private GameObject categoryPanel;

    [SerializeField]
    private List<Button> answers;

    [SerializeField]
    private List<Button> categorybtn;

    [SerializeField]
    private Color correctColor;

    [SerializeField]
    private Color wrongColor;

    [SerializeField]
    private Color ColorstandardColor;

    private Question question;
    private bool isanswered;

    
    void Awake() //obsługa działania przycisków odpowiedzi i kategorii 
    {
        for (int i = 0; i < answers.Count; i++)
        {
            Button button = answers[i];
            button.onClick.AddListener(() => Click(button));
        }

        for (int i = 0; i < categorybtn.Count; i++)
        {
            Button button = categorybtn[i];
            button.onClick.AddListener(() => Click(button));
        }
    }

  

    public void Setquestion(Question question) //ustawianie pytania 
    {
        this.question = question;
        questionSentence.text = question.question;
        List<string> answerlist = Randomizelist.randomizeelements<string>(question.optionsanswers);

        for (int i = 0; i < answers.Count; i++)
        {
            answers[i].GetComponentInChildren<Text>().text = answerlist[i];
            answers[i].name = answerlist[i];
            answers[i].image.color = ColorstandardColor; 
            

        }
        isanswered = false;
        
    }

    private void Click(Button btn) //obsługa wciskania przysików 
    {
        if (quizgamemenager.Gamestatus == Quizgamemenager.GameStatus.Plaing)
        {
            if (!isanswered)
            {
                isanswered = true;
                bool value = quizgamemenager.Answer(btn.name);

                if (value)
                {
                    btn.image.color = correctColor;
                }
                else
                {
                    btn.image.color = wrongColor;
                }

            }
        }

        switch(btn.name) //wybór kategorii 
        {
            case "Kategoria 1":
                quizgamemenager.StartQuiz(0);
                categoryPanel.SetActive(false);
                break;
            case "Kategoria 2":
                quizgamemenager.StartQuiz(1);
                categoryPanel.SetActive(false);
                break;
            case "Kategoria 3":
                quizgamemenager.StartQuiz(2);
                categoryPanel.SetActive(false);
                break;
        }
    }

}
public class Randomizelist //losowe ustawienie odpowiedzi w pytaniu
{
    public static List<list> randomizeelements<list>(List<list> inputList)
    {
        List<list> originalList = new List<list>();
        originalList.AddRange(inputList);
        List<list> randID = new List<list>();

        System.Random r = new System.Random();
        int rand = 0;
        while (originalList.Count > 0)
        {
            rand = r.Next(0, originalList.Count); //Choose a random object in the list
            randID.Add(originalList[rand]); //add it to the new, random list
            originalList.RemoveAt(rand); //remove to avoid duplicates
        }

        return randID; //return the new random list
    }
}
