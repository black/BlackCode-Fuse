// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_WINDOW_ID_H__
#define __APP_ANDROID_ANDROID_VIEW_WINDOW_ID_H__

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

struct WindowId;

extern jclass WindowId___javaClass_2;
extern jmethodID WindowId__describeContents_23770_ID;
extern jmethodID WindowId__equals_23767_ID;
extern jmethodID WindowId__hashCode_23768_ID;
extern jmethodID WindowId__toString_23769_ID;
extern jmethodID WindowId__writeToParcel_23771_ID;

struct WindowId__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

WindowId__uType* WindowId__typeof();

void WindowId___Init_2(::uStatic* __this);
int WindowId__describeContents(WindowId* __this);
int WindowId__describeContents_IMPL_23770(::uStatic* __this, bool arg0_, jobject arg1_);
bool WindowId__equals_1(WindowId* __this, ::app::Android::java::lang::Object* arg0);
bool WindowId__equals_IMPL_23767(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int WindowId__hashCode_1(WindowId* __this);
int WindowId__hashCode_IMPL_23768(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* WindowId__toString(WindowId* __this);
::uObject* WindowId__toString_IMPL_23769(::uStatic* __this, bool arg0_, jobject arg1_);
void WindowId__writeToParcel(WindowId* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void WindowId__writeToParcel_IMPL_23771(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct WindowId : ::app::Android::java::lang::Object
{
    int describeContents() { return WindowId__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { WindowId__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif
