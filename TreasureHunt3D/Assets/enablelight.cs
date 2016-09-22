using UnityEngine;
using System.Collections;

public class enablelight : MonoBehaviour {
	public Light ourlight;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	void OnTriggerEnter(Collider player){
		ourlight.intensity = 7.6f;
	}
}
