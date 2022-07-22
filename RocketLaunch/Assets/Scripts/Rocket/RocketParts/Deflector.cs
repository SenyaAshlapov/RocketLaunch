using UnityEngine;

public class Deflector : RocketPart
{
    public static DeflectorData _currentDeflector;
    [SerializeField]private DeflectorData _startDeflector;

    private void Awake() {
        Events.PreviewDeflectorEvent += previewPart;
        Events.UpdateDeflectorEvent += updateDeflector;
        Events.HideStore += backToCurrentPart;
    }
    
    private void Start() => updateDeflector(_startDeflector);

    private void OnDestroy() {
        Events.PreviewDeflectorEvent -= previewPart;
        Events.UpdateDeflectorEvent -= updateDeflector;
        Events.HideStore -= backToCurrentPart;
    }
    public void updateDeflector(DeflectorData newDeflector){
        _currentDeflector = newDeflector;
        
        renderPart(_currentDeflector.Prefab);
        Events.UpdateResistance?.Invoke(_currentDeflector.Resistance);
        Events.UpdateWeight?.Invoke(Rocket.RocketWeigt);
    }

    private void backToCurrentPart()
    {
        renderPart(_currentDeflector.Prefab);  
    } 
}
