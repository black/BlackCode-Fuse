// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.AbsSeekBar.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace widget{struct SeekBar;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class SeekBar :22440
// {
::g::Android::android::widget::ProgressBar_type* SeekBar_typeof();
void SeekBar__ctor_16_fn(SeekBar* __this, ::g::Android::android::content::Context* arg0);
void SeekBar__ctor_17_fn(SeekBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void SeekBar__ctor_18_fn(SeekBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void SeekBar__ctor_19_fn(SeekBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void SeekBar___Init5_fn();
void SeekBar__New13_fn(::g::Android::android::content::Context* arg0, SeekBar** __retval);
void SeekBar__New14_fn(::g::Android::android::content::Context* arg0, uObject* arg1, SeekBar** __retval);
void SeekBar__New15_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, SeekBar** __retval);
void SeekBar__New16_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, SeekBar** __retval);
void SeekBar__onInitializeAccessibilityEvent_fn(SeekBar* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void SeekBar__onInitializeAccessibilityEvent_IMPL_26188_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void SeekBar__onInitializeAccessibilityNodeInfo_fn(SeekBar* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void SeekBar__onInitializeAccessibilityNodeInfo_IMPL_26189_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void SeekBar__setOnSeekBarChangeListener_fn(SeekBar* __this, uObject* arg0);
void SeekBar__setOnSeekBarChangeListener_IMPL_26187_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct SeekBar : ::g::Android::android::widget::AbsSeekBar
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID onInitializeAccessibilityEvent_26188_ID_;
    static jmethodID& onInitializeAccessibilityEvent_26188_ID() { return onInitializeAccessibilityEvent_26188_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_26189_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_26189_ID() { return onInitializeAccessibilityNodeInfo_26189_ID_; }
    static jmethodID SeekBar_26184_ID_c_;
    static jmethodID& SeekBar_26184_ID_c() { return SeekBar_26184_ID_c_; }
    static jmethodID SeekBar_26185_ID_c_;
    static jmethodID& SeekBar_26185_ID_c() { return SeekBar_26185_ID_c_; }
    static jmethodID SeekBar_26186_ID_c_;
    static jmethodID& SeekBar_26186_ID_c() { return SeekBar_26186_ID_c_; }
    static jmethodID setOnSeekBarChangeListener_26187_ID_;
    static jmethodID& setOnSeekBarChangeListener_26187_ID() { return setOnSeekBarChangeListener_26187_ID_; }

    void ctor_16(::g::Android::android::content::Context* arg0);
    void ctor_17(::g::Android::android::content::Context* arg0, uObject* arg1);
    void ctor_18(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    void ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void setOnSeekBarChangeListener(uObject* arg0);
    static void _Init5();
    static SeekBar* New13(::g::Android::android::content::Context* arg0);
    static SeekBar* New14(::g::Android::android::content::Context* arg0, uObject* arg1);
    static SeekBar* New15(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    static SeekBar* New16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void onInitializeAccessibilityEvent_IMPL_26188(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_26189(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnSeekBarChangeListener_IMPL_26187(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
