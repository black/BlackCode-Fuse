// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.SeekBarDLROnSeekBarChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct SeekBar;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct ProgressChangedListener;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class ProgressChangedListener :1356
// {
struct ProgressChangedListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener interface2;
};

ProgressChangedListener_type* ProgressChangedListener_typeof();
void ProgressChangedListener__ctor_4_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler);
void ProgressChangedListener__AddHandler_fn(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler, uObject** __retval);
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onProgressChanged_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* seekBar, int* value, bool* fromUser);
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStartTrackingTouch_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* sb);
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStopTrackingTouch_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* sb);
void ProgressChangedListener__New5_fn(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler, ProgressChangedListener** __retval);
void ProgressChangedListener__Uno_IDisposable_Dispose1_fn(ProgressChangedListener* __this);

struct ProgressChangedListener : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::widget::SeekBar*> _seekBar;

    void ctor_4(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler);
    static ProgressChangedListener* New5(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Android::Controls
