using UnityEngine;
using UnityEngine.UI;


[CreateAssetMenu(fileName = "PlumageData", menuName = "RocketLaunch/PlumageData", order = 0)]
public class PlumageData : ScriptableObject 
{   
    public string Name;
    public GameObject Prefab;
    public float Price;
    public float Weight;
    public Sprite Icon;
    public Color32 BackGroundColor;
    public float PlumageControl;
}
