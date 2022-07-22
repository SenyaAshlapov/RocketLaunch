using UnityEngine;
using UnityEngine.UI;
public class RocketPartData : ScriptableObject {

    public enum Parametrs
    {
        Deflector,
        Tank,
        Plumage,
        Engine

    };

    public Parametrs Parametr;
    [Header("Main Setting")]
    public GameObject Prefab;
    public float Weight;
    public float Price;
    [Space(15)]
    [Header("UI Setting")]
    public Sprite Icon;
    public string Name;
    public Color32 BackGroundColor;

    public virtual void TryBuyRocketPart(){
        
    }

    public virtual float ReturnParametr(){
        return(0);
    }


    


}
