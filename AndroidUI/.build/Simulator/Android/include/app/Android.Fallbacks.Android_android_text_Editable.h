// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_EDITABLE_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_TEXT_EDITABLE_H__

#include <app/Android.android.text.Editable.h>
#include <app/Android.android.text.GetChars.h>
#include <app/Android.android.text.Spannable.h>
#include <app/Android.android.text.Spanned.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct Class; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }
namespace app { namespace Android { namespace Runtime { struct CharArray; } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_text_InputFilter; } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_java_lang_Object; } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_text_Editable;

extern jmethodID Android_android_text_Editable__append_19826_ID;
extern jmethodID Android_android_text_Editable__append_19827_ID;
extern jmethodID Android_android_text_Editable__append_19828_ID;
extern jmethodID Android_android_text_Editable__charAt_30511_ID;
extern jmethodID Android_android_text_Editable__clear_19829_ID;
extern jmethodID Android_android_text_Editable__clearSpans_19830_ID;
extern jmethodID Android_android_text_Editable__getChars_19833_ID;
extern jmethodID Android_android_text_Editable__getFilters_19832_ID;
extern jmethodID Android_android_text_Editable__getSpanEnd_20038_ID;
extern jmethodID Android_android_text_Editable__getSpanFlags_20039_ID;
extern jmethodID Android_android_text_Editable__getSpans_20036_ID;
extern jmethodID Android_android_text_Editable__getSpanStart_20037_ID;
extern jmethodID Android_android_text_Editable__insert_19823_ID;
extern jmethodID Android_android_text_Editable__insert_19824_ID;
extern jmethodID Android_android_text_Editable__j_delete_19825_ID;
extern jmethodID Android_android_text_Editable__length_30510_ID;
extern jmethodID Android_android_text_Editable__nextSpanTransition_20040_ID;
extern jmethodID Android_android_text_Editable__removeSpan_19987_ID;
extern jmethodID Android_android_text_Editable__replace_19821_ID;
extern jmethodID Android_android_text_Editable__replace_19822_ID;
extern jmethodID Android_android_text_Editable__setFilters_19831_ID;
extern jmethodID Android_android_text_Editable__setSpan_19986_ID;
extern jmethodID Android_android_text_Editable__subSequence_30512_ID;
extern jmethodID Android_android_text_Editable__toString_30513_ID;

struct Android_android_text_Editable__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::text::Editable __interface_2;
    ::app::Android::java::lang::CharSequence __interface_3;
    ::app::Android::android::text::GetChars __interface_4;
    ::app::Android::android::text::Spannable __interface_5;
    ::app::Android::android::text::Spanned __interface_6;
};

Android_android_text_Editable__uType* Android_android_text_Editable__typeof();

::uObject* Android_android_text_Editable__append(Android_android_text_Editable* __this, ::uChar arg0);
::uObject* Android_android_text_Editable__append_1(Android_android_text_Editable* __this, ::uObject* arg0);
::uObject* Android_android_text_Editable__append_2(Android_android_text_Editable* __this, ::uObject* arg0, int arg1, int arg2);
::uObject* Android_android_text_Editable__append_IMPL_19826(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_text_Editable__append_IMPL_19827(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
::uObject* Android_android_text_Editable__append_IMPL_19828(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_);
::uChar Android_android_text_Editable__charAt(Android_android_text_Editable* __this, int arg0);
::uChar Android_android_text_Editable__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Android_android_text_Editable__clear(Android_android_text_Editable* __this);
void Android_android_text_Editable__clear_IMPL_19829(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_text_Editable__clearSpans(Android_android_text_Editable* __this);
void Android_android_text_Editable__clearSpans_IMPL_19830(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_text_Editable__getChars(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3);
void Android_android_text_Editable__getChars_IMPL_19833(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_);
::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* Android_android_text_Editable__getFilters(Android_android_text_Editable* __this);
::uObject* Android_android_text_Editable__getFilters_IMPL_19832(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_text_Editable__getSpanEnd(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0);
int Android_android_text_Editable__getSpanEnd_IMPL_20038(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Android_android_text_Editable__getSpanFlags(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0);
int Android_android_text_Editable__getSpanFlags_IMPL_20039(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::Runtime::ObjectArray__Android_java_lang_Object* Android_android_text_Editable__getSpans(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2);
::uObject* Android_android_text_Editable__getSpans_IMPL_20036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_);
int Android_android_text_Editable__getSpanStart(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0);
int Android_android_text_Editable__getSpanStart_IMPL_20037(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_text_Editable__insert(Android_android_text_Editable* __this, int arg0, ::uObject* arg1);
::uObject* Android_android_text_Editable__insert_1(Android_android_text_Editable* __this, int arg0, ::uObject* arg1, int arg2, int arg3);
::uObject* Android_android_text_Editable__insert_IMPL_19823(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_, int arg5_);
::uObject* Android_android_text_Editable__insert_IMPL_19824(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
::uObject* Android_android_text_Editable__j_delete(Android_android_text_Editable* __this, int arg0, int arg1);
::uObject* Android_android_text_Editable__j_delete_IMPL_19825(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
int Android_android_text_Editable__length(Android_android_text_Editable* __this);
int Android_android_text_Editable__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_text_Editable__nextSpanTransition(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2);
int Android_android_text_Editable__nextSpanTransition_IMPL_20040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_);
void Android_android_text_Editable__removeSpan(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0);
void Android_android_text_Editable__removeSpan_IMPL_19987(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_text_Editable__replace(Android_android_text_Editable* __this, int arg0, int arg1, ::uObject* arg2);
::uObject* Android_android_text_Editable__replace_1(Android_android_text_Editable* __this, int arg0, int arg1, ::uObject* arg2, int arg3, int arg4);
::uObject* Android_android_text_Editable__replace_IMPL_19821(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_, int arg6_);
::uObject* Android_android_text_Editable__replace_IMPL_19822(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_);
void Android_android_text_Editable__setFilters(Android_android_text_Editable* __this, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* arg0);
void Android_android_text_Editable__setFilters_IMPL_19831(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_text_Editable__setSpan(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3);
void Android_android_text_Editable__setSpan_IMPL_19986(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_);
::uObject* Android_android_text_Editable__subSequence(Android_android_text_Editable* __this, int arg0, int arg1);
::uObject* Android_android_text_Editable__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
::app::Android::java::lang::String* Android_android_text_Editable__toString(Android_android_text_Editable* __this);
::uObject* Android_android_text_Editable__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_android_text_Editable : ::app::Android::java::lang::Object
{
    ::uObject* append(::uChar arg0) { return Android_android_text_Editable__append(this, arg0); }
    ::uObject* append_1(::uObject* arg0) { return Android_android_text_Editable__append_1(this, arg0); }
    ::uObject* append_2(::uObject* arg0, int arg1, int arg2) { return Android_android_text_Editable__append_2(this, arg0, arg1, arg2); }
    ::uChar charAt(int arg0) { return Android_android_text_Editable__charAt(this, arg0); }
    void clear() { Android_android_text_Editable__clear(this); }
    void clearSpans() { Android_android_text_Editable__clearSpans(this); }
    void getChars(int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3) { Android_android_text_Editable__getChars(this, arg0, arg1, arg2, arg3); }
    ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* getFilters() { return Android_android_text_Editable__getFilters(this); }
    int getSpanEnd(::app::Android::java::lang::Object* arg0) { return Android_android_text_Editable__getSpanEnd(this, arg0); }
    int getSpanFlags(::app::Android::java::lang::Object* arg0) { return Android_android_text_Editable__getSpanFlags(this, arg0); }
    ::app::Android::Runtime::ObjectArray__Android_java_lang_Object* getSpans(int arg0, int arg1, ::app::Android::java::lang::Class* arg2) { return Android_android_text_Editable__getSpans(this, arg0, arg1, arg2); }
    int getSpanStart(::app::Android::java::lang::Object* arg0) { return Android_android_text_Editable__getSpanStart(this, arg0); }
    ::uObject* insert(int arg0, ::uObject* arg1) { return Android_android_text_Editable__insert(this, arg0, arg1); }
    ::uObject* insert_1(int arg0, ::uObject* arg1, int arg2, int arg3) { return Android_android_text_Editable__insert_1(this, arg0, arg1, arg2, arg3); }
    ::uObject* j_delete(int arg0, int arg1) { return Android_android_text_Editable__j_delete(this, arg0, arg1); }
    int length() { return Android_android_text_Editable__length(this); }
    int nextSpanTransition(int arg0, int arg1, ::app::Android::java::lang::Class* arg2) { return Android_android_text_Editable__nextSpanTransition(this, arg0, arg1, arg2); }
    void removeSpan(::app::Android::java::lang::Object* arg0) { Android_android_text_Editable__removeSpan(this, arg0); }
    ::uObject* replace(int arg0, int arg1, ::uObject* arg2) { return Android_android_text_Editable__replace(this, arg0, arg1, arg2); }
    ::uObject* replace_1(int arg0, int arg1, ::uObject* arg2, int arg3, int arg4) { return Android_android_text_Editable__replace_1(this, arg0, arg1, arg2, arg3, arg4); }
    void setFilters(::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* arg0) { Android_android_text_Editable__setFilters(this, arg0); }
    void setSpan(::app::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3) { Android_android_text_Editable__setSpan(this, arg0, arg1, arg2, arg3); }
    ::uObject* subSequence(int arg0, int arg1) { return Android_android_text_Editable__subSequence(this, arg0, arg1); }
};

}}}


#endif
