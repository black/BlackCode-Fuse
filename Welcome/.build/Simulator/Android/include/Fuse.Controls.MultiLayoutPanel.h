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
namespace g{namespace Fuse{namespace Controls{struct MultiLayout;}}}
namespace g{namespace Fuse{namespace Controls{struct MultiLayoutPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MultiLayoutPanel :1357
// {
::g::Fuse::Controls::Panel_type* MultiLayoutPanel_typeof();
void MultiLayoutPanel__ctor_4_fn(MultiLayoutPanel* __this);
void MultiLayoutPanel__get_LayoutElement_fn(MultiLayoutPanel* __this, ::g::Fuse::Elements::Element** __retval);
void MultiLayoutPanel__set_LayoutElement_fn(MultiLayoutPanel* __this, ::g::Fuse::Elements::Element* value);
void MultiLayoutPanel__New2_fn(MultiLayoutPanel** __retval);

struct MultiLayoutPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Controls::MultiLayout*> _multiLayout;

    void ctor_4();
    ::g::Fuse::Elements::Element* LayoutElement();
    void LayoutElement(::g::Fuse::Elements::Element* value);
    static MultiLayoutPanel* New2();
};
// }

}}} // ::g::Fuse::Controls
