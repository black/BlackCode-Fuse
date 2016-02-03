// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.InputFilter.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_InputFilter;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_text_InputFilter :26312
// {
struct Android_android_text_InputFilter_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::text::InputFilter interface2;
};

Android_android_text_InputFilter_type* Android_android_text_InputFilter_typeof();
void Android_android_text_InputFilter__filter_fn(Android_android_text_InputFilter* __this, uObject* arg0, int* arg1, int* arg2, uObject* arg3, int* arg4, int* arg5, uObject** __retval);
void Android_android_text_InputFilter__filter_IMPL_19845_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, uObject* arg5_, int* arg6_, int* arg7_, uObject** __retval);

struct Android_android_text_InputFilter : ::g::Android::java::lang::Object
{
    static jmethodID filter_19845_ID_;
    static jmethodID& filter_19845_ID() { return filter_19845_ID_; }

    uObject* filter(uObject* arg0, int arg1, int arg2, uObject* arg3, int arg4, int arg5);
    static uObject* filter_IMPL_19845(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, uObject* arg5_, int arg6_, int arg7_);
};
// }

}}} // ::g::Android::Fallbacks
