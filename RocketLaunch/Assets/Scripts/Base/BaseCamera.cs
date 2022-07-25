using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseCamera : MonoBehaviour
{
    [SerializeField]private GameObject _mainCamera;
    [SerializeField]private GameObject _missionsStoreCamera;
    [SerializeField]private GameObject _baseStoreCamera;

    private GameObject _activeCamera;

    private void Awake() {
        Events.ShowBaseStore += lookAtBaseStore;
        Events.ShowMissionsStore += lookAtMissionsStore;
        Events.ShowBase += backToStartCamera;
    }

    private void OnDestroy() {
        Events.ShowBaseStore -= lookAtBaseStore;
        Events.ShowMissionsStore -= lookAtMissionsStore;
        Events.ShowBase -= backToStartCamera;
    }

    private void lookAtBaseStore() => activateCamera(_baseStoreCamera);
    private void lookAtMissionsStore() => activateCamera(_missionsStoreCamera);
    private void backToStartCamera(){
        _mainCamera.SetActive(true);
        _activeCamera.SetActive(false);
    }
    private void activateCamera(GameObject activeCamera)
    {
        if(_activeCamera != null){
            _activeCamera.SetActive(false);
        }
        
        _activeCamera = activeCamera;
        activeCamera.SetActive(true);
        _mainCamera.SetActive(false);                       
    }

}
