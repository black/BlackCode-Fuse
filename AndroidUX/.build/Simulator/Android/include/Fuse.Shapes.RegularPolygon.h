// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Shapes.PathShape.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Shapes{struct RegularPolygon;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Shapes{

// public sealed class RegularPolygon :616
// {
::g::Fuse::Shapes::PathShape_type* RegularPolygon_typeof();
void RegularPolygon__ctor_3_fn(RegularPolygon* __this);
void RegularPolygon__New1_fn(RegularPolygon** __retval);
void RegularPolygon__get_Offset1_fn(RegularPolygon* __this, ::g::Uno::Float2* __retval);
void RegularPolygon__get_Radius_fn(RegularPolygon* __this, float* __retval);
void RegularPolygon__get_Sides_fn(RegularPolygon* __this, int* __retval);
void RegularPolygon__set_Sides_fn(RegularPolygon* __this, int* value);
void RegularPolygon__UpdatePath_fn(RegularPolygon* __this);

struct RegularPolygon : ::g::Fuse::Shapes::PathShape
{
    float _cachedRadius;
    int _cachedSides;
    int _sides;

    void ctor_3();
    ::g::Uno::Float2 Offset1();
    float Radius();
    int Sides();
    void Sides(int value);
    static RegularPolygon* New1();
};
// }

}}} // ::g::Fuse::Shapes
