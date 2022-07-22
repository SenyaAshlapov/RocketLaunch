using UnityEngine;

public class PreparationState : IState
{
    public void EnterState(Rocket rocket,Store store){
        //rocket.SubscribeToPreparationEvents();
    }
    public void LogicState(Rocket rocket,Store store){

    }
    public void ExitState(Rocket rocket,Store store){
        //rocket.UnSubscribeToPreparationEvents();
    }
}
