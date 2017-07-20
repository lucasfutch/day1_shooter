using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AgentScript : MonoBehaviour {

//	public Transform target;
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
		// agent.SetDestination (target.position);

		if (Input.GetMouseButtonDown (0)) {
			
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			if (Physics.Raycast (ray.origin, ray.direction, out hitInfo)) {
				//agent.destination = hitInfo.point;
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
			

//
//		if ((agent.remainingDistance <= 0) && aiFinished) {
//			aiFinished = false;
//		}
	}
}
