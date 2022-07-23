using System.Threading;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class BaseStore : MonoBehaviour
{
    [SerializeField]private List<BaseData> _basesList = new List<BaseData>();
    [SerializeField]private GameObject _basesStore;
    [Header("UI settings")]
    [SerializeField]private TMP_Text _nextBaseName;
    [SerializeField]private TMP_Text _nextBaseDescription;
    [SerializeField]private TMP_Text _nextBasePrice;
    [SerializeField]private Image _nextBaseIcon;
    [SerializeField]private Image _nextBaseBackgroundImage;

    private BaseData _nextBase;
    ////потом удалить
    private void Update() {
        if (Input.GetKey(KeyCode.P)){
            LevelSaverLoader.Reset();
        }
    }
    private void Start() {
        initStore();
    }


    private void initStore(){
        _nextBase = _basesList[LevelSaverLoader.LoadBaseRang() + 1];

        _nextBaseIcon.sprite = _nextBase.BaseIcon;
        _nextBaseBackgroundImage.color = _nextBase.BaseUIColor;

        _nextBasePrice.text = _nextBase.BasePrice.ToString();
        _nextBaseName.text = _nextBase.BaseName;
        _nextBaseDescription.text = _nextBase.BaseDescription;
    }

    public void UpdateBase(){
        if(LevelSaverLoader.LoadBudget() >= _nextBase.BasePrice){
            LevelSaverLoader.SaveBudget(LevelSaverLoader.LoadBudget() - _nextBase.BasePrice);
            LevelSaverLoader.SaveBaseRang(LevelSaverLoader.LoadBaseRang() + 1);
            initStore();            

            Events.UpdateBaseRang?.Invoke();
            Events.UpdateBudgetOnMenuUI?.Invoke(LevelSaverLoader.LoadBudget());
        }
    }

    private void showBaseStore() => _basesStore.SetActive(true);

    private void hideBaseStore() => _basesStore.SetActive(false);
}
