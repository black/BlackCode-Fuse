// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
namespace g{namespace Android{namespace Runtime{struct IntArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class IntArray :1002
// {
struct IntArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

IntArray_type* IntArray_typeof();
void IntArray__ctor_5_fn(IntArray* __this, int* length);
void IntArray__GetEnumerator_fn(IntArray* __this, uObject** __retval);
void IntArray__get_Item_fn(IntArray* __this, int* i, int* __retval);
void IntArray__set_Item_fn(IntArray* __this, int* i, int* value);
void IntArray__New6_fn(int* length, IntArray** __retval);

struct IntArray : ::g::Android::java::lang::Object
{
    void ctor_5(int length);
    uObject* GetEnumerator();
    int Item(int i);
    void Item(int i, int value);
    static IntArray* New6(int length);
};
// }

}}} // ::g::Android::Runtime
