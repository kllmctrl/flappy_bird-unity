using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoreBoard : MonoBehaviour {
	int sco = 0;
	public GameObject BAT;
	public GameObject NumSprite1;
	public GameObject NumSprite2;
	public Sprite[] Num; //???????????数字图片数字

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		sco = BAT.GetComponent<BatContral> ().score;
		showScore (sco);
	}

	void showScore(int num){
		int n1;
		int n2;
		// score is between 0 - 99
		if (num > 100) {
			n1 = 9;
			n2 = 9;
		} else {
			n1 = num / 10;
			n2 = num % 10;
		}

		if (n1 == 0) {
			NumSprite1.transform.gameObject.SetActive (false);
		} else {
			NumSprite1.transform.gameObject.SetActive (true);
			NumSprite1.GetComponent<SpriteRenderer>().sprite = Num[n1];
		}

		if (n1 == 0 && n2 == 0) {
			NumSprite2.transform.gameObject.SetActive (false);
		} else {
			NumSprite2.transform.gameObject.SetActive (true);
			NumSprite2.GetComponent<SpriteRenderer> ().sprite = Num [n2];
		}




	}


}
