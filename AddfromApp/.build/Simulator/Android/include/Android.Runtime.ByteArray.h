// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
#include <Uno.SByte.h>
namespace g{namespace Android{namespace Runtime{struct ByteArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class ByteArray :880
// {
struct ByteArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

ByteArray_type* ByteArray_typeof();
void ByteArray__GetEnumerator_fn(ByteArray* __this, uObject** __retval);

struct ByteArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
};
// }

}}} // ::g::Android::Runtime
