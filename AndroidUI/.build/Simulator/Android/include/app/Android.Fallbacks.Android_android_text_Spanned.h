// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_SPANNED_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_SPANNED_H__

#include <app/Android.android.text.Spanned.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct Class; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_java_lang_Object; } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_text_Spanned;

extern jmethodID Android_android_text_Spanned__charAt_30511_ID;
extern jmethodID Android_android_text_Spanned__getSpanEnd_20038_ID;
extern jmethodID Android_android_text_Spanned__getSpanFlags_20039_ID;
extern jmethodID Android_android_text_Spanned__getSpans_20036_ID;
extern jmethodID Android_android_text_Spanned__getSpanStart_20037_ID;
extern jmethodID Android_android_text_Spanned__length_30510_ID;
extern jmethodID Android_android_text_Spanned__nextSpanTransition_20040_ID;
extern jmethodID Android_android_text_Spanned__subSequence_30512_ID;
extern jmethodID Android_android_text_Spanned__toString_30513_ID;

struct Android_android_text_Spanned__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::text::Spanned __interface_2;
    ::app::Android::java::lang::CharSequence __interface_3;
};

Android_android_text_Spanned__uType* Android_android_text_Spanned__typeof();

::uChar Android_android_text_Spanned__charAt(Android_android_text_Spanned* __this, int arg0);
::uChar Android_android_text_Spanned__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
int Android_android_text_Spanned__getSpanEnd(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0);
int Android_android_text_Spanned__getSpanEnd_IMPL_20038(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Android_android_text_Spanned__getSpanFlags(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0);
int Android_android_text_Spanned__getSpanFlags_IMPL_20039(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::Runtime::ObjectArray__Android_java_lang_Object* Android_android_text_Spanned__getSpans(Android_android_text_Spanned* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2);
::uObject* Android_android_text_Spanned__getSpans_IMPL_20036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_);
int Android_android_text_Spanned__getSpanStart(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0);
int Android_android_text_Spanned__getSpanStart_IMPL_20037(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Android_android_text_Spanned__length(Android_android_text_Spanned* __this);
int Android_android_text_Spanned__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_text_Spanned__nextSpanTransition(Android_android_text_Spanned* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2);
int Android_android_text_Spanned__nextSpanTransition_IMPL_20040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_);
::uObject* Android_android_text_Spanned__subSequence(Android_android_text_Spanned* __this, int arg0, int arg1);
::uObject* Android_android_text_Spanned__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
::app::Android::java::lang::String* Android_android_text_Spanned__toString(Android_android_text_Spanned* __this);
::uObject* Android_android_text_Spanned__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_android_text_Spanned : ::app::Android::java::lang::Object
{
    ::uChar charAt(int arg0) { return Android_android_text_Spanned__charAt(this, arg0); }
    int getSpanEnd(::app::Android::java::lang::Object* arg0) { return Android_android_text_Spanned__getSpanEnd(this, arg0); }
    int getSpanFlags(::app::Android::java::lang::Object* arg0) { return Android_android_text_Spanned__getSpanFlags(this, arg0); }
    ::app::Android::Runtime::ObjectArray__Android_java_lang_Object* getSpans(int arg0, int arg1, ::app::Android::java::lang::Class* arg2) { return Android_android_text_Spanned__getSpans(this, arg0, arg1, arg2); }
    int getSpanStart(::app::Android::java::lang::Object* arg0) { return Android_android_text_Spanned__getSpanStart(this, arg0); }
    int length() { return Android_android_text_Spanned__length(this); }
    int nextSpanTransition(int arg0, int arg1, ::app::Android::java::lang::Class* arg2) { return Android_android_text_Spanned__nextSpanTransition(this, arg0, arg1, arg2); }
    ::uObject* subSequence(int arg0, int arg1) { return Android_android_text_Spanned__subSequence(this, arg0, arg1); }
};

}}}


#endif
