using System;
using System.Diagnostics;
using UnityEngine;

public class Engine : RocketPart
{
    public static EngineData _currentEngine;
    [SerializeField]private EngineData _startEngine;

    void Start(){
        Events.PreviewEngineEvent += previewPart;
        Events.UpdateEngineEvent += updateEngine;
        Events.HideStore += backToCurrentPart;

        updateEngine(_startEngine);
    }
    public void updateEngine(EngineData newEngine){
        _currentEngine = newEngine;
        renderPart(_currentEngine.Prefab);
        Events.UpdateThrust?.Invoke(_currentEngine.Thrust);
    }

    private void backToCurrentPart()
    {
        renderPart(_currentEngine.Prefab);  
    }    

    void OnMouseDown() {
        Events.SelectEngineStore?.Invoke();
    }

}
