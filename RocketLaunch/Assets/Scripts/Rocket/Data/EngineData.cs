using System;
using System.Collections;
using UnityEngine;

[CreateAssetMenu(fileName = "EngineData", menuName = "RocketLaunch/EngineData", order = 0)]
public class EngineData : RocketPartData
{
    [Space(15)]
    public float Thrust;

    void Start(){
        ParametrValue = Thrust;
    }

    public override void TryBuyRocketPart()
    {
        float _budget = Level.LevelBudget + Engine._currentEngine.Price;
        if(_budget > Price){
                Level.LevelBudget = Level.LevelBudget + Engine._currentEngine.Price - Price;
                Rocket.RocketWeigt = Rocket.RocketWeigt - Engine._currentEngine.Weight + Weight;

                Events.UpdateEngineEvent?.Invoke(this);
                Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
                Events.HideStore?.Invoke();
                
                Debug.Log("weight: " + Rocket.RocketWeigt);
                Debug.Log(Level.LevelBudget);
        }
            
    }
}
