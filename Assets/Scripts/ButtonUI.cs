using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonUI : MonoBehaviour
{
    public GameObject button;
    public GameObject scroll;

    public void disableButton() {
        button.SetActive(false);
        scroll.SetActive(true);
    }

    public void enableButton()
    {
        button.SetActive(true);
        scroll.SetActive(false);
    }
}
