using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rocket : MonoBehaviour
{
    public static Rocket InstanceRocket{ get; private set;}
    [Header("Start parts")]
    public EngineData StartEngineData;

    private float _rocketThrust;
    private float _rocketPulse;
    private float _rocketResistance;
    private float _rocketControl;

    [SerializeField]private float _rocketWeight;
    [SerializeField]private float _rocketTotalPrice;

    private DeflectorData _currentDeflector;
    private TankData _currentTank;
    private PlumageData _currentPlumage;
    private EngineData _currentEngine;


    private void Awake(){
        if(InstanceRocket != null && InstanceRocket != this){
            Destroy(this);
        }
        else{
            InstanceRocket = this;
        }
    }

    void Start(){
        _selectEngine(StartEngineData);
    }

    private void _selectEngine(EngineData newEngine){
        if(_currentEngine != null)
        {
            _rocketWeight -= _currentEngine.Weight;
            _rocketTotalPrice -= _currentEngine.Price;
        }

        _currentEngine = newEngine;

        _rocketWeight += _currentEngine.Weight;
        _rocketTotalPrice += _currentEngine.Price;   

        Events.renderEngine?.Invoke(_currentEngine.Prefab);  
    }
}
