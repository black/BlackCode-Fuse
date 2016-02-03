// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_REGULAR_POLYGON_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_REGULAR_POLYGON_VISUAL_H__

#include <app/Fuse.Controls.Graphics.PathShapeVisual__Fuse_Controls_RegularPolygon.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct RegularPolygon; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryRenderer; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct RegularPolygonVisual;

struct RegularPolygonVisual__uType : ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_RegularPolygon__uType
{
};

RegularPolygonVisual__uType* RegularPolygonVisual__typeof();

void RegularPolygonVisual___ObjInit_5(RegularPolygonVisual* __this);
::app::Uno::Float2 RegularPolygonVisual__get_Offset(RegularPolygonVisual* __this);
float RegularPolygonVisual__get_Radius(RegularPolygonVisual* __this);
::app::Fuse::Controls::RegularPolygon* RegularPolygonVisual__get_RegularPolygon(RegularPolygonVisual* __this);
RegularPolygonVisual* RegularPolygonVisual__New_1(::uStatic* __this);
void RegularPolygonVisual__UpdatePath(RegularPolygonVisual* __this, ::app::Fuse::Drawing::PathGeometryRenderer* renderer);

struct RegularPolygonVisual : ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_RegularPolygon
{
    int _cachedSides;
    float _cachedRadius;

    void _ObjInit_5() { RegularPolygonVisual___ObjInit_5(this); }
    ::app::Uno::Float2 Offset();
    float Radius() { return RegularPolygonVisual__get_Radius(this); }
    ::app::Fuse::Controls::RegularPolygon* RegularPolygon() { return RegularPolygonVisual__get_RegularPolygon(this); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

inline ::app::Uno::Float2 RegularPolygonVisual::Offset() { return RegularPolygonVisual__get_Offset(this); }

}}}}


#endif
