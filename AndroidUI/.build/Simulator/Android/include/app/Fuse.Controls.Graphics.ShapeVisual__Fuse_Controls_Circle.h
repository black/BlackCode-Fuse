// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_SHAPE_VISUAL__FUSE_CONTROLS_CIRCLE_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_SHAPE_VISUAL__FUSE_CONTROLS_CIRCLE_H__

#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Circle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Shape; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct NodeDrawCount; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ShapeVisual__Fuse_Controls_Circle;

struct ShapeVisual__Fuse_Controls_Circle__uType : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Circle__uType
{
    void(*__fp_DrawFill)(ShapeVisual__Fuse_Controls_Circle*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*);
    void(*__fp_DrawStroke)(ShapeVisual__Fuse_Controls_Circle*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*);
};

ShapeVisual__Fuse_Controls_Circle__uType* ShapeVisual__Fuse_Controls_Circle__typeof();

void ShapeVisual__Fuse_Controls_Circle___ObjInit_3(ShapeVisual__Fuse_Controls_Circle* __this);
void ShapeVisual__Fuse_Controls_Circle__Attach(ShapeVisual__Fuse_Controls_Circle* __this);
void ShapeVisual__Fuse_Controls_Circle__Detach(ShapeVisual__Fuse_Controls_Circle* __this);
::app::Fuse::NodeDrawCount ShapeVisual__Fuse_Controls_Circle__get_LocalDrawCount(ShapeVisual__Fuse_Controls_Circle* __this);
::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_Circle__get_Shape(ShapeVisual__Fuse_Controls_Circle* __this);
::app::Uno::Float2 ShapeVisual__Fuse_Controls_Circle__GetMarginSize(ShapeVisual__Fuse_Controls_Circle* __this, ::app::Uno::Float2 availableSize, int flags);
void ShapeVisual__Fuse_Controls_Circle__OnDraw(ShapeVisual__Fuse_Controls_Circle* __this, ::app::Fuse::DrawContext* dc);
void ShapeVisual__Fuse_Controls_Circle__PrepareDraw(ShapeVisual__Fuse_Controls_Circle* __this, ::app::Fuse::DrawContext* dc);

struct ShapeVisual__Fuse_Controls_Circle : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Circle
{
    void _ObjInit_3() { ShapeVisual__Fuse_Controls_Circle___ObjInit_3(this); }
    void DrawFill(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill) { (((ShapeVisual__Fuse_Controls_Circle__uType*)this->__obj_type)->__fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke) { (((ShapeVisual__Fuse_Controls_Circle__uType*)this->__obj_type)->__fp_DrawStroke)(this, dc, stroke); }
    ::app::Fuse::Controls::Shape* Shape() { return ShapeVisual__Fuse_Controls_Circle__get_Shape(this); }
    void PrepareDraw(::app::Fuse::DrawContext* dc) { ShapeVisual__Fuse_Controls_Circle__PrepareDraw(this, dc); }
};

}}}}


#endif
