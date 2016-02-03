// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_BUNDLE_H__
#define __APP_ANDROID_ANDROID_OS_BUNDLE_H__

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
namespace os {

struct Bundle;

extern jclass Bundle___javaClass_2;
extern jmethodID Bundle__describeContents_13584_ID;
extern jmethodID Bundle__toString_13587_ID;
extern jmethodID Bundle__writeToParcel_13585_ID;

struct Bundle__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Bundle__uType* Bundle__typeof();

void Bundle___Init_2(::uStatic* __this);
int Bundle__describeContents(Bundle* __this);
int Bundle__describeContents_IMPL_13584(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* Bundle__toString(Bundle* __this);
::uObject* Bundle__toString_IMPL_13587(::uStatic* __this, bool arg0_, jobject arg1_);
void Bundle__writeToParcel(Bundle* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Bundle__writeToParcel_IMPL_13585(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Bundle : ::app::Android::java::lang::Object
{
    int describeContents() { return Bundle__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Bundle__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif
