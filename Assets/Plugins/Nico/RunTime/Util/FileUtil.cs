using System.IO;

namespace Nico
{
    public static class FileUtil
    {
        public static void Create(string path)
        {
            string folderPath = System.IO.Path.GetDirectoryName(path);
            if (!System.IO.Directory.Exists(folderPath) && folderPath != null)
            {
                System.IO.Directory.CreateDirectory(folderPath);
            }

            if (File.Exists(path)) return;
            System.IO.File.Create(path).Dispose();
        }

        public static void Write(string path, string text)
        {
            if (!System.IO.File.Exists(path))
            {
                Create(path);
            }

            System.IO.File.WriteAllText(path, text);
        }

        public static void ReplaceContent(string content, string path)
        {
            if (!System.IO.File.Exists(path))
            {
                Create(path);
            }

            using (StreamWriter writer = new StreamWriter(path))
            {
                writer.Write(content);
            }
        }
    }
}