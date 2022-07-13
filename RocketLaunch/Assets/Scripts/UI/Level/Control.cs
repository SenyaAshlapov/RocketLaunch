using UnityEngine;

public class Control : MonoBehaviour
{

    [SerializeField]private GameObject _controlUI;
    [SerializeField]private GameObject _controller;
    private float _controlSpeed = 0;
    [SerializeField]private float _currentSpeed;
    private float _controlDerection = 1;
    private void Start() {
        Events.LaunchRocket += startControling;
        Events.UpdateControl += updateSpeed;
        Events.DestroyRocket += stopContolling;
        Events.LevelComplete += stopContolling;
    }

    private void Update() {
        _controller.transform.Translate(new Vector3(1,0,0) * Time.deltaTime * _controlSpeed * _controlDerection);

        if (Input.GetKeyDown("space")){
            _controlDerection *= -1;
        }
    }

    private void startControling(){
        _controlUI.SetActive(true);
        _controlSpeed = _currentSpeed;
    }

    private void updateSpeed(float control){
        _currentSpeed /= control;
    }

    private void stopContolling(){
        _controlSpeed = 0;
        _controlUI.SetActive(false);
    }

}
