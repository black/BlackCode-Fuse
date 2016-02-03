// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{struct WindowId;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class WindowId :23691
// {
struct WindowId_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

WindowId_type* WindowId_typeof();
void WindowId___Init2_fn();
void WindowId__describeContents_fn(WindowId* __this, int* __retval);
void WindowId__describeContents_IMPL_23770_fn(bool* arg0_, jobject* arg1_, int* __retval);
void WindowId__equals1_fn(WindowId* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void WindowId__equals_IMPL_23767_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void WindowId__hashCode1_fn(WindowId* __this, int* __retval);
void WindowId__hashCode_IMPL_23768_fn(bool* arg0_, jobject* arg1_, int* __retval);
void WindowId__toString_fn(WindowId* __this, ::g::Android::java::lang::String** __retval);
void WindowId__toString_IMPL_23769_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void WindowId__writeToParcel_fn(WindowId* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void WindowId__writeToParcel_IMPL_23771_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct WindowId : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_23770_ID_;
    static jmethodID& describeContents_23770_ID() { return describeContents_23770_ID_; }
    static jmethodID equals_23767_ID_;
    static jmethodID& equals_23767_ID() { return equals_23767_ID_; }
    static jmethodID hashCode_23768_ID_;
    static jmethodID& hashCode_23768_ID() { return hashCode_23768_ID_; }
    static jmethodID toString_23769_ID_;
    static jmethodID& toString_23769_ID() { return toString_23769_ID_; }
    static jmethodID writeToParcel_23771_ID_;
    static jmethodID& writeToParcel_23771_ID() { return writeToParcel_23771_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_23770(bool arg0_, jobject arg1_);
    static bool equals_IMPL_23767(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_23768(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_23769(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_23771(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::view
