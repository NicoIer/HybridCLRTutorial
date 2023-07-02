using System.Runtime.CompilerServices;

namespace Nico.ObjectPool
{
    public interface IPoolObj
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        void OnReturn();

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        void OnGet();
    }
}