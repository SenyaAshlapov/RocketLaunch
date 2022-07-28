using UnityEngine;

public class Plumage : RocketPart
{
    public static PlumageData _currentPlumage;
    [SerializeField]private PlumageData _startPlumage;

    private void Awake() {
        Events.PreviewPlumageEvent += previewPart;
        Events.UpdatePlumageEvent += updatePlumage;
        Events.HideStore += backToCurrentPart;
    }

    private void Start() => updatePlumage(_startPlumage);

    private void OnDestroy() {
        Events.PreviewPlumageEvent -= previewPart;
        Events.UpdatePlumageEvent -= updatePlumage;
        Events.HideStore -= backToCurrentPart;
    }

    public void updatePlumage(PlumageData newPlumage){
        _currentPlumage = newPlumage;
        renderPart(_currentPlumage.Prefab);
        Events.UpdateControl?.Invoke(_currentPlumage.ReturnParametr());
        Events.UpdateWeight?.Invoke(Rocket.RocketWeigt);
    }

    private void backToCurrentPart()
    {
        renderPart(_currentPlumage.Prefab);  
    }
}
