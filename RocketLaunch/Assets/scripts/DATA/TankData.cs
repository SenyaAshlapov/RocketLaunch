using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "TankData", menuName = "RocketLaunch/TankData", order = 0)]
public class TankData : ScriptableObject 
{
    public string Name;
    public GameObject Prefab;
    public float Price;
    public float Weight;
    public Sprite Icon;
    public Color32 BackGroundColor;
    public float TankPulse;
}
