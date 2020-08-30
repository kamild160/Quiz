using System.Collections;
using System.Collections.Generic;
using Proyecto26;
using UnityEngine;

public class dbtest : MonoBehaviour
{
    

    // Start is called before the first frame update
    void Start()
    {
        Question question = new Question();
        RestClient.Put("https://quizgame-inz.firebaseio.com/"+question+".json", question);
    }

    // Update is called once per frame
    void Update()
    {

        RestClient.Get<Question>("https://quizgame-inz.firebaseio.com/.json").Then(response =>
        {
            return response;

        });


    }
}
