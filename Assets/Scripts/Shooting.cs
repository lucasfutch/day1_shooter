using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shooting : MonoBehaviour {

	public GameObject objetoAAparecer;
	public GameObject particleEffect;
	public GameObject toggleButton;
	public GameObject crossHair;
	public GameObject bullet;

	public AudioSource bulletSound;

	public GameObject muzzleFlashObject;
	public float muzzleFlashTimer = 0.3f;
	private float muzzleFlashTimerStart;
	public bool muzzleFlashEnabled = false;

	private bool canShoot;
	private bool toggled;
	private float timeElapsed = 0;

	// Use this for initialization
	void Start () {

		muzzleFlashTimerStart = muzzleFlashTimer;
	}
	
	// Update is called once per frame
	void Update () {
		changeToggle ();
		if (timeElapsed > 1) {
			canShoot = true;
			timeElapsed = 0;
		} else {
			timeElapsed += Time.deltaTime;
		}


		if (muzzleFlashEnabled == true) {
			Debug.Log ("Muzzle flash is ON");
			//muzzleFlashObject.transform.Rotate (new Vector3 (0, 90, 0));
			bulletSound.Play();
			muzzleFlashObject.SetActive (true);
			muzzleFlashTimer -= Time.deltaTime;
		}

		if (muzzleFlashTimer <= 0) {
			muzzleFlashObject.SetActive (false);
			muzzleFlashEnabled = false;
			muzzleFlashTimer = muzzleFlashTimerStart; 
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
				Debug.Log ("I am shooting");
				muzzleFlashEnabled = true;
				canShoot = false;
				RaycastHit hit;
	
				if (Physics.Raycast(Camera.main.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0.0f)), out hit, Mathf.Infinity )) {
					Debug.Log (hit.collider.name);

					Debug.Log ("I hit something");
					Destroy (hit.collider.gameObject.transform.parent.gameObject);
					Instantiate (particleEffect, hit.point, Quaternion.Euler (hit.normal));
				}
			}

		} else {
			if (canShoot) {
				canShoot = false;
				muzzleFlashEnabled = true;
				Debug.Log ("Making a bullet");
				GameObject newBullet = Instantiate(bullet, Camera.main.ViewportToWorldPoint(new Vector3(0.5f, 0.25f, 0.0f)), Quaternion.identity);
				//newBullet.GetComponent<Rigidbody> ().AddForce(Camera.main.ViewportToWorldPoint (new Vector3 (0.0f, 0.0f, 0.5f))*100000);
				newBullet.GetComponent<Rigidbody> ().AddForce(Camera.main.transform.forward*1000);

			
			}
		}
	}
}
