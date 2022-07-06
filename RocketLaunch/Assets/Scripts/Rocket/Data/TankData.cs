using UnityEngine;

[CreateAssetMenu(fileName = "TankData", menuName = "RocketLaunch/TankData", order = 0)]
public class TankData : RocketPartData
{
    [Space(15)]
    public float SpecificImpulse;

    public void TryBuyTank(){
        float _budget = Level.LevelBudget + Tank._currentTank.Price;
        if(_budget > Price){
                Level.LevelBudget = Level.LevelBudget + Tank._currentTank.Price - Price;

                Events.UpdateTankEvent?.Invoke(this);
                Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
                
                Debug.Log(Level.LevelBudget);
        }
    }
}
