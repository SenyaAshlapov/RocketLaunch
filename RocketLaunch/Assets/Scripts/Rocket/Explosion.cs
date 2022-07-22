using UnityEngine;

public class Explosion : MonoBehaviour
{
    [SerializeField]private GameObject _explosion;
    private void Awake()
    {
        Events.DestroyRocket += renderExplosion;
    }
    private void OnDestroy() {
        Events.DestroyRocket -= renderExplosion;
    }

    private void renderExplosion() => _explosion.SetActive(true);


    
}
