using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {
	
	private MrTurtle mrTurtle;
	private bool hasStarted = false;
	public bool paused = false;
	private Vector3 mrTurtleToBallVector;

	// Use this for initialization
	void Start () {
		mrTurtle = GameObject.FindObjectOfType<MrTurtle>();
		mrTurtleToBallVector = this.transform.position - mrTurtle.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		if (!hasStarted && !paused) {
			// Lock the Ball relative to Mr. Turtle.
			this.transform.position = mrTurtle.transform.position + mrTurtleToBallVector;
			
			// Wait for a mouse press to launch.
			if (Input.GetMouseButtonDown(0)) {
				//print ("Mouse clicked, launch Ball");
				hasStarted = true;
				this.GetComponent<Rigidbody2D>().velocity = new Vector2 (2f, 10f);
			}
		} else {
			// allow the player to pause the physics, 
			// but don't let them move the mouse!
			if (Input.GetMouseButtonDown(0)) {
				if (paused) {
					Time.timeScale = 1;
					paused = false;
				} else {
					Time.timeScale=0;
					paused = true;
				}
			}	
		}
	}
	
	void OnCollisionEnter2D (Collision2D collision) {
		// Does not trigger sound when brick is destoyed.
		// Not 100% sure why, possibly because ball isn't there.
		Vector2 tweak = new Vector2 (Random.Range(0f, 0.2f), Random.Range(0f, 0.2f));
		
		if (hasStarted) {	
			GetComponent<AudioSource>().Play();
			GetComponent<Rigidbody2D>().velocity += tweak;
		}
	}
}
