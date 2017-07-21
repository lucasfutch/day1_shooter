using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AgentScript : MonoBehaviour {

	public Animator animator;
	public NavMeshAgent agent;
	public float stateTimeElapsed;

	RaycastHit hitInfo = new RaycastHit();

	// public List<Transform> wayPointList;
	// public int nextWaypoint;

	private bool aiActive = false;
	private bool aiFinished = false;

	void Start () {
		agent = GetComponent<NavMeshAgent> ();
		animator = GetComponent<Animator> ();
	}
	
	void Update () {
		//if (Input.GetMouseButtonDown (0)) {
		if ((Input.touchCount > 0) && (Input.GetTouch(0).phase == TouchPhase.Began)) {	
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			if (Physics.Raycast (ray.origin, ray.direction, out hitInfo)) {
				//agent.destination = hitInfo.point;
				if (hitInfo.collider.CompareTag ("floor")) {

					Debug.Log ("floor touch");
				}
					
				agent.SetDestination (hitInfo.point);
				aiActive = true;
			}
		}

		if ((agent.remainingDistance <= 0) && !aiFinished) {
			animator.SetTrigger ("idleTrigger");
			aiFinished = true;
		}

		if (aiActive) {
			animator.SetTrigger ("walkTrigger");
			aiActive = false;
			aiFinished = false;
		}
	}
}
