using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieAI : MonoBehaviour
{

    Transform playerTransform;
    UnityEngine.AI.NavMeshAgent Navmesh;
    public float checkRate = 0.0001f;
    float nextCheck;

    public int life = 1;

    bool played = false;

    public AudioSource audio;
    public AudioClip morte;

    public bool dead = false;

    public Animator animator;


    void OnCollisionEnter(Collision collision)
    {

        if (collision.gameObject.tag == "Player")
        {
            collision.gameObject.GetComponent<PlayerMovement>().life -= 1;
        }


    }

    IEnumerator death()
    {
        audio.PlayOneShot(morte);
        dead = true;
        yield return new WaitForSeconds(1.0f);
        Destroy(gameObject);
        

    }

    // Start is called before the first frame update
    void Start()
    {
        if (GameObject.FindGameObjectWithTag("Player").activeInHierarchy)
        {
            playerTransform = GameObject.FindGameObjectWithTag("Player").transform;
        }

        Navmesh = gameObject.GetComponent<UnityEngine.AI.NavMeshAgent>();
        
    }

    // Update is called once per frame
    void Update()
    {
        animator.SetBool("Death", dead);
        if (Time.time > nextCheck) {
            nextCheck = Time.time + checkRate;
            FollowPlayer();
        }

        if (life <= 0 && !played)
        {
            played = true;
            StartCoroutine(death());
        }
    }

    void FollowPlayer()
    {
        Navmesh.transform.LookAt(playerTransform);
        Navmesh.SetDestination(playerTransform.position);
    }

}
