using UnityEngine;

public class Engine : MonoBehaviour 
{
    [SerializeField]private Transform EnginePosition;
    private EngineData CurrentEngineData;


    void Start(){
        Events.renderEngine += _renderEngine;
    }
    private void _renderEngine(GameObject prefab){
        foreach(Transform child in EnginePosition){
            Destroy(child.gameObject);
        }
        Instantiate(prefab, EnginePosition);
    }


}
