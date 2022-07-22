using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishLevel : MonoBehaviour
{
    [SerializeField]private GameObject _sucscesFinish;
    [SerializeField]private GameObject _failFinish;
    void Start()
    {
        Events.LevelComplete += missionSucsces;
        Events.DestroyRocket += missionFail;
    }
    void OnDestroy()
    {
        Events.LevelComplete -= missionSucsces;
        Events.DestroyRocket -= missionFail;
    }

    
    private void missionSucsces() => _sucscesFinish.SetActive(true);
    private void missionFail() => _failFinish.SetActive(true);

    public void restartLevel(){
        SceneManager.LoadScene(SceneManager.GetActiveScene().name,  LoadSceneMode.Single);
    }

    public void backToMenu(){
        SceneManager.LoadScene("menu",  LoadSceneMode.Single);
    }
}
