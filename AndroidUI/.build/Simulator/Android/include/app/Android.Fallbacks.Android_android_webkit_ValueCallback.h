// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WEBKIT_VALUE_CALLBACK_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WEBKIT_VALUE_CALLBACK_H__

#include <app/Android.android.webkit.ValueCallback.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_webkit_ValueCallback;

extern jmethodID Android_android_webkit_ValueCallback__onReceiveValue_23991_ID;

struct Android_android_webkit_ValueCallback__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::webkit::ValueCallback __interface_2;
};

Android_android_webkit_ValueCallback__uType* Android_android_webkit_ValueCallback__typeof();

void Android_android_webkit_ValueCallback__onReceiveValue(Android_android_webkit_ValueCallback* __this, ::app::Android::java::lang::Object* arg0);
void Android_android_webkit_ValueCallback__onReceiveValue_IMPL_23991(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_webkit_ValueCallback : ::app::Android::java::lang::Object
{
    void onReceiveValue(::app::Android::java::lang::Object* arg0) { Android_android_webkit_ValueCallback__onReceiveValue(this, arg0); }
};

}}}


#endif
