// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_MULTI_LAYOUT_PANEL_H__
#define __APP_FUSE_CONTROLS_MULTI_LAYOUT_PANEL_H__

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
namespace app { namespace Fuse { namespace Controls { struct MultiLayout; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct MultiLayoutPanel;

struct MultiLayoutPanel__uType : ::app::Fuse::Controls::Panel__uType
{
};

MultiLayoutPanel__uType* MultiLayoutPanel__typeof();

void MultiLayoutPanel___ObjInit_4(MultiLayoutPanel* __this);
::app::Fuse::Elements::Element* MultiLayoutPanel__get_LayoutElement(MultiLayoutPanel* __this);
MultiLayoutPanel* MultiLayoutPanel__New_2(::uStatic* __this);
void MultiLayoutPanel__set_LayoutElement(MultiLayoutPanel* __this, ::app::Fuse::Elements::Element* value);

struct MultiLayoutPanel : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Controls::MultiLayout*> _multiLayout;

    void _ObjInit_4() { MultiLayoutPanel___ObjInit_4(this); }
    ::app::Fuse::Elements::Element* LayoutElement() { return MultiLayoutPanel__get_LayoutElement(this); }
    void LayoutElement(::app::Fuse::Elements::Element* value) { MultiLayoutPanel__set_LayoutElement(this, value); }
};

}}}


#endif
