// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_PROGRESS_CHANGED_LISTENER_H__
#define __APP_FUSE_ANDROID_PROGRESS_CHANGED_LISTENER_H__

#include <app/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct SeekBar; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct ProgressChangedListener;

extern jclass ProgressChangedListener___javaClass_2;

struct ProgressChangedListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener __interface_2;
};

ProgressChangedListener__uType* ProgressChangedListener__typeof();

void ProgressChangedListener___ObjInit_4(ProgressChangedListener* __this, ::app::Android::android::widget::SeekBar* seekBar, ::uDelegate* handler);
::uObject* ProgressChangedListener__AddHandler(::uStatic* __this, ::app::Android::android::widget::SeekBar* seekBar, ::uDelegate* handler);
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onProgressChanged(ProgressChangedListener* __this, ::app::Android::android::widget::SeekBar* seekBar, int value, bool fromUser);
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStartTrackingTouch(ProgressChangedListener* __this, ::app::Android::android::widget::SeekBar* sb);
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStopTrackingTouch(ProgressChangedListener* __this, ::app::Android::android::widget::SeekBar* sb);
ProgressChangedListener* ProgressChangedListener__New_5(::uStatic* __this, ::app::Android::android::widget::SeekBar* seekBar, ::uDelegate* handler);
void ProgressChangedListener__Uno_IDisposable_Dispose_1(ProgressChangedListener* __this);

struct ProgressChangedListener : ::app::Android::java::lang::Object
{
    ::uStrong< ::app::Android::android::widget::SeekBar*> _seekBar;
    ::uStrong< ::uDelegate*> _handler;

    void _ObjInit_4(::app::Android::android::widget::SeekBar* seekBar, ::uDelegate* handler) { ProgressChangedListener___ObjInit_4(this, seekBar, handler); }
};

}}}


#endif
