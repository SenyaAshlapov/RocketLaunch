using UnityEngine;
using TMPro;

public class Monye : MonoBehaviour
{

    [SerializeField]private TMP_Text _budget;
    [SerializeField]private GameObject _moneyUI;

    private void Awake() {
        Events.UpdateBudgetUI += updateBudget;
        Events.ShowLaunchUI += hideMoneyUI;
    }

    private void OnDestroy() {
        Events.UpdateBudgetUI -= updateBudget;
        Events.ShowLaunchUI -= hideMoneyUI;
    }

    void updateBudget(float nuewBudget){
        _budget.text =  nuewBudget.ToString();
    }

    private void hideMoneyUI() => _moneyUI.SetActive(false);





}
