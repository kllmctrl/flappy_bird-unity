using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarrierMove : MonoBehaviour {
	public float moveSpeed;
	public Vector3 Init_pos;
	public GameObject[] barrier;
	public Vector3[] load_pos = new Vector3[2]; //储存初始位置

	// Use this for initialization
	void Start () {
		barrier [0].GetComponent<BarrierContral> ().hidden ();
		barrier [1].GetComponent<BarrierContral> ().changeBarrier ();
		Init_pos = barrier [1].transform.position;
		//
		for(int i=0; i < load_pos.Length; i++){
			load_pos[i] = barrier [i].gameObject.transform.position;
		}
	}
	
	// Update is called once per frame
	void Update () {
		for(int i=0; i < barrier.Length; i++){
			barrier [i].transform.Translate (new Vector3 (-Time.deltaTime * moveSpeed, 0, 0));

			if (barrier[i].transform.position.x <= -20.0f){
				barrier [i].GetComponent<BarrierContral> ().changeBarrier ();
				barrier [i].transform.position = Init_pos;
			}
		}
	}

	public void resetBarrier(){
		for(int i=0; i < barrier.Length; i++){
			barrier [i].transform.position = load_pos [i];
		}
		barrier [0].GetComponent<BarrierContral> ().hidden ();
		barrier [1].GetComponent<BarrierContral> ().changeBarrier ();
	}

}
