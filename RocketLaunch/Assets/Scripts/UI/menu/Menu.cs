using System;
using UnityEngine;
using UnityEngine.Audio;

public class Menu : MonoBehaviour
{
   public AudioMixer _mainAudioMixer;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetMasterVolume(float volume){
        _mainAudioMixer.SetFloat("MasterVolume", volume);
    }
}
