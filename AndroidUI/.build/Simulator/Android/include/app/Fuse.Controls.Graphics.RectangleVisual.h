// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_RECTANGLE_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_RECTANGLE_VISUAL_H__

#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Rectangle; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct RectangleVisual;

struct RectangleVisual__uType : ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Rectangle__uType
{
};

RectangleVisual__uType* RectangleVisual__typeof();

void RectangleVisual___ObjInit_4(RectangleVisual* __this);
void RectangleVisual__DrawFill(RectangleVisual* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill);
void RectangleVisual__DrawStroke(RectangleVisual* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke);
::app::Fuse::Controls::Rectangle* RectangleVisual__get_Rectangle(RectangleVisual* __this);
RectangleVisual* RectangleVisual__New_1(::uStatic* __this);
void RectangleVisual__OnHitTest(RectangleVisual* __this, ::app::Fuse::HitTestContext* htc);

struct RectangleVisual : ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Rectangle
{
    void _ObjInit_4() { RectangleVisual___ObjInit_4(this); }
    ::app::Fuse::Controls::Rectangle* Rectangle() { return RectangleVisual__get_Rectangle(this); }
};

}}}}


#endif
