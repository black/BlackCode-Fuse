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
namespace g{namespace Fuse{namespace Controls{struct WrapPanel;}}}
namespace g{namespace Fuse{namespace Layouts{struct WrapLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class WrapPanel :4732
// {
::g::Fuse::Controls::Panel_type* WrapPanel_typeof();
void WrapPanel__ctor_4_fn(WrapPanel* __this);
void WrapPanel__get_FlowDirection_fn(WrapPanel* __this, int* __retval);
void WrapPanel__set_FlowDirection_fn(WrapPanel* __this, int* value);
void WrapPanel__get_ID_fn(WrapPanel* __this, uString** __retval);
void WrapPanel__set_ID_fn(WrapPanel* __this, uString* value);
void WrapPanel__get_ItemHeight_fn(WrapPanel* __this, float* __retval);
void WrapPanel__set_ItemHeight_fn(WrapPanel* __this, float* value);
void WrapPanel__get_ItemWidth_fn(WrapPanel* __this, float* __retval);
void WrapPanel__set_ItemWidth_fn(WrapPanel* __this, float* value);
void WrapPanel__New2_fn(WrapPanel** __retval);
void WrapPanel__get_Orientation_fn(WrapPanel* __this, int* __retval);
void WrapPanel__set_Orientation_fn(WrapPanel* __this, int* value);

struct WrapPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::WrapLayout*> _wrapLayout;

    void ctor_4();
    int FlowDirection();
    void FlowDirection(int value);
    uString* ID();
    void ID(uString* value);
    float ItemHeight();
    void ItemHeight(float value);
    float ItemWidth();
    void ItemWidth(float value);
    int Orientation();
    void Orientation(int value);
    static WrapPanel* New2();
};
// }

}}} // ::g::Fuse::Controls
