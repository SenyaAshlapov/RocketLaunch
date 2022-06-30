using UnityEngine;

public class Rocket : MonoBehaviour
{
    [HideInInspector]public float Weight;
    [HideInInspector]public float Resistance;
    [HideInInspector]public float Pulse;
    [HideInInspector]public float Thrust;

    private Plumage _currentPlumage;
    private Engine _currentEngine;
    private Tank _currentTank;
    private Deflector _currentDeflector;



    void Start()
    {
    }

}
