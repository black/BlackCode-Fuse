// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.AbsSeekBar.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct SeekBar;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class SeekBar :22440
// {
::g::Android::android::view::View_type* SeekBar_typeof();
void SeekBar__ctor_19_fn(SeekBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void SeekBar___Init5_fn();
void SeekBar__setOnSeekBarChangeListener_fn(SeekBar* __this, uObject* arg0);
void SeekBar__setOnSeekBarChangeListener_IMPL_26187_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct SeekBar : ::g::Android::android::widget::AbsSeekBar
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID setOnSeekBarChangeListener_26187_ID_;
    static jmethodID& setOnSeekBarChangeListener_26187_ID() { return setOnSeekBarChangeListener_26187_ID_; }

    void ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void setOnSeekBarChangeListener(uObject* arg0);
    static void _Init5();
    static void setOnSeekBarChangeListener_IMPL_26187(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
