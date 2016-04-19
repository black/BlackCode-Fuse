// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.Layout.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace text{struct LayoutDLRAlignment;}}}}
namespace g{namespace Android{namespace android{namespace text{struct StaticLayout;}}}}
namespace g{namespace Android{namespace android{namespace text{struct TextPaint;}}}}
namespace g{namespace Android{namespace android{namespace text{struct TextUtilsDLRTruncateAt;}}}}

namespace g{
namespace Android{
namespace android{
namespace text{

// public sealed extern class StaticLayout :3253
// {
::g::Android::java::lang::Object_type* StaticLayout_typeof();
void StaticLayout__ctor_7_fn(StaticLayout* __this, uObject* arg0, ::g::Android::android::text::TextPaint* arg1, int* arg2, ::g::Android::android::text::LayoutDLRAlignment* arg3, float* arg4, float* arg5, bool* arg6);
void StaticLayout__ctor_9_fn(StaticLayout* __this, uObject* arg0, int* arg1, int* arg2, ::g::Android::android::text::TextPaint* arg3, int* arg4, ::g::Android::android::text::LayoutDLRAlignment* arg5, float* arg6, float* arg7, bool* arg8, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg9, int* arg10);
void StaticLayout___Init3_fn();
void StaticLayout__getLineCount_fn(StaticLayout* __this, int* __retval);
void StaticLayout__getLineCount_IMPL_20064_fn(bool* arg0_, jobject* arg1_, int* __retval);
void StaticLayout__getLineStart_fn(StaticLayout* __this, int* arg0, int* __retval);
void StaticLayout__getLineStart_IMPL_20067_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval);
void StaticLayout__New6_fn(uObject* arg0, ::g::Android::android::text::TextPaint* arg1, int* arg2, ::g::Android::android::text::LayoutDLRAlignment* arg3, float* arg4, float* arg5, bool* arg6, StaticLayout** __retval);
void StaticLayout__New8_fn(uObject* arg0, int* arg1, int* arg2, ::g::Android::android::text::TextPaint* arg3, int* arg4, ::g::Android::android::text::LayoutDLRAlignment* arg5, float* arg6, float* arg7, bool* arg8, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg9, int* arg10, StaticLayout** __retval);

struct StaticLayout : ::g::Android::android::text::Layout
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID getLineCount_20064_ID_;
    static jmethodID& getLineCount_20064_ID() { return getLineCount_20064_ID_; }
    static jmethodID getLineStart_20067_ID_;
    static jmethodID& getLineStart_20067_ID() { return getLineStart_20067_ID_; }
    static jmethodID StaticLayout_20060_ID_c_;
    static jmethodID& StaticLayout_20060_ID_c() { return StaticLayout_20060_ID_c_; }
    static jmethodID StaticLayout_20062_ID_c_;
    static jmethodID& StaticLayout_20062_ID_c() { return StaticLayout_20062_ID_c_; }

    void ctor_7(uObject* arg0, ::g::Android::android::text::TextPaint* arg1, int arg2, ::g::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6);
    void ctor_9(uObject* arg0, int arg1, int arg2, ::g::Android::android::text::TextPaint* arg3, int arg4, ::g::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10);
    int getLineCount();
    int getLineStart(int arg0);
    static void _Init3();
    static int getLineCount_IMPL_20064(bool arg0_, jobject arg1_);
    static int getLineStart_IMPL_20067(bool arg0_, jobject arg1_, int arg2_);
    static StaticLayout* New6(uObject* arg0, ::g::Android::android::text::TextPaint* arg1, int arg2, ::g::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6);
    static StaticLayout* New8(uObject* arg0, int arg1, int arg2, ::g::Android::android::text::TextPaint* arg3, int arg4, ::g::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10);
};
// }

}}}} // ::g::Android::android::text
