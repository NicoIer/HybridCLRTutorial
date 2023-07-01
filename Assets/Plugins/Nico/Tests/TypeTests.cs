using System;
using System.Linq;
using NUnit.Framework;
using UnityEngine;

namespace Nico.Tests
{
    [TestFixture]
    public class TypeTests
    {
        public enum TestEnum01
        {
        }

        public class TestGeneric<T>
        {
        }
        

        [Test]
        public void EnumTypeTest()
        {
            TestEnum01[] x = new TestEnum01[1];
            Assert.AreEqual(true, x.GetType().IsArray);
        }

        [Test]
        public void EnumArrayTypeTest()
        {
            TestEnum01[] x = new TestEnum01[1];
            Assert.AreEqual(true, x.GetType().IsArray);
            Assert.AreEqual(true, x.GetType().GetElementType() != null);
            Assert.AreEqual(true, x.GetType().GetElementType().IsEnum);
        }

        [Test]
        public void NameTest()
        {
            string name = nameof(TypeTests.EnumTypeTest);
            Assert.AreEqual(true,name=="EnumTypeTest");
        }
    }
}