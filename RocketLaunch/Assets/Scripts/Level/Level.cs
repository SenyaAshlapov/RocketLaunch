using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level : MonoBehaviour
{
    [SerializeField]private LevelData _levelData;

    public int LevelID;
    public static float LevelBudget;
    public static float LevelGravity;
    public static float LevelAtmosphereResistance;
    public static float LevelRequiredHeight;
    void Start(){
        Events.LevelComplete += completeLevel;
    }
    void Awake()
    {
        LevelID = _levelData.LevelID;
        LevelBudget = _levelData.Budget;
        LevelGravity = _levelData.Gravity;
        LevelAtmosphereResistance = _levelData.AtmosphereResistance;
        LevelRequiredHeight = _levelData.RequiredHeight;
    }

    public Level(int id)
    {
        LevelID = id;
    }

    private void completeLevel() => LevelSaverLoader.SaveLevel(LevelID);
       
    
}
