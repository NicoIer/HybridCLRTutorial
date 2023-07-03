namespace Nico
{
    public interface IEventListener
    {
        public void OnReceiveEvent<T>(T e) where T : IEvent;
    }
}