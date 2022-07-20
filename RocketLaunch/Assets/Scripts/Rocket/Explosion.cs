using UnityEngine;

public class Explosion : MonoBehaviour
{
    [SerializeField]private GameObject _explosion;
    void Awake()
    {
        Events.DestroyRocket += renderExplosion;
    }

    private void renderExplosion() => _explosion.SetActive(true);


    
}
