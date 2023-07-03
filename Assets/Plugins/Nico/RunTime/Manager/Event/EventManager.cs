using UnityEngine;

namespace Nico
{
    internal static class EventCenters<T> where T : IEvent
    {
        internal static EventCenter<T> center;
    }

    public static class EventManager
    {
        public static void Listen<TEvent>(IEventListener<TEvent> listener) where TEvent : IEvent
        {
            if (EventCenters<TEvent>.center == null)
            {
                EventCenters<TEvent>.center = new EventCenter<TEvent>();
                Application.quitting -= ClearEventCenter<TEvent>;
                Application.quitting += ClearEventCenter<TEvent>;
            }

            EventCenters<TEvent>.center.AddListener(listener);
        }

        private static void ClearEventCenter<T>() where T : IEvent
        {
            // Debug.Log($"ClearEventCenter<{typeof(T)}>");
            EventCenters<T>.center = null;
        }

        public static void UnListen<TEvent>(IEventListener<TEvent> listener) where TEvent : IEvent
        {
            if (EventCenters<TEvent>.center == null)
            {
                Debug.LogWarning($"EventCenter<{typeof(TEvent)}> not exist");
                return;
            }

            EventCenters<TEvent>.center.RemoveListener(listener);
        }

        public static void Trigger<TEvent>() where TEvent : struct, IEvent
        {
            Trigger<TEvent>(default(TEvent));
        }

        public static void Trigger<TEvent>(TEvent e) where TEvent : IEvent
        {
            if (EventCenters<TEvent>.center == null)
            {
                Debug.LogWarning($"EventCenter<{typeof(TEvent)}> not exist");
                return;
            }

            EventCenters<TEvent>.center.Trigger(e);
        }
    }
}