using UnityEngine;
using UnityEngine.UI;
public class RocketPartData : ScriptableObject {
    [Header("Main Setting")]
    public GameObject Prefab;
    public float Weight;
    public float Price;
    [Space(15)]
    [Header("UI Setting")]
    public Sprite Icon;
    public Sprite ParametrIcon;
    public string Name;
    public Color32 BackGroundColor;
    
    public bool isPayed;
    [HideInInspector]public float ParametrValue;

    public virtual void TryBuyRocketPart(){
        
    }

    


}
