using UnityEngine;
using UnityEngine.UI;


public class Cell : MonoBehaviour
{
    public delegate void CellDelegate();
    public CellDelegate OnClickFunction;
    [SerializeField]private Image _icon;
    [SerializeField]private Image _parametrIcon;
    [SerializeField]private Image _backGround;
    [SerializeField]private Text _name;
    [SerializeField]private Text _price;
    [SerializeField]private Text _parametrValue;
    
    public bool IsPayed;

    public void InitCell(
        Sprite icon,
        Sprite parametrIcon,
        Color32 backGroundColor,
        string name,
        float price,
        float parametrValue)
        
    {
        _icon.sprite = icon;
        _parametrIcon.sprite = parametrIcon;

        _name.text = name;
        _price.text = price.ToString();
        _parametrValue.text = parametrValue.ToString();
        _backGround.color = backGroundColor;
    }

    public void OnClick()
    {
        OnClickFunction();
    }


        
    

}
