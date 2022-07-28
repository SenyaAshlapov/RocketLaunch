using System.Diagnostics.Tracing;
using UnityEngine;

public class StateMachine : MonoBehaviour
{

    [SerializeField]private Rocket _rocket;
    [SerializeField]private Store _store;
    private IState _currentState;

    private PreparationState _preparationState;
    private LaunchingState _launchingState;
    private DestroyState _destroyState;
    private FinishState _finishState;

    private void Awake(){
        Events.LaunchRocket += tryLaunch;
        Events.DestroyRocket += destroyRocket;
        Events.LevelComplete += levelComplete;
    }
    private void Start(){
        _preparationState = new PreparationState();
        _launchingState = new LaunchingState();
        _destroyState = new DestroyState();
        _finishState = new FinishState();

        _currentState = _preparationState;

        _currentState.EnterState(_rocket,_store);
    }

    private void OnDestroy() {
        Events.LaunchRocket -= tryLaunch;
        Events.DestroyRocket -= destroyRocket;
        Events.LevelComplete -= levelComplete;
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

    private void destroyRocket() => changeState(_destroyState);
    private void levelComplete() => changeState(_finishState);


}
