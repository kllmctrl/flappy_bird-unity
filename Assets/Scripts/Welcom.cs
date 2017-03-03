using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Welcom : MonoBehaviour {
	public Texture2D title;
	public Texture2D begin;
	public GUIStyle myStyle;

	// Use this for initialization
	void Start () {
		Debug.Log ("MainMenu Start");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnGUI(){
		float t_width = Screen.width * 0.6f;
		float t_height = Screen.height * 0.7f;
		GUI.DrawTexture (new Rect (
			Screen.width * 0.5f - t_width / 2,
			Screen.height * 0.4f - t_height / 2,
			t_width, t_height), title);

		float b_width = Screen.width * 0.4f;
		float b_height = Screen.height * 0.2f;
		if(GUI.Button(new Rect(
			Screen.width * 0.5f -b_width / 2,
			Screen.height * 0.7f - b_height / 2,
			b_width, b_height), begin, myStyle)){

			Application.LoadLevel ("BatGame");
		}


	}
}
