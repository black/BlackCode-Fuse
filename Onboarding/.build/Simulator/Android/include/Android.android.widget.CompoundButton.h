// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.Button.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public abstract extern class CompoundButton :5723
// {
struct CompoundButton_type : ::g::Android::android::widget::TextView_type
{
    void(*fp_setChecked)(::g::Android::android::widget::CompoundButton*, bool*);
};

CompoundButton_type* CompoundButton_typeof();
void CompoundButton__ctor_19_fn(CompoundButton* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void CompoundButton___Init5_fn();
void CompoundButton__jumpDrawablesToCurrentState_fn(CompoundButton* __this);
void CompoundButton__jumpDrawablesToCurrentState_IMPL_24943_fn(bool* arg0_, jobject* arg1_);
void CompoundButton__onInitializeAccessibilityEvent_fn(CompoundButton* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void CompoundButton__onInitializeAccessibilityEvent_IMPL_24935_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void CompoundButton__onInitializeAccessibilityNodeInfo_fn(CompoundButton* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void CompoundButton__onInitializeAccessibilityNodeInfo_IMPL_24936_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void CompoundButton__performClick_fn(CompoundButton* __this, bool* __retval);
void CompoundButton__performClick_IMPL_24929_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void CompoundButton__setChecked_fn(CompoundButton* __this, bool* arg0);
void CompoundButton__setChecked_IMPL_24931_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void CompoundButton__setOnCheckedChangeListener_fn(CompoundButton* __this, uObject* arg0);
void CompoundButton__setOnCheckedChangeListener_IMPL_24932_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct CompoundButton : ::g::Android::android::widget::Button
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID jumpDrawablesToCurrentState_24943_ID_;
    static jmethodID& jumpDrawablesToCurrentState_24943_ID() { return jumpDrawablesToCurrentState_24943_ID_; }
    static jmethodID onInitializeAccessibilityEvent_24935_ID_;
    static jmethodID& onInitializeAccessibilityEvent_24935_ID() { return onInitializeAccessibilityEvent_24935_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_24936_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_24936_ID() { return onInitializeAccessibilityNodeInfo_24936_ID_; }
    static jmethodID performClick_24929_ID_;
    static jmethodID& performClick_24929_ID() { return performClick_24929_ID_; }
    static jmethodID setChecked_24931_ID_;
    static jmethodID& setChecked_24931_ID() { return setChecked_24931_ID_; }
    static jmethodID setOnCheckedChangeListener_24932_ID_;
    static jmethodID& setOnCheckedChangeListener_24932_ID() { return setOnCheckedChangeListener_24932_ID_; }

    void ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void setChecked(bool arg0) { (((CompoundButton_type*)__type)->fp_setChecked)(this, &arg0); }
    void setOnCheckedChangeListener(uObject* arg0);
    static void _Init5();
    static void jumpDrawablesToCurrentState_IMPL_24943(bool arg0_, jobject arg1_);
    static void onInitializeAccessibilityEvent_IMPL_24935(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_24936(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool performClick_IMPL_24929(bool arg0_, jobject arg1_);
    static void setChecked(CompoundButton* __this, bool arg0) { CompoundButton__setChecked_fn(__this, &arg0); }
    static void setChecked_IMPL_24931(bool arg0_, jobject arg1_, bool arg2_);
    static void setOnCheckedChangeListener_IMPL_24932(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
