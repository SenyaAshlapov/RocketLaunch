using UnityEngine;

public class RocketPart : MonoBehaviour
{
    [SerializeField]private Transform _partPosition;

    public void previewPart(GameObject part) 
    {
        renderPart(part);
    } 

    public void renderPart(GameObject part)
    {
        foreach(Transform child in _partPosition){
            Destroy(child.gameObject);
        }
        Instantiate(part, _partPosition);
    }

}
