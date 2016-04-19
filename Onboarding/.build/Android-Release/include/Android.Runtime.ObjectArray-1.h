// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class ObjectArray<T> :1173
// {
struct ObjectArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

ObjectArray_type* ObjectArray_typeof();
void ObjectArray__ctor_4_fn(ObjectArray* __this, jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType);
void ObjectArray__ctor_5_fn(ObjectArray* __this, int* length);
void ObjectArray__GetEnumerator_fn(ObjectArray* __this, uObject** __retval);
void ObjectArray__get_Item_fn(ObjectArray* __this, int* i, uObject** __retval);
void ObjectArray__set_Item_fn(ObjectArray* __this, int* i, uObject* value);
void ObjectArray__New6_fn(uType* __type, int* length, ObjectArray** __retval);

struct ObjectArray : ::g::Android::java::lang::Object
{
    void ctor_4(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType);
    void ctor_5(int length);
    uObject* GetEnumerator();
    uObject* Item(int i);
    void Item(int i, uObject* value);
    static ObjectArray* New6(uType* __type, int length);
};
// }

}}} // ::g::Android::Runtime
