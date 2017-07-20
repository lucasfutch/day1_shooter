using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class disappearOnFall : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter(Collision collision) {

		if (collision.transform.CompareTag("bullet")) {
			Debug.Log ("The bullet has hit the box");
			Destroy (transform.parent.gameObject, 1.0f);
		}
	}

}
