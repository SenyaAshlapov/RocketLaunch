using UnityEngine;

public class DestroyState : IState
{
    public void EnterState(Rocket rocket,Store store){
        Debug.Log("Destroy enter");
        rocket.DestroyRocket();
        
    }
    public void LogicState(Rocket rocket,Store store){
        Debug.Log("Destroy looping");
    }
    public void ExitState(Rocket rocket,Store store){
        Debug.Log("Destory exit");
    }
}
