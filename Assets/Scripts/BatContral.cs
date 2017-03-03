using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BatContral : MonoBehaviour {
	AudioSource source;
	public GUIStyle myStyle;
	public AudioClip fly;
	public AudioClip point;
	public AudioClip die;
	public Vector2 force;
	public Vector3 initPos;
	public int score;
	Rigidbody2D body;
	public bool isOver = false;
	public Texture2D reStart;

	// Use this for initialization
	void Start () {
		force = new Vector2 (0, 450);
		body = gameObject.GetComponent<Rigidbody2D> ();
		source = this.gameObject.GetComponent<AudioSource> ();
		initPos = gameObject.transform.position;
		score = 0;
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Space)){
			source.PlayOneShot (fly);
			body.AddForce (force);
		}
	}

	void OnTriggerEnter2D(Collider2D other){
		if(other.gameObject.tag.CompareTo("Point") == 0){
			source.PlayOneShot (point);
			score++;
		}

		if(other.gameObject.tag.CompareTo("Wall") == 0){
			source.PlayOneShot (die);
			Time.timeScale = 0;
			isOver = true;
		}
	}

	public void resetBAT(){
		isOver = false;
		this.transform.position = initPos;
		score = 0;
		Time.timeScale = 1;
	}
}
