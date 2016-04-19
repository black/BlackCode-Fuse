// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.Editable.h>
#include <Android.android.text.GetChars.h>
#include <Android.android.text.Spannable.h>
#include <Android.android.text.Spanned.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_Editable;}}}
namespace g{namespace Android{namespace java{namespace lang{struct Class;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace Runtime{struct CharArray;}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_text_Editable :25972
// {
struct Android_android_text_Editable_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::text::Editable interface2;
    ::g::Android::java::lang::CharSequence interface3;
    ::g::Android::android::text::GetChars interface4;
    ::g::Android::android::text::Spannable interface5;
    ::g::Android::android::text::Spanned interface6;
};

Android_android_text_Editable_type* Android_android_text_Editable_typeof();
void Android_android_text_Editable__append_fn(Android_android_text_Editable* __this, uObject* arg0, uObject** __retval);
void Android_android_text_Editable__append1_fn(Android_android_text_Editable* __this, uObject* arg0, int* arg1, int* arg2, uObject** __retval);
void Android_android_text_Editable__append2_fn(Android_android_text_Editable* __this, uChar* arg0, uObject** __retval);
void Android_android_text_Editable__append_IMPL_19826_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_text_Editable__append_IMPL_19827_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, uObject** __retval);
void Android_android_text_Editable__append_IMPL_19828_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uObject** __retval);
void Android_android_text_Editable__charAt_fn(Android_android_text_Editable* __this, int* arg0, uChar* __retval);
void Android_android_text_Editable__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval);
void Android_android_text_Editable__clear_fn(Android_android_text_Editable* __this);
void Android_android_text_Editable__clear_IMPL_19829_fn(bool* arg0_, jobject* arg1_);
void Android_android_text_Editable__clearSpans_fn(Android_android_text_Editable* __this);
void Android_android_text_Editable__clearSpans_IMPL_19830_fn(bool* arg0_, jobject* arg1_);
void Android_android_text_Editable__getChars_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, ::g::Android::Runtime::CharArray* arg2, int* arg3);
void Android_android_text_Editable__getChars_IMPL_19833_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* arg5_);
void Android_android_text_Editable__getFilters_fn(Android_android_text_Editable* __this, ::g::Android::Runtime::ObjectArray** __retval);
void Android_android_text_Editable__getFilters_IMPL_19832_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_text_Editable__getSpanEnd_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Android_android_text_Editable__getSpanEnd_IMPL_20038_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Android_android_text_Editable__getSpanFlags_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Android_android_text_Editable__getSpanFlags_IMPL_20039_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Android_android_text_Editable__getSpans_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, ::g::Android::Runtime::ObjectArray** __retval);
void Android_android_text_Editable__getSpans_IMPL_20036_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, uObject** __retval);
void Android_android_text_Editable__getSpanStart_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Android_android_text_Editable__getSpanStart_IMPL_20037_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Android_android_text_Editable__insert_fn(Android_android_text_Editable* __this, int* arg0, uObject* arg1, uObject** __retval);
void Android_android_text_Editable__insert1_fn(Android_android_text_Editable* __this, int* arg0, uObject* arg1, int* arg2, int* arg3, uObject** __retval);
void Android_android_text_Editable__insert_IMPL_19823_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, int* arg5_, uObject** __retval);
void Android_android_text_Editable__insert_IMPL_19824_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval);
void Android_android_text_Editable__j_delete_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, uObject** __retval);
void Android_android_text_Editable__j_delete_IMPL_19825_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);
void Android_android_text_Editable__length_fn(Android_android_text_Editable* __this, int* __retval);
void Android_android_text_Editable__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_text_Editable__nextSpanTransition_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, int* __retval);
void Android_android_text_Editable__nextSpanTransition_IMPL_20040_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* __retval);
void Android_android_text_Editable__removeSpan_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0);
void Android_android_text_Editable__removeSpan_IMPL_19987_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_text_Editable__replace_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, uObject* arg2, uObject** __retval);
void Android_android_text_Editable__replace1_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, uObject* arg2, int* arg3, int* arg4, uObject** __retval);
void Android_android_text_Editable__replace_IMPL_19821_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* arg5_, int* arg6_, uObject** __retval);
void Android_android_text_Editable__replace_IMPL_19822_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, uObject** __retval);
void Android_android_text_Editable__setFilters_fn(Android_android_text_Editable* __this, ::g::Android::Runtime::ObjectArray* arg0);
void Android_android_text_Editable__setFilters_IMPL_19831_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_text_Editable__setSpan_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0, int* arg1, int* arg2, int* arg3);
void Android_android_text_Editable__setSpan_IMPL_19986_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_);
void Android_android_text_Editable__subSequence_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, uObject** __retval);
void Android_android_text_Editable__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);
void Android_android_text_Editable__toString_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::String** __retval);
void Android_android_text_Editable__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Android_android_text_Editable : ::g::Android::java::lang::Object
{
    static jmethodID append_19826_ID_;
    static jmethodID& append_19826_ID() { return append_19826_ID_; }
    static jmethodID append_19827_ID_;
    static jmethodID& append_19827_ID() { return append_19827_ID_; }
    static jmethodID append_19828_ID_;
    static jmethodID& append_19828_ID() { return append_19828_ID_; }
    static jmethodID charAt_30511_ID_;
    static jmethodID& charAt_30511_ID() { return charAt_30511_ID_; }
    static jmethodID clear_19829_ID_;
    static jmethodID& clear_19829_ID() { return clear_19829_ID_; }
    static jmethodID clearSpans_19830_ID_;
    static jmethodID& clearSpans_19830_ID() { return clearSpans_19830_ID_; }
    static jmethodID getChars_19833_ID_;
    static jmethodID& getChars_19833_ID() { return getChars_19833_ID_; }
    static jmethodID getFilters_19832_ID_;
    static jmethodID& getFilters_19832_ID() { return getFilters_19832_ID_; }
    static jmethodID getSpanEnd_20038_ID_;
    static jmethodID& getSpanEnd_20038_ID() { return getSpanEnd_20038_ID_; }
    static jmethodID getSpanFlags_20039_ID_;
    static jmethodID& getSpanFlags_20039_ID() { return getSpanFlags_20039_ID_; }
    static jmethodID getSpans_20036_ID_;
    static jmethodID& getSpans_20036_ID() { return getSpans_20036_ID_; }
    static jmethodID getSpanStart_20037_ID_;
    static jmethodID& getSpanStart_20037_ID() { return getSpanStart_20037_ID_; }
    static jmethodID insert_19823_ID_;
    static jmethodID& insert_19823_ID() { return insert_19823_ID_; }
    static jmethodID insert_19824_ID_;
    static jmethodID& insert_19824_ID() { return insert_19824_ID_; }
    static jmethodID j_delete_19825_ID_;
    static jmethodID& j_delete_19825_ID() { return j_delete_19825_ID_; }
    static jmethodID length_30510_ID_;
    static jmethodID& length_30510_ID() { return length_30510_ID_; }
    static jmethodID nextSpanTransition_20040_ID_;
    static jmethodID& nextSpanTransition_20040_ID() { return nextSpanTransition_20040_ID_; }
    static jmethodID removeSpan_19987_ID_;
    static jmethodID& removeSpan_19987_ID() { return removeSpan_19987_ID_; }
    static jmethodID replace_19821_ID_;
    static jmethodID& replace_19821_ID() { return replace_19821_ID_; }
    static jmethodID replace_19822_ID_;
    static jmethodID& replace_19822_ID() { return replace_19822_ID_; }
    static jmethodID setFilters_19831_ID_;
    static jmethodID& setFilters_19831_ID() { return setFilters_19831_ID_; }
    static jmethodID setSpan_19986_ID_;
    static jmethodID& setSpan_19986_ID() { return setSpan_19986_ID_; }
    static jmethodID subSequence_30512_ID_;
    static jmethodID& subSequence_30512_ID() { return subSequence_30512_ID_; }
    static jmethodID toString_30513_ID_;
    static jmethodID& toString_30513_ID() { return toString_30513_ID_; }

    uObject* append(uObject* arg0);
    uObject* append1(uObject* arg0, int arg1, int arg2);
    uObject* append2(uChar arg0);
    uChar charAt(int arg0);
    void clear();
    void clearSpans();
    void getChars(int arg0, int arg1, ::g::Android::Runtime::CharArray* arg2, int arg3);
    ::g::Android::Runtime::ObjectArray* getFilters();
    int getSpanEnd(::g::Android::java::lang::Object* arg0);
    int getSpanFlags(::g::Android::java::lang::Object* arg0);
    ::g::Android::Runtime::ObjectArray* getSpans(int arg0, int arg1, ::g::Android::java::lang::Class* arg2);
    int getSpanStart(::g::Android::java::lang::Object* arg0);
    uObject* insert(int arg0, uObject* arg1);
    uObject* insert1(int arg0, uObject* arg1, int arg2, int arg3);
    uObject* j_delete(int arg0, int arg1);
    int length();
    int nextSpanTransition(int arg0, int arg1, ::g::Android::java::lang::Class* arg2);
    void removeSpan(::g::Android::java::lang::Object* arg0);
    uObject* replace(int arg0, int arg1, uObject* arg2);
    uObject* replace1(int arg0, int arg1, uObject* arg2, int arg3, int arg4);
    void setFilters(::g::Android::Runtime::ObjectArray* arg0);
    void setSpan(::g::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3);
    uObject* subSequence(int arg0, int arg1);
    static uObject* append_IMPL_19826(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* append_IMPL_19827(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static uObject* append_IMPL_19828(bool arg0_, jobject arg1_, uChar arg2_);
    static uChar charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_);
    static void clear_IMPL_19829(bool arg0_, jobject arg1_);
    static void clearSpans_IMPL_19830(bool arg0_, jobject arg1_);
    static void getChars_IMPL_19833(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_, int arg5_);
    static uObject* getFilters_IMPL_19832(bool arg0_, jobject arg1_);
    static int getSpanEnd_IMPL_20038(bool arg0_, jobject arg1_, uObject* arg2_);
    static int getSpanFlags_IMPL_20039(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getSpans_IMPL_20036(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_);
    static int getSpanStart_IMPL_20037(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* insert_IMPL_19823(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_, int arg5_);
    static uObject* insert_IMPL_19824(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static uObject* j_delete_IMPL_19825(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static int length_IMPL_30510(bool arg0_, jobject arg1_);
    static int nextSpanTransition_IMPL_20040(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_);
    static void removeSpan_IMPL_19987(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* replace_IMPL_19821(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_, int arg5_, int arg6_);
    static uObject* replace_IMPL_19822(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_);
    static void setFilters_IMPL_19831(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setSpan_IMPL_19986(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_);
    static uObject* subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static uObject* toString_IMPL_30513(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks
