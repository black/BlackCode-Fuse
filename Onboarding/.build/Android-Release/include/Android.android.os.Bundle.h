// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public sealed extern class Bundle :3053
// {
::g::Android::java::lang::Object_type* Bundle_typeof();
void Bundle___Init2_fn();
void Bundle__toString_fn(Bundle* __this, ::g::Android::java::lang::String** __retval);
void Bundle__toString_IMPL_13587_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Bundle : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_13587_ID_;
    static jmethodID& toString_13587_ID() { return toString_13587_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_13587(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::os
