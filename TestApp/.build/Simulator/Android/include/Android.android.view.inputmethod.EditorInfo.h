// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct EditorInfo;}}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace inputmethod{

// public sealed extern class EditorInfo :528
// {
struct EditorInfo_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

EditorInfo_type* EditorInfo_typeof();
void EditorInfo___Init2_fn();
void EditorInfo__describeContents_fn(EditorInfo* __this, int* __retval);
void EditorInfo__describeContents_IMPL_21329_fn(bool* arg0_, jobject* arg1_, int* __retval);
void EditorInfo__writeToParcel_fn(EditorInfo* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void EditorInfo__writeToParcel_IMPL_21328_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct EditorInfo : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_21329_ID_;
    static jmethodID& describeContents_21329_ID() { return describeContents_21329_ID_; }
    static jmethodID writeToParcel_21328_ID_;
    static jmethodID& writeToParcel_21328_ID() { return writeToParcel_21328_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_21329(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_21328(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::view::inputmethod
