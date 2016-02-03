// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Long.h>
namespace g{namespace Android{namespace Runtime{struct LongArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class LongArray :1042
// {
struct LongArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

LongArray_type* LongArray_typeof();
void LongArray__GetEnumerator_fn(LongArray* __this, uObject** __retval);

struct LongArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
};
// }

}}} // ::g::Android::Runtime
