namespace Nico
{
    public interface ITableData
    {
        public int id { get;  set; }
#if UNITY_EDITOR
        public bool Parse(int id, string[] values);
#endif
    }
}