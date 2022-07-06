using UnityEngine;

public class Deflector : RocketPart
{
    public static DeflectorData _currentDeflector;
    [SerializeField]private DeflectorData _startDeflector;

    void Start(){
        Events.PreviewDeflectorEvent += previewPart;
        Events.UpdateDeflectorEvent += updateDeflector;
        Events.HideStore += backToCurrentPart;

        updateDeflector(_startDeflector);
    }
    public void updateDeflector(DeflectorData newDeflector){
        _currentDeflector = newDeflector;
        renderPart(_currentDeflector.Prefab);
        Events.UpdateResistance?.Invoke(_currentDeflector.Resistance);
    }

    private void backToCurrentPart()
    {
        renderPart(_currentDeflector.Prefab);  
    } 
}
