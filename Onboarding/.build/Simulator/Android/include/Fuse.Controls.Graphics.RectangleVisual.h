// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.ShapeVisual-1.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct RectangleVisual;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class RectangleVisual :690
// {
::g::Fuse::Controls::Graphics::ShapeVisual_type* RectangleVisual_typeof();
void RectangleVisual__ctor_4_fn(RectangleVisual* __this);
void RectangleVisual__DrawFill_fn(RectangleVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void RectangleVisual__DrawStroke_fn(RectangleVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void RectangleVisual__New1_fn(RectangleVisual** __retval);
void RectangleVisual__OnHitTest_fn(RectangleVisual* __this, ::g::Fuse::HitTestContext* htc);
void RectangleVisual__get_Rectangle_fn(RectangleVisual* __this, ::g::Fuse::Controls::Rectangle** __retval);

struct RectangleVisual : ::g::Fuse::Controls::Graphics::ShapeVisual
{
    void ctor_4();
    ::g::Fuse::Controls::Rectangle* Rectangle();
    static RectangleVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
