using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Store : MonoBehaviour
{

    [SerializeField]private Transform _storeContainer;
    [SerializeField]private Cell _cellPrefab;


    [Space(25)]
    [Header("Stores")]

    [SerializeField]private List<Engine> _engineStore = new List<Engine>();
    [SerializeField]private List<Tank> _tankStore = new List<Tank>();
    [SerializeField]private List<Deflector> _deflectorStore = new List<Deflector>();
    [SerializeField]private List<Plumage> _plumaageStore = new List<Plumage>();


    public void InitEngineStore(){
        foreach(Transform child in _storeContainer){
            Destroy(child.gameObject);
        }
        foreach(Engine engine in _engineStore){
            var cell = Instantiate(_cellPrefab, _storeContainer);
            cell.OnClickEvent = engine.InitEngine;

        }
    }
}
