using System;
using System.Collections;
using UnityEngine;

[CreateAssetMenu(fileName = "EngineData", menuName = "RocketLaunch/EngineData", order = 0)]
public class EngineData : RocketPartData
{
    [Space(15)]
    public float Thrust;

    public void TryBuyEngine()
    {
        float _budget = Level.LevelBudget + Engine._currentEngine.Price;
        if(_budget > Price){
                Level.LevelBudget = Level.LevelBudget + Engine._currentEngine.Price - Price;

                Events.UpdateEngineEvent?.Invoke(this);
                Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
                
                Debug.Log(Level.LevelBudget);
        }
            
    }
}
