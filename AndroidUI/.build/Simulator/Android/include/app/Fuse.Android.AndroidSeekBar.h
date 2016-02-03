// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_ANDROID_SEEK_BAR_H__
#define __APP_FUSE_ANDROID_ANDROID_SEEK_BAR_H__

#include <app/Android.android.widget.SeekBar.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct AndroidSeekBar;

extern jclass AndroidSeekBar___javaClass_6;

struct AndroidSeekBar__uType : ::app::Android::android::widget::SeekBar__uType
{
};

AndroidSeekBar__uType* AndroidSeekBar__typeof();

void AndroidSeekBar___ObjInit_20(AndroidSeekBar* __this, ::app::Android::android::content::Context* arg0, ::uDelegate* touchCallback);
AndroidSeekBar* AndroidSeekBar__New_17(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uDelegate* touchCallback);
bool AndroidSeekBar__onTouchEvent(AndroidSeekBar* __this, ::app::Android::android::view::MotionEvent* motionEvent);

struct AndroidSeekBar : ::app::Android::android::widget::SeekBar
{
    ::uStrong< ::uDelegate*> _touchCallback;

    void _ObjInit_20(::app::Android::android::content::Context* arg0, ::uDelegate* touchCallback) { AndroidSeekBar___ObjInit_20(this, arg0, touchCallback); }
};

}}}


#endif
