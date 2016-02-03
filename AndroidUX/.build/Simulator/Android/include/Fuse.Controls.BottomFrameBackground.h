// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct BottomFrameBackground;}}}
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class BottomFrameBackground :12
// {
::g::Fuse::Controls::Control_type* BottomFrameBackground_typeof();
void BottomFrameBackground__ctor_3_fn(BottomFrameBackground* __this);
void BottomFrameBackground__GetContentSize_fn(BottomFrameBackground* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void BottomFrameBackground__get_IncludesKeyboard_fn(BottomFrameBackground* __this, bool* __retval);
void BottomFrameBackground__set_IncludesKeyboard_fn(BottomFrameBackground* __this, bool* value);
void BottomFrameBackground__get_KeyboardVisibleThreshold_fn(BottomFrameBackground* __this, float* __retval);
void BottomFrameBackground__set_KeyboardVisibleThreshold_fn(BottomFrameBackground* __this, float* value);
void BottomFrameBackground__New1_fn(BottomFrameBackground** __retval);
void BottomFrameBackground__OnFrameResized_fn(BottomFrameBackground* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void BottomFrameBackground__OnRooted_fn(BottomFrameBackground* __this);
void BottomFrameBackground__OnUnrooted_fn(BottomFrameBackground* __this);

struct BottomFrameBackground : ::g::Fuse::Controls::Control
{
    float _height1;
    bool _includesKeyboard;
    float _keyboardVisibleThreshold;

    void ctor_3();
    bool IncludesKeyboard();
    void IncludesKeyboard(bool value);
    float KeyboardVisibleThreshold();
    void KeyboardVisibleThreshold(float value);
    void OnFrameResized(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
    static BottomFrameBackground* New1();
};
// }

}}} // ::g::Fuse::Controls
