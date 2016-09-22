using UnityEngine;
using System.Collections;

public class rollerball : MonoBehaviour {
	Rigidbody ourrigidbody;
	public float velocity;
	// Use this for initialization
	void Start () {
		ourrigidbody = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		ourrigidbody.velocity = Vector3.zero;
		if (Input.GetKey (KeyCode.W)) {
			ourrigidbody.velocity += velocity * Vector3.forward;
		}
		if (Input.GetKey (KeyCode.A)) {
			ourrigidbody.velocity += velocity * Vector3.left;
		}
		if (Input.GetKey (KeyCode.S)) {
			ourrigidbody.velocity += velocity * Vector3.back;
		}
		if (Input.GetKey (KeyCode.D)) {
			ourrigidbody.velocity += velocity * Vector3.right;
		}
	}
}
