using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class selectBox : MonoBehaviour {

	private bool firstTime = true;
	RaycastHit raycastHit;
	RaycastHit raycastHitPrev;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		if ((Input.touchCount > 0) && (Input.GetTouch(0).phase == TouchPhase.Began)) {
			Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);

			if (Physics.Raycast(raycast, out raycastHit)) {
				Debug.Log("Something Hit");

				if (raycastHit.collider.CompareTag("musicbox")) {
					Debug.Log("Music Box Hits");

					if (firstTime == false) {
						raycastHitPrev.collider.gameObject.GetComponent<playMusic> ().StopPlayMusicFunc();
					}

					firstTime = false;
					raycastHitPrev = raycastHit;
					raycastHit.collider.gameObject.GetComponent<playMusic> ().PlayMusicFunc();

				}
			}
		}
		
	}
}
