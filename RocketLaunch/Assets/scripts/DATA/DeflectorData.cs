using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "DeflectorData", menuName = "RocketLaunch/DeflectorData", order = 0)]
public class DeflectorData : ScriptableObject 
{
    public string Name;
    public GameObject Prefab;
    public float Price;
    public float Weight;
    public Sprite Icon;
    public Color32 BackGroundColor;
    public float DeflectorResistance;

}
