// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct ExtractedTextRequest;}}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace inputmethod{

// public sealed extern class ExtractedTextRequest :1542
// {
struct ExtractedTextRequest_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

ExtractedTextRequest_type* ExtractedTextRequest_typeof();
void ExtractedTextRequest___Init2_fn();
void ExtractedTextRequest__describeContents_fn(ExtractedTextRequest* __this, int* __retval);
void ExtractedTextRequest__describeContents_IMPL_21350_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ExtractedTextRequest__writeToParcel_fn(ExtractedTextRequest* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void ExtractedTextRequest__writeToParcel_IMPL_21349_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct ExtractedTextRequest : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_21350_ID_;
    static jmethodID& describeContents_21350_ID() { return describeContents_21350_ID_; }
    static jmethodID writeToParcel_21349_ID_;
    static jmethodID& writeToParcel_21349_ID() { return writeToParcel_21349_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_21350(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_21349(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::view::inputmethod
