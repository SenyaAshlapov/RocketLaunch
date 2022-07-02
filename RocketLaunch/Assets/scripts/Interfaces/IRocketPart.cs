using UnityEngine;
using UnityEngine.UI;

public interface IRocketPart 
{
    string Name{get;set;}
    GameObject Prefab{get;set;}
    float Price{get;set;}
    float Weight{get;set;}
    Sprite Icon{get;set;}
    Color32 BackGroundColor{get;set;}
}
