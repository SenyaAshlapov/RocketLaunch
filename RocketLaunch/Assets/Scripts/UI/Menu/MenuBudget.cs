using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class MenuBudget : MonoBehaviour
{

    [SerializeField]private TMP_Text _budget;
    private void Awake() {
        Events.UpdateBudgetOnMenuUI += updateBudget;
        updateBudget(LevelSaverLoader.LoadBudget());
    }

    private void updateBudget(float budget) => _budget.text = budget.ToString();
}
