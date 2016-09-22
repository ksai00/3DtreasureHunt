using UnityEngine;
using System.Collections;

public class lighton : MonoBehaviour {
	Light ourlight;
	// Use this for initialization
	void Start () {
		ourlight = GetComponent<Light> ();
		ourlight.intensity = 0;
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
