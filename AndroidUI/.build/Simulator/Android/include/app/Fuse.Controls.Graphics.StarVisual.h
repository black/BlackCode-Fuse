// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_STAR_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_STAR_VISUAL_H__

#include <app/Fuse.Controls.Graphics.PathShapeVisual__Fuse_Controls_Star.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Star; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryRenderer; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct StarVisual;

struct StarVisual__uType : ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Star__uType
{
};

StarVisual__uType* StarVisual__typeof();

void StarVisual___ObjInit_5(StarVisual* __this);
::app::Uno::Float2 StarVisual__get_Offset(StarVisual* __this);
float StarVisual__get_Radius(StarVisual* __this);
float StarVisual__get_SpokeRadius(StarVisual* __this);
::app::Fuse::Controls::Star* StarVisual__get_Star(StarVisual* __this);
StarVisual* StarVisual__New_1(::uStatic* __this);
void StarVisual__UpdatePath(StarVisual* __this, ::app::Fuse::Drawing::PathGeometryRenderer* renderer);

struct StarVisual : ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Star
{
    int _cachedPoints;
    float _cachedRadius;
    float _cachedSpokeRadius;
    float _cachedDegrees;
    float _cachedRoundRatio;

    void _ObjInit_5() { StarVisual___ObjInit_5(this); }
    ::app::Uno::Float2 Offset();
    float Radius() { return StarVisual__get_Radius(this); }
    float SpokeRadius() { return StarVisual__get_SpokeRadius(this); }
    ::app::Fuse::Controls::Star* Star() { return StarVisual__get_Star(this); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

inline ::app::Uno::Float2 StarVisual::Offset() { return StarVisual__get_Offset(this); }

}}}}


#endif
