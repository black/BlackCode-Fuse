// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Graphics.ShapeVisual-1.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct CircleVisual;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class CircleVisual :740
// {
::g::Fuse::Controls::Graphics::ShapeVisual_type* CircleVisual_typeof();
void CircleVisual__ctor_4_fn(CircleVisual* __this);
void CircleVisual__get_Circle_fn(CircleVisual* __this, ::g::Fuse::Controls::Circle** __retval);
void CircleVisual__DrawFill_fn(CircleVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void CircleVisual__DrawStroke_fn(CircleVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void CircleVisual__New1_fn(CircleVisual** __retval);
void CircleVisual__OnHitTest_fn(CircleVisual* __this, ::g::Fuse::HitTestContext* htc);

struct CircleVisual : ::g::Fuse::Controls::Graphics::ShapeVisual
{
    void ctor_4();
    ::g::Fuse::Controls::Circle* Circle();
    static CircleVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
