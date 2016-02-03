// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_INPUT_EVENT_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_INPUT_EVENT_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.android.view.InputEvent.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_InputEvent;

extern jmethodID Android_android_view_InputEvent__writeToParcel_45621_ID;

struct Android_android_view_InputEvent__uType : ::app::Android::android::view::InputEvent__uType
{
};

Android_android_view_InputEvent__uType* Android_android_view_InputEvent__typeof();

void Android_android_view_InputEvent__writeToParcel(Android_android_view_InputEvent* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Android_android_view_InputEvent__writeToParcel_IMPL_45621(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Android_android_view_InputEvent : ::app::Android::android::view::InputEvent
{
};

}}}


#endif
