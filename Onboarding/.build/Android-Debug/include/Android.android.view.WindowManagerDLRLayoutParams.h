// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct WindowManagerDLRLayoutParams;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class WindowManagerDLRLayoutParams :23907
// {
::g::Android::java::lang::Object_type* WindowManagerDLRLayoutParams_typeof();
void WindowManagerDLRLayoutParams___Init3_fn();
void WindowManagerDLRLayoutParams__toString_fn(WindowManagerDLRLayoutParams* __this, ::g::Android::java::lang::String** __retval);
void WindowManagerDLRLayoutParams__toString_IMPL_23907_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct WindowManagerDLRLayoutParams : ::g::Android::android::view::ViewGroupDLRLayoutParams
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID toString_23907_ID_;
    static jmethodID& toString_23907_ID() { return toString_23907_ID_; }

    static void _Init3();
    static uObject* toString_IMPL_23907(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::view
