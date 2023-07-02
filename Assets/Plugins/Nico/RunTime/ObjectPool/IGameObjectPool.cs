using System;

namespace Nico.ObjectPool
{
    public interface IGameObjectPool : IPool
    {
        void Return<T>(T poolObj) where T : IPoolGameObj;
        
        IPoolGameObj Get(Type objType);
    }
}