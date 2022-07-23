using UnityEngine;

public interface IState 
{
    void EnterState(Rocket rocket,Store store);
    void LogicState(Rocket rocket,Store store);
    void ExitState(Rocket rocket,Store store);
}
