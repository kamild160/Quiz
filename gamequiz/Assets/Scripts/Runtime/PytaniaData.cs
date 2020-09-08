using UnityEngine;
using System.Collections;

///
/// !!! Machine generated code !!!
/// !!! DO NOT CHANGE Tabs to Spaces !!!
///
[System.Serializable]
public class PytaniaData
{
  [SerializeField]
  string questions;
  public string Questions { get {return questions; } set { this.questions = value;} }
  
  [SerializeField]
  string[] answers = new string[0];
  public string[] Answers { get {return answers; } set { this.answers = value;} }
  
  [SerializeField]
  string correctanswer;
  public string Correctanswer { get {return correctanswer; } set { this.correctanswer = value;} }
  
  [SerializeField]
  bool isture;
  public bool Isture { get {return isture; } set { this.isture = value;} }
  
}