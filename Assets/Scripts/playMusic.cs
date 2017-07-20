using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class playMusic : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void PlayMusicFunc() {
		Debug.Log ("Touched Something!");
		gameObject.transform.localScale += new Vector3(1.0f, 1.0f, 1.0f);
		AudioSource objectMusic = gameObject.GetComponent<AudioSource> ();
		objectMusic.Play ();
	}

	public void StopPlayMusicFunc(){
		gameObject.transform.localScale -= new Vector3(1.0f, 1.0f, 1.0f);
		AudioSource objectMusic = gameObject.GetComponent<AudioSource> ();
		objectMusic.Stop ();
	}
}

