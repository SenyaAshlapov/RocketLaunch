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
    void OnDestroy(){
        Events.SelectDeflectorStore -= lookAtDeflector;
        Events.SelectTankStore -= lookAtTank;
        Events.SelectPlumageStore -= lookAtPlumage;
        Events.SelectEngineStore -= lookAtEngine;
        Events.HideStore -= lookAtRocket;
    }

    private void lookAtDeflector() => activateCamera(_deflectorCamera);  

    private void lookAtTank()  => activateCamera(_tankCamera);  

    private void lookAtPlumage()  => activateCamera(_plumageCamera);  

    private void lookAtEngine()  => activateCamera(_engineCamera);  

    private void lookAtRocket() {
        _activeCamera.SetActive(false);

        _mainCamera.SetActive(true);
    }

    private void activateCamera(GameObject activeCamera){
        if(_activeCamera != null){
            _activeCamera.SetActive(false);
        }
        
       _activeCamera = activeCamera;
        activeCamera.SetActive(true);
        _mainCamera.SetActive(false);
                       
    }

    
    
}
