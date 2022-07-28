using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadScreen : MonoBehaviour
{

    [SerializeField]private GameObject _UI;
    [SerializeField]private GameObject _loadScreen;

    private void Awake() {
        Events.LoadLevel += showLoadScreen;
    }
    private void OnDestroy() {
        Events.LoadLevel -= showLoadScreen;
    }


    private void showLoadScreen(){
        _UI.SetActive(false);
        _loadScreen.SetActive(true);
    }
}
