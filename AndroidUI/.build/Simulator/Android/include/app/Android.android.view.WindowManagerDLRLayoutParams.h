// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_WINDOW_MANAGER_D_L_R_LAYOUT_PARAMS_H__
#define __APP_ANDROID_ANDROID_VIEW_WINDOW_MANAGER_D_L_R_LAYOUT_PARAMS_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.android.view.ViewGroupDLRLayoutParams.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct WindowManagerDLRLayoutParams;

extern jclass WindowManagerDLRLayoutParams___javaClass_3;
extern jmethodID WindowManagerDLRLayoutParams__describeContents_23903_ID;
extern jmethodID WindowManagerDLRLayoutParams__toString_23907_ID;
extern jmethodID WindowManagerDLRLayoutParams__writeToParcel_23904_ID;

struct WindowManagerDLRLayoutParams__uType : ::app::Android::android::view::ViewGroupDLRLayoutParams__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

WindowManagerDLRLayoutParams__uType* WindowManagerDLRLayoutParams__typeof();

void WindowManagerDLRLayoutParams___Init_3(::uStatic* __this);
int WindowManagerDLRLayoutParams__describeContents(WindowManagerDLRLayoutParams* __this);
int WindowManagerDLRLayoutParams__describeContents_IMPL_23903(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* WindowManagerDLRLayoutParams__toString(WindowManagerDLRLayoutParams* __this);
::uObject* WindowManagerDLRLayoutParams__toString_IMPL_23907(::uStatic* __this, bool arg0_, jobject arg1_);
void WindowManagerDLRLayoutParams__writeToParcel(WindowManagerDLRLayoutParams* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void WindowManagerDLRLayoutParams__writeToParcel_IMPL_23904(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct WindowManagerDLRLayoutParams : ::app::Android::android::view::ViewGroupDLRLayoutParams
{
    int describeContents() { return WindowManagerDLRLayoutParams__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { WindowManagerDLRLayoutParams__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif
