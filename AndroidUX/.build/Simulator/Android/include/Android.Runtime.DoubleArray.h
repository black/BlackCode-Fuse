// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Double.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Runtime{struct DoubleArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class DoubleArray :1120
// {
struct DoubleArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

DoubleArray_type* DoubleArray_typeof();
void DoubleArray__GetEnumerator_fn(DoubleArray* __this, uObject** __retval);

struct DoubleArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
};
// }

}}} // ::g::Android::Runtime
