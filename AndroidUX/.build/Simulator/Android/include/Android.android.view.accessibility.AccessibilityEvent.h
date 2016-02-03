// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\accessibility\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace accessibility{

// public sealed extern class AccessibilityEvent :598
// {
struct AccessibilityEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

AccessibilityEvent_type* AccessibilityEvent_typeof();
void AccessibilityEvent___Init3_fn();
void AccessibilityEvent__describeContents_fn(AccessibilityEvent* __this, int* __retval);
void AccessibilityEvent__describeContents_IMPL_20784_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AccessibilityEvent__toString_fn(AccessibilityEvent* __this, ::g::Android::java::lang::String** __retval);
void AccessibilityEvent__toString_IMPL_20785_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AccessibilityEvent__writeToParcel_fn(AccessibilityEvent* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void AccessibilityEvent__writeToParcel_IMPL_20783_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct AccessibilityEvent : ::g::Android::java::lang::Object
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID describeContents_20784_ID_;
    static jmethodID& describeContents_20784_ID() { return describeContents_20784_ID_; }
    static jmethodID toString_20785_ID_;
    static jmethodID& toString_20785_ID() { return toString_20785_ID_; }
    static jmethodID writeToParcel_20783_ID_;
    static jmethodID& writeToParcel_20783_ID() { return writeToParcel_20783_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init3();
    static int describeContents_IMPL_20784(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_20785(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_20783(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::view::accessibility
