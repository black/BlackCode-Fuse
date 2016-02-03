// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_GET_CHARS_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_GET_CHARS_H__

#include <app/Android.android.text.GetChars.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }
namespace app { namespace Android { namespace Runtime { struct CharArray; } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_text_GetChars;

extern jmethodID Android_android_text_GetChars__charAt_30511_ID;
extern jmethodID Android_android_text_GetChars__getChars_19833_ID;
extern jmethodID Android_android_text_GetChars__length_30510_ID;
extern jmethodID Android_android_text_GetChars__subSequence_30512_ID;
extern jmethodID Android_android_text_GetChars__toString_30513_ID;

struct Android_android_text_GetChars__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::text::GetChars __interface_2;
    ::app::Android::java::lang::CharSequence __interface_3;
};

Android_android_text_GetChars__uType* Android_android_text_GetChars__typeof();

::uChar Android_android_text_GetChars__charAt(Android_android_text_GetChars* __this, int arg0);
::uChar Android_android_text_GetChars__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Android_android_text_GetChars__getChars(Android_android_text_GetChars* __this, int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3);
void Android_android_text_GetChars__getChars_IMPL_19833(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_);
int Android_android_text_GetChars__length(Android_android_text_GetChars* __this);
int Android_android_text_GetChars__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_text_GetChars__subSequence(Android_android_text_GetChars* __this, int arg0, int arg1);
::uObject* Android_android_text_GetChars__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
::app::Android::java::lang::String* Android_android_text_GetChars__toString(Android_android_text_GetChars* __this);
::uObject* Android_android_text_GetChars__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_android_text_GetChars : ::app::Android::java::lang::Object
{
    ::uChar charAt(int arg0) { return Android_android_text_GetChars__charAt(this, arg0); }
    void getChars(int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3) { Android_android_text_GetChars__getChars(this, arg0, arg1, arg2, arg3); }
    int length() { return Android_android_text_GetChars__length(this); }
    ::uObject* subSequence(int arg0, int arg1) { return Android_android_text_GetChars__subSequence(this, arg0, arg1); }
};

}}}


#endif
