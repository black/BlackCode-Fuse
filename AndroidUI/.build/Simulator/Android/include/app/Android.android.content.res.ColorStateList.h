// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_RES_COLOR_STATE_LIST_H__
#define __APP_ANDROID_ANDROID_CONTENT_RES_COLOR_STATE_LIST_H__

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

struct ColorStateList;

extern jclass ColorStateList___javaClass_2;
extern jmethodID ColorStateList__describeContents_3527_ID;
extern jmethodID ColorStateList__getDefaultColor_3525_ID;
extern jmethodID ColorStateList__toString_3526_ID;
extern jmethodID ColorStateList__writeToParcel_3528_ID;

struct ColorStateList__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

ColorStateList__uType* ColorStateList__typeof();

void ColorStateList___Init_2(::uStatic* __this);
int ColorStateList__describeContents(ColorStateList* __this);
int ColorStateList__describeContents_IMPL_3527(::uStatic* __this, bool arg0_, jobject arg1_);
int ColorStateList__getDefaultColor(ColorStateList* __this);
int ColorStateList__getDefaultColor_IMPL_3525(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* ColorStateList__toString(ColorStateList* __this);
::uObject* ColorStateList__toString_IMPL_3526(::uStatic* __this, bool arg0_, jobject arg1_);
void ColorStateList__writeToParcel(ColorStateList* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void ColorStateList__writeToParcel_IMPL_3528(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct ColorStateList : ::app::Android::java::lang::Object
{
    int describeContents() { return ColorStateList__describeContents(this); }
    int getDefaultColor() { return ColorStateList__getDefaultColor(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { ColorStateList__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif
