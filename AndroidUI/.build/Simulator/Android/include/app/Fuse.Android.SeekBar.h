// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_SEEK_BAR_H__
#define __APP_FUSE_ANDROID_SEEK_BAR_H__

#include <app/Fuse.Android.ControlView__Fuse_Controls_Slider.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct SeekBar; } } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Android {

struct SeekBar;

struct SeekBar__uType : ::app::Fuse::Android::ControlView__Fuse_Controls_Slider__uType
{
};

SeekBar__uType* SeekBar__typeof();

void SeekBar___ObjInit_3(SeekBar* __this);
void SeekBar__Attach(SeekBar* __this);
::app::Android::android::view::View* SeekBar__CreateInternal(SeekBar* __this);
void SeekBar__Detach(SeekBar* __this);
void SeekBar__LostCallback(SeekBar* __this);
SeekBar* SeekBar__New_1(::uStatic* __this);
void SeekBar__OnProgressChanged(SeekBar* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void SeekBar__OnSeekBarProgressChanged(SeekBar* __this, ::uObject* sender, int value, bool fromUser);
bool SeekBar__OnTouchEvent(SeekBar* __this, ::app::Android::android::view::MotionEvent* motionEvent);

struct SeekBar : ::app::Fuse::Android::ControlView__Fuse_Controls_Slider
{
    ::uStrong< ::app::Android::android::widget::SeekBar*> _seekBar;
    ::uStrong< ::uObject*> _progressChangedEvent;
    int _index;

    void _ObjInit_3() { SeekBar___ObjInit_3(this); }
    void LostCallback() { SeekBar__LostCallback(this); }
    void OnProgressChanged(::uObject* sender, ::app::Uno::EventArgs* args) { SeekBar__OnProgressChanged(this, sender, args); }
    void OnSeekBarProgressChanged(::uObject* sender, int value, bool fromUser) { SeekBar__OnSeekBarProgressChanged(this, sender, value, fromUser); }
    bool OnTouchEvent(::app::Android::android::view::MotionEvent* motionEvent) { return SeekBar__OnTouchEvent(this, motionEvent); }
};

}}}


#endif
