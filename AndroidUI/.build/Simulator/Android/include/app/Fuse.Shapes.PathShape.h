// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_PATH_SHAPE_H__
#define __APP_FUSE_SHAPES_PATH_SHAPE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryRenderer; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct PathShape;

struct PathShape__uType : ::app::Fuse::Elements::Element__uType
{
    void(*__fp_UpdatePath)(PathShape*);
};

PathShape__uType* PathShape__typeof();

void PathShape___ObjInit_2(PathShape* __this);
::app::Uno::Rect PathShape__CalcRenderBounds(PathShape* __this);
int PathShape__get_Antialiasing(PathShape* __this);
::app::Fuse::Drawing::Brush* PathShape__get_Fill(PathShape* __this);
::uObject* PathShape__get_Fills(PathShape* __this);
bool PathShape__get_HasFills(PathShape* __this);
bool PathShape__get_HasStrokes(PathShape* __this);
::app::Fuse::NodeBounds* PathShape__get_HitTestLocalVisualBounds(PathShape* __this);
::app::Fuse::Drawing::PathGeometryRenderer* PathShape__get_Renderer(PathShape* __this);
::app::Fuse::Drawing::Stroke* PathShape__get_Stroke(PathShape* __this);
::uObject* PathShape__get_Strokes(PathShape* __this);
::uObject* PathShape__GetHitPart(PathShape* __this, ::app::Uno::Float2 localCoords);
void PathShape__Invalidated(PathShape* __this);
void PathShape__OnDraw(PathShape* __this, ::app::Fuse::DrawContext* dc);
void PathShape__OnHitTestLocalVisual(PathShape* __this, ::app::Fuse::HitTestContext* htc);
void PathShape__OnRooted(PathShape* __this);
void PathShape__set_Antialiasing(PathShape* __this, int value);
void PathShape__set_Fill(PathShape* __this, ::app::Fuse::Drawing::Brush* value);
void PathShape__set_Stroke(PathShape* __this, ::app::Fuse::Drawing::Stroke* value);
void PathShape__SoftDispose(PathShape* __this);

struct PathShape : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Fuse::Drawing::PathGeometryRenderer*> _renderer;

    void _ObjInit_2() { PathShape___ObjInit_2(this); }
    int Antialiasing() { return PathShape__get_Antialiasing(this); }
    ::app::Fuse::Drawing::Brush* Fill() { return PathShape__get_Fill(this); }
    ::uObject* Fills() { return PathShape__get_Fills(this); }
    bool HasFills() { return PathShape__get_HasFills(this); }
    bool HasStrokes() { return PathShape__get_HasStrokes(this); }
    ::app::Fuse::Drawing::PathGeometryRenderer* Renderer() { return PathShape__get_Renderer(this); }
    ::app::Fuse::Drawing::Stroke* Stroke() { return PathShape__get_Stroke(this); }
    ::uObject* Strokes() { return PathShape__get_Strokes(this); }
    ::uObject* GetHitPart(::app::Uno::Float2 localCoords);
    void Invalidated() { PathShape__Invalidated(this); }
    void Antialiasing(int value) { PathShape__set_Antialiasing(this, value); }
    void Fill(::app::Fuse::Drawing::Brush* value) { PathShape__set_Fill(this, value); }
    void Stroke(::app::Fuse::Drawing::Stroke* value) { PathShape__set_Stroke(this, value); }
    void UpdatePath() { (((PathShape__uType*)this->__obj_type)->__fp_UpdatePath)(this); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::uObject* PathShape::GetHitPart(::app::Uno::Float2 localCoords) { return PathShape__GetHitPart(this, localCoords); }

}}}


#endif
