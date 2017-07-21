using System;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine.AI;

namespace UnityEngine.XR.iOS
{

	public class UnityARHitTestExample2 : MonoBehaviour
	{
		public Transform m_HitTransform;
		public GameObject zombie;

		//public Animator animator;
		//public NavMeshAgent agent;



		// public List<Transform> wayPointList;
		// public int nextWaypoint;

		private bool aiActive = false;
		private bool aiFinished = false;
	

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
			//agent = GetComponent<NavMeshAgent> ();
			//animator = GetComponent<Animator> ();
			//agent.SetDestination (agent.gameObject.transform.localPosition);
			
		}
		// Update is called once per frame
		void Update () {
			//RaycastHit raycastHit;
			RaycastHit hitInfo;
			if (Input.touchCount > 0 && m_HitTransform != null)
			{
				var touch = Input.GetTouch(0);

				if (touch.phase == TouchPhase.Began) {


//					if ((Input.touchCount > 0) && (Input.GetTouch(0).phase == TouchPhase.Began)) {	
//						Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
//						if (Physics.Raycast (ray.origin, ray.direction, out hitInfo)) {
//							if (hitInfo.collider.CompareTag ("floor")) {
//								agent.SetDestination (hitInfo.point);
//								aiActive = true;
//							}
//						}
//					}
							
					//transform.localPosition = Vector3.zero;
					//zombie.transform.localPosition = Vector3.zero;

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

//				Debug.Log ("AI idle check");
//				if ((agent.remainingDistance == 0) && !aiFinished) {
//					Debug.Log ("Inside AI idle check");
//					animator.SetTrigger ("idleTrigger");
//					aiFinished = true;
//				}
//
//				Debug.Log ("AI walk check");
//				if (aiActive) {
//					Debug.Log ("Inside AI walk check");
//					animator.SetTrigger ("walkTrigger");
//					aiActive = false;
//					aiFinished = false;
//				}
			}
		}
	}
}

