// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_RECTANGLE_H__
#define __APP_FUSE_CONTROLS_RECTANGLE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Rectangle__float4; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Rectangle;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4*> Rectangle__CornerRadiusProperty;

struct Rectangle__uType : ::app::Fuse::Controls::Shape__uType
{
};

Rectangle__uType* Rectangle__typeof();

void Rectangle___ObjInit_5(Rectangle* __this);
void Rectangle___TypeInit_5(::uStatic* __this);
::app::Uno::Float4 Rectangle__get_CornerRadius(Rectangle* __this);
Rectangle* Rectangle__New_2(::uStatic* __this);
void Rectangle__OnCornerRadiusChanged(::uStatic* __this, Rectangle* r);
void Rectangle__set_CornerRadius(Rectangle* __this, ::app::Uno::Float4 value);

struct Rectangle : ::app::Fuse::Controls::Shape
{
    void _ObjInit_5() { Rectangle___ObjInit_5(this); }
    ::app::Uno::Float4 CornerRadius();
    void CornerRadius(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Float4 Rectangle::CornerRadius() { return Rectangle__get_CornerRadius(this); }
inline void Rectangle::CornerRadius(::app::Uno::Float4 value) { Rectangle__set_CornerRadius(this, value); }

}}}


#endif
