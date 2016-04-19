// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.CompoundButton.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct Switch;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public sealed extern class Switch :24124
// {
::g::Android::android::widget::CompoundButton_type* Switch_typeof();
void Switch__ctor_20_fn(Switch* __this, ::g::Android::android::content::Context* arg0);
void Switch___Init6_fn();
void Switch__New17_fn(::g::Android::android::content::Context* arg0, Switch** __retval);
void Switch__onTouchEvent_fn(Switch* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void Switch__onTouchEvent_IMPL_26365_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Switch__setChecked_fn(Switch* __this, bool* arg0);
void Switch__setChecked_IMPL_26366_fn(bool* arg0_, jobject* arg1_, bool* arg2_);

struct Switch : ::g::Android::android::widget::CompoundButton
{
    static jclass _javaClass6_;
    static jclass& _javaClass6() { return _javaClass6_; }
    static jmethodID onTouchEvent_26365_ID_;
    static jmethodID& onTouchEvent_26365_ID() { return onTouchEvent_26365_ID_; }
    static jmethodID setChecked_26366_ID_;
    static jmethodID& setChecked_26366_ID() { return setChecked_26366_ID_; }
    static jmethodID Switch_26341_ID_c_;
    static jmethodID& Switch_26341_ID_c() { return Switch_26341_ID_c_; }

    void ctor_20(::g::Android::android::content::Context* arg0);
    static void _Init6();
    static Switch* New17(::g::Android::android::content::Context* arg0);
    static bool onTouchEvent_IMPL_26365(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setChecked_IMPL_26366(bool arg0_, jobject arg1_, bool arg2_);
};
// }

}}}} // ::g::Android::android::widget
