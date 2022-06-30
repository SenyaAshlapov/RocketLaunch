using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Events : MonoBehaviour
{
    public delegate void RocketEvent(GameObject obj);
    public delegate void UIEvents(float value);
  

    public static RocketEvent InitEngine;
    public static RocketEvent InitTank;
    public static RocketEvent InitDeflector;
    public static RocketEvent InitPlumage;

    public static RocketEvent SelectEngine;
    public static RocketEvent SelectTank;
    public static RocketEvent SelectDeflector;
    public static RocketEvent SelectPlumage;


    public static UIEvents UpdatePrice;
    public static UIEvents UpdareMoney;

}
