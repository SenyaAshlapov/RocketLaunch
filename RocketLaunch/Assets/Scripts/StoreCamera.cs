using UnityEngine;
using Cinemachine;
public class StoreCamera : MonoBehaviour
{
    [SerializeField]private GameObject _mainCamera;
    [SerializeField]private GameObject _deflectorCamera;
    [SerializeField]private GameObject _tankCamera;
    [SerializeField]private GameObject _plumageCamera;
    [SerializeField]private GameObject _engineCamera;

    private GameObject _activeCamera;

    void Awake()
    {
        Events.SelectDeflectorStore += lookAtDeflector;
        Events.SelectTankStore += lookAtTank;
        Events.SelectPlumageStore += lookAtPlumage;
        Events.SelectEngineStore += lookAtEngine;
        Events.HideStore += lookAtRocket;
    }

    private void lookAtDeflector() {
        _deflectorCamera.SetActive(true);
        _tankCamera.SetActive(false);
        _plumageCamera.SetActive(false);
        _engineCamera.SetActive(false);

        _mainCamera.SetActive(false);
    }

    private void lookAtTank() {
        _deflectorCamera.SetActive(false);
        _tankCamera.SetActive(true);
        _plumageCamera.SetActive(false);
        _engineCamera.SetActive(false);

        _mainCamera.SetActive(false);
    }

    private void lookAtPlumage() {
        _deflectorCamera.SetActive(false);
        _tankCamera.SetActive(false);
        _plumageCamera.SetActive(true);
        _engineCamera.SetActive(false);

        _mainCamera.SetActive(false);
    }

    private void lookAtEngine() {
        _deflectorCamera.SetActive(false);
        _tankCamera.SetActive(false);
        _plumageCamera.SetActive(false);
        _engineCamera.SetActive(true);

        _mainCamera.SetActive(false);
    }

    private void lookAtRocket() {
        _deflectorCamera.SetActive(false);
        _tankCamera.SetActive(false);
        _plumageCamera.SetActive(false);
        _engineCamera.SetActive(false);

        _mainCamera.SetActive(true);;
    }

    
    
}
