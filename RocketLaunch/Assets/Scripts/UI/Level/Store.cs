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
    [SerializeField]private GameObject _launch;
    [SerializeField]private GameObject _storeBar;
    [SerializeField]private Cell _cell;

    void Start(){
        Events.SelectEngineStore += initEngineStore;
        Events.SelectDeflectorStore += initDeflectorStore;
        Events.SelectTankStore += initTankStore;
        Events.SelectPlumageStore += initPlumageStore;
        Events.HideStore += hideStores;
        Events.LaunchRocket += hideAllStoreUI;
    }

   private void initEngineStore()
   {
        _store.SetActive(true);
        _launch.SetActive(false);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }
        foreach(EngineData engine in _engineStoreList){
            var cell = Instantiate(_cell, _storeView);

            cell.InitCell(engine.Icon,engine.ParametrIcon, engine.BackGroundColor, engine.Name, engine.Price, engine.Thrust);
            cell.OnClickFunction = engine.TryBuyEngine;
        }
    }

    private void initDeflectorStore()
    {
        _store.SetActive(true);
        _launch.SetActive(false);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }
        foreach(DeflectorData deflector in _deflectorStoreList){
            var cell = Instantiate(_cell, _storeView);

            cell.InitCell(deflector.Icon,deflector.ParametrIcon, deflector.BackGroundColor, deflector.Name, deflector.Price, deflector.Resistance);
            cell.OnClickFunction = deflector.TryBuyDeflector;
        }
    }

    private void initTankStore()
    {
        _store.SetActive(true);
        _launch.SetActive(false);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }
        foreach(TankData tank in _tankStoreList){
            var cell = Instantiate(_cell, _storeView);

            cell.InitCell(tank.Icon,tank.ParametrIcon, tank.BackGroundColor, tank.Name, tank.Price, tank.SpecificImpulse);
            cell.OnClickFunction = tank.TryBuyTank;
        }
    }

    private void initPlumageStore()
    {
        _store.SetActive(true);
        _launch.SetActive(false);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }
        foreach(PlumageData plumage in _plumageStoreList){
            var cell = Instantiate(_cell, _storeView);

            cell.InitCell(plumage.Icon,plumage.ParametrIcon, plumage.BackGroundColor, plumage.Name, plumage.Price, plumage.Contorol);
            cell.OnClickFunction = plumage.TryBuyPlumage;
        }
    }

    private void hideStores(){
        _store.SetActive(false);
        _launch.SetActive(true);
    }

    private void hideAllStoreUI(){
        _launch.SetActive(false);
        _store.SetActive(false);
        _storeBar.SetActive(false);
    }

}
