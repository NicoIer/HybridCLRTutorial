using System.Collections.Generic;
using System.Threading;
using UnityEngine;

namespace Nico
{
    internal class EventCenter<TEvent> where TEvent: IEvent
    {
        private readonly HashSet<IEventListener<TEvent>> _listeners;
        private readonly ReaderWriterLockSlim _lock;
        private bool _triggering;

        public EventCenter()
        {
            _listeners = new HashSet<IEventListener<TEvent>>();
            _lock = new ReaderWriterLockSlim();
        }

        public void AddListener(IEventListener<TEvent> listener)
        {
            _lock.EnterWriteLock();
            try
            {
                if (_triggering)
                {
                    Debug.LogWarning("EventCenter is triggering, please don't add listener in event trigger");
                    return;
                }
                Debug.Log($"AddListener<{typeof(TEvent)}>");
                _listeners.Add(listener);
            }
            finally
            {
                _lock.ExitWriteLock();
            }
        }

        public void RemoveListener(IEventListener<TEvent> listener)
        {
            _lock.EnterWriteLock();
            try
            {
                if (_triggering)
                {
                    Debug.LogWarning("EventCenter is triggering, please don't remove listener in event trigger");
                }
                _listeners.Remove(listener);
            }
            finally
            {
                _lock.ExitWriteLock();
            }
        }

        public void Trigger(TEvent e)
        {
            _lock.EnterReadLock();
            try
            {
                _triggering = true;
                foreach (var listener in _listeners)
                {
                    listener.OnReceiveEvent(e);
                }
            }
            finally
            {
                _lock.ExitReadLock();
                _triggering = false;
            }
        }
    }
}