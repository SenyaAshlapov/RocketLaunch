using UnityEngine;

public class Control : MonoBehaviour
{

    [SerializeField]private GameObject _controlUI;
    [SerializeField]private GameObject _controller;
    [SerializeField]private float _controlSpeed = 0;
    [SerializeField]private float _currentSpeed;
    private float _controlDerection = 1;
    private void Awake() {
        Events.ShowLaunchUI += startControling;
        Events.UpdateControl += updateSpeed;
        Events.DestroyRocket += stopContolling;
        Events.LevelComplete += stopContolling;
    }
    private void OnDestroy() {
        Events.ShowLaunchUI -= startControling;
        Events.UpdateControl -= updateSpeed;
        Events.DestroyRocket -= stopContolling;
        Events.LevelComplete -= stopContolling;
    }

    private void Update() {
        _controller.transform.Translate(new Vector3(1f,0,0) * Time.deltaTime * _controlSpeed * _controlDerection);

        if (Input.GetKeyDown("space")){
            _controlDerection *= -1;
        }
    }

    private void startControling(){
        _controlSpeed = _currentSpeed;
        _controlUI.SetActive(true);
        
    }

    private void updateSpeed(float control){
        _currentSpeed = 100 / control;
    }

    private void stopContolling(){
        _controlSpeed = 0;
        _controlUI.SetActive(false);
    }

}
