// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_STACK_PANEL_H__
#define __APP_FUSE_CONTROLS_STACK_PANEL_H__

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
namespace app { namespace Fuse { namespace Layouts { struct StackLayout; } } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_StackPanel__float; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation; } }

namespace app {
namespace Fuse {
namespace Controls {

struct StackPanel;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float*> StackPanel__ItemSpacingProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*> StackPanel__OrientationProperty;

struct StackPanel__uType : ::app::Fuse::Controls::Panel__uType
{
};

StackPanel__uType* StackPanel__typeof();

void StackPanel___ObjInit_4(StackPanel* __this);
void StackPanel___TypeInit_4(::uStatic* __this);
float StackPanel__get_ItemSpacing(StackPanel* __this);
int StackPanel__get_Orientation(StackPanel* __this);
StackPanel* StackPanel__New_2(::uStatic* __this);
void StackPanel__OnItemSpacingChanged(::uStatic* __this, StackPanel* p);
void StackPanel__OnOrientationChanged(::uStatic* __this, StackPanel* p);
void StackPanel__set_ItemSpacing(StackPanel* __this, float value);
void StackPanel__set_Orientation(StackPanel* __this, int value);

struct StackPanel : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Layouts::StackLayout*> _stackLayout;

    void _ObjInit_4() { StackPanel___ObjInit_4(this); }
    float ItemSpacing() { return StackPanel__get_ItemSpacing(this); }
    int Orientation() { return StackPanel__get_Orientation(this); }
    void ItemSpacing(float value) { StackPanel__set_ItemSpacing(this, value); }
    void Orientation(int value) { StackPanel__set_Orientation(this, value); }
};

}}}


#endif
