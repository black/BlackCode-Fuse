// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Shapes{

// public abstract class PathShape :893
// {
struct PathShape_type : ::g::Fuse::Elements::Element_type
{
    void(*fp_UpdatePath)(::g::Fuse::Shapes::PathShape*);
};

PathShape_type* PathShape_typeof();
void PathShape__CalcRenderBounds_fn(PathShape* __this, ::g::Uno::Rect* __retval);
void PathShape__GetHitPart_fn(PathShape* __this, ::g::Uno::Float2* localCoords, uObject** __retval);
void PathShape__get_HitTestLocalVisualBounds_fn(PathShape* __this, ::g::Fuse::NodeBounds** __retval);
void PathShape__OnDraw_fn(PathShape* __this, ::g::Fuse::DrawContext* dc);
void PathShape__OnHitTestLocalVisual_fn(PathShape* __this, ::g::Fuse::HitTestContext* htc);
void PathShape__OnRooted_fn(PathShape* __this);
void PathShape__get_Renderer_fn(PathShape* __this, ::g::Fuse::Drawing::PathGeometryRenderer** __retval);
void PathShape__SoftDispose_fn(PathShape* __this);

struct PathShape : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Drawing::PathGeometryRenderer*> _renderer;

    uObject* GetHitPart(::g::Uno::Float2 localCoords);
    ::g::Fuse::Drawing::PathGeometryRenderer* Renderer();
    void UpdatePath() { (((PathShape_type*)__type)->fp_UpdatePath)(this); }
};
// }

}}} // ::g::Fuse::Shapes
