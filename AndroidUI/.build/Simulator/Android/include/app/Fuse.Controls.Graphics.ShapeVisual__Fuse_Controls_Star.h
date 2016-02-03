// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_SHAPE_VISUAL__FUSE_CONTROLS_STAR_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_SHAPE_VISUAL__FUSE_CONTROLS_STAR_H__

#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Star.h>
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

struct ShapeVisual__Fuse_Controls_Star;

struct ShapeVisual__Fuse_Controls_Star__uType : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Star__uType
{
    void(*__fp_DrawFill)(ShapeVisual__Fuse_Controls_Star*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*);
    void(*__fp_DrawStroke)(ShapeVisual__Fuse_Controls_Star*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*);
    void(*__fp_PrepareDraw)(ShapeVisual__Fuse_Controls_Star*, ::app::Fuse::DrawContext*);
};

ShapeVisual__Fuse_Controls_Star__uType* ShapeVisual__Fuse_Controls_Star__typeof();

void ShapeVisual__Fuse_Controls_Star___ObjInit_3(ShapeVisual__Fuse_Controls_Star* __this);
void ShapeVisual__Fuse_Controls_Star__Attach(ShapeVisual__Fuse_Controls_Star* __this);
void ShapeVisual__Fuse_Controls_Star__Detach(ShapeVisual__Fuse_Controls_Star* __this);
::app::Fuse::NodeDrawCount ShapeVisual__Fuse_Controls_Star__get_LocalDrawCount(ShapeVisual__Fuse_Controls_Star* __this);
::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_Star__get_Shape(ShapeVisual__Fuse_Controls_Star* __this);
::app::Uno::Float2 ShapeVisual__Fuse_Controls_Star__GetMarginSize(ShapeVisual__Fuse_Controls_Star* __this, ::app::Uno::Float2 availableSize, int flags);
void ShapeVisual__Fuse_Controls_Star__OnDraw(ShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc);
void ShapeVisual__Fuse_Controls_Star__PrepareDraw(ShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc);

struct ShapeVisual__Fuse_Controls_Star : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Star
{
    void _ObjInit_3() { ShapeVisual__Fuse_Controls_Star___ObjInit_3(this); }
    void DrawFill(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill) { (((ShapeVisual__Fuse_Controls_Star__uType*)this->__obj_type)->__fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke) { (((ShapeVisual__Fuse_Controls_Star__uType*)this->__obj_type)->__fp_DrawStroke)(this, dc, stroke); }
    ::app::Fuse::Controls::Shape* Shape() { return ShapeVisual__Fuse_Controls_Star__get_Shape(this); }
    void PrepareDraw(::app::Fuse::DrawContext* dc) { (((ShapeVisual__Fuse_Controls_Star__uType*)this->__obj_type)->__fp_PrepareDraw)(this, dc); }
};

}}}}


#endif
