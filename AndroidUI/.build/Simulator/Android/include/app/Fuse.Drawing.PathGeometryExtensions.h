// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PATH_GEOMETRY_EXTENSIONS_H__
#define __APP_FUSE_DRAWING_PATH_GEOMETRY_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PathGeometryExtensions__uType : ::uClassType
{
};

PathGeometryExtensions__uType* PathGeometryExtensions__typeof();

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Circle(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, float Radius);
::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Ellipse(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Radius);
::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Rectangle(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius);
::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__RegularPolygon(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Sides, float Radius);
::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Star(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Corners, float Radius, float SpokeRadius, float CornerRatio, float rotation);

}}}


#endif
