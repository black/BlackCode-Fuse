// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Looper;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public sealed extern class Looper :6340
// {
::g::Android::java::lang::Object_type* Looper_typeof();
void Looper___Init2_fn();
void Looper__getMainLooper_fn(Looper** __retval);
void Looper__getMainLooper_IMPL_13840_fn(uObject** __retval);
void Looper__toString_fn(Looper* __this, ::g::Android::java::lang::String** __retval);
void Looper__toString_IMPL_13849_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Looper : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getMainLooper_13840_ID_;
    static jmethodID& getMainLooper_13840_ID() { return getMainLooper_13840_ID_; }
    static jmethodID toString_13849_ID_;
    static jmethodID& toString_13849_ID() { return toString_13849_ID_; }

    static void _Init2();
    static Looper* getMainLooper();
    static uObject* getMainLooper_IMPL_13840();
    static uObject* toString_IMPL_13849(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::os
