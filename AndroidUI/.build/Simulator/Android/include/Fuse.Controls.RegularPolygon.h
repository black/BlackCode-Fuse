// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct RegularPolygon;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class RegularPolygon :3038
// {
::g::Fuse::Controls::Panel_type* RegularPolygon_typeof();
void RegularPolygon__ctor_5_fn(RegularPolygon* __this);
void RegularPolygon__New2_fn(RegularPolygon** __retval);
void RegularPolygon__get_Sides_fn(RegularPolygon* __this, int* __retval);
void RegularPolygon__set_Sides_fn(RegularPolygon* __this, int* value);

struct RegularPolygon : ::g::Fuse::Controls::Shape
{
    int _sides;

    void ctor_5();
    int Sides();
    void Sides(int value);
    static RegularPolygon* New2();
};
// }

}}} // ::g::Fuse::Controls
