// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_NET_URI_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_NET_URI_H__

#include <app/Android.android.net.Uri.h>
#include <app/Android.android.os.Parcelable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_net_Uri;

extern jmethodID Android_android_net_Uri__describeContents_45669_ID;
extern jmethodID Android_android_net_Uri__writeToParcel_45670_ID;

struct Android_android_net_Uri__uType : ::app::Android::android::net::Uri__uType
{
};

Android_android_net_Uri__uType* Android_android_net_Uri__typeof();

int Android_android_net_Uri__describeContents(Android_android_net_Uri* __this);
int Android_android_net_Uri__describeContents_IMPL_45669(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_net_Uri__writeToParcel(Android_android_net_Uri* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Android_android_net_Uri__writeToParcel_IMPL_45670(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Android_android_net_Uri : ::app::Android::android::net::Uri
{
};

}}}


#endif
