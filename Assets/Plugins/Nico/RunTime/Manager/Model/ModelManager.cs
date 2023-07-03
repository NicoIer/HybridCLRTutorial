using System;

namespace Nico
{
    public static class ModelManager
    {
        public static T Get<T>()
        {
            throw new NotImplementedException();
        }

        public static void Register<T>() where T : IModel, new()
        {
            throw new NotImplementedException();
        }
    }

    public interface IModel
    {
        
    }
}