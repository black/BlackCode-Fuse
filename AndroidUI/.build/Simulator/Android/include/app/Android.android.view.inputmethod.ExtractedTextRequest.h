// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_EXTRACTED_TEXT_REQUEST_H__
#define __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_EXTRACTED_TEXT_REQUEST_H__

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

struct ExtractedTextRequest;

extern jclass ExtractedTextRequest___javaClass_2;
extern jmethodID ExtractedTextRequest__describeContents_21350_ID;
extern jmethodID ExtractedTextRequest__writeToParcel_21349_ID;

struct ExtractedTextRequest__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

ExtractedTextRequest__uType* ExtractedTextRequest__typeof();

void ExtractedTextRequest___Init_2(::uStatic* __this);
int ExtractedTextRequest__describeContents(ExtractedTextRequest* __this);
int ExtractedTextRequest__describeContents_IMPL_21350(::uStatic* __this, bool arg0_, jobject arg1_);
void ExtractedTextRequest__writeToParcel(ExtractedTextRequest* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void ExtractedTextRequest__writeToParcel_IMPL_21349(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct ExtractedTextRequest : ::app::Android::java::lang::Object
{
    int describeContents() { return ExtractedTextRequest__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { ExtractedTextRequest__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif
