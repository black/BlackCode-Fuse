// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.Spanned.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_Spanned;}}}
namespace g{namespace Android{namespace java{namespace lang{struct Class;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_text_Spanned :26558
// {
struct Android_android_text_Spanned_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::text::Spanned interface2;
    ::g::Android::java::lang::CharSequence interface3;
};

Android_android_text_Spanned_type* Android_android_text_Spanned_typeof();
void Android_android_text_Spanned__charAt_fn(Android_android_text_Spanned* __this, int* arg0, uChar* __retval);
void Android_android_text_Spanned__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval);
void Android_android_text_Spanned__getSpanEnd_fn(Android_android_text_Spanned* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Android_android_text_Spanned__getSpanEnd_IMPL_20038_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Android_android_text_Spanned__getSpanFlags_fn(Android_android_text_Spanned* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Android_android_text_Spanned__getSpanFlags_IMPL_20039_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Android_android_text_Spanned__getSpans_fn(Android_android_text_Spanned* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, ::g::Android::Runtime::ObjectArray** __retval);
void Android_android_text_Spanned__getSpans_IMPL_20036_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, uObject** __retval);
void Android_android_text_Spanned__getSpanStart_fn(Android_android_text_Spanned* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Android_android_text_Spanned__getSpanStart_IMPL_20037_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Android_android_text_Spanned__length_fn(Android_android_text_Spanned* __this, int* __retval);
void Android_android_text_Spanned__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_text_Spanned__nextSpanTransition_fn(Android_android_text_Spanned* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, int* __retval);
void Android_android_text_Spanned__nextSpanTransition_IMPL_20040_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* __retval);
void Android_android_text_Spanned__subSequence_fn(Android_android_text_Spanned* __this, int* arg0, int* arg1, uObject** __retval);
void Android_android_text_Spanned__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);
void Android_android_text_Spanned__toString_fn(Android_android_text_Spanned* __this, ::g::Android::java::lang::String** __retval);
void Android_android_text_Spanned__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Android_android_text_Spanned : ::g::Android::java::lang::Object
{
    static jmethodID charAt_30511_ID_;
    static jmethodID& charAt_30511_ID() { return charAt_30511_ID_; }
    static jmethodID getSpanEnd_20038_ID_;
    static jmethodID& getSpanEnd_20038_ID() { return getSpanEnd_20038_ID_; }
    static jmethodID getSpanFlags_20039_ID_;
    static jmethodID& getSpanFlags_20039_ID() { return getSpanFlags_20039_ID_; }
    static jmethodID getSpans_20036_ID_;
    static jmethodID& getSpans_20036_ID() { return getSpans_20036_ID_; }
    static jmethodID getSpanStart_20037_ID_;
    static jmethodID& getSpanStart_20037_ID() { return getSpanStart_20037_ID_; }
    static jmethodID length_30510_ID_;
    static jmethodID& length_30510_ID() { return length_30510_ID_; }
    static jmethodID nextSpanTransition_20040_ID_;
    static jmethodID& nextSpanTransition_20040_ID() { return nextSpanTransition_20040_ID_; }
    static jmethodID subSequence_30512_ID_;
    static jmethodID& subSequence_30512_ID() { return subSequence_30512_ID_; }
    static jmethodID toString_30513_ID_;
    static jmethodID& toString_30513_ID() { return toString_30513_ID_; }

    uChar charAt(int arg0);
    int getSpanEnd(::g::Android::java::lang::Object* arg0);
    int getSpanFlags(::g::Android::java::lang::Object* arg0);
    ::g::Android::Runtime::ObjectArray* getSpans(int arg0, int arg1, ::g::Android::java::lang::Class* arg2);
    int getSpanStart(::g::Android::java::lang::Object* arg0);
    int length();
    int nextSpanTransition(int arg0, int arg1, ::g::Android::java::lang::Class* arg2);
    uObject* subSequence(int arg0, int arg1);
    static uChar charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_);
    static int getSpanEnd_IMPL_20038(bool arg0_, jobject arg1_, uObject* arg2_);
    static int getSpanFlags_IMPL_20039(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getSpans_IMPL_20036(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_);
    static int getSpanStart_IMPL_20037(bool arg0_, jobject arg1_, uObject* arg2_);
    static int length_IMPL_30510(bool arg0_, jobject arg1_);
    static int nextSpanTransition_IMPL_20040(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_);
    static uObject* subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static uObject* toString_IMPL_30513(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks
