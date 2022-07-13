using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sky : MonoBehaviour
{
    [SerializeField] private Gradient _directionLight;
    [SerializeField] private Gradient _ambientLight;
    [Range(0,1)]
    [SerializeField] private float _changeProgress;
    [Range(0,0.03f)]
    [SerializeField] private float _changeSpeed;
    [SerializeField] private Material _basicSkyMaterial;
    [SerializeField] private Material _spaceSkyMaterial;
    [SerializeField]private Light _lightSource;

    public Material _skyMaterial;



    void Start(){
       // RenderSettings.skybox = _skyMaterial;
    }
    void Update(){
        //_lightSource.color = _directionLight.Evaluate(_changeProgress);
        //RenderSettings.ambientLight = _ambientLight.Evaluate(_changeProgress);
        
        //RenderSettings.skybox.Lerp(_basicSkyMaterial,_spaceSkyMaterial,_changeSpeed);
        //_skyMaterial.Lerp(_basicSkyMaterial, _spaceSkyMaterial, _changeSpeed); 

    }
}
