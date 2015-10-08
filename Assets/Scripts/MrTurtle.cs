using UnityEngine;
using System.Collections;

public class MrTurtle : MonoBehaviour {

	public bool autoPlay = false;
	public float minX, maxX;

	private Ball ball;
	
	void Start () {
		ball = GameObject.FindObjectOfType<Ball>();
	}
		
	// Update is called once per frame
	void Update () {
		if (!autoPlay) {
			MoveWithMouse();
		} else {
			AutoPlay();
		}
	}
	
	void AutoPlay() {
		if (ball.paused) return;
		Vector3 mrTurtlePos = new Vector3 (0.5f, this.transform.position.y, 0f);
		Vector3 ballPos = ball.transform.position;
		mrTurtlePos.x = Mathf.Clamp(ballPos.x, minX, maxX);
		this.transform.position = mrTurtlePos;
	}
	
	void MoveWithMouse () {
		if (ball.paused) return;
		Vector3 mrTurtlePos = new Vector3 (0.5f, this.transform.position.y, 0f);		
		float mousePosInBlocks = Input.mousePosition.x / Screen.width * 16;		
		mrTurtlePos.x = Mathf.Clamp(mousePosInBlocks, minX, maxX);
		this.transform.position = mrTurtlePos;	
	}
}
