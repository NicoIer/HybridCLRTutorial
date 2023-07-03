#if UNITY_EDITOR
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEditor.Callbacks;
using UnityEngine;

namespace Nico.Editor
{
    [AttributeUsage(AttributeTargets.Class | AttributeTargets.Enum | AttributeTargets.Struct, Inherited = false)]
    public class ParseAttribute : Attribute
    {
    }
}
#endif