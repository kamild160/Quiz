using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

[CreateAssetMenu(fileName = "QuestionsTF", menuName = "QuestionTF")]
public class QuestionTF : ScriptableObject
{
    public List<Question> questionstf;

    public void AddingNewQuestions(IEnumerable<Question> questions)
    {

        
        questionstf.AddRange(questions);
    }
}
