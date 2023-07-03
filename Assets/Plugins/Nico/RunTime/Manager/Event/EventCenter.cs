using System.Collections.Generic;
using System.Threading;
using UnityEngine;

namespace Nico
{
    internal class EventCenter
    {
        private readonly HashSet<IEventListener> _listeners;
        private readonly ReaderWriterLockSlim _lock;
        private static bool _triggering;

        public EventCenter()
        {
            _listeners = new HashSet<IEventListener>();
            _lock = new ReaderWriterLockSlim();
        }

        public void AddListener(IEventListener listener)
        {
            if (_triggering)
            {
                Debug.LogWarning("EventCenter is triggering, please don't add listener in event trigger");
                return;
            }

            _lock.EnterWriteLock();
            try
            {
                _listeners.Add(listener);
            }
            finally
            {
                _lock.ExitWriteLock();
            }
        }

        public void RemoveListener(IEventListener listener)
        {
            if (_triggering)
            {
                Debug.LogWarning("EventCenter is triggering, please don't remove listener in event trigger");
            }

            _lock.EnterWriteLock();
            try
            {
                _listeners.Remove(listener);
            }
            finally
            {
                _lock.ExitWriteLock();
            }
        }

        public void Trigger(IEvent e)
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