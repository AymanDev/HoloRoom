using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Interior : MonoBehaviour
{

    private void Start()
    {
    }

    public void SelfDestroy()
    {
        Debug.Log("Self destroy");
        Destroy(gameObject);
    }
}
