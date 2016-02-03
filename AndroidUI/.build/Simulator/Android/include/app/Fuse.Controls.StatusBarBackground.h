// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_STATUS_BAR_BACKGROUND_H__
#define __APP_FUSE_CONTROLS_STATUS_BAR_BACKGROUND_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.TopFrameBackground.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct StatusBarBackground;

struct StatusBarBackground__uType : ::app::Fuse::Controls::TopFrameBackground__uType
{
};

StatusBarBackground__uType* StatusBarBackground__typeof();

void StatusBarBackground___ObjInit_4(StatusBarBackground* __this);
StatusBarBackground* StatusBarBackground__New_2(::uStatic* __this);

struct StatusBarBackground : ::app::Fuse::Controls::TopFrameBackground
{
    void _ObjInit_4() { StatusBarBackground___ObjInit_4(this); }
};

}}}


#endif
