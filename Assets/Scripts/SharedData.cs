using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SharedData : MonoBehaviour
{
    public bool checkerStatus;
    public bool previousCheckerStatus;

    public string message;
    
    private DataSync _dataSync;
    private void Awake()
    {
        checkerStatus = false;
        previousCheckerStatus = false;
        message = "Inactive";
     
        _dataSync = GetComponent<DataSync>();
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (checkerStatus)
        {
            _dataSync.SetStatusAndMessage(checkerStatus,"Dismiss");
        }

        if (!checkerStatus)
        {
            _dataSync.SetStatusAndMessage(checkerStatus,"Open");
        }
    }
    
    public void Dismiss()
    {
        checkerStatus = true;
    }
    
    public void Open()
    {
        checkerStatus = false;
    }
}
