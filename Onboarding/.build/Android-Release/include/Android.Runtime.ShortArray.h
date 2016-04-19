// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Short.h>
namespace g{namespace Android{namespace Runtime{struct ShortArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class ShortArray :961
// {
struct ShortArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

ShortArray_type* ShortArray_typeof();
void ShortArray__GetEnumerator_fn(ShortArray* __this, uObject** __retval);

struct ShortArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
};
// }

}}} // ::g::Android::Runtime
