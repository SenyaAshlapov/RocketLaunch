using UnityEngine;
using UnityEngine.UI;


public class Cell : MonoBehaviour
{
    public delegate void CellDelegate();
    public CellDelegate OnClickFunction;
    [SerializeField]private Image _icon;
    [SerializeField]private Image _backGround;
    [SerializeField]private Text _name;
    [SerializeField]private Text _price;
    public bool IsPayed;

    public void InitCell(
        Sprite icon,
        Color32 backGroundColor,
        string name,
        float price)
    {
        _icon.sprite = icon;
        //и так далее
    }

    public void OnClick()
    {
        OnClickFunction();
    }
        
    

}
