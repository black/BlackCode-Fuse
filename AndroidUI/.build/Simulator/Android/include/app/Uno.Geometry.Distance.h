// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_DISTANCE_H__
#define __APP_UNO_GEOMETRY_DISTANCE_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { namespace Geometry { struct Plane; } } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Geometry { struct Sphere; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {
namespace Geometry {

struct Distance__uType : ::uClassType
{
};

Distance__uType* Distance__typeof();

float Distance__BoxBox(::uStatic* __this, ::app::Uno::Geometry::Box box1, ::app::Uno::Geometry::Box box2);
float Distance__BoxPoint(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Float3 point);
float Distance__LineSegmentPoint(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 p);
float Distance__PlanePoint(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Float3 point);
float Distance__PointPoint(::uStatic* __this, ::app::Uno::Float3 point1, ::app::Uno::Float3 point2);
float Distance__PointPointSquared(::uStatic* __this, ::app::Uno::Float3 point1, ::app::Uno::Float3 point2);
float Distance__RayPoint(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Float3 point);
float Distance__SpherePoint(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3 point);
float Distance__SpherePointSquared(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3 point);
float Distance__SphereSphere(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere1, ::app::Uno::Geometry::Sphere sphere2);

}}}


#endif
