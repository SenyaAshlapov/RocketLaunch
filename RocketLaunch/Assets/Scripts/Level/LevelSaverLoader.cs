
using UnityEngine;

public class LevelSaverLoader 
{
    public static string SAVES_KEY = "LevelsCounted";
    public static string SAVE_CURRENT_LEVEL_KEY = "CurrentLevel";
    public static string SAVE_BASE_RANG_KEY = "BaseRang";
    public static string SAVE_BUDGET_KEY = "Budget";

    public static void SaveLevel(int level)
    {
        if(PlayerPrefs.HasKey(SAVES_KEY))
        {
            int savedLevel =  PlayerPrefs.GetInt(SAVES_KEY);
            if(savedLevel == level)
            {
                PlayerPrefs.SetInt(SAVES_KEY, savedLevel+1);
                Debug.Log("Save sucsesfull");
            }
            else{
                Debug.Log("we coplete this level yet");
            }
        }
        else
        {
            PlayerPrefs.SetInt(SAVES_KEY, 2);
            Debug.Log("Save sucsesfull");
        }
        
    }
    public static int LoadLevels(){       
        if(PlayerPrefs.HasKey(SAVES_KEY))
        {
            return PlayerPrefs.GetInt(SAVES_KEY);
        }
        else
        {
            PlayerPrefs.SetInt(SAVES_KEY, 1);
            return 1;
        }
    }

    public static void Reset(){
        PlayerPrefs.SetInt(SAVES_KEY,1);
        PlayerPrefs.SetInt(SAVE_BASE_RANG_KEY,0);
        PlayerPrefs.SetInt(SAVE_BUDGET_KEY,0);
        PlayerPrefs.SetInt(SAVE_CURRENT_LEVEL_KEY,1);
    }

    public static void SaveBaseRang(int rang){      
        PlayerPrefs.SetInt(SAVE_BASE_RANG_KEY, rang);
    }
    public static int LoadBaseRang(){
        if(PlayerPrefs.HasKey(SAVE_BASE_RANG_KEY))
        {
            return PlayerPrefs.GetInt(SAVE_BASE_RANG_KEY);
        }
        else
        {
            PlayerPrefs.SetInt(SAVE_BASE_RANG_KEY,0);
            return 0;
        }
    }

    public static void SaveBudget(int budget)
    {
        PlayerPrefs.SetInt(SAVE_BUDGET_KEY, budget);
    }
    public static int LoadBudget(){
        if(PlayerPrefs.HasKey(SAVE_BUDGET_KEY))
        {
            return PlayerPrefs.GetInt(SAVE_BUDGET_KEY);
        }
        else
        {
            PlayerPrefs.SetInt(SAVE_BUDGET_KEY,0);
            return 0;
        }
    }

    public static void SaveCurrentLevel(int level){
        PlayerPrefs.SetInt(SAVE_CURRENT_LEVEL_KEY, level);
    }

    public static int LoadCurrentLevel(){
        if(PlayerPrefs.HasKey(SAVE_CURRENT_LEVEL_KEY)){
            return PlayerPrefs.GetInt(SAVE_CURRENT_LEVEL_KEY);
        }
        else{
            return 1;
        }        
    }


}
