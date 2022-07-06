using UnityEngine;

[CreateAssetMenu(fileName = "DeflectorData", menuName = "RocketLaunch/DeflectorData", order = 0)]
public class DeflectorData :RocketPartData
{
    [Space(15)]
    public float Resistance;

    public void TryBuyDeflector(){
        float _budget = Level.LevelBudget + Deflector._currentDeflector.Price;
        if(_budget > Price){
                Level.LevelBudget = Level.LevelBudget + Deflector._currentDeflector.Price - Price;
                Rocket.RocketWeigt = Rocket.RocketWeigt - Deflector._currentDeflector.Weight + Weight;
  

                Events.UpdateDeflectorEvent?.Invoke(this);
                Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
                Events.HideStore?.Invoke();

                Debug.Log("weight: " + Rocket.RocketWeigt);
                Debug.Log(Level.LevelBudget);
        }
    }
}
