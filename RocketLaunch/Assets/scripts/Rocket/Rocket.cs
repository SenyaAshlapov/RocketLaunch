using UnityEngine;

public class Rocket : MonoBehaviour
{
    [SerializeField]private float _rocketThrust;
    [SerializeField]private float _rocketControl;
    [SerializeField]private float _rocketSpecificImpulse;
    [SerializeField]private float _rocketResistance;

    void Start(){
        Events.UpdateThrust += updateThrust;
        Events.UpdateControl += updateControl;
        Events.UpdateSpecificImpulse += updateSpecificImpulse;
        Events.UpdateResistance += updateResistance;
        
        Events.LaunchRocket += rocketlaunch;
    }

    void rocketlaunch(){

    }

    private void updateThrust(float newThrust) => _rocketThrust = newThrust;

    private void updateControl(float newControl) => _rocketControl = newControl;

    private void updateSpecificImpulse(float newSpecificImpulse) => _rocketSpecificImpulse = newSpecificImpulse;

    private void updateResistance(float newResistance) => _rocketResistance = newResistance;
}
