using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteriorSpawner : MonoBehaviour
{

    public GameObject interiorPrefab;

    public void SpawnInterior()
    {
        var spawnPoint = Camera.main.transform.position + (Camera.main.transform.forward * 2);
        if (Physics.Raycast(
                Camera.main.transform.position,
                Camera.main.transform.forward,
                out RaycastHit hitInfo,
                30.0f,
                Physics.DefaultRaycastLayers))
        {
            spawnPoint = hitInfo.point;
        }
        var interiorObject = Instantiate(interiorPrefab);
        interiorObject.transform.position = spawnPoint;
    }
}
