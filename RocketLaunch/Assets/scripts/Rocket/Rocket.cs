using System.Threading;
using UnityEngine;

public class Rocket : MonoBehaviour
{

    public delegate void rocketStates();
    public static rocketStates currentState;

    [Header("Rocket indicators")]
    [SerializeField]private float _rocketThrust = 0;
    [SerializeField]private float _rocketControl = 0;
    [SerializeField]private float _rocketSpecificImpulse = 0;
    [SerializeField]private float _rocketResistance = 0;
    public static float RocketWeigt;
    

    [Header("Trajectory Settings")]
    [SerializeField]private GameObject _rocket;
    [SerializeField]private Transform _curvePoint0;
    [SerializeField]private Transform _curvePoint1;
    [SerializeField]private Transform _curvePoint2;
    [SerializeField]private Transform _curvePoint3;

    [Range(0,1)]
    [SerializeField]private float _curveT = 0;
    [Range(0,0.0005f)]
    [SerializeField]private float _speedT;
    [SerializeField]private float _speedCoefficient;
    [SerializeField]private AnimationCurve _speedAcceleration;
    private float _launchTime = 0f;


    private void Awake() {
        Events.UpdateThrust += updateThrust;
        Events.UpdateControl += updateControl;
        Events.UpdateSpecificImpulse += updateSpecificImpulse;
        Events.UpdateResistance += updateResistance;

        Events.LaunchRocket += rocketStartLaunching;
        Events.DestroyRocket += rockeDestroy;
    }
    private void Start() => currentState += rocketPreparation;   
     
    private void OnDestroy() {
        Events.UpdateThrust -= updateThrust;
        Events.UpdateControl -= updateControl;
        Events.UpdateSpecificImpulse -= updateSpecificImpulse;
        Events.UpdateResistance -= updateResistance;

        Events.LaunchRocket -= rocketStartLaunching;
        Events.DestroyRocket -= rockeDestroy;
        
        currentState -= rocketPreparation;
        currentState -= rocketLaunching;
        currentState -= Destroying;
    }

    void FixedUpdate()
    {
        currentState?.Invoke();
    }

    

    private void updateThrust(float newThrust) => _rocketThrust = newThrust;

    private void updateControl(float newControl) => _rocketControl = newControl;

    private void updateSpecificImpulse(float newSpecificImpulse) => _rocketSpecificImpulse = newSpecificImpulse;

    private void updateResistance(float newResistance) => _rocketResistance = newResistance;

    private void OnDrawGizmos() {

        int sigmentsNumber = 20;
        Vector3 preveousePoint = _curvePoint0.position;

        for (int i = 0; i < sigmentsNumber + 1; i++) {
            float paremeter = (float)i / sigmentsNumber;
            Vector3 point = Bezier.GetCurveTrajectory(_curvePoint0.position, _curvePoint1.position, _curvePoint2.position, _curvePoint3.position, paremeter);
            Gizmos.DrawLine(preveousePoint, point);
            preveousePoint = point;
        }

    }

     private void rocketLaunching(){
        
        calculateSpeed();
        if(_curveT < 1){
            _launchTime += Time.deltaTime;
            _curveT = _curveT + (_speedT * _speedAcceleration.Evaluate(_launchTime));
        }
        _rocket.transform.position = Bezier.GetCurveTrajectory(_curvePoint0.position, _curvePoint1.position, _curvePoint2.position, _curvePoint3.position, _curveT);
        _rocket.transform.rotation = Quaternion.LookRotation(Bezier.GetCurveDeirection(_curvePoint0.position, _curvePoint1.position, _curvePoint2.position, _curvePoint3.position, _curveT));        
    }

    private void rocketPreparation(){
        //some preparation logic
    }

    private void rockeDestroy(){
        currentState -= rocketLaunching;
        currentState += Destroying;
        
    }

    private void rocketStartLaunching(){
        if(_rocketControl != 0 & _rocketResistance != 0 & _rocketSpecificImpulse != 0 & _rocketThrust != 0){
            currentState -= rocketPreparation;
            currentState += rocketLaunching;
            Events.HideStoreUI?.Invoke();
            Events.ShowLaunchUI?.Invoke();
        }
        
    }

    private void calculateSpeed(){
       
       _speedT = ((_rocketThrust * _rocketSpecificImpulse) - (Level.LevelAtmosphereResistance * Level.LevelGravity))/(_rocketResistance * RocketWeigt *  _speedCoefficient);
    }

    private void Destroying(){
        
    }

    private void OnTriggerEnter(Collider other){
        if(other.tag  == "Finish"){
            Events.LevelComplete?.Invoke();
        }
    }

} 


