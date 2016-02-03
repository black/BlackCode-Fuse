// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_REGULAR_POLYGON_H__
#define __APP_FUSE_CONTROLS_REGULAR_POLYGON_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Shape.h>
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

struct RegularPolygon;

struct RegularPolygon__uType : ::app::Fuse::Controls::Shape__uType
{
};

RegularPolygon__uType* RegularPolygon__typeof();

void RegularPolygon___ObjInit_5(RegularPolygon* __this);
int RegularPolygon__get_Sides(RegularPolygon* __this);
RegularPolygon* RegularPolygon__New_2(::uStatic* __this);
void RegularPolygon__set_Sides(RegularPolygon* __this, int value);

struct RegularPolygon : ::app::Fuse::Controls::Shape
{
    int _sides;

    void _ObjInit_5() { RegularPolygon___ObjInit_5(this); }
    int Sides() { return RegularPolygon__get_Sides(this); }
    void Sides(int value) { RegularPolygon__set_Sides(this, value); }
};

}}}


#endif
