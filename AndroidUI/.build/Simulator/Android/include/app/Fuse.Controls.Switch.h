// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_SWITCH_H__
#define __APP_FUSE_CONTROLS_SWITCH_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <app/Fuse.Triggers.IValue__bool.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct Switch;

struct Switch__uType : ::app::Fuse::Controls::ToggleControl__uType
{
};

Switch__uType* Switch__typeof();

void Switch___ObjInit_5(Switch* __this);
Switch* Switch__New_2(::uStatic* __this);

struct Switch : ::app::Fuse::Controls::ToggleControl
{
    void _ObjInit_5() { Switch___ObjInit_5(this); }
};

}}}


#endif
