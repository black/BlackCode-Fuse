// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.android.view.InputEvent.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_InputEvent;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_InputEvent :1264
// {
::g::Android::android::view::InputEvent_type* Android_android_view_InputEvent_typeof();
void Android_android_view_InputEvent__writeToParcel_fn(Android_android_view_InputEvent* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Android_android_view_InputEvent__writeToParcel_IMPL_45621_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Android_android_view_InputEvent : ::g::Android::android::view::InputEvent
{
    static jmethodID writeToParcel_45621_ID_;
    static jmethodID& writeToParcel_45621_ID() { return writeToParcel_45621_ID_; }

    static void writeToParcel_IMPL_45621(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}} // ::g::Android::Fallbacks
