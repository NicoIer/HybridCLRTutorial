namespace Nico
{
#if UNITY_EDITOR
using Nico.Editor;
    [Parse]
#endif
    public enum TestEnum1
    {
		X1,
		X2=123,
		X4,

    }
}