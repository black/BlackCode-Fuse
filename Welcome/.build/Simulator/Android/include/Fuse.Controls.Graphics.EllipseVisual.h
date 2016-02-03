// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Ellipse.h>
#include <Fuse.Controls.Graphics.PathShapeVisual-1.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct EllipseVisual;}}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class EllipseVisual :440
// {
::g::Fuse::Controls::Graphics::PathShapeVisual_type* EllipseVisual_typeof();
void EllipseVisual__ctor_5_fn(EllipseVisual* __this);
void EllipseVisual__get_Ellipse_fn(EllipseVisual* __this, ::g::Fuse::Controls::Ellipse** __retval);
void EllipseVisual__New1_fn(EllipseVisual** __retval);
void EllipseVisual__UpdatePath_fn(EllipseVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct EllipseVisual : ::g::Fuse::Controls::Graphics::PathShapeVisual
{
    ::g::Uno::Float2 _cachedRadius;

    void ctor_5();
    ::g::Fuse::Controls::Ellipse* Ellipse();
    static EllipseVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
