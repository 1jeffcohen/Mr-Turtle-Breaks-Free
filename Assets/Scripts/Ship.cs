using UnityEngine;
using System.Collections;

public class Ship : MonoBehaviour {

	public float minX, maxX;
	private Ball ball;
	
	public AudioClip crack;
	public GameObject smoke;
	
	void Start () {
		ball = GameObject.FindObjectOfType<Ball>();
	}
	
	// Update is called once per frame
	void Update () {
		if (ball.paused) return;
		Vector3 pos = new Vector3 (this.transform.position.x, this.transform.position.y, 0f);
		pos.x = pos.x + 0.01f;
		pos.x = Mathf.Clamp(pos.x, minX, maxX);
		if (pos.x >= maxX) pos.x = minX;
		this.transform.position = pos;
	}
	
	void OnCollisionEnter2D (Collision2D col) {
		AudioSource.PlayClipAtPoint (crack, transform.position, 0.1f);
		PuffSmoke();
		Destroy(gameObject);
	}
	
	void PuffSmoke () {
		GameObject smokePuff = Instantiate (smoke, transform.position, Quaternion.identity) as GameObject;
		smokePuff.GetComponent<ParticleSystem>().startColor = gameObject.GetComponent<SpriteRenderer>().color;
	}
	
}
