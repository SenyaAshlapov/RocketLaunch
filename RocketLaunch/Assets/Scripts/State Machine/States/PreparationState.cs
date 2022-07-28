using System.Security.Cryptography.X509Certificates;
using UnityEngine;

public class PreparationState : IState
{
    public void EnterState(Rocket rocket,Store store){
        rocket.SubscribeRocketToPreparationEvents();
        store.SubscribeStoreToPreparationEvents();
        

        Debug.Log("Preparation enter");
    }
    public void LogicState(Rocket rocket,Store store){
        Debug.Log("Preparation looping");
    }
    public void ExitState(Rocket rocket,Store store){
        rocket.UnSubscribeRocketToPreparationEvents();
        store.UnSubscribeStoreToPreparationEvents();

        store.hideAllStoreUI();
        
        Debug.Log("Preparation exit");
    }
}
