using UnityEngine;
using UnityEngine.UI;

public class Cell : MonoBehaviour
{
    public delegate void UIevent();
    public UIevent OnClickEvent;

    [SerializeField]private Image _detailIcon;
    [SerializeField]private Image _detaiBackGroung;

    public void InitCell(Sprite iconSprite, Color color){
        _detailIcon.sprite = iconSprite;
        _detaiBackGroung.GetComponent<Image>().color = color;

    }

    public void onClick(){
        OnClickEvent();
    }


}
