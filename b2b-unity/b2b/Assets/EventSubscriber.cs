using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SonicBloom.Koreo;
public class EventSubscriber : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Koreographer.Instance.RegisterForEvents("testtrackP1", FireEventDebugLog);
    }

    // Update is called once per frame
    void Update()
    {

    }

    void FireEventDebugLog(KoreographyEvent koreoEvent)
    {
        Debug.Log("Koreography Event Fired.");
    }
}
