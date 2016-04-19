// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Configuration;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class Configuration :825
// {
::g::Android::java::lang::Object_type* Configuration_typeof();
void Configuration___Init2_fn();
void Configuration__hashCode1_fn(Configuration* __this, int* __retval);
void Configuration__hashCode_IMPL_3620_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Configuration__toString_fn(Configuration* __this, ::g::Android::java::lang::String** __retval);
void Configuration__toString_IMPL_3609_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Configuration : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID hashCode_3620_ID_;
    static jmethodID& hashCode_3620_ID() { return hashCode_3620_ID_; }
    static jmethodID toString_3609_ID_;
    static jmethodID& toString_3609_ID() { return toString_3609_ID_; }

    static void _Init2();
    static int hashCode_IMPL_3620(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_3609(bool arg0_, jobject arg1_);
};
// }

}}}}} // ::g::Android::android::content::res
