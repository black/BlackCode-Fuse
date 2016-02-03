// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_ELLIPSE_H__
#define __APP_FUSE_SHAPES_ELLIPSE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Shapes.PathShape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Shapes {

struct Ellipse;

struct Ellipse__uType : ::app::Fuse::Shapes::PathShape__uType
{
};

Ellipse__uType* Ellipse__typeof();

void Ellipse___ObjInit_3(Ellipse* __this);
Ellipse* Ellipse__New_1(::uStatic* __this);
void Ellipse__UpdatePath(Ellipse* __this);

struct Ellipse : ::app::Fuse::Shapes::PathShape
{
    ::app::Uno::Float2 _cachedRadius;

    void _ObjInit_3() { Ellipse___ObjInit_3(this); }
};

}}}


#endif
