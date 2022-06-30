using UnityEngine;

[CreateAssetMenu(fileName = "Engine", menuName = "RocketLaunch/Engine", order = 0)]
public class Engine : ScriptableObject
{

    public GameObject EnginePrefab;
    public float Price;
    public Color BackGroundColor;
    public void InitEngine(){
        Events.InitEngine?.Invoke(EnginePrefab);
        Events.UpdatePrice?.Invoke(Price);
    }
}
