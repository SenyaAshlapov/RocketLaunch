using System.Threading;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelMenu : MonoBehaviour
{
    [SerializeField]private List<LevelData> _levels = new List<LevelData>();
    [SerializeField]private LevelCell _cellPrefab;
    [SerializeField]private Transform _container;

    [SerializeField]private MissionInformationWindow _informationWindow;
    [SerializeField]private GameObject _levelMenuWindow;

    private void Awake() 
    {
        Events.UpdateBaseRang += initLevelList;
    }
    void Start() =>  initLevelList();

    private void OnDestroy() {
        Events.UpdateBaseRang -= initLevelList;
    }

    private void initLevelList()
    {
        int count = LevelSaverLoader.LoadLevels();

        int rang = LevelSaverLoader.LoadBaseRang();

        foreach(Transform child in _container){
            Destroy(child.gameObject);
        }

        foreach(LevelData level in _levels){
            bool active = true;
            if(level.LevelID > count)
                active = false;
            if(level.LevelRang <= rang){
                var cell = Instantiate(_cellPrefab,_container);
                cell.InitLevelCell(level, active, _informationWindow);
            }
            
                
        }
    }

    private void OnMouseDown() {
        showLevelMenu();
        Events.ShowMissionsStore?.Invoke();
    }

    private void showLevelMenu() => _levelMenuWindow.SetActive(true);
    public void HideLevelMenu() {
        _levelMenuWindow.SetActive(false);
        Events.ShowBase?.Invoke();
    } 
}
