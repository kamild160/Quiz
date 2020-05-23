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
    private List<Button> answers;
    [SerializeField]
    private Color correctColor;
    [SerializeField]
    private Color wrongColor;
    [SerializeField]
    private Color ColorstandardColor;

    private Question question;
    private bool isanswered;

    // Start is called before the first frame update
    void Awake()
    {
        for (int i = 0; i < answers.Count; i++)
        {
            Button localbtn = answers[i];
            localbtn.onClick.AddListener(() => Click(localbtn));
        }
    }

  

    public void Setquestion(Question question)
    {
        this.question = question;
        questionSentence.text = question.question;
        List<string> answerlist = Randomizelist.randomizeelements<string>(question.optionsanswers);

        for (int i = 0; i < answers.Count; i++)
        {
            answers[i].GetComponentInChildren<Text>().text = answerlist[i];
            answers[i].name = answerlist[i];
            answers[i].image.color = ColorstandardColor; //set color of button to normal
            

        }
        isanswered = false;
        
    }

    private void Click(Button btn)
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

}
public class Randomizelist
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
