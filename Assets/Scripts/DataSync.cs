using System.Collections;
using System.Collections.Generic;
using Normal.Realtime;
using TMPro;
using UnityEngine;

public class DataSync : RealtimeComponent<DataSyncModel>
{
    
    private SharedData _sharedData;
    [SerializeField] private TextMeshProUGUI _message;
    [SerializeField] private bool _status;
    
    private void Awake()
    {
        _sharedData = GetComponent<SharedData>();
        _message.text = _sharedData.message;
    }
    
    protected override void OnRealtimeModelReplaced(DataSyncModel previousModel, DataSyncModel currentModel)
    {
        if (previousModel != null)
        {
            previousModel.stateDidChange -= StateDidChange;
            previousModel.messageDidChange -= MessageDidChange;
        }

        if (currentModel != null)
        {
            if (currentModel.isFreshModel)
            {
                currentModel.state = _sharedData.checkerStatus;
                currentModel.message = _sharedData.message;
            }

            UpdateSharedDataState();
            UpdateSharedDataMessage();

            currentModel.stateDidChange += StateDidChange;
            currentModel.messageDidChange += MessageDidChange;

        }
    }

    private void StateDidChange(DataSyncModel model, bool value)
    {
        UpdateSharedDataState();
    }

    private void MessageDidChange(DataSyncModel model, string message)
    {
        UpdateSharedDataMessage();
    }

    private void UpdateSharedDataState()
    {
        _sharedData.checkerStatus = model.state;
    }

    private void UpdateSharedDataMessage()
    {
        _sharedData.message = model.message;
    }

    public void SetStatusAndMessage(bool status, string message)
    {
        model.state = status;
        model.message = message;
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        _message.text = _sharedData.message;
        _status = _sharedData.checkerStatus;
    }
}
