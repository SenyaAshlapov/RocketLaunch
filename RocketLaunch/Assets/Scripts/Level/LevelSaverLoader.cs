
using UnityEngine;

public class LevelSaverLoader 
{
    public static string SAVES_KEY = "LevelsCounted";
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
    }




}
