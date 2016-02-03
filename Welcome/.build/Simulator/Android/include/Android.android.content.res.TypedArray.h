// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct TypedArray;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class TypedArray :3287
// {
::g::Android::java::lang::Object_type* TypedArray_typeof();
void TypedArray___Init2_fn();
void TypedArray__toString_fn(TypedArray* __this, ::g::Android::java::lang::String** __retval);
void TypedArray__toString_IMPL_3723_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct TypedArray : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_3723_ID_;
    static jmethodID& toString_3723_ID() { return toString_3723_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_3723(bool arg0_, jobject arg1_);
};
// }

}}}}} // ::g::Android::android::content::res
