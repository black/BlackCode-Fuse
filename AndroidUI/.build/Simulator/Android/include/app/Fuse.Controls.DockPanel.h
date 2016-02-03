// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_DOCK_PANEL_H__
#define __APP_FUSE_CONTROLS_DOCK_PANEL_H__

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
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Layouts { struct DockLayout; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct DockPanel;

struct DockPanel__uType : ::app::Fuse::Controls::Panel__uType
{
};

DockPanel__uType* DockPanel__typeof();

void DockPanel___ObjInit_4(DockPanel* __this);
int DockPanel__GetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
DockPanel* DockPanel__New_2(::uStatic* __this);
void DockPanel__ResetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void DockPanel__SetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int dock);

struct DockPanel : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Layouts::DockLayout*> _dockLayout;

    void _ObjInit_4() { DockPanel___ObjInit_4(this); }
};

}}}


#endif
