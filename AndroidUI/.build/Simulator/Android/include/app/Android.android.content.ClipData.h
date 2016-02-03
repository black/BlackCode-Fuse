// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_CLIP_DATA_H__
#define __APP_ANDROID_ANDROID_CONTENT_CLIP_DATA_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace content {

struct ClipData;

extern jclass ClipData___javaClass_2;
extern jmethodID ClipData__describeContents_3828_ID;
extern jmethodID ClipData__toString_3827_ID;
extern jmethodID ClipData__writeToParcel_3829_ID;

struct ClipData__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

ClipData__uType* ClipData__typeof();

void ClipData___Init_2(::uStatic* __this);
int ClipData__describeContents(ClipData* __this);
int ClipData__describeContents_IMPL_3828(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* ClipData__toString(ClipData* __this);
::uObject* ClipData__toString_IMPL_3827(::uStatic* __this, bool arg0_, jobject arg1_);
void ClipData__writeToParcel(ClipData* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void ClipData__writeToParcel_IMPL_3829(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct ClipData : ::app::Android::java::lang::Object
{
    int describeContents() { return ClipData__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { ClipData__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif
