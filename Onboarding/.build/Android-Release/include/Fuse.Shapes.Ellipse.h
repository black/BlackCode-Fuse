// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Shapes.PathShape.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Shapes{struct Ellipse;}}}

namespace g{
namespace Fuse{
namespace Shapes{

// public sealed class Ellipse :182
// {
::g::Fuse::Shapes::PathShape_type* Ellipse_typeof();
void Ellipse__UpdatePath_fn(Ellipse* __this);

struct Ellipse : ::g::Fuse::Shapes::PathShape
{
    ::g::Uno::Float2 _cachedRadius;
};
// }

}}} // ::g::Fuse::Shapes
