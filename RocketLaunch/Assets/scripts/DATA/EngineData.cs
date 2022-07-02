using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "EngineData", menuName = "RocketLaunch/EngineData", order = 0)]
public class EngineData : ScriptableObject 
{   
     public string Name;
    public GameObject Prefab;
    public float Price;
    public float Weight;
    public Sprite Icon;
    public Color32 BackGroundColor;
    public float EngineThrust;
}
