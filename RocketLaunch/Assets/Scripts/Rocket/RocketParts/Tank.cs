using UnityEngine;

public class Tank : RocketPart
{
    public static TankData _currentTank;
    [SerializeField]private TankData _startTank;

    private void Awake() {
        Events.PreviewTankEvent += previewPart;
        Events.UpdateTankEvent += updateTank;
        Events.HideStore += backToCurrentPart;
    }

    private void Start() => updateTank(_startTank);

    private void OnDestroy() {
        Events.PreviewTankEvent -= previewPart;
        Events.UpdateTankEvent -= updateTank;
        Events.HideStore -= backToCurrentPart;
    }
    
    public void updateTank(TankData newTank){
        _currentTank = newTank;
        renderPart(_currentTank.Prefab);
        Events.UpdateSpecificImpulse?.Invoke(_currentTank.SpecificImpulse);
        Events.UpdateWeight?.Invoke(Rocket.RocketWeigt);
    }

    private void backToCurrentPart()
    {
        renderPart(_currentTank.Prefab);  
    }
}
