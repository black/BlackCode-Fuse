// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct Display;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class Display :9741
// {
::g::Android::java::lang::Object_type* Display_typeof();
void Display___Init2_fn();
void Display__toString_fn(Display* __this, ::g::Android::java::lang::String** __retval);
void Display__toString_IMPL_21687_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Display : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_21687_ID_;
    static jmethodID& toString_21687_ID() { return toString_21687_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_21687(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::view
