// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace util{struct SparseArray;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace util{

// public sealed extern class SparseArray :4079
// {
::g::Android::java::lang::Object_type* SparseArray_typeof();
void SparseArray___Init2_fn();
void SparseArray__toString_fn(SparseArray* __this, ::g::Android::java::lang::String** __retval);
void SparseArray__toString_IMPL_20590_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct SparseArray : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_20590_ID_;
    static jmethodID& toString_20590_ID() { return toString_20590_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_20590(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::util
