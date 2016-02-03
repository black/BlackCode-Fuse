// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace util{struct TypedValue;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace util{

// public sealed extern class TypedValue :5086
// {
::g::Android::java::lang::Object_type* TypedValue_typeof();
void TypedValue___Init2_fn();
void TypedValue__get_COMPLEX_UNIT_DIP_fn(int* __retval);
void TypedValue__toString_fn(TypedValue* __this, ::g::Android::java::lang::String** __retval);
void TypedValue__toString_IMPL_20716_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct TypedValue : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID COMPLEX_UNIT_DIP_20678_ID_;
    static jfieldID& COMPLEX_UNIT_DIP_20678_ID() { return COMPLEX_UNIT_DIP_20678_ID_; }
    static jmethodID toString_20716_ID_;
    static jmethodID& toString_20716_ID() { return toString_20716_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_20716(bool arg0_, jobject arg1_);
    static int COMPLEX_UNIT_DIP();
};
// }

}}}} // ::g::Android::android::util
