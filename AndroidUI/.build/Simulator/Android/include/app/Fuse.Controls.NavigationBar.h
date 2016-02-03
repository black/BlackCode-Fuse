// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_NAVIGATION_BAR_H__
#define __APP_FUSE_CONTROLS_NAVIGATION_BAR_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct NavigationBar;

struct NavigationBar__uType : ::app::Fuse::Controls::Panel__uType
{
};

NavigationBar__uType* NavigationBar__typeof();

void NavigationBar___ObjInit_4(NavigationBar* __this);
NavigationBar* NavigationBar__New_2(::uStatic* __this);

struct NavigationBar : ::app::Fuse::Controls::Panel
{
    void _ObjInit_4() { NavigationBar___ObjInit_4(this); }
};

}}}


#endif
