using UnityEngine;

public class Tank : RocketPart
{
    public static TankData _currentTank;
    [SerializeField]private TankData _startTank;

    void Start(){
        Events.PreviewTankEvent += previewPart;
        Events.UpdateTankEvent += updateTank;
        Events.HideStore += backToCurrentPart;

        updateTank(_startTank);
    }
    public void updateTank(TankData newTank){
        _currentTank = newTank;
        renderPart(_currentTank.Prefab);
        Events.UpdateSpecificImpulse?.Invoke(_currentTank.SpecificImpulse);
    }

    private void backToCurrentPart()
    {
        renderPart(_currentTank.Prefab);  
    }
}
