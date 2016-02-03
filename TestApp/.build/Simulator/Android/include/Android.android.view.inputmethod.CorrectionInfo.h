// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct CorrectionInfo;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace inputmethod{

// public sealed extern class CorrectionInfo :418
// {
struct CorrectionInfo_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

CorrectionInfo_type* CorrectionInfo_typeof();
void CorrectionInfo___Init2_fn();
void CorrectionInfo__describeContents_fn(CorrectionInfo* __this, int* __retval);
void CorrectionInfo__describeContents_IMPL_21292_fn(bool* arg0_, jobject* arg1_, int* __retval);
void CorrectionInfo__toString_fn(CorrectionInfo* __this, ::g::Android::java::lang::String** __retval);
void CorrectionInfo__toString_IMPL_21290_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void CorrectionInfo__writeToParcel_fn(CorrectionInfo* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void CorrectionInfo__writeToParcel_IMPL_21291_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct CorrectionInfo : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_21292_ID_;
    static jmethodID& describeContents_21292_ID() { return describeContents_21292_ID_; }
    static jmethodID toString_21290_ID_;
    static jmethodID& toString_21290_ID() { return toString_21290_ID_; }
    static jmethodID writeToParcel_21291_ID_;
    static jmethodID& writeToParcel_21291_ID() { return writeToParcel_21291_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_21292(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_21290(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_21291(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::view::inputmethod
