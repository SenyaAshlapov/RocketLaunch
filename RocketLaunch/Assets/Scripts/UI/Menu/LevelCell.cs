using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class LevelCell : MonoBehaviour
{
    private delegate void cellDelegate();
    private cellDelegate onClick = null;

    [SerializeField]private Text _cellLevelNumber;
    [SerializeField]private Text _cellBudget;
    [SerializeField]private Text _cellCodeName;


    [SerializeField]private MissionInformationWindow _missionInformationWindow; 
    private int _levelID;
    private LevelData _thisLevel;


    public void InitLevelCell(LevelData levelData, bool isActive, MissionInformationWindow infoWindow)
    {
        _levelID = levelData.LevelID;

        _thisLevel = levelData;
        _missionInformationWindow = infoWindow;

        _cellLevelNumber.text = levelData.LevelID.ToString(); 
        _cellCodeName.text = levelData.LevelCodeName;
        _cellBudget.text = levelData.Budget.ToString();

        if(isActive == true){
            onClick = loadLevel;
        }           
    }

    public void showMissionInformationWindow()
    {
        _missionInformationWindow.gameObject.SetActive(true);
        _missionInformationWindow.ShowInformation(_thisLevel.LevelCodeName.ToString(), _thisLevel.LevelDescription.ToString(), _thisLevel.Budget);

    }

    public void hideMissionInformationWindow()
    {
        _missionInformationWindow.gameObject.SetActive(false);
    }

    public void OnClick() => onClick();

    private void loadLevel(){
        LevelSaverLoader.SaveCurrentLevel(_levelID);
        SceneManager.LoadScene("Level");
    }

    
}
