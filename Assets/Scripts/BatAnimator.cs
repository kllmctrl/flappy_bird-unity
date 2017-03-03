using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BatAnimator : MonoBehaviour {
	public Sprite[] Sprites;
	public float framespPerSec;
	private SpriteRenderer spriterender;

	// Use this for initialization
	void Start () {
		spriterender = GetComponent<SpriteRenderer> ();
	}
	
	// Update is called once per frame
	void Update () {
		int index = (int)(Time.time * framespPerSec);
		index = index % Sprites.Length;
		spriterender.sprite = Sprites [index];
	}
}
