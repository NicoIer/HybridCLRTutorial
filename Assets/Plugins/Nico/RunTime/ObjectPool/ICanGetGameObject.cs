using System.Runtime.CompilerServices;
using UnityEngine;

namespace Nico.ObjectPool
{
    public interface ICanGetGameObject
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        GameObject GetGameObject();

        Transform transform => GetGameObject().transform;
    }
}