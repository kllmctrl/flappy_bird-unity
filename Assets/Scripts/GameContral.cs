using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameContral : MonoBehaviour {

	public Texture2D reStart;
	public Texture2D exit;
	public bool isOver = false;
	public GUIStyle myStyle;
	public GameObject BAT;//蝙蝠游戏对象

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		isOver = BAT.GetComponent<BatContral> ().isOver;
	}

	void OnGUI (){
		//exit game button
		float e_width = Screen.width * 0.1f;
		if(GUI.Button(new Rect(
			10, 10, e_width, e_width), exit)){
			Debug.Log ("Exit the game!");
			Application.Quit ();
		}

		//restart game button
		if(isOver){
			float r_width = Screen.width * 0.5f;
			float r_heith = Screen.height * 0.3f;
			if(GUI.Button(new Rect(
				Screen.width * 0.5f - r_width / 2,
				Screen.height * 0.5f - r_heith / 2,
				r_width, r_heith), reStart)){
				reset ();
			}

		}
	}
		
	void reset(){
		isOver = false;
		BAT.GetComponent<BatContral> ().resetBAT ();

		//????????? this gameObject
		this.gameObject.GetComponent<BarrierMove> ().resetBarrier();
	}

}
