using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class textcube : MonoBehaviour {
	public Text mytext;
	[Multiline] public string message;
	public bool presspace = false;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider player){
		mytext.text = message;
		if (presspace == true&&Input.anyKeyDown) {
		mytext.text = "welcome home";
		}
	}
	void OnTriggerExit(Collider player){
		mytext.text = " ";

	}
}
