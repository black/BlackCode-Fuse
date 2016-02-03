// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{struct WindowManagerDLRLayoutParams;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class WindowManagerDLRLayoutParams :23907
// {
struct WindowManagerDLRLayoutParams_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

WindowManagerDLRLayoutParams_type* WindowManagerDLRLayoutParams_typeof();
void WindowManagerDLRLayoutParams___Init3_fn();
void WindowManagerDLRLayoutParams__describeContents_fn(WindowManagerDLRLayoutParams* __this, int* __retval);
void WindowManagerDLRLayoutParams__describeContents_IMPL_23903_fn(bool* arg0_, jobject* arg1_, int* __retval);
void WindowManagerDLRLayoutParams__toString_fn(WindowManagerDLRLayoutParams* __this, ::g::Android::java::lang::String** __retval);
void WindowManagerDLRLayoutParams__toString_IMPL_23907_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void WindowManagerDLRLayoutParams__writeToParcel_fn(WindowManagerDLRLayoutParams* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void WindowManagerDLRLayoutParams__writeToParcel_IMPL_23904_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct WindowManagerDLRLayoutParams : ::g::Android::android::view::ViewGroupDLRLayoutParams
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID describeContents_23903_ID_;
    static jmethodID& describeContents_23903_ID() { return describeContents_23903_ID_; }
    static jmethodID toString_23907_ID_;
    static jmethodID& toString_23907_ID() { return toString_23907_ID_; }
    static jmethodID writeToParcel_23904_ID_;
    static jmethodID& writeToParcel_23904_ID() { return writeToParcel_23904_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init3();
    static int describeContents_IMPL_23903(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_23907(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_23904(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::view
