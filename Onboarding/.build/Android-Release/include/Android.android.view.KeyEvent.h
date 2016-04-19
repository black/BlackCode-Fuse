// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class KeyEvent :12860
// {
::g::Android::java::lang::Object_type* KeyEvent_typeof();
void KeyEvent___Init3_fn();
void KeyEvent__toString_fn(KeyEvent* __this, ::g::Android::java::lang::String** __retval);
void KeyEvent__toString_IMPL_22231_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct KeyEvent : ::g::Android::java::lang::Object
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID toString_22231_ID_;
    static jmethodID& toString_22231_ID() { return toString_22231_ID_; }

    static void _Init3();
    static uObject* toString_IMPL_22231(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::view
