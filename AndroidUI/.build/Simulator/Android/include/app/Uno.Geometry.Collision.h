// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_COLLISION_H__
#define __APP_UNO_GEOMETRY_COLLISION_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { namespace Geometry { struct Frustum; } } }
namespace app { namespace Uno { namespace Geometry { struct Plane; } } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Geometry { struct Sphere; } } }
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {
namespace Geometry {

struct Collision__uType : ::uClassType
{
};

Collision__uType* Collision__typeof();

bool Collision__AreParallel(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, float tolerance);
int Collision__BoxContainsBox(::uStatic* __this, ::app::Uno::Geometry::Box box1, ::app::Uno::Geometry::Box box2);
int Collision__BoxContainsPoint(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Float3 point);
int Collision__BoxContainsSphere(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Geometry::Sphere sphere);
int Collision__BoxContainsTriangle(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Geometry::Triangle triangle);
bool Collision__BoxIntersectsBox(::uStatic* __this, ::app::Uno::Geometry::Box box1, ::app::Uno::Geometry::Box box2);
bool Collision__BoxIntersectsSphere(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Geometry::Sphere sphere);
bool Collision__BoxIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Geometry::Triangle triangle);
void Collision__ClosestPointOnBoxToPoint(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Float3 point, ::app::Uno::Float3* result);
void Collision__ClosestPointOnPlaneToPoint(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Float3 point, ::app::Uno::Float3* result);
void Collision__ClosestPointOnSegmentToPoint(::uStatic* __this, ::app::Uno::Float3 segment1, ::app::Uno::Float3 segment2, ::app::Uno::Float3 point, ::app::Uno::Float3* result);
void Collision__ClosestPointOnSphereToPoint(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3 point, ::app::Uno::Float3* result);
void Collision__ClosestPointOnSphereToSphere(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere1, ::app::Uno::Geometry::Sphere sphere2, ::app::Uno::Float3* result);
void Collision__ClosestPointOnTriangleToPoint(::uStatic* __this, ::app::Uno::Geometry::Triangle triangle, ::app::Uno::Float3 point, ::app::Uno::Float3* result);
int Collision__FrustumContainsBox(::uStatic* __this, ::app::Uno::Geometry::Frustum frustum, ::app::Uno::Geometry::Box box);
int Collision__FrustumContainsPoint(::uStatic* __this, ::app::Uno::Geometry::Frustum frustum, ::app::Uno::Float3 point);
int Collision__FrustumContainsSphere(::uStatic* __this, ::app::Uno::Geometry::Frustum frustum, ::app::Uno::Geometry::Sphere sphere);
int Collision__FrustumContainsTriangle(::uStatic* __this, ::app::Uno::Geometry::Frustum frustum, ::app::Uno::Geometry::Triangle triangle);
int Collision__PlaneIntersectsBox(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Geometry::Box box);
bool Collision__PlaneIntersectsPlane(::uStatic* __this, ::app::Uno::Geometry::Plane plane1, ::app::Uno::Geometry::Plane plane2);
bool Collision__PlaneIntersectsPlane_1(::uStatic* __this, ::app::Uno::Geometry::Plane plane1, ::app::Uno::Geometry::Plane plane2, ::app::Uno::Geometry::Ray* line);
int Collision__PlaneIntersectsPoint(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Float3 point);
int Collision__PlaneIntersectsSphere(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Geometry::Sphere sphere);
int Collision__PlaneIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Geometry::Triangle triangle);
bool Collision__RayIntersectsBox(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Box box, float* distance);
bool Collision__RayIntersectsBox_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Box box, ::app::Uno::Float3* point);
bool Collision__RayIntersectsPlane(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Plane plane, float* distance);
bool Collision__RayIntersectsPlane_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Plane plane, ::app::Uno::Float3* point);
bool Collision__RayIntersectsPoint(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Float3 point);
bool Collision__RayIntersectsRay(::uStatic* __this, ::app::Uno::Geometry::Ray ray1, ::app::Uno::Geometry::Ray ray2, ::app::Uno::Float3* point);
bool Collision__RayIntersectsSphere(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Sphere sphere, float* distance);
bool Collision__RayIntersectsSphere_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3* point);
bool Collision__RayIntersectsSphere_2(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3* point, ::app::Uno::Float3* normal);
bool Collision__RayIntersectsSphere_3(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3* entrancePoint, ::app::Uno::Float3* entranceNormal, ::app::Uno::Float3* exitPoint, ::app::Uno::Float3* exitNormal);
bool Collision__RayIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Triangle triangle, float* distance);
bool Collision__RayIntersectsTriangle_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Triangle triangle, ::app::Uno::Float3* point);
int Collision__SphereContainsBox(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Geometry::Box box);
int Collision__SphereContainsPoint(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3 point);
int Collision__SphereContainsSphere(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere1, ::app::Uno::Geometry::Sphere sphere2);
int Collision__SphereContainsTriangle(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Geometry::Triangle triangle);
bool Collision__SphereIntersectsSphere(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere1, ::app::Uno::Geometry::Sphere sphere2);
bool Collision__SphereIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Geometry::Triangle triangle, ::app::Uno::Float3* point);

}}}


#endif
