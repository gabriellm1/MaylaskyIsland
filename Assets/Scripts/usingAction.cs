using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class usingAction : MonoBehaviour
{
    public ParticleSystem effect;

    void OnCollisionEnter(Collision collision) { 

        if (collision.gameObject.tag == "Player")
        {
            collision.gameObject.GetComponent<PlayerMovement>().moveSpeed += 1;
            Instantiate(effect, transform.position, transform.rotation);
            Destroy(gameObject);
        }


    }


}
