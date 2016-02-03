// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_COMPLETION_INFO_H__
#define __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_COMPLETION_INFO_H__

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

struct CompletionInfo;

extern jclass CompletionInfo___javaClass_2;
extern jmethodID CompletionInfo__describeContents_21284_ID;
extern jmethodID CompletionInfo__toString_21282_ID;
extern jmethodID CompletionInfo__writeToParcel_21283_ID;

struct CompletionInfo__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

CompletionInfo__uType* CompletionInfo__typeof();

void CompletionInfo___Init_2(::uStatic* __this);
int CompletionInfo__describeContents(CompletionInfo* __this);
int CompletionInfo__describeContents_IMPL_21284(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* CompletionInfo__toString(CompletionInfo* __this);
::uObject* CompletionInfo__toString_IMPL_21282(::uStatic* __this, bool arg0_, jobject arg1_);
void CompletionInfo__writeToParcel(CompletionInfo* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void CompletionInfo__writeToParcel_IMPL_21283(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct CompletionInfo : ::app::Android::java::lang::Object
{
    int describeContents() { return CompletionInfo__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { CompletionInfo__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif
