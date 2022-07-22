using UnityEngine;

public class LaunchingState : IState
{
    public void EnterState(Rocket rocket,Store store){
        Events.ShowLaunchUI?.Invoke();
        Debug.Log("Launch enter");
    }
    public void LogicState(Rocket rocket,Store store){
        rocket.LaunchRocket();
        Debug.Log("Launch looping");
    }
    public void ExitState(Rocket rocket,Store store){
        Debug.Log("Launch exit");
    }
}
