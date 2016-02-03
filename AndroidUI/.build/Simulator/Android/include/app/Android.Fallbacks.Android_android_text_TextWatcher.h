// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_TEXT_WATCHER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_TEXT_WATCHER_H__

#include <app/Android.android.text.TextWatcher.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_text_TextWatcher;

extern jmethodID Android_android_text_TextWatcher__afterTextChanged_20153_ID;
extern jmethodID Android_android_text_TextWatcher__beforeTextChanged_20151_ID;
extern jmethodID Android_android_text_TextWatcher__onTextChanged_20152_ID;

struct Android_android_text_TextWatcher__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::text::TextWatcher __interface_2;
};

Android_android_text_TextWatcher__uType* Android_android_text_TextWatcher__typeof();

void Android_android_text_TextWatcher__afterTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0);
void Android_android_text_TextWatcher__afterTextChanged_IMPL_20153(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_text_TextWatcher__beforeTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0, int arg1, int arg2, int arg3);
void Android_android_text_TextWatcher__beforeTextChanged_IMPL_20151(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_);
void Android_android_text_TextWatcher__onTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0, int arg1, int arg2, int arg3);
void Android_android_text_TextWatcher__onTextChanged_IMPL_20152(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_);

struct Android_android_text_TextWatcher : ::app::Android::java::lang::Object
{
    void afterTextChanged(::uObject* arg0) { Android_android_text_TextWatcher__afterTextChanged(this, arg0); }
    void beforeTextChanged(::uObject* arg0, int arg1, int arg2, int arg3) { Android_android_text_TextWatcher__beforeTextChanged(this, arg0, arg1, arg2, arg3); }
    void onTextChanged(::uObject* arg0, int arg1, int arg2, int arg3) { Android_android_text_TextWatcher__onTextChanged(this, arg0, arg1, arg2, arg3); }
};

}}}


#endif
