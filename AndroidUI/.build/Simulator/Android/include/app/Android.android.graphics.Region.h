// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_REGION_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_REGION_H__

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
namespace graphics {

struct Region;

extern jclass Region___javaClass_2;
extern jmethodID Region__describeContents_7278_ID;
extern jmethodID Region__equals_7280_ID;
extern jmethodID Region__finalize_7281_ID;
extern jmethodID Region__toString_7277_ID;
extern jmethodID Region__writeToParcel_7279_ID;

struct Region__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Region__uType* Region__typeof();

void Region___Init_2(::uStatic* __this);
int Region__describeContents(Region* __this);
int Region__describeContents_IMPL_7278(::uStatic* __this, bool arg0_, jobject arg1_);
bool Region__equals_1(Region* __this, ::app::Android::java::lang::Object* arg0);
bool Region__equals_IMPL_7280(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Region__finalize(Region* __this);
void Region__finalize_IMPL_7281(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* Region__toString(Region* __this);
::uObject* Region__toString_IMPL_7277(::uStatic* __this, bool arg0_, jobject arg1_);
void Region__writeToParcel(Region* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Region__writeToParcel_IMPL_7279(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Region : ::app::Android::java::lang::Object
{
    int describeContents() { return Region__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Region__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif
