using System.Diagnostics.Tracing;
using UnityEngine;

public class StateMachine : MonoBehaviour
{

    [SerializeField]private Rocket _rocket;
    [SerializeField]private Store _store;
    private IState _currentState;

    private PreparationState _preparationState;
    private LaunchingState _launchingState;

    private void Awake(){
        Events.LaunchRocket += tryLaunch;
    }
    private void Start(){
        _preparationState = new PreparationState();
        _launchingState = new LaunchingState();

        _currentState = _preparationState;

        _currentState.EnterState(_rocket,_store);
    }

    private void FixedUpdate(){
        _currentState.LogicState(_rocket,_store);
    }

    private void changeState(IState newState){
        _currentState.ExitState(_rocket,_store);
        newState.EnterState(_rocket,_store);
        _currentState = newState;
    }

    private void tryLaunch(){
        if(_rocket.RockedIsReady() == true){
            changeState(_launchingState);
        }
    }



}
