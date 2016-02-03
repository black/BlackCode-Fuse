// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.GetChars.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_GetChars;}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace Runtime{struct CharArray;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_text_GetChars :26205
// {
struct Android_android_text_GetChars_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::text::GetChars interface2;
    ::g::Android::java::lang::CharSequence interface3;
};

Android_android_text_GetChars_type* Android_android_text_GetChars_typeof();
void Android_android_text_GetChars__charAt_fn(Android_android_text_GetChars* __this, int* arg0, uChar* __retval);
void Android_android_text_GetChars__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval);
void Android_android_text_GetChars__getChars_fn(Android_android_text_GetChars* __this, int* arg0, int* arg1, ::g::Android::Runtime::CharArray* arg2, int* arg3);
void Android_android_text_GetChars__getChars_IMPL_19833_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* arg5_);
void Android_android_text_GetChars__length_fn(Android_android_text_GetChars* __this, int* __retval);
void Android_android_text_GetChars__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_text_GetChars__subSequence_fn(Android_android_text_GetChars* __this, int* arg0, int* arg1, uObject** __retval);
void Android_android_text_GetChars__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);
void Android_android_text_GetChars__toString_fn(Android_android_text_GetChars* __this, ::g::Android::java::lang::String** __retval);
void Android_android_text_GetChars__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Android_android_text_GetChars : ::g::Android::java::lang::Object
{
    static jmethodID charAt_30511_ID_;
    static jmethodID& charAt_30511_ID() { return charAt_30511_ID_; }
    static jmethodID getChars_19833_ID_;
    static jmethodID& getChars_19833_ID() { return getChars_19833_ID_; }
    static jmethodID length_30510_ID_;
    static jmethodID& length_30510_ID() { return length_30510_ID_; }
    static jmethodID subSequence_30512_ID_;
    static jmethodID& subSequence_30512_ID() { return subSequence_30512_ID_; }
    static jmethodID toString_30513_ID_;
    static jmethodID& toString_30513_ID() { return toString_30513_ID_; }

    uChar charAt(int arg0);
    void getChars(int arg0, int arg1, ::g::Android::Runtime::CharArray* arg2, int arg3);
    int length();
    uObject* subSequence(int arg0, int arg1);
    static uChar charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_);
    static void getChars_IMPL_19833(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_, int arg5_);
    static int length_IMPL_30510(bool arg0_, jobject arg1_);
    static uObject* subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static uObject* toString_IMPL_30513(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks
