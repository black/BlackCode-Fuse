// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.PathShapeVisual-1.h>
#include <Fuse.Controls.RegularPolygon.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct RegularPolygonVisual;}}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class RegularPolygonVisual :465
// {
::g::Fuse::Controls::Graphics::PathShapeVisual_type* RegularPolygonVisual_typeof();
void RegularPolygonVisual__ctor_5_fn(RegularPolygonVisual* __this);
void RegularPolygonVisual__New1_fn(RegularPolygonVisual** __retval);
void RegularPolygonVisual__get_Offset_fn(RegularPolygonVisual* __this, ::g::Uno::Float2* __retval);
void RegularPolygonVisual__get_Radius_fn(RegularPolygonVisual* __this, float* __retval);
void RegularPolygonVisual__get_RegularPolygon_fn(RegularPolygonVisual* __this, ::g::Fuse::Controls::RegularPolygon** __retval);
void RegularPolygonVisual__UpdatePath_fn(RegularPolygonVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct RegularPolygonVisual : ::g::Fuse::Controls::Graphics::PathShapeVisual
{
    float _cachedRadius;
    int _cachedSides;

    void ctor_5();
    ::g::Uno::Float2 Offset();
    float Radius();
    ::g::Fuse::Controls::RegularPolygon* RegularPolygon();
    static RegularPolygonVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
