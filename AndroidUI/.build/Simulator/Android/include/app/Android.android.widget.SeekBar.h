// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_SEEK_BAR_H__
#define __APP_ANDROID_ANDROID_WIDGET_SEEK_BAR_H__

#include <app/Android.android.widget.AbsSeekBar.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct SeekBar;

extern jclass SeekBar___javaClass_5;
extern jmethodID SeekBar__onInitializeAccessibilityEvent_26188_ID;
extern jmethodID SeekBar__onInitializeAccessibilityNodeInfo_26189_ID;
extern jmethodID SeekBar__SeekBar_26184_ID_c;
extern jmethodID SeekBar__SeekBar_26185_ID_c;
extern jmethodID SeekBar__SeekBar_26186_ID_c;
extern jmethodID SeekBar__setOnSeekBarChangeListener_26187_ID;

struct SeekBar__uType : ::app::Android::android::widget::AbsSeekBar__uType
{
};

SeekBar__uType* SeekBar__typeof();

void SeekBar___Init_5(::uStatic* __this);
void SeekBar___ObjInit_16(SeekBar* __this, ::app::Android::android::content::Context* arg0);
void SeekBar___ObjInit_17(SeekBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void SeekBar___ObjInit_18(SeekBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void SeekBar___ObjInit_19(SeekBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
SeekBar* SeekBar__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0);
SeekBar* SeekBar__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
SeekBar* SeekBar__New_15(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
SeekBar* SeekBar__New_16(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void SeekBar__onInitializeAccessibilityEvent(SeekBar* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void SeekBar__onInitializeAccessibilityEvent_IMPL_26188(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void SeekBar__onInitializeAccessibilityNodeInfo(SeekBar* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void SeekBar__onInitializeAccessibilityNodeInfo_IMPL_26189(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void SeekBar__setOnSeekBarChangeListener(SeekBar* __this, ::uObject* arg0);
void SeekBar__setOnSeekBarChangeListener_IMPL_26187(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct SeekBar : ::app::Android::android::widget::AbsSeekBar
{
    void _ObjInit_16(::app::Android::android::content::Context* arg0) { SeekBar___ObjInit_16(this, arg0); }
    void _ObjInit_17(::app::Android::android::content::Context* arg0, ::uObject* arg1) { SeekBar___ObjInit_17(this, arg0, arg1); }
    void _ObjInit_18(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { SeekBar___ObjInit_18(this, arg0, arg1, arg2); }
    void _ObjInit_19(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { SeekBar___ObjInit_19(this, obj, utype, hasFallbackClass, resolveType); }
    void setOnSeekBarChangeListener(::uObject* arg0) { SeekBar__setOnSeekBarChangeListener(this, arg0); }
};

}}}}


#endif
