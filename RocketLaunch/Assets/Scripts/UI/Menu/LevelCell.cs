using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class LevelCell : MonoBehaviour
{
    private delegate void cellDelegate(string lvl);
    private cellDelegate onClick = null;
    [SerializeField]private Text _levelNumber;
    private int _levelID;
    [SerializeField]private bool _isActive;


    public void InitLevelCell(
        int levelID,
        bool isActive)
    {
        _levelID = levelID;
        _levelNumber.text = levelID.ToString();
        if(isActive == true)
            onClick = SceneManager.LoadScene;
    }

    public void OnClick() {
        onClick(_levelID.ToString());
    } 

    
}
