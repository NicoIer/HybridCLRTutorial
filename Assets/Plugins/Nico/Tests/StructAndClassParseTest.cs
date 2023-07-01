using Nico.Editor;
using NUnit.Framework;

namespace Nico.Tests
{
    [TestFixture]
    public class StructAndClassParseTest
    {
        [ParseAttribute]
        public class MyTestParseClass
        {
            public int id;
            public string name;
        }

        [Test]
        public void TestParseBuildinInClass()
        {
            string str = "id=123,name=Test";
            BuildInStringGenericParser.StructAndClassParser(str, out MyTestParseClass result);
            Assert.AreEqual(123, result.id);
            Assert.AreEqual("Test", result.name);
        }

        [Test]
        public void TestParseClass()
        {
            Assert.AreEqual(true, ParserManager.Contains(typeof(string), typeof(MyTestParseClass)));
            string str = "id=123,name=Test";
            bool re = ParserManager.Parse<string,MyTestParseClass>(str, out MyTestParseClass result);
            Assert.AreEqual(true, re);
            Assert.AreEqual(123, result.id);
            Assert.AreEqual("Test", result.name);
        }
    }
}