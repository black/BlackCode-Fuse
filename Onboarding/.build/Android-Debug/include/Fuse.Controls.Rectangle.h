// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Rectangle :3008
// {
::g::Fuse::Controls::Panel_type* Rectangle_typeof();
void Rectangle__ctor_5_fn(Rectangle* __this);
void Rectangle__get_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* __retval);
void Rectangle__set_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value);
void Rectangle__New2_fn(Rectangle** __retval);
void Rectangle__OnCornerRadiusChanged_fn(Rectangle* r);

struct Rectangle : ::g::Fuse::Controls::Shape
{
    static uSStrong< ::g::Fuse::StyleProperty1*> CornerRadiusProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& CornerRadiusProperty() { return Rectangle_typeof()->Init(), CornerRadiusProperty_; }

    void ctor_5();
    ::g::Uno::Float4 CornerRadius();
    void CornerRadius(::g::Uno::Float4 value);
    static Rectangle* New2();
    static void OnCornerRadiusChanged(Rectangle* r);
};
// }

}}} // ::g::Fuse::Controls
