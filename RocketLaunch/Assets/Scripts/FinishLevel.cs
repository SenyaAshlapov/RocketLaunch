using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishLevel : MonoBehaviour
{
    [SerializeField]private GameObject _succcesFinish;
    [SerializeField]private GameObject _failFinish;

    [SerializeField]private GameObject _UI;
    [SerializeField]private GameObject _loadScreen;

    [SerializeField]private AudioSource _failSound;
    [SerializeField]private AudioSource _succesSound;
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

    
    private void missionSucsces() {
        _succcesFinish.SetActive(true);
        _succesSound.Play();
    } 
    private void missionFail() {
        _failFinish.SetActive(true);
        _failSound.Play();
    }

    public void restartLevel(){
        _UI.SetActive(false);
        _loadScreen.SetActive(true);
        SceneManager.LoadScene(SceneManager.GetActiveScene().name,  LoadSceneMode.Single);
    }

    public void backToMenu(){
        _UI.SetActive(false);
        _loadScreen.SetActive(true);
        SceneManager.LoadScene("menu",  LoadSceneMode.Single);
    }
}
