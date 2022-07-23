using UnityEngine;
using UnityEngine.UI;

public class MissionInformationWindow : MonoBehaviour
{
    [SerializeField]private Text _name;
    [SerializeField]private Text _description;
    [SerializeField]private Text _budget;

    public void ShowInformation(string name, string description, float budget){
        _name.text = name;
        _description.text = description;
        _budget.text = budget.ToString();
    }
}
