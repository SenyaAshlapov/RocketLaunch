using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level : MonoBehaviour
{
    [SerializeField]private LevelData _levelData;

    public static float LevelBudget;

    public float budget => LevelBudget;
    public static float LevelGravity;
    public static float LevelAtmosphereResistance;
    public static float LevelRequiredHeight;
    void Start()
    {
        LevelBudget = _levelData.Budget;
        LevelGravity = _levelData.Gravity;
        LevelAtmosphereResistance = _levelData.AtmosphereResistance;
        LevelRequiredHeight = _levelData.RequiredHeight;
    }

}
