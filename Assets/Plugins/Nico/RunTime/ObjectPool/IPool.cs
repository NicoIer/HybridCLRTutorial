namespace Nico.ObjectPool
{
    public interface IPool
    {
        T Get<T>() where T : IPoolObj;
    }
}