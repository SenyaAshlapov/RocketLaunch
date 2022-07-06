using System.Reflection;
using System;
using System.Collections.Generic;
using UnityEngine;

public class Store : MonoBehaviour
{
    [Header("Stores lists")]
    [SerializeField]private List<EngineData> _engineStoreList = new List<EngineData>();
    [SerializeField]private List<PlumageData> _plumageStoreList = new List<PlumageData>();
    [SerializeField]private List<TankData> _tankStoreList = new List<TankData>();
    [SerializeField]private List<DeflectorData> _deflectorStoreList = new List<DeflectorData>();
    [Space(25)]

    [SerializeField]private Transform _storeView;
    [SerializeField]private GameObject _store;
    [SerializeField]private Cell _cell;

    void Start(){
        Events.SelectEngineStore += initEngineStore;
        Events.SelectDeflectorStore += initDeflectorStore;
        Events.SelectTankStore += initTankStore;
        Events.SelectPlumageStore += initPlumageStore;
    }

   public void initEngineStore()
   {
        _store.SetActive(true);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }
        foreach(EngineData engine in _engineStoreList){
            var cell = Instantiate(_cell, _storeView);

            cell.InitCell(engine.Icon,engine.BackGroundColor, engine.Name, engine.Price);
            cell.OnClickFunction = engine.TryBuyEngine;
        }
    }

    public void initDeflectorStore()
    {
        _store.SetActive(true);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }
        foreach(DeflectorData deflector in _deflectorStoreList){
            var cell = Instantiate(_cell, _storeView);

            cell.InitCell(deflector.Icon, deflector.BackGroundColor, deflector.Name, deflector.Price);
            cell.OnClickFunction = deflector.TryBuyDeflector;
        }
    }

    public void initTankStore()
    {
        _store.SetActive(true);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }
        foreach(TankData tank in _tankStoreList){
            var cell = Instantiate(_cell, _storeView);

            cell.InitCell(tank.Icon, tank.BackGroundColor, tank.Name, tank.Price);
            cell.OnClickFunction = tank.TryBuyTank;
        }
    }

    public void initPlumageStore()
    {
        _store.SetActive(true);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }
        foreach(PlumageData plumage in _plumageStoreList){
            var cell = Instantiate(_cell, _storeView);

            cell.InitCell(plumage.Icon, plumage.BackGroundColor, plumage.Name, plumage.Price);
            cell.OnClickFunction = plumage.TryBuyPlumage;
        }
    }


}
