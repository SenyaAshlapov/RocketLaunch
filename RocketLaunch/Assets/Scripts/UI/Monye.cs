using UnityEngine;
using TMPro;

public class Monye : MonoBehaviour
{

    [SerializeField]private TMP_Text _budget;
    [SerializeField]private GameObject _moneyUI;

    void Start(){
        Events.UpdateBudgetUI += updateBudget;
        Events.LaunchRocket += hideMoneyUI;
        updateBudget(Level.LevelBudget);
    }

    void updateBudget(float nuewBudget){
        _budget.text = "Budget: " + nuewBudget.ToString();
    }

    private void hideMoneyUI() => _moneyUI.SetActive(false);





}
