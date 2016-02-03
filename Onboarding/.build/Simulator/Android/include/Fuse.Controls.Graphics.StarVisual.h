// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.PathShapeVisual-1.h>
#include <Fuse.Controls.Star.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct StarVisual;}}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class StarVisual :386
// {
::g::Fuse::Controls::Graphics::PathShapeVisual_type* StarVisual_typeof();
void StarVisual__ctor_5_fn(StarVisual* __this);
void StarVisual__New1_fn(StarVisual** __retval);
void StarVisual__get_Offset_fn(StarVisual* __this, ::g::Uno::Float2* __retval);
void StarVisual__get_Radius_fn(StarVisual* __this, float* __retval);
void StarVisual__get_SpokeRadius_fn(StarVisual* __this, float* __retval);
void StarVisual__get_Star_fn(StarVisual* __this, ::g::Fuse::Controls::Star** __retval);
void StarVisual__UpdatePath_fn(StarVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct StarVisual : ::g::Fuse::Controls::Graphics::PathShapeVisual
{
    float _cachedDegrees;
    int _cachedPoints;
    float _cachedRadius;
    float _cachedRoundRatio;
    float _cachedSpokeRadius;

    void ctor_5();
    ::g::Uno::Float2 Offset();
    float Radius();
    float SpokeRadius();
    ::g::Fuse::Controls::Star* Star();
    static StarVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
