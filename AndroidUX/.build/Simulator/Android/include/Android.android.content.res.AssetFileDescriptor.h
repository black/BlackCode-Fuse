// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct AssetFileDescriptor;}}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace io{struct FileDescriptor;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class AssetFileDescriptor :184
// {
struct AssetFileDescriptor_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

AssetFileDescriptor_type* AssetFileDescriptor_typeof();
void AssetFileDescriptor___Init2_fn();
void AssetFileDescriptor__describeContents_fn(AssetFileDescriptor* __this, int* __retval);
void AssetFileDescriptor__describeContents_IMPL_3488_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AssetFileDescriptor__getFileDescriptor_fn(AssetFileDescriptor* __this, ::g::Android::java::io::FileDescriptor** __retval);
void AssetFileDescriptor__getFileDescriptor_IMPL_3479_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AssetFileDescriptor__getLength_fn(AssetFileDescriptor* __this, int64_t* __retval);
void AssetFileDescriptor__getLength_IMPL_3482_fn(bool* arg0_, jobject* arg1_, int64_t* __retval);
void AssetFileDescriptor__getStartOffset_fn(AssetFileDescriptor* __this, int64_t* __retval);
void AssetFileDescriptor__getStartOffset_IMPL_3480_fn(bool* arg0_, jobject* arg1_, int64_t* __retval);
void AssetFileDescriptor__toString_fn(AssetFileDescriptor* __this, ::g::Android::java::lang::String** __retval);
void AssetFileDescriptor__toString_IMPL_3487_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AssetFileDescriptor__writeToParcel_fn(AssetFileDescriptor* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void AssetFileDescriptor__writeToParcel_IMPL_3489_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct AssetFileDescriptor : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_3488_ID_;
    static jmethodID& describeContents_3488_ID() { return describeContents_3488_ID_; }
    static jmethodID getFileDescriptor_3479_ID_;
    static jmethodID& getFileDescriptor_3479_ID() { return getFileDescriptor_3479_ID_; }
    static jmethodID getLength_3482_ID_;
    static jmethodID& getLength_3482_ID() { return getLength_3482_ID_; }
    static jmethodID getStartOffset_3480_ID_;
    static jmethodID& getStartOffset_3480_ID() { return getStartOffset_3480_ID_; }
    static jmethodID toString_3487_ID_;
    static jmethodID& toString_3487_ID() { return toString_3487_ID_; }
    static jmethodID writeToParcel_3489_ID_;
    static jmethodID& writeToParcel_3489_ID() { return writeToParcel_3489_ID_; }

    int describeContents();
    ::g::Android::java::io::FileDescriptor* getFileDescriptor();
    int64_t getLength();
    int64_t getStartOffset();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_3488(bool arg0_, jobject arg1_);
    static uObject* getFileDescriptor_IMPL_3479(bool arg0_, jobject arg1_);
    static int64_t getLength_IMPL_3482(bool arg0_, jobject arg1_);
    static int64_t getStartOffset_IMPL_3480(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_3487(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_3489(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::content::res
