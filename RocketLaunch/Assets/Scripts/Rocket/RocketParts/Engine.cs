using System;
using System.Diagnostics;
using UnityEngine;

public class Engine : RocketPart
{
    public static EngineData _currentEngine;
    [SerializeField]private EngineData _startEngine;

    private void Awake() {
        Events.PreviewEngineEvent += previewPart;
        Events.UpdateEngineEvent += updateEngine;
        Events.HideStore += backToCurrentPart;
    }

    private void Start() => updateEngine(_startEngine);

    private void OnDestroy() {
        Events.PreviewEngineEvent -= previewPart;
        Events.UpdateEngineEvent -= updateEngine;
        Events.HideStore -= backToCurrentPart;
    }
    
    public void updateEngine(EngineData newEngine){
        _currentEngine = newEngine;
        renderPart(_currentEngine.Prefab);
        Events.UpdateThrust?.Invoke(_currentEngine.Thrust);
        Events.UpdateWeight?.Invoke(Rocket.RocketWeigt);
    }

    private void backToCurrentPart()
    {
        renderPart(_currentEngine.Prefab);  
    }    

    void OnMouseDown() {
        Events.SelectEngineStore?.Invoke();
    }

}
