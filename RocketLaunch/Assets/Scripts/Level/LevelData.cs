using UnityEngine;


[CreateAssetMenu(fileName = "LevelData", menuName = "RocketLaunch/LevelData", order = 0)]
public class LevelData : ScriptableObject 
{
    
    public int LevelID;
    public int LevelRang;
    [Space(10)]
    [Header("Mission settings")]
    public float Budget;
    public float Gravity;
    public float AtmosphereResistance;
    [Space(10)]
    [Header("Mission informattion")]
    public string LevelCodeName;
    [TextArea]
    public string LevelDescription;


}
