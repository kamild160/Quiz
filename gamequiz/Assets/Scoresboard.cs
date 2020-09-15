using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Proyecto26;
using FullSerializer;

using static System.Net.Mime.MediaTypeNames;

public class Scoresboard : MonoBehaviour

{
    USers users = new USers();
    private Transform entryContainer;
    private Transform entryTemplate;
    private List<Transform> Scorestransformdatalist;
    private List<USers> userss = new List<USers>();
    public static fsSerializer serializer = new fsSerializer();


    private void Getdata()
    {

        RestClient.Get("https://quizgame-inz.firebaseio.com/names/.json").Then(response =>
        {

            fsData userdata = fsJsonParser.Parse(response.text);


            USers[] users = null;
            serializer.TryDeserialize(userdata, ref users);

            foreach (var user in users)
            {
                userss.AddRange((IEnumerable<USers>)user);
                break;
            }
            
            



        });
    }

    private void Awake()

    {
        Getdata();
        
        entryContainer = transform.Find("container");
        entryTemplate = entryContainer.Find("Template");


        entryTemplate.gameObject.SetActive(false);



        string jsonString = PlayerPrefs.GetString("highstoretable");
        Scoreli scoreli = JsonUtility.FromJson<Scoreli>(jsonString);



        //sortowanie wyników 
        for (int i = 0; i < userss.Count; i++)
        {
            for (int j = i + 1; j < userss.Count; j++)
            {
                if (userss[j].scores > userss[i].scores)
                {
                    USers tmp = userss[i];
                    userss[i] = userss[j];
                    userss[j] = tmp;
                }
            }
        }

        Scorestransformdatalist = new List<Transform>();
        foreach (USers highscoree in userss)
        {
            CreateHightscoreentyTransform(highscoree, entryContainer, Scorestransformdatalist);
        }

        }

    private void CreateHightscoreentyTransform(USers highscore, Transform container, List<Transform> transformlist)
    {
        float tempHight = 40f;
        Transform entryTransform = Instantiate(entryTemplate, container);
        RectTransform entryRectTransform = entryTransform.GetComponent<RectTransform>();
        entryRectTransform.anchoredPosition = new Vector2(-5, -tempHight * transformlist.Count);
        entryTransform.gameObject.SetActive(true);

        int rank = transformlist.Count + 1;
        //wyświetlanie wyników z nazwami miejsc 
        string rangString;
        switch (rank)
        {
            default: rangString = rank + " miejsce"; break;
            case 1: rangString = "1 miejsce"; break;
            case 2: rangString = "2 miejsce"; break;
            case 3: rangString = "3 miejsce"; break;

        }
        entryTransform.Find("posTExt").GetComponent<UnityEngine.UI.Text>().text = rangString;

        int score = highscore.scores;
        entryTransform.Find("scoreText").GetComponent<UnityEngine.UI.Text>().text = score.ToString();

        string name = highscore.name;
        entryTransform.Find("nameText").GetComponent<UnityEngine.UI.Text>().text = name;

        transformlist.Add(entryTransform);

    }
    private void Adddata(int score, string name)
    {
        USers highscoreEntry = new USers(score = score, name = name);

        string jsonString = PlayerPrefs.GetString("highstoretable");
        Scoreli highscore = JsonUtility.FromJson<Scoreli>(jsonString);

        highscore.scoreboarddatalist.Add(highscoreEntry);
        string json = JsonUtility.ToJson(highscore);
        PlayerPrefs.SetString("highstoretable", json);
        PlayerPrefs.Save();




    }

   

    private class Scoreli
    {
        public List<USers> scoreboarddatalist;
    }

 

    


    





    }



