using UnityEngine;

public class Rocket : MonoBehaviour
{

    public delegate void rocketStates();
    public static rocketStates currentState;

    [Header("Rocket indicators")]
    [SerializeField]private float _rocketThrust;
    [SerializeField]private float _rocketControl;
    [SerializeField]private float _rocketSpecificImpulse;
    [SerializeField]private float _rocketResistance;
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


    void Start(){
        Events.UpdateThrust += updateThrust;
        Events.UpdateControl += updateControl;
        Events.UpdateSpecificImpulse += updateSpecificImpulse;
        Events.UpdateResistance += updateResistance;

        currentState += rocketPreparation;

        Events.LaunchRocket += rocketStartLaunching;
        
    }

    void Update()
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
            _curveT += _speedT;
        }
        _rocket.transform.position = Bezier.GetCurveTrajectory(_curvePoint0.position, _curvePoint1.position, _curvePoint2.position, _curvePoint3.position, _curveT);
        _rocket.transform.rotation = Quaternion.LookRotation(Bezier.GetCurveDeirection(_curvePoint0.position, _curvePoint1.position, _curvePoint2.position, _curvePoint3.position, _curveT));        
    }

    private void rocketPreparation(){
        //че-то там
    }

    private void rocketStartLaunching(){
         currentState -= rocketPreparation;
          currentState += rocketLaunching;
    }

    private void calculateSpeed(){
        _speedT = (_rocketThrust * _rocketSpecificImpulse)/(_rocketResistance * RocketWeigt *  10000); 
    }


} 


