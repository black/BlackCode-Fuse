// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ShapeVisual;}}}}
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public abstract class ShapeVisual<T> :640
// {
struct ShapeVisual_type : ::g::Fuse::Controls::Graphics::ControlVisual_type
{
    void(*fp_DrawFill)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*);
    void(*fp_DrawStroke)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*);
    void(*fp_PrepareDraw)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*);
};

ShapeVisual_type* ShapeVisual_typeof();
void ShapeVisual__ctor_3_fn(ShapeVisual* __this);
void ShapeVisual__Attach_fn(ShapeVisual* __this);
void ShapeVisual__Detach_fn(ShapeVisual* __this);
void ShapeVisual__GetMarginSize_fn(ShapeVisual* __this, ::g::Uno::Float2* availableSize, int* flags, ::g::Uno::Float2* __retval);
void ShapeVisual__OnDraw_fn(ShapeVisual* __this, ::g::Fuse::DrawContext* dc);
void ShapeVisual__PrepareDraw_fn(ShapeVisual* __this, ::g::Fuse::DrawContext* dc);
void ShapeVisual__get_Shape_fn(ShapeVisual* __this, ::g::Fuse::Controls::Shape** __retval);

struct ShapeVisual : ::g::Fuse::Controls::Graphics::ControlVisual
{
    void ctor_3();
    void DrawFill(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { (((ShapeVisual_type*)__type)->fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { (((ShapeVisual_type*)__type)->fp_DrawStroke)(this, dc, stroke); }
    void PrepareDraw(::g::Fuse::DrawContext* dc) { (((ShapeVisual_type*)__type)->fp_PrepareDraw)(this, dc); }
    ::g::Fuse::Controls::Shape* Shape();
    static void PrepareDraw(ShapeVisual* __this, ::g::Fuse::DrawContext* dc) { ShapeVisual__PrepareDraw_fn(__this, dc); }
};
// }

}}}} // ::g::Fuse::Controls::Graphics
