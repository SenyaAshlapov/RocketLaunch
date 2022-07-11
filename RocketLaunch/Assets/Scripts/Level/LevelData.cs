using UnityEngine;


[CreateAssetMenu(fileName = "LevelData", menuName = "RocketLaunch/LevelData", order = 0)]
public class LevelData : ScriptableObject {
    
    public int LevelID;
    public float Budget;
    public float Gravity;
    public float AtmosphereResistance;
    public float RequiredHeight;


}
