using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Map : MonoBehaviour
{

    int total_upgradeBalls = 10;

    int total_zombies = 39;

    public GameObject upgradeBalls;


    public GameObject Zombie;


    void Start()
    {

        for (int i = 0; i < total_upgradeBalls; i++)
        {
            float spawnPointX = Random.Range(15.0f, 65.0f);
            float spawnPointZ = Random.Range(10.0f, 60.0f);
            Vector3 spawnPos = new Vector3(spawnPointX, 0.8f, spawnPointZ);
            GameObject objeto = Instantiate(upgradeBalls, spawnPos, Quaternion.identity);
            objeto.transform.parent = gameObject.transform;
        }


        for (int i = 0; i < total_zombies; i++)
        {
            float spawnPointX = Random.Range(15.0f, 65.0f);
            float spawnPointZ = Random.Range(10.0f, 45.0f);
            Vector3 spawnPos = new Vector3(spawnPointX, 0.8f, spawnPointZ);
            Instantiate(Zombie, spawnPos, Quaternion.identity);
        }
    }
}
