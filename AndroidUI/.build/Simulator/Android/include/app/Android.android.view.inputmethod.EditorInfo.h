// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_EDITOR_INFO_H__
#define __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_EDITOR_INFO_H__

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

struct EditorInfo;

extern jclass EditorInfo___javaClass_2;
extern jmethodID EditorInfo__describeContents_21329_ID;
extern jmethodID EditorInfo__writeToParcel_21328_ID;

struct EditorInfo__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

EditorInfo__uType* EditorInfo__typeof();

void EditorInfo___Init_2(::uStatic* __this);
int EditorInfo__describeContents(EditorInfo* __this);
int EditorInfo__describeContents_IMPL_21329(::uStatic* __this, bool arg0_, jobject arg1_);
void EditorInfo__writeToParcel(EditorInfo* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void EditorInfo__writeToParcel_IMPL_21328(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct EditorInfo : ::app::Android::java::lang::Object
{
    int describeContents() { return EditorInfo__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { EditorInfo__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif
