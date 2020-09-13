using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using static System.Net.Mime.MediaTypeNames;

public class Scoresboard : MonoBehaviour

{
    USers users;
    private Transform entryContainer;
    private Transform entryTemplate;
    private List<Transform> Scorestransformdatalist;
    

    private void Awake()
    {
        entryContainer = transform.Find("container");
        entryTemplate = entryContainer.Find("Template");


        entryTemplate.gameObject.SetActive(false);

        Adddata(1, "kamil");
                
        string jsonString = PlayerPrefs.GetString("highstoretable");
        Scoreli scoreli = JsonUtility.FromJson<Scoreli>(jsonString);

        for (int i = 0; i < scoreli.scoreboarddatalist.Count; i++)
        {
            for (int j = i + 1; j < scoreli.scoreboarddatalist.Count; j++)
            {
                if (scoreli.scoreboarddatalist[j].score > scoreli.scoreboarddatalist[i].score)
                {
                    Scoreboarddata tmp = scoreli.scoreboarddatalist[i];
                    scoreli.scoreboarddatalist[i] = scoreli.scoreboarddatalist[j];
                    scoreli.scoreboarddatalist[j] = tmp;
                }
            }
        }

        Scorestransformdatalist = new List<Transform>();
        foreach (Scoreboarddata highscoree in scoreli.scoreboarddatalist)
        {
            CreateHightscoreentyTransform(highscoree, entryContainer, Scorestransformdatalist);
        }

        }

    private void CreateHightscoreentyTransform(Scoreboarddata highscore, Transform container, List<Transform> transformlist)
    {
        float tempHight = 40f;
        Transform entryTransform = Instantiate(entryTemplate, container);
        RectTransform entryRectTransform = entryTransform.GetComponent<RectTransform>();
        entryRectTransform.anchoredPosition = new Vector2(-5, -tempHight * transformlist.Count);
        entryTransform.gameObject.SetActive(true);

        int rank = transformlist.Count + 1;

        string rangString;
        switch (rank)
        {
            default: rangString = rank + " miejsce"; break;
            case 1: rangString = "1 miejsce"; break;
            case 2: rangString = "2 miejsce"; break;
            case 3: rangString = "3 miejsce"; break;

        }
        entryTransform.Find("posTExt").GetComponent<UnityEngine.UI.Text>().text = rangString;

        int score = highscore.score;
        entryTransform.Find("scoreText").GetComponent<UnityEngine.UI.Text>().text = score.ToString();

        string name = highscore.name;
        entryTransform.Find("nameText").GetComponent<UnityEngine.UI.Text>().text = name;

        transformlist.Add(entryTransform);

    }
    private void Adddata(int score, string name)
    {
        Scoreboarddata highscoreEntry = new Scoreboarddata(score = score, name = name);

        string jsonString = PlayerPrefs.GetString("highstoretable");
        Scoreli highscore = JsonUtility.FromJson<Scoreli>(jsonString);

        highscore.scoreboarddatalist.Add(highscoreEntry);
        string json = JsonUtility.ToJson(highscore);
        PlayerPrefs.SetString("highstoretable", json);
        PlayerPrefs.Save();




    }

    private class Scoreli
    {
        public List<Scoreboarddata> scoreboarddatalist;
    }

    [System.Serializable]
    private class Scoreboarddata
    {
        public int score;
        public string name;
      

        public Scoreboarddata(int score, string name)
        {
            this.score = score;
            this.name = name;
        }
    }


}
