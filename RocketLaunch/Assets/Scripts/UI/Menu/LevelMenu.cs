using System.Threading;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelMenu : MonoBehaviour
{
    [SerializeField]private List<LevelData> _levels = new List<LevelData>();
    [SerializeField]private LevelCell _cellPrefab;
    [SerializeField]private Transform _container;

    void Start()
    {
        int count = LevelSaverLoader.LoadLevels();
        Debug.Log(count);

        foreach(Transform child in _container){
            Destroy(child.gameObject);
        }

        foreach(LevelData level in _levels){
            bool active = true;
            if(level.LevelID > count)
                active = false;
            
            var cell = Instantiate(_cellPrefab,_container);
            cell.InitLevelCell(level.LevelID, active);
                
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
