using UnityEngine;

public class RocketPart : MonoBehaviour
{
    [SerializeField]private Transform _partPosition;
    [SerializeField]private float _explosionForce;

    public GameObject _partModel;

    void Awake(){
        Events.DestroyRocket += explosion;
    }
    public void previewPart(GameObject part) 
    {
        renderPart(part);
    } 

    public void renderPart(GameObject part)
    {
        foreach(Transform child in _partPosition){
            Destroy(child.gameObject);
        }
        _partModel = Instantiate(part, _partPosition);
    }

    private void explosion(){
        Vector3 explosionDirection = new Vector3(Random.Range(0f, _explosionForce), Random.Range(0f, _explosionForce), Random.Range(0f, _explosionForce));
        Rigidbody rigidBody = _partModel.AddComponent<Rigidbody>();
        rigidBody.AddForce(explosionDirection,ForceMode.Impulse);
    }

}
