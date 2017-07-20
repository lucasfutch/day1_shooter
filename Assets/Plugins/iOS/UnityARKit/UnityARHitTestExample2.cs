using System;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine.AI;

namespace UnityEngine.XR.iOS
{

	public class UnityARHitTestExample2 : MonoBehaviour
	{
		public Transform m_HitTransform;
		private bool firstTime = true;
		public NavMeshAgent agent;


		RaycastHit raycastHitPrev;

		bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
		{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
				foreach (var hitResult in hitResults) {
					Debug.Log ("Got hit!");
					m_HitTransform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
					m_HitTransform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
					Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
					return true;
				}
			}
			return false;
		}
			
		void Start () {
			agent = GetComponent<NavMeshAgent> ();
		}
		// Update is called once per frame
		void Update () {
			RaycastHit raycastHit;
			if (Input.touchCount > 0 && m_HitTransform != null)
			{
				var touch = Input.GetTouch(0);

				// Check for a touch of the floor
				if ((Input.touchCount > 0) && (Input.GetTouch(0).phase == TouchPhase.Began)) {
					Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);

					if (Physics.Raycast(raycast, out raycastHit)) {
						Debug.Log("Something Hit");

						if (raycastHit.collider.CompareTag("floor")) {
							Debug.Log("Floor Touched");

							agent.SetDestination (raycastHit.point);
//							if (firstTime == false) {
//								
//							}
//
//							firstTime = false;

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
	}
}

