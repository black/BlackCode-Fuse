// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WEBKIT_WEB_CHROME_CLIENT_D_L_R_CUST_CE52E805_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WEBKIT_WEB_CHROME_CLIENT_D_L_R_CUST_CE52E805_H__

#include <app/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_webkit_WebChromeClientDLRCustomViewCallback;

extern jmethodID Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_23998_ID;

struct Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::webkit::WebChromeClientDLRCustomViewCallback __interface_2;
};

Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType* Android_android_webkit_WebChromeClientDLRCustomViewCallback__typeof();

void Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden(Android_android_webkit_WebChromeClientDLRCustomViewCallback* __this);
void Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_IMPL_23998(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_android_webkit_WebChromeClientDLRCustomViewCallback : ::app::Android::java::lang::Object
{
    void onCustomViewHidden() { Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden(this); }
};

}}}


#endif
