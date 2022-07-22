using UnityEngine;

public class Control : MonoBehaviour
{

    [SerializeField]private GameObject _controlUI;
    [SerializeField]private Transform _controller;
    [SerializeField]private Transform _overEngine;
    private float _controlSpeed = 0;
    [SerializeField]private float _currentSpeed;
    [SerializeField]private float _speedCoeficent;
    [SerializeField]private float _overEngineScaleSpeed;
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
        _controller.Translate(new Vector3(1f,0,0) * Time.deltaTime * _controlSpeed * _controlDerection);
        _overEngine.localScale -= new Vector3(_overEngineScaleSpeed, 0, 0);

        if (Input.GetKeyDown("space")){
            _controlDerection *= -1;
        }
    }

    private void startControling(){
        _controlSpeed = _currentSpeed;
        _controlUI.SetActive(true);
        
    }

    private void updateSpeed(float control){
        _currentSpeed = _speedCoeficent / control;
    }

    private void stopContolling(){
        _controlSpeed = 0;
        _controlUI.SetActive(false);
    }

}
