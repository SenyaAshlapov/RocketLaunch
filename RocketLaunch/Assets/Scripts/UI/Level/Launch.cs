using UnityEngine;

public class Launch : MonoBehaviour
{

    public void onClick() => Events.LaunchRocket?.Invoke();
}
