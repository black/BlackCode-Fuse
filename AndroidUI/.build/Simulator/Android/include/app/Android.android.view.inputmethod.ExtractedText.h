// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_EXTRACTED_TEXT_H__
#define __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_EXTRACTED_TEXT_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {
namespace inputmethod {

struct ExtractedText;

extern jclass ExtractedText___javaClass_2;
extern jmethodID ExtractedText__describeContents_21342_ID;
extern jmethodID ExtractedText__writeToParcel_21341_ID;

struct ExtractedText__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

ExtractedText__uType* ExtractedText__typeof();

void ExtractedText___Init_2(::uStatic* __this);
int ExtractedText__describeContents(ExtractedText* __this);
int ExtractedText__describeContents_IMPL_21342(::uStatic* __this, bool arg0_, jobject arg1_);
void ExtractedText__writeToParcel(ExtractedText* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void ExtractedText__writeToParcel_IMPL_21341(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct ExtractedText : ::app::Android::java::lang::Object
{
    int describeContents() { return ExtractedText__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { ExtractedText__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif
