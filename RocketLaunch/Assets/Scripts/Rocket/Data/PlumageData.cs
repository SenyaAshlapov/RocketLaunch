using UnityEngine;

[CreateAssetMenu(fileName = "PlumageData", menuName = "RocketLaunch/PlumageData", order = 0)]
public class PlumageData : RocketPartData
{
    [Space(15)]
    public float Control;

    public override void TryBuyRocketPart(){
        float _budget = Level.LevelBudget + Plumage._currentPlumage.Price;
        if(_budget > Price){
                Level.LevelBudget = Level.LevelBudget + Plumage._currentPlumage.Price - Price;
                Rocket.RocketWeigt = Rocket.RocketWeigt - Plumage._currentPlumage.Weight + Weight;

                Events.UpdatePlumageEvent?.Invoke(this);
                Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
                Events.HideStore?.Invoke();
                
                Debug.Log("weight: " + Rocket.RocketWeigt);
                Debug.Log(Level.LevelBudget);
        }
    }
    public override float ReturnParametr(){
        return(Control);
    }

}
