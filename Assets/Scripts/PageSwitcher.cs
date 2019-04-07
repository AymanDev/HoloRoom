using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PageSwitcher : MonoBehaviour
{
    public Button nextPage;
    public Button prevPage;

    public GameObject[] pages;
    public int currentPage = 0;

    public void NextPage() {
        if(currentPage < pages.Length - 1)
        {
            pages[currentPage].SetActive(false);
            currentPage++;
            pages[currentPage].SetActive(true);
        }
        UpdatePageButtons();
    }

    public void PrevPage() {
        if(currentPage > 0)
        {
            pages[currentPage].SetActive(false);
            currentPage--;
            pages[currentPage].SetActive(true);
        }
        UpdatePageButtons();
    }

    public void UpdatePageButtons() {
        if(currentPage == 0)
        {
            prevPage.enabled = false;
            nextPage.enabled = true;
        }

        if(currentPage > 0)
        {
            prevPage.enabled = true;
            nextPage.enabled = true;
        }

        if (currentPage >= pages.Length - 1)
        {
            nextPage.enabled = false;
        }
    }
}
