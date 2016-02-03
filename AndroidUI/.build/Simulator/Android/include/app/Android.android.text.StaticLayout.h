// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_STATIC_LAYOUT_H__
#define __APP_ANDROID_ANDROID_TEXT_STATIC_LAYOUT_H__

#include <app/Android.android.text.Layout.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace text { struct LayoutDLRAlignment; } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextPaint; } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextUtilsDLRTruncateAt; } } } }

namespace app {
namespace Android {
namespace android {
namespace text {

struct StaticLayout;

extern jclass StaticLayout___javaClass_3;
extern jmethodID StaticLayout__getLineCount_20064_ID;
extern jmethodID StaticLayout__StaticLayout_20060_ID_c;
extern jmethodID StaticLayout__StaticLayout_20062_ID_c;

struct StaticLayout__uType : ::app::Android::android::text::Layout__uType
{
};

StaticLayout__uType* StaticLayout__typeof();

void StaticLayout___Init_3(::uStatic* __this);
void StaticLayout___ObjInit_7(StaticLayout* __this, ::uObject* arg0, int arg1, int arg2, ::app::Android::android::text::TextPaint* arg3, int arg4, ::app::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10);
void StaticLayout___ObjInit_8(StaticLayout* __this, ::uObject* arg0, ::app::Android::android::text::TextPaint* arg1, int arg2, ::app::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6);
int StaticLayout__getLineCount(StaticLayout* __this);
int StaticLayout__getLineCount_IMPL_20064(::uStatic* __this, bool arg0_, jobject arg1_);
StaticLayout* StaticLayout__New_6(::uStatic* __this, ::uObject* arg0, int arg1, int arg2, ::app::Android::android::text::TextPaint* arg3, int arg4, ::app::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10);
StaticLayout* StaticLayout__New_7(::uStatic* __this, ::uObject* arg0, ::app::Android::android::text::TextPaint* arg1, int arg2, ::app::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6);

struct StaticLayout : ::app::Android::android::text::Layout
{
    void _ObjInit_7(::uObject* arg0, int arg1, int arg2, ::app::Android::android::text::TextPaint* arg3, int arg4, ::app::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10) { StaticLayout___ObjInit_7(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10); }
    void _ObjInit_8(::uObject* arg0, ::app::Android::android::text::TextPaint* arg1, int arg2, ::app::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6) { StaticLayout___ObjInit_8(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6); }
    int getLineCount() { return StaticLayout__getLineCount(this); }
};

}}}}


#endif
