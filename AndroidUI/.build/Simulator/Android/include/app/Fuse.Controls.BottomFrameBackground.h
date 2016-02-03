// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_BOTTOM_FRAME_BACKGROUND_H__
#define __APP_FUSE_CONTROLS_BOTTOM_FRAME_BACKGROUND_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct SystemUIWillResizeEventArgs; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {

struct BottomFrameBackground;

struct BottomFrameBackground__uType : ::app::Fuse::Controls::Control__uType
{
};

BottomFrameBackground__uType* BottomFrameBackground__typeof();

void BottomFrameBackground___ObjInit_3(BottomFrameBackground* __this);
bool BottomFrameBackground__get_IncludesKeyboard(BottomFrameBackground* __this);
float BottomFrameBackground__get_KeyboardVisibleThreshold(BottomFrameBackground* __this);
::app::Uno::Float2 BottomFrameBackground__GetContentSize(BottomFrameBackground* __this, ::app::Uno::Float2 fillSize, int fillSet);
BottomFrameBackground* BottomFrameBackground__New_1(::uStatic* __this);
void BottomFrameBackground__OnFrameResized(BottomFrameBackground* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args);
void BottomFrameBackground__OnRooted(BottomFrameBackground* __this);
void BottomFrameBackground__OnUnrooted(BottomFrameBackground* __this);
void BottomFrameBackground__set_IncludesKeyboard(BottomFrameBackground* __this, bool value);
void BottomFrameBackground__set_KeyboardVisibleThreshold(BottomFrameBackground* __this, float value);

struct BottomFrameBackground : ::app::Fuse::Controls::Control
{
    bool _includesKeyboard;
    float _keyboardVisibleThreshold;
    float _height_1;

    void _ObjInit_3() { BottomFrameBackground___ObjInit_3(this); }
    bool IncludesKeyboard() { return BottomFrameBackground__get_IncludesKeyboard(this); }
    float KeyboardVisibleThreshold() { return BottomFrameBackground__get_KeyboardVisibleThreshold(this); }
    void OnFrameResized(::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args) { BottomFrameBackground__OnFrameResized(this, sender, args); }
    void IncludesKeyboard(bool value) { BottomFrameBackground__set_IncludesKeyboard(this, value); }
    void KeyboardVisibleThreshold(float value) { BottomFrameBackground__set_KeyboardVisibleThreshold(this, value); }
};

}}}


#endif
