namespace Nico
{
    public interface IDataTable
    {
        public ITableData Get(int id);
        public void Add(int id,ITableData tableData);
    }
}