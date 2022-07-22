using UnityEngine;

public class Events : MonoBehaviour
{
    public delegate void EngineDelegate(EngineData data);
    public static EngineDelegate UpdateEngineEvent;

    public delegate void DeflectorDelegate(DeflectorData data);
    public static DeflectorDelegate UpdateDeflectorEvent;

    public delegate void TankDelegate(TankData data);
    public static TankDelegate UpdateTankEvent;

    public delegate void PlumagageDelegate(PlumageData data);
    public static PlumagageDelegate UpdatePlumageEvent;


    public delegate void GameObjectDelegate(GameObject GO);
    public static GameObjectDelegate PreviewEngineEvent;
    public static GameObjectDelegate PreviewDeflectorEvent;
    public static GameObjectDelegate PreviewTankEvent;
    public static GameObjectDelegate PreviewPlumageEvent;


    public delegate void FloatDelegate(float f);
    public static FloatDelegate UpdateThrust;
    public static FloatDelegate UpdateControl;
    public static FloatDelegate UpdateSpecificImpulse;
    public static FloatDelegate UpdateResistance;
    public static FloatDelegate UpdateWeight;
  

    public static FloatDelegate UpdateBudgetUI;
    public static FloatDelegate UpdateGravity;
    public static FloatDelegate UpdateAtmResistance;


    public delegate void SimpleDelegate();
    public static SimpleDelegate SelectEngineStore;
    public static SimpleDelegate SelectDeflectorStore;
    public static SimpleDelegate SelectTankStore;
    public static SimpleDelegate SelectPlumageStore;
    public static SimpleDelegate HideStore;
    public static SimpleDelegate HideStoreUI;

    public static SimpleDelegate LaunchRocket;
    public static SimpleDelegate ShowLaunchUI;
    public static SimpleDelegate DestroyRocket;
    public static SimpleDelegate LevelComplete;
}
