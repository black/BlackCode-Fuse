// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WEBKIT_GEOLOCATION_PERMISSIONS_B666DC8A_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WEBKIT_GEOLOCATION_PERMISSIONS_B666DC8A_H__

#include <app/Android.android.webkit.GeolocationPermissionsDLRCallback.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_webkit_GeolocationPermissionsDLRCallback;

extern jmethodID Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_23945_ID;

struct Android_android_webkit_GeolocationPermissionsDLRCallback__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::webkit::GeolocationPermissionsDLRCallback __interface_2;
};

Android_android_webkit_GeolocationPermissionsDLRCallback__uType* Android_android_webkit_GeolocationPermissionsDLRCallback__typeof();

void Android_android_webkit_GeolocationPermissionsDLRCallback__invoke(Android_android_webkit_GeolocationPermissionsDLRCallback* __this, ::app::Android::java::lang::String* arg0, bool arg1, bool arg2);
void Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_IMPL_23945(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_, bool arg4_);

struct Android_android_webkit_GeolocationPermissionsDLRCallback : ::app::Android::java::lang::Object
{
    void invoke(::app::Android::java::lang::String* arg0, bool arg1, bool arg2) { Android_android_webkit_GeolocationPermissionsDLRCallback__invoke(this, arg0, arg1, arg2); }
};

}}}


#endif
