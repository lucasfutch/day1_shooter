using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shooting : MonoBehaviour {

	public GameObject objetoAAparecer;
	public GameObject particleEffect;
	public GameObject toggleButton;


	private bool canShoot;
	private bool toggled;
	private float timeElapsed;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {



		if (timeElapsed > 2) {
			canShoot = true;
		} else {
			timeElapsed += Time.deltaTime;
		}
	}

	public void changeToggle() {

		if (toggleButton.GetComponent<Toggle> ().isOn) {
			toggled = true;
		} else {
			toggled = false;
		}
	}

	public void Shoot() {
		if (toggled) {
			if (canShoot) {
				canShoot = false;
				RaycastHit hit;
	
				if (Physics.Raycast (Camera.main.transform.position, Camera.main.transform.forward, out hit, 10000)) {
			
					Debug.Log (hit.collider.name);
					if (hit.collider.CompareTag ("Destructible")) {
						Destroy (hit.collider.gameObject);
						Instantiate (particleEffect, hit.point, Quaternion.Euler (hit.normal));
					} else if (hit.collider.CompareTag ("Disappear")) {
						hit.collider.gameObject.SetActive (false);
						Instantiate (objetoAAparecer, hit.collider.transform.position, Quaternion.identity);
					}
			
				}
			}

		} else {
			if (canShoot) {
				canShoot = false;



			}

		}
	}
}
