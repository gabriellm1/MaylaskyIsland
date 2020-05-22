using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerMovement : MonoBehaviour
{
    private CharacterController characterController;
    private Animator animator;

    public float vertical;

    public bool died = false;

    public int life = 2;

    public int kills = 0;

    public Text kill_counter;

    public Text win;

    public Text loose;

    public float moveSpeed = 3; //criar um game controller para alterar com juggernog
    private float turnSpeed = 150f;

    

    public AudioSource audio;
    public AudioClip morte;

    bool played = false;

    private void Awake()
    {
        characterController = GetComponent<CharacterController>();
        animator = GetComponentInChildren<Animator>();
    }


    IEnumerator reload()
    {

        yield return new WaitForSeconds(5.0f);
        Scene scene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(scene.name);

    }


    // Update is called once per frame
    private void Update()
    {

        kill_counter.text = "KILLS " + kills + "/40";
        //GetComponent<Text>.text = ("KILLS" + kills + "/40");
        var horizontal = Input.GetAxis("Horizontal");
        vertical = Input.GetAxis("Vertical");

        var movement = new Vector3(horizontal, 0, vertical);

        animator.SetFloat("Speed", vertical);
        animator.SetBool("Death", died);

        if (life<=0 && !played)
        {
            died = true;
            audio.PlayOneShot(morte);
            played = true;
            
            
        }

        if (played)
        {
            loose.text = "YOU DIED!!";
            StartCoroutine(reload());

        }

        if (kills == 40)
        {
            win.text = "YOU WON";
            StartCoroutine(reload());

        }

        transform.Rotate(Vector3.up, horizontal * turnSpeed * Time.deltaTime);

        if (vertical != 0 && !died)
        {
            characterController.SimpleMove(transform.forward * moveSpeed * vertical);
        }

    }


}
