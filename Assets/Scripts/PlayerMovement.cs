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

    public int life;

    public int kills;

    public Text kill_counter;

    public Text win;

    public Text loose;
    public Text life_counter;

    public float moveSpeed = 3; //criar um game controller para alterar com juggernog
    private float turnSpeed = 150f;

    

    public AudioSource audio;
    public AudioClip morte;

    bool played = false;

    private void Start()
    {
        characterController = GetComponent<CharacterController>();
        animator = GetComponentInChildren<Animator>();
        kills = 0;
        life  = 3;
    }


    IEnumerator reload()
    {

        yield return new WaitForSeconds(5.0f);
        SceneManager.LoadScene(0);

    }


    //Update is called once per frame
    private void Update()
    {
        kill_counter.text = "KILLS " + (kills).ToString() + "/40";
        life_counter.text = "LIFE x " + life.ToString();

        float horizontal = Input.GetAxis("Horizontal");
        vertical = Input.GetAxis("Vertical");

        animator.SetFloat("Speed", vertical);
        animator.SetBool("Death", died);

        if (life <= 0 && !played)
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
