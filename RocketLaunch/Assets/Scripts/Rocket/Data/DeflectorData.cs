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

                Events.UpdateDeflectorEvent?.Invoke(this);
                Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
                
                Debug.Log(Level.LevelBudget);
        }
    }
}
