// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.TextView.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace widget{struct Button;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class Button :5632
// {
::g::Android::android::widget::TextView_type* Button_typeof();
void Button__ctor_12_fn(Button* __this, ::g::Android::android::content::Context* arg0);
void Button__ctor_15_fn(Button* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Button___Init4_fn();
void Button__New13_fn(::g::Android::android::content::Context* arg0, Button** __retval);
void Button__onInitializeAccessibilityEvent_fn(Button* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void Button__onInitializeAccessibilityEvent_IMPL_24843_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Button__onInitializeAccessibilityNodeInfo_fn(Button* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void Button__onInitializeAccessibilityNodeInfo_IMPL_24844_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Button : ::g::Android::android::widget::TextView
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID Button_24840_ID_c_;
    static jmethodID& Button_24840_ID_c() { return Button_24840_ID_c_; }
    static jmethodID onInitializeAccessibilityEvent_24843_ID_;
    static jmethodID& onInitializeAccessibilityEvent_24843_ID() { return onInitializeAccessibilityEvent_24843_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_24844_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_24844_ID() { return onInitializeAccessibilityNodeInfo_24844_ID_; }

    void ctor_12(::g::Android::android::content::Context* arg0);
    void ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init4();
    static Button* New13(::g::Android::android::content::Context* arg0);
    static void onInitializeAccessibilityEvent_IMPL_24843(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_24844(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
