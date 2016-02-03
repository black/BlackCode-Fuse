// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_RECTANGLE_H__
#define __APP_FUSE_SHAPES_RECTANGLE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Shapes_Rectangle__float4; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Rectangle;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Shapes_Rectangle__float4*> Rectangle__CornerRadiusProperty;

struct Rectangle__uType : ::app::Fuse::Shapes::Shape__uType
{
};

Rectangle__uType* Rectangle__typeof();

void Rectangle___ObjInit_3(Rectangle* __this);
void Rectangle___TypeInit_3(::uStatic* __this);
void Rectangle__DrawFill(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill);
void Rectangle__DrawStroke(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke);
::app::Uno::Float4 Rectangle__get_CornerRadius(Rectangle* __this);
Rectangle* Rectangle__New_1(::uStatic* __this);
void Rectangle__OnCornerRadiusChanged(::uStatic* __this, Rectangle* r);
void Rectangle__OnHitTestLocalVisual(Rectangle* __this, ::app::Fuse::HitTestContext* htc);
void Rectangle__set_CornerRadius(Rectangle* __this, ::app::Uno::Float4 value);

struct Rectangle : ::app::Fuse::Shapes::Shape
{
    void _ObjInit_3() { Rectangle___ObjInit_3(this); }
    ::app::Uno::Float4 CornerRadius();
    void CornerRadius(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float4 Rectangle::CornerRadius() { return Rectangle__get_CornerRadius(this); }
inline void Rectangle::CornerRadius(::app::Uno::Float4 value) { Rectangle__set_CornerRadius(this, value); }

}}}


#endif
