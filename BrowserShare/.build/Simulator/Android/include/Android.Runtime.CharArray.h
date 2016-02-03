// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Runtime{struct CharArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class CharArray :920
// {
struct CharArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

CharArray_type* CharArray_typeof();
void CharArray__GetEnumerator_fn(CharArray* __this, uObject** __retval);

struct CharArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
};
// }

}}} // ::g::Android::Runtime
