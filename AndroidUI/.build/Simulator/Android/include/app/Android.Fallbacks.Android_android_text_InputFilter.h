// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_INPUT_FILTER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_INPUT_FILTER_H__

#include <app/Android.android.text.InputFilter.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_text_InputFilter;

extern jmethodID Android_android_text_InputFilter__filter_19845_ID;

struct Android_android_text_InputFilter__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::text::InputFilter __interface_2;
};

Android_android_text_InputFilter__uType* Android_android_text_InputFilter__typeof();

::uObject* Android_android_text_InputFilter__filter(Android_android_text_InputFilter* __this, ::uObject* arg0, int arg1, int arg2, ::uObject* arg3, int arg4, int arg5);
::uObject* Android_android_text_InputFilter__filter_IMPL_19845(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, ::uObject* arg5_, int arg6_, int arg7_);

struct Android_android_text_InputFilter : ::app::Android::java::lang::Object
{
    ::uObject* filter(::uObject* arg0, int arg1, int arg2, ::uObject* arg3, int arg4, int arg5) { return Android_android_text_InputFilter__filter(this, arg0, arg1, arg2, arg3, arg4, arg5); }
};

}}}


#endif
