using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destructor : MonoBehaviour {

	private float timeElapsed = 0.0f;
	public float timeForDest;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (timeElapsed > timeForDest) {
			Destroy (gameObject);
		} else {
			timeElapsed += Time.deltaTime;
		}
	}



}
