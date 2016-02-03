// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.android.view.InputEvent.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class KeyEvent :12860
// {
::g::Android::android::view::InputEvent_type* KeyEvent_typeof();
void KeyEvent___Init3_fn();
void KeyEvent__toString_fn(KeyEvent* __this, ::g::Android::java::lang::String** __retval);
void KeyEvent__toString_IMPL_22231_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void KeyEvent__writeToParcel_fn(KeyEvent* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void KeyEvent__writeToParcel_IMPL_22234_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct KeyEvent : ::g::Android::android::view::InputEvent
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID toString_22231_ID_;
    static jmethodID& toString_22231_ID() { return toString_22231_ID_; }
    static jmethodID writeToParcel_22234_ID_;
    static jmethodID& writeToParcel_22234_ID() { return writeToParcel_22234_ID_; }

    static void _Init3();
    static uObject* toString_IMPL_22231(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_22234(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::view
