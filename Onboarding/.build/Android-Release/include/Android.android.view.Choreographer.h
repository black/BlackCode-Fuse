// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct Choreographer;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class Choreographer :9685
// {
::g::Android::java::lang::Object_type* Choreographer_typeof();
void Choreographer___Init2_fn();
void Choreographer__getInstance_fn(Choreographer** __retval);
void Choreographer__getInstance_IMPL_21644_fn(uObject** __retval);
void Choreographer__postFrameCallback_fn(Choreographer* __this, uObject* arg0);
void Choreographer__postFrameCallback_IMPL_21645_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Choreographer : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getInstance_21644_ID_;
    static jmethodID& getInstance_21644_ID() { return getInstance_21644_ID_; }
    static jmethodID postFrameCallback_21645_ID_;
    static jmethodID& postFrameCallback_21645_ID() { return postFrameCallback_21645_ID_; }

    void postFrameCallback(uObject* arg0);
    static void _Init2();
    static Choreographer* getInstance();
    static uObject* getInstance_IMPL_21644();
    static void postFrameCallback_IMPL_21645(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::view
