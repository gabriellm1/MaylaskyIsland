using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun : MonoBehaviour
{

    public  GameObject player;

    private float fireRate = 0.5f;


    public Transform Mira;

    private float timer;

    public ParticleSystem effect;

    public AudioSource somTiro;

    // Update is called once per frame
    void Update()
    {
        
        timer += Time.deltaTime;
        if (timer>=fireRate)
        {
            if (Input.GetButton("Fire1") && player.GetComponent<PlayerMovement>().vertical>=0 && !player.GetComponent<PlayerMovement>().died)
            {
                timer = 0;
                FireGun();
            }
        }
        
    }

    private void FireGun()
    {
        //Debug.DrawRay(Mira.position, Mira.forward * 100, Color.red, 2f);
        effect.Play();
        somTiro.Play();
        Ray ray = new Ray(Mira.position, Mira.forward);
        RaycastHit hitted;

        if (Physics.Raycast(ray, out hitted, 100))
        {
            if (hitted.transform.tag == "Zombie")
            {
                hitted.transform.GetComponent<ZombieAI>().life -= 1;
                player.GetComponent<PlayerMovement>().kills += 1;
            }
            //Destroy(hitted.collider.gameObject);
        }
    }

}
