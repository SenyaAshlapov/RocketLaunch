using UnityEngine;

[CreateAssetMenu(fileName = "PlumageData", menuName = "RocketLaunch/PlumageData", order = 0)]
public class PlumageData : RocketPartData
{
    [Space(15)]
    public float Contorol;

    public void TryBuyPlumage(){
        float _budget = Level.LevelBudget + Plumage._currentPlumage.Price;
        if(_budget > Price){
                Level.LevelBudget = Level.LevelBudget + Plumage._currentPlumage.Price - Price;

                Events.UpdatePlumageEvent?.Invoke(this);
                Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
                
                Debug.Log(Level.LevelBudget);
        }
    }
}
