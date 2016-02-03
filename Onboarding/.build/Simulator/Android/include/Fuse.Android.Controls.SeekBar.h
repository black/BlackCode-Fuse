// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct SeekBar;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct SeekBar;}}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class SeekBar :1271
// {
::g::Fuse::Android::Controls::Control_type* SeekBar_typeof();
void SeekBar__ctor_3_fn(SeekBar* __this);
void SeekBar__Attach_fn(SeekBar* __this);
void SeekBar__CreateInternal_fn(SeekBar* __this, ::g::Android::android::view::View** __retval);
void SeekBar__Detach_fn(SeekBar* __this);
void SeekBar__LostCallback_fn(SeekBar* __this);
void SeekBar__New1_fn(SeekBar** __retval);
void SeekBar__OnSeekBarProgressChanged_fn(SeekBar* __this, uObject* sender, int* value, bool* fromUser);
void SeekBar__OnTouchEvent_fn(SeekBar* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval);
void SeekBar__OnValueChanged_fn(SeekBar* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void SeekBar__UpdateValue_fn(SeekBar* __this, double* value);

struct SeekBar : ::g::Fuse::Android::Controls::Control
{
    int _index;
    uStrong<uObject*> _progressChangedEvent;
    uStrong< ::g::Android::android::widget::SeekBar*> _seekBar;

    void ctor_3();
    void LostCallback();
    void OnSeekBarProgressChanged(uObject* sender, int value, bool fromUser);
    bool OnTouchEvent(::g::Android::android::view::MotionEvent* motionEvent);
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    void UpdateValue(double value);
    static SeekBar* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
