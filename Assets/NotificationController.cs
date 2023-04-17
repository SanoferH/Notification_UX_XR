using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotificationController : MonoBehaviour
{
   [SerializeField] private GameObject _notification;
   [SerializeField] private SharedData _sharedData;

   public void DismissNotification()
   {
      _notification.SetActive(false);
   }

   public void OpenMessage()
   {
      Debug.Log("Open Message");
   }

   private void Update()
   {
      if (_sharedData.checkerStatus)
      {
         DismissNotification();
      }
   }
}
