// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_CORRECTION_INFO_H__
#define __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_CORRECTION_INFO_H__

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
namespace view {
namespace inputmethod {

struct CorrectionInfo;

extern jclass CorrectionInfo___javaClass_2;
extern jmethodID CorrectionInfo__describeContents_21292_ID;
extern jmethodID CorrectionInfo__toString_21290_ID;
extern jmethodID CorrectionInfo__writeToParcel_21291_ID;

struct CorrectionInfo__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

CorrectionInfo__uType* CorrectionInfo__typeof();

void CorrectionInfo___Init_2(::uStatic* __this);
int CorrectionInfo__describeContents(CorrectionInfo* __this);
int CorrectionInfo__describeContents_IMPL_21292(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* CorrectionInfo__toString(CorrectionInfo* __this);
::uObject* CorrectionInfo__toString_IMPL_21290(::uStatic* __this, bool arg0_, jobject arg1_);
void CorrectionInfo__writeToParcel(CorrectionInfo* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void CorrectionInfo__writeToParcel_IMPL_21291(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct CorrectionInfo : ::app::Android::java::lang::Object
{
    int describeContents() { return CorrectionInfo__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { CorrectionInfo__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif
