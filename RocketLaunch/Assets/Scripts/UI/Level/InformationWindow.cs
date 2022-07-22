using System.Diagnostics.Tracing;
using UnityEngine;
using TMPro;

public class InformationWindow : MonoBehaviour
{
    [SerializeField]private GameObject _informationWindow;
    [Header("Level")]
    [SerializeField]private TMP_Text _gravity;
    [SerializeField]private TMP_Text _atmResistance;
    [SerializeField]private TMP_Text _totalWeight;
    [Header("Rocket")]
    [SerializeField]private TMP_Text _control;
    [SerializeField]private TMP_Text _impulse;
    [SerializeField]private TMP_Text _resistance;
    [SerializeField]private TMP_Text _thrust;
    
    private void Awake() 
    {
        Events.UpdateControl += updateControl;
        Events.UpdateSpecificImpulse += updateImpulse;
        Events.UpdateResistance += updateResistance;
        Events.UpdateThrust += updateThrust;
        Events.UpdateWeight += updateWeight;

        Events.HideStoreUI += closeWindow;
    }
    private void Start()
    {
        _gravity.text = Level.LevelGravity.ToString();
        _atmResistance.text = Level.LevelAtmosphereResistance.ToString();
    }

    private void OnDestroy() 
    {
        Events.UpdateControl -= updateControl;
        Events.UpdateSpecificImpulse -= updateImpulse;
        Events.UpdateResistance += updateResistance;
        Events.UpdateThrust -= updateThrust;
        Events.UpdateWeight -= updateWeight;

        Events.HideStoreUI -= closeWindow;
    }

    
    private void updateControl(float newControl) => _control.text = newControl.ToString();
    private void updateImpulse(float newImpulse) => _impulse.text = newImpulse.ToString();
    private void updateResistance(float newResistance) => _resistance.text = newResistance.ToString();
    private void updateThrust(float newThrust) => _thrust.text = newThrust.ToString();
    private void updateWeight(float newWeight) => _totalWeight.text = newWeight.ToString();
    private void closeWindow() => _informationWindow.SetActive(false);
}
