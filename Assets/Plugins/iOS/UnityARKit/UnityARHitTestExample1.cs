using System;
using System.Collections.Generic;
using UnityEngine.EventSystems;

namespace UnityEngine.XR.iOS
{

	public class UnityARHitTestExample1 : MonoBehaviour
	{
		public Transform m_HitTransform;
		//public GameObject newBoxFloor;
		private bool firstTime = true;


		RaycastHit raycastHitPrev;

		bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
		{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
				foreach (var hitResult in hitResults) {
					Debug.Log ("Got hit!");
					//Instantiate (newBoxFloor, UnityARMatrixOps.GetPosition (hitResult.worldTransform), UnityARMatrixOps.GetRotation (hitResult.worldTransform));
					m_HitTransform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
					m_HitTransform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
					Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
					return true;
				}
			}
			return false;
		}

		// Update is called once per frame
		void Update () {
			RaycastHit raycastHit;
			if (Input.touchCount > 0 && m_HitTransform != null)
			{
				var touch = Input.GetTouch(0);

				// Check for a touch of the box
				if ((Input.touchCount > 0) && (Input.GetTouch(0).phase == TouchPhase.Began)) {
					Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);

					if (Physics.Raycast(raycast, out raycastHit)) {
						Debug.Log("Something Hit");

						if (raycastHit.collider.CompareTag("musicbox")) {
							Debug.Log("Music Box Hits");

							if (firstTime == false) {
								StopPlayMusicFunc(raycastHitPrev.collider.gameObject.GetComponent<AudioSource>(), raycastHitPrev.collider.transform);
							}

							firstTime = false;
							raycastHitPrev = raycastHit;
							//raycastHit.collider.gameObject.PlayMusicFunc();
							PlayMusicFunc (raycastHit.collider.gameObject.GetComponent<AudioSource>(), raycastHit.collider.transform);

						}
					}
				}


				if (touch.phase == TouchPhase.Began){
					transform.localPosition = Vector3.zero;
					var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
					ARPoint point = new ARPoint {
						x = screenPosition.x,
						y = screenPosition.y
					};

					// prioritize reults types
					ARHitTestResultType[] resultTypes = {
						ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
						// if you want to use infinite planes use this:
						//ARHitTestResultType.ARHitTestResultTypeExistingPlane,
						ARHitTestResultType.ARHitTestResultTypeHorizontalPlane, 
						ARHitTestResultType.ARHitTestResultTypeFeaturePoint
					}; 

					foreach (ARHitTestResultType resultType in resultTypes)
					{
						if (HitTestWithResultType (point, resultType))
						{
							return;
						}
					}
				}
			}
		}

		public void PlayMusicFunc(AudioSource audio, Transform objectA) {
			Debug.Log ("Touched Something!");
			objectA.localScale += new Vector3(1.0f, 1.0f, 1.0f);
			//AudioSource objectMusic = gameObject.GetComponent<AudioSource> ();
			//objectMusic.Play ();
			audio.Play();
		}

		public void StopPlayMusicFunc(AudioSource audio, Transform objectA){
			objectA.localScale -= new Vector3(1.0f, 1.0f, 1.0f);
			//AudioSource objectMusic = gameObject.GetComponent<AudioSource> ();
			//objectMusic.Stop ();
			audio.Stop();
		}
	}



}

