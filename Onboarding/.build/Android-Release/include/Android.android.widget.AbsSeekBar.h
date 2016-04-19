// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.ProgressBar.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct AbsSeekBar;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public abstract extern class AbsSeekBar :2238
// {
::g::Android::android::view::View_type* AbsSeekBar_typeof();
void AbsSeekBar__ctor_15_fn(AbsSeekBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void AbsSeekBar___Init4_fn();
void AbsSeekBar__onTouchEvent_fn(AbsSeekBar* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void AbsSeekBar__onTouchEvent_IMPL_24551_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbsSeekBar__setMax_fn(AbsSeekBar* __this, int* arg0);
void AbsSeekBar__setMax_IMPL_24544_fn(bool* arg0_, jobject* arg1_, int* arg2_);

struct AbsSeekBar : ::g::Android::android::widget::ProgressBar
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID onTouchEvent_24551_ID_;
    static jmethodID& onTouchEvent_24551_ID() { return onTouchEvent_24551_ID_; }
    static jmethodID setMax_24544_ID_;
    static jmethodID& setMax_24544_ID() { return setMax_24544_ID_; }

    void ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void setMax(int arg0);
    static void _Init4();
    static bool onTouchEvent_IMPL_24551(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setMax_IMPL_24544(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}}} // ::g::Android::android::widget
