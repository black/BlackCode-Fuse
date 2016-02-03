// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
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
void PathShape__ctor_2_fn(PathShape* __this);
void PathShape__get_Antialiasing_fn(PathShape* __this, int* __retval);
void PathShape__set_Antialiasing_fn(PathShape* __this, int* value);
void PathShape__CalcRenderBounds_fn(PathShape* __this, ::g::Uno::Rect* __retval);
void PathShape__get_Fill_fn(PathShape* __this, ::g::Fuse::Drawing::Brush** __retval);
void PathShape__set_Fill_fn(PathShape* __this, ::g::Fuse::Drawing::Brush* value);
void PathShape__get_Fills_fn(PathShape* __this, uObject** __retval);
void PathShape__GetHitPart_fn(PathShape* __this, ::g::Uno::Float2* localCoords, uObject** __retval);
void PathShape__get_HasFills_fn(PathShape* __this, bool* __retval);
void PathShape__get_HasStrokes_fn(PathShape* __this, bool* __retval);
void PathShape__get_HitTestLocalVisualBounds_fn(PathShape* __this, ::g::Fuse::NodeBounds** __retval);
void PathShape__Invalidated_fn(PathShape* __this);
void PathShape__OnDraw_fn(PathShape* __this, ::g::Fuse::DrawContext* dc);
void PathShape__OnHitTestLocalVisual_fn(PathShape* __this, ::g::Fuse::HitTestContext* htc);
void PathShape__OnRooted_fn(PathShape* __this);
void PathShape__get_Renderer_fn(PathShape* __this, ::g::Fuse::Drawing::PathGeometryRenderer** __retval);
void PathShape__SoftDispose_fn(PathShape* __this);
void PathShape__get_Stroke_fn(PathShape* __this, ::g::Fuse::Drawing::Stroke** __retval);
void PathShape__set_Stroke_fn(PathShape* __this, ::g::Fuse::Drawing::Stroke* value);
void PathShape__get_Strokes_fn(PathShape* __this, uObject** __retval);

struct PathShape : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Drawing::PathGeometryRenderer*> _renderer;

    void ctor_2();
    int Antialiasing();
    void Antialiasing(int value);
    ::g::Fuse::Drawing::Brush* Fill();
    void Fill(::g::Fuse::Drawing::Brush* value);
    uObject* Fills();
    uObject* GetHitPart(::g::Uno::Float2 localCoords);
    bool HasFills();
    bool HasStrokes();
    void Invalidated();
    ::g::Fuse::Drawing::PathGeometryRenderer* Renderer();
    ::g::Fuse::Drawing::Stroke* Stroke();
    void Stroke(::g::Fuse::Drawing::Stroke* value);
    uObject* Strokes();
    void UpdatePath() { (((PathShape_type*)__type)->fp_UpdatePath)(this); }
};
// }

}}} // ::g::Fuse::Shapes
