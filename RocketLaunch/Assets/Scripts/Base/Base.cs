using System.Collections.Generic;
using UnityEngine;

public class Base : MonoBehaviour
{
    private int _baseRang = 1;

    [SerializeField]private List<BaseData> _basesList = new List<BaseData>();
    [SerializeField]private Transform _basePosition;

    private void Awake() {
        Events.UpdateBaseRang += renedrBase;
    }

    private void OnDestroy() {
        Events.UpdateBaseRang -= renedrBase;
    }
    private void Start() {        
        renedrBase();
    }

    private void renedrBase(){
        _baseRang = LevelSaverLoader.LoadBaseRang();

        foreach(BaseData data in _basesList){
            if(data.BaseRang == _baseRang){
                 Instantiate(data.BasePrefab, _basePosition);
            }
        }       
    }
}
