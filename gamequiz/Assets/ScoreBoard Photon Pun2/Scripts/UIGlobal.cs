using UnityEngine;
using UnityEngine.UI;

namespace Photon.Pun.ScoreboardPhoton
{
	public class UIGlobal : MonoBehaviour
	{
		public static UIGlobal instance;
		public GameObject panelLogin;
		public InputField InputLogin;
		public GameObject BtnCreateGame;
		public GameObject BtnJoinGame;
		public GameObject ChooseTeam;
		public GameObject ScoreBoardPanelSolo;
		public GameObject ScoreBoardPanelTeam;

		void Awake()
		{
			instance = this;
		}
	}
}