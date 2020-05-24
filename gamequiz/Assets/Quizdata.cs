using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="QuestionsDB", menuName = "QuestionDB")]
public class Quizdata : ScriptableObject
{
    public List<Question> questions; 
}
