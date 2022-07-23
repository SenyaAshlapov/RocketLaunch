using UnityEngine;

public class FinishState : IState
{
    public void EnterState(Rocket rocket,Store store){
        Debug.Log("Finish enter");
        LevelSaverLoader.SaveBudget(LevelSaverLoader.LoadBudget() + (int)Level.LevelBudget);
    }
    public void LogicState(Rocket rocket,Store store){
        Debug.Log("Finish looping");
    }
    public void ExitState(Rocket rocket,Store store){
        Debug.Log("Finish exit");
    }
}
