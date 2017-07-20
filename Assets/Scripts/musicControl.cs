using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class musicControl : MonoBehaviour {

	public AudioSource drums;
	private AudioSource boxMusic;
	Vector3 touchPosWorld;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
		touchPosWorld = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
		Vector3 touchPosWorld3D = new Vector3(touchPosWorld.x, touchPosWorld.y, touchPosWorld.z);
		RaycastHit2D hitInformation = Physics2D.Raycast(touchPosWorld3D, Camera.main.transform.forward);

		if (hitInformation.collider != null) {
			GameObject touchedObject = hitInformation.transform.gameObject;
			touchedObject.transform.localScale += new Vector3(1.0f, 1.0f, 1.0f);
			boxMusic = touchedObject.GetComponent<AudioSource> ();
			boxMusic.Play ();
		}
	}

//	void playMusic() {
//
//	}


}
