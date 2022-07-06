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
                Rocket.RocketWeigt = Rocket.RocketWeigt - Tank._currentTank.Weight + Weight;

                Events.UpdateTankEvent?.Invoke(this);
                Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
                Events.HideStore?.Invoke();
                
                Debug.Log("weight: " + Rocket.RocketWeigt);
                Debug.Log(Level.LevelBudget);
        }
    }
}
