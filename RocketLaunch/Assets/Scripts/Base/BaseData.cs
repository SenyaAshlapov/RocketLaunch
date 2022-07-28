using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "Base_", menuName = "RocketLaunch/BaseData", order = 0)]
public class BaseData : ScriptableObject {
    public int BaseRang;
    public GameObject BasePrefab;
    public GameObject BasePrefabForLevel;
    public int BasePrice;
    public Sprite BaseIcon;
    public Color32 BaseUIColor;

    public string BaseName;
    [TextArea]
    public string BaseDescription;
    
}
