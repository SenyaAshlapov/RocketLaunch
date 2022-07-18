using System.Reflection;
using System;
using System.Collections.Generic;
using UnityEngine;

public class Store : MonoBehaviour
{
    [Header("Stores lists")]
    [SerializeField]private List<RocketPartData> _engineStoreList = new List<RocketPartData>();
    [SerializeField]private List<RocketPartData> _plumageStoreList = new List<RocketPartData>();
    [SerializeField]private List<RocketPartData> _tankStoreList = new List<RocketPartData>();
    [SerializeField]private List<RocketPartData> _deflectorStoreList = new List<RocketPartData>();
    [Space(25)]


    [SerializeField]private Transform _storeView;
    [SerializeField]private GameObject _store;
    [SerializeField]private GameObject _launchButton;
    [SerializeField]private GameObject _storeBar;
    [SerializeField]private Cell _cellPrefab;

    void Start(){
        Events.SelectEngineStore += initEngineStore;
        Events.SelectDeflectorStore += initDeflectorStore;
        Events.SelectTankStore += initTankStore;
        Events.SelectPlumageStore += initPlumageStore;
        Events.HideStore += hideStores;
        Events.LaunchRocket += hideAllStoreUI;
    }

    private void initEngineStore() => initStore(_engineStoreList);
    private void initDeflectorStore() => initStore(_deflectorStoreList);
    private void initTankStore() => initStore(_tankStoreList);
    private void initPlumageStore() => initStore(_plumageStoreList);

    private void initStore(List<RocketPartData> partData){

        _store.SetActive(true);
        _launchButton.SetActive(false);

        foreach(Transform child in _storeView){
            Destroy(child.gameObject);
        }

        foreach(RocketPartData data in partData){
            var cell = Instantiate(_cellPrefab, _storeView);
            cell.InitCell(data.Icon,data.ParametrIcon, data.BackGroundColor, data.Name, data.Price, data.ParametrValue);
            cell.OnClickFunction = data.TryBuyRocketPart;
        }
    }
    private void hideStores(){
        _store.SetActive(false);
        _launchButton.SetActive(true);
    }
    private void hideAllStoreUI(){
        _launchButton.SetActive(false);
        _store.SetActive(false);
        _storeBar.SetActive(false);
    }

    
}
