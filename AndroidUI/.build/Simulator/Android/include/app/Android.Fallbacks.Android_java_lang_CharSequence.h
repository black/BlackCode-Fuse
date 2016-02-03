// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_JAVA_LANG_CHAR_SEQUENCE_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_JAVA_LANG_CHAR_SEQUENCE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_java_lang_CharSequence;

extern jmethodID Android_java_lang_CharSequence__charAt_30511_ID;
extern jmethodID Android_java_lang_CharSequence__length_30510_ID;
extern jmethodID Android_java_lang_CharSequence__subSequence_30512_ID;
extern jmethodID Android_java_lang_CharSequence__toString_30513_ID;

struct Android_java_lang_CharSequence__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::java::lang::CharSequence __interface_2;
};

Android_java_lang_CharSequence__uType* Android_java_lang_CharSequence__typeof();

::uChar Android_java_lang_CharSequence__charAt(Android_java_lang_CharSequence* __this, int arg0);
::uChar Android_java_lang_CharSequence__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
int Android_java_lang_CharSequence__length(Android_java_lang_CharSequence* __this);
int Android_java_lang_CharSequence__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_java_lang_CharSequence__subSequence(Android_java_lang_CharSequence* __this, int arg0, int arg1);
::uObject* Android_java_lang_CharSequence__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
::app::Android::java::lang::String* Android_java_lang_CharSequence__toString(Android_java_lang_CharSequence* __this);
::uObject* Android_java_lang_CharSequence__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_java_lang_CharSequence : ::app::Android::java::lang::Object
{
    ::uChar charAt(int arg0) { return Android_java_lang_CharSequence__charAt(this, arg0); }
    int length() { return Android_java_lang_CharSequence__length(this); }
    ::uObject* subSequence(int arg0, int arg1) { return Android_java_lang_CharSequence__subSequence(this, arg0, arg1); }
};

}}}


#endif
