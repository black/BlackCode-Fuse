// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct DockLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class DockPanel :605
// {
::g::Fuse::Controls::Panel_type* DockPanel_typeof();
void DockPanel__ctor_4_fn(DockPanel* __this);
void DockPanel__GetDock_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void DockPanel__New2_fn(DockPanel** __retval);
void DockPanel__ResetDock_fn(::g::Fuse::Elements::Element* elm);
void DockPanel__SetDock_fn(::g::Fuse::Elements::Element* elm, int* dock);

struct DockPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::DockLayout*> _dockLayout;

    void ctor_4();
    static int GetDock(::g::Fuse::Elements::Element* elm);
    static DockPanel* New2();
    static void ResetDock(::g::Fuse::Elements::Element* elm);
    static void SetDock(::g::Fuse::Elements::Element* elm, int dock);
};
// }

}}} // ::g::Fuse::Controls
