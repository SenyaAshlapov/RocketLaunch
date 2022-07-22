using System.Reflection;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Store : MonoBehaviour
{
    [Header("Stores lists")]
    [SerializeField]private List<RocketPartData> _engineStoreList = new List<RocketPartData>();
    [SerializeField]private List<RocketPartData> _plumageStoreList = new List<RocketPartData>();
    [SerializeField]private List<RocketPartData> _tankStoreList = new List<RocketPartData>();
    [SerializeField]private List<RocketPartData> _deflectorStoreList = new List<RocketPartData>();
    [Space(25)]

    [Header("Stores settings")]
    [SerializeField]private Transform _storeView;
    [SerializeField]private GameObject _store;
    [SerializeField]private GameObject _launchButton;
    [SerializeField]private GameObject _storeBar;
    [SerializeField]private Cell _cellPrefab;

    [Header("Parametrs icons")]
    [SerializeField]private Sprite _resistanceSprite;
    [SerializeField]private Sprite _impulseSprite;
    [SerializeField]private Sprite _controlSprite;

    [SerializeField]private Sprite _thrustSprite;
    private Sprite parametrIcon;

    private void OnDestroy()
    {
        Events.HideStore -= hideStores;
        Events.HideStoreUI -= hideAllStoreUI;
    }

    private void initEngineStore() 
    {
        initStore(_engineStoreList);
        Events.SelectEngineStore?.Invoke();
    }
    private void initDeflectorStore()
    {
        initStore(_deflectorStoreList);
        Events.SelectDeflectorStore?.Invoke();
    }
    private void initTankStore()
    {
        initStore(_tankStoreList);
        Events.SelectTankStore?.Invoke();
    }   
    private void initPlumageStore() 
    {
        initStore(_plumageStoreList);
        Events.SelectPlumageStore?.Invoke();
    }

    private void initStore(List<RocketPartData> partData)
    {
        if(_store != null & _launchButton != null){
            _store.SetActive(true);
            _launchButton.SetActive(false);

            foreach(Transform child in _storeView)
            {
                Destroy(child.gameObject);
            }

            foreach(RocketPartData data in partData)
            {
                

                if(data.Parametr == RocketPartData.Parametrs.Deflector)
                {
                    parametrIcon = _resistanceSprite;
                }
                else if(data.Parametr == RocketPartData.Parametrs.Tank)
                {
                    parametrIcon = _impulseSprite;
                }
                else if(data.Parametr == RocketPartData.Parametrs.Plumage)
                {
                    parametrIcon = _controlSprite;
                }
                else if(data.Parametr == RocketPartData.Parametrs.Engine)
                {
                    parametrIcon = _thrustSprite;
                }

                var cell = Instantiate(_cellPrefab, _storeView);
                cell.InitCell(
                    data.Icon,
                    parametrIcon, 
                    data.BackGroundColor, 
                    data.Name, data.Price, 
                    data.ReturnParametr(),
                    data.Weight);
                cell.OnClickFunction = data.TryBuyRocketPart;
            }
        }
        
    }
    public void hideStores()
    {        
        _store.SetActive(false);
        _launchButton.SetActive(true);
    }
    public void hideAllStoreUI()
    {        
        _launchButton.SetActive(false);
        _store.SetActive(false);
        _storeBar.SetActive(false);        
    }

    public void SubscribeStoreToPreparationEvents(){
        Events.HideStore += hideStores;
        Events.HideStoreUI += hideAllStoreUI;
    }

    public void UnSubscribeStoreToPreparationEvents(){
        Events.HideStore -= hideStores;
        Events.HideStoreUI -= hideAllStoreUI;
    }

    
}
