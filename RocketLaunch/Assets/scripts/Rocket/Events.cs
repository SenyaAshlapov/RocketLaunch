using UnityEngine;

public class Events 
{
    public delegate void engineEvent(EngineData engine);
    public delegate void renderEvent(GameObject prefab);

    public static renderEvent renderEngine;


}
