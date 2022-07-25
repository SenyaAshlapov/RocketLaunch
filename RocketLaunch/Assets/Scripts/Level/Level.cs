using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level : MonoBehaviour
{
    private LevelData _levelData;
    [SerializeField]private List<LevelData> _levelDataList;

    public static int LevelID;
    public static float LevelBudget;
    public static float LevelGravity;
    public static float LevelAtmosphereResistance;
    
    void Awake(){
        _levelData = loadLevel();
        Events.LevelComplete += completeLevel;
    }

    void OnDestroy() {
        Events.LevelComplete -= completeLevel;
    }

    void Start()
    {
        LevelID = _levelData.LevelID;
        LevelBudget = _levelData.Budget;
        LevelGravity = _levelData.Gravity;
        LevelAtmosphereResistance = _levelData.AtmosphereResistance;

        Events.UpdateGravity?.Invoke(LevelGravity);
        Events.UpdateAtmResistance?.Invoke(LevelAtmosphereResistance);
        Events.UpdateBudgetUI?.Invoke(LevelBudget);
    }

    public Level(int id)
    {
        LevelID = id;
    }

    private void completeLevel() => LevelSaverLoader.SaveLevel(LevelID);

    private LevelData loadLevel(){
        int currentLevel = LevelSaverLoader.LoadCurrentLevel();
        foreach(LevelData level in _levelDataList){
            if(level.LevelID == currentLevel){
                return level;
            }

        }
        return null;
    }
       
    
}
