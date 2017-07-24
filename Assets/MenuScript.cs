using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuScript : MonoBehaviour {

	public enum MenuStates { Main, Return };
	public MenuStates currentState;

	public GameObject mainMenu;
	public GameObject returnMenu;


	void Awake() {
		currentState = MenuStates.Main;
	}

	void Update() {
		switch (currentState) 
		{
		case MenuStates.Main:
			mainMenu.SetActive (true);
			returnMenu.SetActive (false);
			break;
		
		case MenuStates.Return:
			mainMenu.SetActive (false);
			returnMenu.SetActive (true);
			break;
		}
	}

	public void GameOneStart() {
		Debug.Log ("Game one has been started");
		currentState = MenuStates.Return;
	}

	public void GameTwoStart() {
		Debug.Log ("Game two has been started");
		currentState = MenuStates.Return;
	}

	public void GameThreeStart() {
		Debug.Log ("Game three has been started");
		currentState = MenuStates.Return;
	}

	public void BackToMenu() {
		Debug.Log ("You have gone back to the Main Menu");
		currentState = MenuStates.Main;
	}

	public void BackToGame(){
		Debug.Log ("Your have gone back to the game");
		currentState = MenuStates.Main;
	}


}
