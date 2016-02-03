// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_CIRCLE_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_CIRCLE_VISUAL_H__

#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Circle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Circle; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct CircleVisual;

struct CircleVisual__uType : ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Circle__uType
{
};

CircleVisual__uType* CircleVisual__typeof();

void CircleVisual___ObjInit_4(CircleVisual* __this);
void CircleVisual__DrawFill(CircleVisual* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill);
void CircleVisual__DrawStroke(CircleVisual* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke);
::app::Fuse::Controls::Circle* CircleVisual__get_Circle(CircleVisual* __this);
CircleVisual* CircleVisual__New_1(::uStatic* __this);
void CircleVisual__OnHitTest(CircleVisual* __this, ::app::Fuse::HitTestContext* htc);

struct CircleVisual : ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Circle
{
    void _ObjInit_4() { CircleVisual___ObjInit_4(this); }
    ::app::Fuse::Controls::Circle* Circle() { return CircleVisual__get_Circle(this); }
};

}}}}


#endif
