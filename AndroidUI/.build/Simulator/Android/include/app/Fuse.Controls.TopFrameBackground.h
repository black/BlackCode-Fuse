// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TOP_FRAME_BACKGROUND_H__
#define __APP_FUSE_CONTROLS_TOP_FRAME_BACKGROUND_H__

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

struct TopFrameBackground;

struct TopFrameBackground__uType : ::app::Fuse::Controls::Control__uType
{
};

TopFrameBackground__uType* TopFrameBackground__typeof();

void TopFrameBackground___ObjInit_3(TopFrameBackground* __this);
::app::Uno::Float2 TopFrameBackground__GetContentSize(TopFrameBackground* __this, ::app::Uno::Float2 fillSize, int fillSet);
TopFrameBackground* TopFrameBackground__New_1(::uStatic* __this);
void TopFrameBackground__OnFrameResized(TopFrameBackground* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args);
void TopFrameBackground__OnRooted(TopFrameBackground* __this);
void TopFrameBackground__OnUnrooted(TopFrameBackground* __this);

struct TopFrameBackground : ::app::Fuse::Controls::Control
{
    void _ObjInit_3() { TopFrameBackground___ObjInit_3(this); }
    void OnFrameResized(::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args) { TopFrameBackground__OnFrameResized(this, sender, args); }
};

}}}


#endif
