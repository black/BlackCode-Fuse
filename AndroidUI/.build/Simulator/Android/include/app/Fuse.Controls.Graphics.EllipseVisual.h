// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_ELLIPSE_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_ELLIPSE_VISUAL_H__

#include <app/Fuse.Controls.Graphics.PathShapeVisual__Fuse_Controls_Ellipse.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Ellipse; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryRenderer; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct EllipseVisual;

struct EllipseVisual__uType : ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Ellipse__uType
{
};

EllipseVisual__uType* EllipseVisual__typeof();

void EllipseVisual___ObjInit_5(EllipseVisual* __this);
::app::Fuse::Controls::Ellipse* EllipseVisual__get_Ellipse(EllipseVisual* __this);
EllipseVisual* EllipseVisual__New_1(::uStatic* __this);
void EllipseVisual__UpdatePath(EllipseVisual* __this, ::app::Fuse::Drawing::PathGeometryRenderer* renderer);

struct EllipseVisual : ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Ellipse
{
    ::app::Uno::Float2 _cachedRadius;

    void _ObjInit_5() { EllipseVisual___ObjInit_5(this); }
    ::app::Fuse::Controls::Ellipse* Ellipse() { return EllipseVisual__get_Ellipse(this); }
};

}}}}


#endif
