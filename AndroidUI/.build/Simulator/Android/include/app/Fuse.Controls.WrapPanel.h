// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_WRAP_PANEL_H__
#define __APP_FUSE_CONTROLS_WRAP_PANEL_H__

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
namespace app { namespace Fuse { namespace Layouts { struct WrapLayout; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct WrapPanel;

struct WrapPanel__uType : ::app::Fuse::Controls::Panel__uType
{
};

WrapPanel__uType* WrapPanel__typeof();

void WrapPanel___ObjInit_4(WrapPanel* __this);
int WrapPanel__get_FlowDirection(WrapPanel* __this);
::uString* WrapPanel__get_ID(WrapPanel* __this);
float WrapPanel__get_ItemHeight(WrapPanel* __this);
float WrapPanel__get_ItemWidth(WrapPanel* __this);
int WrapPanel__get_Orientation(WrapPanel* __this);
WrapPanel* WrapPanel__New_2(::uStatic* __this);
void WrapPanel__set_FlowDirection(WrapPanel* __this, int value);
void WrapPanel__set_ID(WrapPanel* __this, ::uString* value);
void WrapPanel__set_ItemHeight(WrapPanel* __this, float value);
void WrapPanel__set_ItemWidth(WrapPanel* __this, float value);
void WrapPanel__set_Orientation(WrapPanel* __this, int value);

struct WrapPanel : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Layouts::WrapLayout*> _wrapLayout;

    void _ObjInit_4() { WrapPanel___ObjInit_4(this); }
    int FlowDirection() { return WrapPanel__get_FlowDirection(this); }
    ::uString* ID() { return WrapPanel__get_ID(this); }
    float ItemHeight() { return WrapPanel__get_ItemHeight(this); }
    float ItemWidth() { return WrapPanel__get_ItemWidth(this); }
    int Orientation() { return WrapPanel__get_Orientation(this); }
    void FlowDirection(int value) { WrapPanel__set_FlowDirection(this, value); }
    void ID(::uString* value) { WrapPanel__set_ID(this, value); }
    void ItemHeight(float value) { WrapPanel__set_ItemHeight(this, value); }
    void ItemWidth(float value) { WrapPanel__set_ItemWidth(this, value); }
    void Orientation(int value) { WrapPanel__set_Orientation(this, value); }
};

}}}


#endif
