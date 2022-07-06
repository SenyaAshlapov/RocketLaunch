using UnityEngine;

public class Plumage : RocketPart
{
    public static PlumageData _currentPlumage;
    [SerializeField]private PlumageData _startPlumage;

    void Start(){
        Events.PreviewPlumageEvent += previewPart;
        Events.UpdatePlumageEvent += updatePlumage;
        Events.HideStore += backToCurrentPart;

        updatePlumage(_startPlumage);
    }
    public void updatePlumage(PlumageData newPlumage){
        _currentPlumage = newPlumage;
        renderPart(_currentPlumage.Prefab);
        Events.UpdateControl?.Invoke(_currentPlumage.Contorol);
    }

    private void backToCurrentPart()
    {
        renderPart(_currentPlumage.Prefab);  
    }
}
