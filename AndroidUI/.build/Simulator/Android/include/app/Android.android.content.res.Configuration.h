// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_RES_CONFIGURATION_H__
#define __APP_ANDROID_ANDROID_CONTENT_RES_CONFIGURATION_H__

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
namespace res {

struct Configuration;

extern jclass Configuration___javaClass_2;
extern jmethodID Configuration__describeContents_3614_ID;
extern jmethodID Configuration__equals_3619_ID;
extern jmethodID Configuration__hashCode_3620_ID;
extern jmethodID Configuration__toString_3609_ID;
extern jmethodID Configuration__writeToParcel_3615_ID;

struct Configuration__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Configuration__uType* Configuration__typeof();

void Configuration___Init_2(::uStatic* __this);
int Configuration__describeContents(Configuration* __this);
int Configuration__describeContents_IMPL_3614(::uStatic* __this, bool arg0_, jobject arg1_);
bool Configuration__equals_1(Configuration* __this, ::app::Android::java::lang::Object* arg0);
bool Configuration__equals_IMPL_3619(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Configuration__hashCode_1(Configuration* __this);
int Configuration__hashCode_IMPL_3620(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* Configuration__toString(Configuration* __this);
::uObject* Configuration__toString_IMPL_3609(::uStatic* __this, bool arg0_, jobject arg1_);
void Configuration__writeToParcel(Configuration* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Configuration__writeToParcel_IMPL_3615(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Configuration : ::app::Android::java::lang::Object
{
    int describeContents() { return Configuration__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Configuration__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif
