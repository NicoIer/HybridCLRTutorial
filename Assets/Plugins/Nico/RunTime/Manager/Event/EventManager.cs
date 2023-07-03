using System;
using System.Collections.Generic;
using UnityEngine;

namespace Nico
{
    public static class EventManager
    {
        private static Dictionary<Type, EventCenter> _eventCenters;

        public static void Listen<TEvent, TEventListener>(TEventListener listener) where TEvent : IEvent
            where TEventListener : IEventListener
        {
            if (!_eventCenters.ContainsKey(typeof(TEvent)))
            {
                _eventCenters.Add(typeof(TEvent), new EventCenter());
            }

            _eventCenters[typeof(TEvent)].AddListener(listener);
        }

        public static void UnListen<TEvent>(IEventListener listener) where TEvent : IEvent
        {
            if (!_eventCenters.ContainsKey(typeof(TEvent)))
            {
                Debug.LogWarning($"EventCenter<{typeof(TEvent)}> not exist");
                return;
            }

            _eventCenters[typeof(TEvent)].RemoveListener(listener);
        }

        public static void Trigger<TEvent>() where TEvent : struct, IEvent
        {
            Trigger<TEvent>(default(TEvent));
        }

        public static void Trigger<TEvent>(TEvent e) where TEvent : IEvent
        {
            if (!_eventCenters.ContainsKey(typeof(TEvent)))
            {
                Debug.LogWarning($"EventCenter<{typeof(TEvent)}> not exist");
                return;
            }

            _eventCenters[typeof(TEvent)].Trigger(e);
        }
    }




}