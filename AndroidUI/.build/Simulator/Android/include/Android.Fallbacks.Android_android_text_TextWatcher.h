// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.TextWatcher.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_TextWatcher;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_text_TextWatcher :26740
// {
struct Android_android_text_TextWatcher_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::text::TextWatcher interface2;
};

Android_android_text_TextWatcher_type* Android_android_text_TextWatcher_typeof();
void Android_android_text_TextWatcher__afterTextChanged_fn(Android_android_text_TextWatcher* __this, uObject* arg0);
void Android_android_text_TextWatcher__afterTextChanged_IMPL_20153_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_text_TextWatcher__beforeTextChanged_fn(Android_android_text_TextWatcher* __this, uObject* arg0, int* arg1, int* arg2, int* arg3);
void Android_android_text_TextWatcher__beforeTextChanged_IMPL_20151_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_);
void Android_android_text_TextWatcher__onTextChanged_fn(Android_android_text_TextWatcher* __this, uObject* arg0, int* arg1, int* arg2, int* arg3);
void Android_android_text_TextWatcher__onTextChanged_IMPL_20152_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_);

struct Android_android_text_TextWatcher : ::g::Android::java::lang::Object
{
    static jmethodID afterTextChanged_20153_ID_;
    static jmethodID& afterTextChanged_20153_ID() { return afterTextChanged_20153_ID_; }
    static jmethodID beforeTextChanged_20151_ID_;
    static jmethodID& beforeTextChanged_20151_ID() { return beforeTextChanged_20151_ID_; }
    static jmethodID onTextChanged_20152_ID_;
    static jmethodID& onTextChanged_20152_ID() { return onTextChanged_20152_ID_; }

    void afterTextChanged(uObject* arg0);
    void beforeTextChanged(uObject* arg0, int arg1, int arg2, int arg3);
    void onTextChanged(uObject* arg0, int arg1, int arg2, int arg3);
    static void afterTextChanged_IMPL_20153(bool arg0_, jobject arg1_, uObject* arg2_);
    static void beforeTextChanged_IMPL_20151(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_);
    static void onTextChanged_IMPL_20152(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_);
};
// }

}}} // ::g::Android::Fallbacks
