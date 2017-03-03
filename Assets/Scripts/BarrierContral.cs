using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarrierContral : MonoBehaviour {
	public GameObject[] zhuzi;
	public Vector3 positionBuffer;
	public float down = 0.5f, upper = 3.5f;

	// Use this for initialization
	void Start () {
		Random.seed = System.Environment.TickCount;	
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void changeBarrier(){
		float RandomVal;
		for(int i=0; i < zhuzi.Length; i++){
			zhuzi [i].SetActive (true);
			positionBuffer = zhuzi [i].transform.position;
			RandomVal = Random.value;
			positionBuffer.y = Mathf.Lerp (down, upper, RandomVal);
			zhuzi [i].transform.position = positionBuffer;
		}
	}
		
	public void hidden(){
		for(int i=0; i < zhuzi.Length; i++){
			zhuzi [i].SetActive (false);
		}
	}
}
