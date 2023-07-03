#if UNITY_EDITOR
namespace Nico.Editor
{
    public delegate bool ParseDelegate<in TData, TResult>(TData value, out TResult result);

    public static class Parser<TData, TResult>
    {
        public static ParseDelegate<TData, TResult> parser;
    }
}
#endif