#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Geometry.Collision.h>
#include <app/Uno.Geometry.Collision_ContainmentType.h>
#include <app/Uno.Geometry.Collision_PlaneIntersectionType.h>
#include <app/Uno.Geometry.Collision2D.h>
#include <app/Uno.Geometry.CubicBezier.h>
#include <app/Uno.Geometry.Distance.h>
#include <app/Uno.Geometry.Frustum.h>
#include <app/Uno.Geometry.Plane.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Geometry.Sphere.h>
#include <app/Uno.Geometry.Triangle.h>
#include <app/Uno.Geometry.Triangle2D.h>
#include <app/Uno.Geometry.Vertex.h>
#include <app/Uno.Geometry.VertexEnumerable.h>
#include <app/Uno.Geometry.VertexEnumerator.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {
namespace Geometry {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Box__uType* Box__typeof()
{
    static ::uStaticStrong<Box__uType*> type;
    if (type != NULL) return type;

    type = (Box__uType*)::uAllocStructType(sizeof(Box__uType), "Uno.Geometry.Box", sizeof(Box), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Maximum", NULL, offsetof(Box, Maximum), ::app::Uno::Float3__typeof()),
        ::uNewField("Minimum", NULL, offsetof(Box, Minimum), ::app::Uno::Float3__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Center", Box__get_Center, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", Box__New_1, 0, true, Box__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("Transform", Box__Transform, 0, true, Box__typeof(), Box__typeof(), ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Box___ObjInit(Box* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max)
{
    __this->Minimum = min;
    __this->Maximum = max;
}

::app::Uno::Float3 Box__get_Center(Box* __this)
{
    return ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Float3__op_Addition_2(NULL, __this->Minimum, __this->Maximum), 0.5f);
}

Box Box__New_1(::uStatic* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max)
{
    Box inst = ::uDefault< Box>();
    inst._ObjInit(min, max);
    return inst;
}

Box Box__Transform(::uStatic* __this, Box box, ::app::Uno::Float4x4 transform)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_2(NULL, box.Minimum.X, box.Minimum.Y, box.Minimum.Z, 1.0f), transform);
    ::app::Uno::Float3 A = ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z);
    ::app::Uno::Float4 ind_124 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_2(NULL, box.Maximum.X, box.Minimum.Y, box.Minimum.Z, 1.0f), transform);
    ::app::Uno::Float3 B = ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z);
    ::app::Uno::Float4 ind_125 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_2(NULL, box.Maximum.X, box.Maximum.Y, box.Minimum.Z, 1.0f), transform);
    ::app::Uno::Float3 C = ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z);
    ::app::Uno::Float4 ind_126 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_2(NULL, box.Minimum.X, box.Maximum.Y, box.Minimum.Z, 1.0f), transform);
    ::app::Uno::Float3 D = ::app::Uno::Float3__New_2(NULL, ind_126.X, ind_126.Y, ind_126.Z);
    ::app::Uno::Float4 ind_127 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_2(NULL, box.Minimum.X, box.Minimum.Y, box.Maximum.Z, 1.0f), transform);
    ::app::Uno::Float3 E = ::app::Uno::Float3__New_2(NULL, ind_127.X, ind_127.Y, ind_127.Z);
    ::app::Uno::Float4 ind_128 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_2(NULL, box.Maximum.X, box.Minimum.Y, box.Maximum.Z, 1.0f), transform);
    ::app::Uno::Float3 F = ::app::Uno::Float3__New_2(NULL, ind_128.X, ind_128.Y, ind_128.Z);
    ::app::Uno::Float4 ind_129 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_2(NULL, box.Maximum.X, box.Maximum.Y, box.Maximum.Z, 1.0f), transform);
    ::app::Uno::Float3 G = ::app::Uno::Float3__New_2(NULL, ind_129.X, ind_129.Y, ind_129.Z);
    ::app::Uno::Float4 ind_130 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_2(NULL, box.Minimum.X, box.Maximum.Y, box.Maximum.Z, 1.0f), transform);
    ::app::Uno::Float3 H = ::app::Uno::Float3__New_2(NULL, ind_130.X, ind_130.Y, ind_130.Z);
    return Box__New_1(NULL, ::app::Uno::Math__Min_5(NULL, ::app::Uno::Math__Min_5(NULL, ::app::Uno::Math__Min_5(NULL, ::app::Uno::Math__Min_5(NULL, ::app::Uno::Math__Min_5(NULL, ::app::Uno::Math__Min_5(NULL, ::app::Uno::Math__Min_5(NULL, A, B), C), D), E), F), G), H), ::app::Uno::Math__Max_5(NULL, ::app::Uno::Math__Max_5(NULL, ::app::Uno::Math__Max_5(NULL, ::app::Uno::Math__Max_5(NULL, ::app::Uno::Math__Max_5(NULL, ::app::Uno::Math__Max_5(NULL, ::app::Uno::Math__Max_5(NULL, A, B), C), D), E), F), G), H));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Collision__uType* Collision__typeof()
{
    static ::uStaticStrong<Collision__uType*> type;
    if (type != NULL) return type;

    type = (Collision__uType*)::uAllocClassType(sizeof(Collision__uType), "Uno.Geometry.Collision");

    type->SetFunctions(42,
        ::uNewFunction("AreParallel", Collision__AreParallel, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("BoxContainsBox", Collision__BoxContainsBox, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("BoxContainsPoint", Collision__BoxContainsPoint, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("BoxContainsSphere", Collision__BoxContainsSphere, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Geometry::Sphere__typeof()),
        ::uNewFunction("BoxContainsTriangle", Collision__BoxContainsTriangle, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Geometry::Triangle__typeof()),
        ::uNewFunction("BoxIntersectsBox", Collision__BoxIntersectsBox, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("BoxIntersectsSphere", Collision__BoxIntersectsSphere, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Geometry::Sphere__typeof()),
        ::uNewFunction("BoxIntersectsTriangle", Collision__BoxIntersectsTriangle, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Geometry::Triangle__typeof()),
        ::uNewFunctionVoid("ClosestPointOnBoxToPoint", Collision__ClosestPointOnBoxToPoint, 0, true, ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("ClosestPointOnPlaneToPoint", Collision__ClosestPointOnPlaneToPoint, 0, true, ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("ClosestPointOnSegmentToPoint", Collision__ClosestPointOnSegmentToPoint, 0, true, ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("ClosestPointOnSphereToPoint", Collision__ClosestPointOnSphereToPoint, 0, true, ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("ClosestPointOnSphereToSphere", Collision__ClosestPointOnSphereToSphere, 0, true, ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("ClosestPointOnTriangleToPoint", Collision__ClosestPointOnTriangleToPoint, 0, true, ::app::Uno::Geometry::Triangle__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("FrustumContainsBox", Collision__FrustumContainsBox, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Frustum__typeof(), ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("FrustumContainsPoint", Collision__FrustumContainsPoint, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Frustum__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("FrustumContainsSphere", Collision__FrustumContainsSphere, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Frustum__typeof(), ::app::Uno::Geometry::Sphere__typeof()),
        ::uNewFunction("FrustumContainsTriangle", Collision__FrustumContainsTriangle, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Frustum__typeof(), ::app::Uno::Geometry::Triangle__typeof()),
        ::uNewFunction("PlaneIntersectsBox", Collision__PlaneIntersectsBox, 0, true, ::app::Uno::Geometry::Collision_PlaneIntersectionType__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("PlaneIntersectsPlane", Collision__PlaneIntersectsPlane, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Geometry::Plane__typeof()),
        ::uNewFunction("PlaneIntersectsPlane", Collision__PlaneIntersectsPlane_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Geometry::Ray__typeof()),
        ::uNewFunction("PlaneIntersectsPoint", Collision__PlaneIntersectsPoint, 0, true, ::app::Uno::Geometry::Collision_PlaneIntersectionType__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("PlaneIntersectsSphere", Collision__PlaneIntersectsSphere, 0, true, ::app::Uno::Geometry::Collision_PlaneIntersectionType__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Geometry::Sphere__typeof()),
        ::uNewFunction("PlaneIntersectsTriangle", Collision__PlaneIntersectsTriangle, 0, true, ::app::Uno::Geometry::Collision_PlaneIntersectionType__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Geometry::Triangle__typeof()),
        ::uNewFunction("RayIntersectsBox", Collision__RayIntersectsBox, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("RayIntersectsBox", Collision__RayIntersectsBox_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("RayIntersectsPlane", Collision__RayIntersectsPlane, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("RayIntersectsPlane", Collision__RayIntersectsPlane_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("RayIntersectsPoint", Collision__RayIntersectsPoint, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("RayIntersectsRay", Collision__RayIntersectsRay, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("RayIntersectsSphere", Collision__RayIntersectsSphere, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("RayIntersectsSphere", Collision__RayIntersectsSphere_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("RayIntersectsSphere", Collision__RayIntersectsSphere_2, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("RayIntersectsSphere", Collision__RayIntersectsSphere_3, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("RayIntersectsTriangle", Collision__RayIntersectsTriangle, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Triangle__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("RayIntersectsTriangle", Collision__RayIntersectsTriangle_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Triangle__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("SphereContainsBox", Collision__SphereContainsBox, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("SphereContainsPoint", Collision__SphereContainsPoint, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("SphereContainsSphere", Collision__SphereContainsSphere, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Geometry::Sphere__typeof()),
        ::uNewFunction("SphereContainsTriangle", Collision__SphereContainsTriangle, 0, true, ::app::Uno::Geometry::Collision_ContainmentType__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Geometry::Triangle__typeof()),
        ::uNewFunction("SphereIntersectsSphere", Collision__SphereIntersectsSphere, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Geometry::Sphere__typeof()),
        ::uNewFunction("SphereIntersectsTriangle", Collision__SphereIntersectsTriangle, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Geometry::Triangle__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Collision__AreParallel(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, float tolerance)
{
    ::app::Uno::Float3 c = ::app::Uno::Vector__Cross(NULL, a, b);
    float l = (c.X + c.Y) + c.Z;
    return ::app::Uno::Math__Abs_1(NULL, l) < tolerance;
}

int Collision__BoxContainsBox(::uStatic* __this, ::app::Uno::Geometry::Box box1, ::app::Uno::Geometry::Box box2)
{
    if ((box1.Maximum.X < box2.Minimum.X) || (box1.Minimum.X > box2.Maximum.X))
    {
        return 0;
    }

    if ((box1.Maximum.Y < box2.Minimum.Y) || (box1.Minimum.Y > box2.Maximum.Y))
    {
        return 0;
    }

    if ((box1.Maximum.Z < box2.Minimum.Z) || (box1.Minimum.Z > box2.Maximum.Z))
    {
        return 0;
    }

    if ((((box1.Minimum.X <= box2.Minimum.X) && (((box2.Maximum.X <= box1.Maximum.X) && (box1.Minimum.Y <= box2.Minimum.Y)) && (box2.Maximum.Y <= box1.Maximum.Y))) && (box1.Minimum.Z <= box2.Minimum.Z)) && (box2.Maximum.Z <= box1.Maximum.Z))
    {
        return 1;
    }

    return 2;
}

int Collision__BoxContainsPoint(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Float3 point)
{
    if ((((((box.Minimum.X <= point.X) && (box.Maximum.X >= point.X)) && (box.Minimum.Y <= point.Y)) && (box.Maximum.Y >= point.Y)) && (box.Minimum.Z <= point.Z)) && (box.Maximum.Z >= point.Z))
    {
        return 1;
    }

    return 0;
}

int Collision__BoxContainsSphere(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Geometry::Sphere sphere)
{
    ::app::Uno::Float3 vector = ::app::Uno::Math__Clamp_5(NULL, sphere.Center, box.Minimum, box.Maximum);
    float distance = ::app::Uno::Geometry::Distance__PointPointSquared(NULL, sphere.Center, vector);

    if (distance > (sphere.Radius * sphere.Radius))
    {
        return 0;
    }

    if (((((box.Minimum.X + sphere.Radius) <= sphere.Center.X) && (sphere.Center.X <= (box.Maximum.X - sphere.Radius))) && (((box.Maximum.X - box.Minimum.X) > sphere.Radius) && ((box.Minimum.Y + sphere.Radius) <= sphere.Center.Y))) && (((sphere.Center.Y <= (box.Maximum.Y - sphere.Radius)) && ((box.Maximum.Y - box.Minimum.Y) > sphere.Radius)) && ((((box.Minimum.Z + sphere.Radius) <= sphere.Center.Z) && (sphere.Center.Z <= (box.Maximum.Z - sphere.Radius))) && ((box.Maximum.X - box.Minimum.X) > sphere.Radius))))
    {
        return 1;
    }

    return 2;
}

int Collision__BoxContainsTriangle(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Geometry::Triangle triangle)
{
    int test1 = Collision__BoxContainsPoint(NULL, box, triangle.A);
    int test2 = Collision__BoxContainsPoint(NULL, box, triangle.B);
    int test3 = Collision__BoxContainsPoint(NULL, box, triangle.C);

    if (((test1 == 1) && (test2 == 1)) && (test3 == 1))
    {
        return 1;
    }

    if (Collision__BoxIntersectsTriangle(NULL, box, triangle))
    {
        return 2;
    }

    return 0;
}

bool Collision__BoxIntersectsBox(::uStatic* __this, ::app::Uno::Geometry::Box box1, ::app::Uno::Geometry::Box box2)
{
    if ((box1.Minimum.X > box2.Maximum.X) || (box2.Minimum.X > box1.Maximum.X))
    {
        return false;
    }

    if ((box1.Minimum.Y > box2.Maximum.Y) || (box2.Minimum.Y > box1.Maximum.Y))
    {
        return false;
    }

    if ((box1.Minimum.Z > box2.Maximum.Z) || (box2.Minimum.Z > box1.Maximum.Z))
    {
        return false;
    }

    return true;
}

bool Collision__BoxIntersectsSphere(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Geometry::Sphere sphere)
{
    ::app::Uno::Float3 vector = ::app::Uno::Math__Clamp_5(NULL, sphere.Center, box.Minimum, box.Maximum);
    float distance = ::app::Uno::Geometry::Distance__PointPointSquared(NULL, sphere.Center, vector);
    return distance <= (sphere.Radius * sphere.Radius);
}

bool Collision__BoxIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Geometry::Triangle triangle)
{
    float p0 = float();
    float p2 = float();
    float r = float();
    ::app::Uno::Float3 center = ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Float3__op_Addition_2(NULL, box.Minimum, box.Maximum), 0.5f);
    float e0 = (box.Maximum.X - box.Minimum.X) * 0.5f;
    float e1 = (box.Maximum.Y - box.Minimum.Y) * 0.5f;
    float e2 = (box.Maximum.Z - box.Minimum.Z) * 0.5f;
    ::app::Uno::Float3 vertex1 = ::app::Uno::Float3__op_Subtraction_2(NULL, triangle.A, center);
    ::app::Uno::Float3 vertex2 = ::app::Uno::Float3__op_Subtraction_2(NULL, triangle.B, center);
    ::app::Uno::Float3 vertex3 = ::app::Uno::Float3__op_Subtraction_2(NULL, triangle.C, center);
    ::app::Uno::Float3 f0 = ::app::Uno::Float3__op_Subtraction_2(NULL, vertex2, vertex1);
    ::app::Uno::Float3 f1 = ::app::Uno::Float3__op_Subtraction_2(NULL, vertex3, vertex2);
    p0 = (vertex1.Z * vertex2.Y) - (vertex1.Y * vertex2.Z);
    p2 = (vertex3.Z * (vertex2.Y - vertex1.Y)) - (vertex3.Z * (vertex2.Z - vertex1.Z));
    r = (e1 * ::app::Uno::Math__Abs_1(NULL, f0.Z)) + (e2 * ::app::Uno::Math__Abs_1(NULL, f0.Y));

    if (::app::Uno::Math__Max_1(NULL, -::app::Uno::Math__Max_1(NULL, p0, p2), ::app::Uno::Math__Min_1(NULL, p0, p2)) > r)
    {
        return false;
    }

    if ((::app::Uno::Math__Max_1(NULL, ::app::Uno::Math__Max_1(NULL, vertex1.X, vertex2.X), vertex3.X) < -e0) || (::app::Uno::Math__Min_1(NULL, ::app::Uno::Math__Min_1(NULL, vertex1.X, vertex2.X), vertex3.X) > e0))
    {
        return false;
    }

    if ((::app::Uno::Math__Max_1(NULL, ::app::Uno::Math__Max_1(NULL, vertex1.Y, vertex2.Y), vertex3.Y) < -e1) || (::app::Uno::Math__Min_1(NULL, ::app::Uno::Math__Min_1(NULL, vertex1.Y, vertex2.Y), vertex3.Y) > e1))
    {
        return false;
    }

    if ((::app::Uno::Math__Max_1(NULL, ::app::Uno::Math__Max_1(NULL, vertex1.Z, vertex2.Z), vertex3.Z) < -e2) || (::app::Uno::Math__Min_1(NULL, ::app::Uno::Math__Min_1(NULL, vertex1.Z, vertex2.Z), vertex3.Z) > e2))
    {
        return false;
    }

    ::app::Uno::Geometry::Plane plane = ::app::Uno::Geometry::Plane();
    plane.Normal = ::app::Uno::Vector__Cross(NULL, f0, f1);
    plane.D = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, vertex1);
    return Collision__PlaneIntersectsBox(NULL, plane, box) == 2;
}

void Collision__ClosestPointOnBoxToPoint(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Float3 point, ::app::Uno::Float3* result)
{
    ::app::Uno::Float3 temp = ::app::Uno::Math__Max_5(NULL, point, box.Minimum);
    *result = ::app::Uno::Math__Min_5(NULL, temp, box.Maximum);
}

void Collision__ClosestPointOnPlaneToPoint(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Float3 point, ::app::Uno::Float3* result)
{
    float dot = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, point);
    float t = dot - plane.D;
    *result = ::app::Uno::Float3__op_Subtraction_2(NULL, point, ::app::Uno::Float3__op_Multiply_1(NULL, plane.Normal, t));
}

void Collision__ClosestPointOnSegmentToPoint(::uStatic* __this, ::app::Uno::Float3 segment1, ::app::Uno::Float3 segment2, ::app::Uno::Float3 point, ::app::Uno::Float3* result)
{
    ::app::Uno::Float3 ab = ::app::Uno::Float3__op_Subtraction_2(NULL, segment2, segment1);
    float t = ::app::Uno::Vector__Dot_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, point, segment1), ab) / ::app::Uno::Vector__Dot_1(NULL, ab, ab);

    if (t < 0.0f)
    {
        t = 0.0f;
    }

    if (t > 1.0f)
    {
        t = 1.0f;
    }

    *result = ::app::Uno::Float3__op_Addition_2(NULL, segment1, ::app::Uno::Float3__op_Multiply_1(NULL, ab, t));
}

void Collision__ClosestPointOnSphereToPoint(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3 point, ::app::Uno::Float3* result)
{
    *result = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, point, sphere.Center));
    *result = ::app::Uno::Float3__op_Multiply_1(NULL, *result, sphere.Radius);
    *result = ::app::Uno::Float3__op_Addition_2(NULL, *result, sphere.Center);
}

void Collision__ClosestPointOnSphereToSphere(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere1, ::app::Uno::Geometry::Sphere sphere2, ::app::Uno::Float3* result)
{
    *result = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, sphere2.Center, sphere1.Center));
    *result = ::app::Uno::Float3__op_Multiply_1(NULL, *result, sphere1.Radius);
    *result = ::app::Uno::Float3__op_Addition_2(NULL, *result, sphere1.Center);
}

void Collision__ClosestPointOnTriangleToPoint(::uStatic* __this, ::app::Uno::Geometry::Triangle triangle, ::app::Uno::Float3 point, ::app::Uno::Float3* result)
{
    ::app::Uno::Float3 ab = ::app::Uno::Float3__op_Subtraction_2(NULL, triangle.B, triangle.A);
    ::app::Uno::Float3 ac = ::app::Uno::Float3__op_Subtraction_2(NULL, triangle.C, triangle.A);
    ::app::Uno::Float3 ap = ::app::Uno::Float3__op_Subtraction_2(NULL, point, triangle.A);
    float d1 = ::app::Uno::Vector__Dot_1(NULL, ab, ap);
    float d2 = ::app::Uno::Vector__Dot_1(NULL, ac, ap);

    if ((d1 <= 0.0f) && (d2 <= 0.0f))
    {
        *result = triangle.A;
        return;
    }

    ::app::Uno::Float3 bp = ::app::Uno::Float3__op_Subtraction_2(NULL, point, triangle.B);
    float d3 = ::app::Uno::Vector__Dot_1(NULL, ab, bp);
    float d4 = ::app::Uno::Vector__Dot_1(NULL, ac, bp);

    if ((d3 >= 0.0f) && (d4 <= d3))
    {
        *result = triangle.B;
        return;
    }

    float vc = (d1 * d4) - (d3 * d2);

    if (((vc <= 0.0f) && (d1 >= 0.0f)) && (d3 <= 0.0f))
    {
        float v = d1 / (d1 - d3);
        *result = ::app::Uno::Float3__op_Addition_2(NULL, triangle.A, ::app::Uno::Float3__op_Multiply_1(NULL, ab, v));
        return;
    }

    ::app::Uno::Float3 cp = ::app::Uno::Float3__op_Subtraction_2(NULL, point, triangle.C);
    float d5 = ::app::Uno::Vector__Dot_1(NULL, ab, cp);
    float d6 = ::app::Uno::Vector__Dot_1(NULL, ac, cp);

    if ((d6 >= 0.0f) && (d5 <= d6))
    {
        *result = triangle.C;
        return;
    }

    float vb = (d5 * d2) - (d1 * d6);

    if (((vb <= 0.0f) && (d2 >= 0.0f)) && (d6 <= 0.0f))
    {
        float w = d2 / (d2 - d6);
        *result = ::app::Uno::Float3__op_Addition_2(NULL, triangle.A, ::app::Uno::Float3__op_Multiply_1(NULL, ac, w));
        return;
    }

    float va = (d3 * d6) - (d5 * d4);

    if (((va <= 0.0f) && ((d4 - d3) >= 0.0f)) && ((d5 - d6) >= 0.0f))
    {
        float w = (d4 - d3) / ((d4 - d3) + (d5 - d6));
        *result = ::app::Uno::Float3__op_Addition_2(NULL, triangle.B, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, triangle.C, triangle.B), w));
        return;
    }

    float denom = 1.0f / ((va + vb) + vc);
    float v2 = vb * denom;
    float w2 = vc * denom;
    *result = ::app::Uno::Float3__op_Addition_2(NULL, ::app::Uno::Float3__op_Addition_2(NULL, triangle.A, ::app::Uno::Float3__op_Multiply_1(NULL, ab, v2)), ::app::Uno::Float3__op_Multiply_1(NULL, ac, w2));
}

int Collision__FrustumContainsBox(::uStatic* __this, ::app::Uno::Geometry::Frustum frustum, ::app::Uno::Geometry::Box box)
{
    int rn = Collision__PlaneIntersectsBox(NULL, frustum.Near, box);

    if (rn == 1)
    {
        return 0;
    }

    int rf = Collision__PlaneIntersectsBox(NULL, frustum.Far, box);

    if (rf == 1)
    {
        return 0;
    }

    int rt = Collision__PlaneIntersectsBox(NULL, frustum.Top, box);

    if (rt == 1)
    {
        return 0;
    }

    int rb = Collision__PlaneIntersectsBox(NULL, frustum.Bottom, box);

    if (rb == 1)
    {
        return 0;
    }

    int rl = Collision__PlaneIntersectsBox(NULL, frustum.Left, box);

    if (rl == 1)
    {
        return 0;
    }

    int rr = Collision__PlaneIntersectsBox(NULL, frustum.Right, box);

    if (rr == 1)
    {
        return 0;
    }

    if (rn == 2)
    {
        return 2;
    }

    if (rf == 2)
    {
        return 2;
    }

    if (rt == 2)
    {
        return 2;
    }

    if (rb == 2)
    {
        return 2;
    }

    if (rl == 2)
    {
        return 2;
    }

    if (rr == 2)
    {
        return 2;
    }

    return 1;
}

int Collision__FrustumContainsPoint(::uStatic* __this, ::app::Uno::Geometry::Frustum frustum, ::app::Uno::Float3 point)
{
    int rn = Collision__PlaneIntersectsPoint(NULL, frustum.Near, point);

    if (rn == 1)
    {
        return 0;
    }
    else if (rn == 2)
    {
        return 2;
    }

    int rf = Collision__PlaneIntersectsPoint(NULL, frustum.Far, point);

    if (rf == 1)
    {
        return 0;
    }
    else if (rf == 2)
    {
        return 2;
    }

    int rt = Collision__PlaneIntersectsPoint(NULL, frustum.Top, point);

    if (rt == 1)
    {
        return 0;
    }
    else if (rt == 2)
    {
        return 2;
    }

    int rb = Collision__PlaneIntersectsPoint(NULL, frustum.Bottom, point);

    if (rb == 1)
    {
        return 0;
    }
    else if (rb == 2)
    {
        return 2;
    }

    int rl = Collision__PlaneIntersectsPoint(NULL, frustum.Left, point);

    if (rl == 1)
    {
        return 0;
    }
    else if (rl == 2)
    {
        return 2;
    }

    int rr = Collision__PlaneIntersectsPoint(NULL, frustum.Right, point);

    if (rr == 1)
    {
        return 0;
    }
    else if (rr == 2)
    {
        return 2;
    }

    return 1;
}

int Collision__FrustumContainsSphere(::uStatic* __this, ::app::Uno::Geometry::Frustum frustum, ::app::Uno::Geometry::Sphere sphere)
{
    int rn = Collision__PlaneIntersectsSphere(NULL, frustum.Near, sphere);

    if (rn == 1)
    {
        return 0;
    }
    else if (rn == 2)
    {
        return 2;
    }

    int rf = Collision__PlaneIntersectsSphere(NULL, frustum.Far, sphere);

    if (rf == 1)
    {
        return 0;
    }
    else if (rf == 2)
    {
        return 2;
    }

    int rt = Collision__PlaneIntersectsSphere(NULL, frustum.Top, sphere);

    if (rt == 1)
    {
        return 0;
    }
    else if (rt == 2)
    {
        return 2;
    }

    int rb = Collision__PlaneIntersectsSphere(NULL, frustum.Bottom, sphere);

    if (rb == 1)
    {
        return 0;
    }
    else if (rb == 2)
    {
        return 2;
    }

    int rl = Collision__PlaneIntersectsSphere(NULL, frustum.Left, sphere);

    if (rl == 1)
    {
        return 0;
    }
    else if (rl == 2)
    {
        return 2;
    }

    int rr = Collision__PlaneIntersectsSphere(NULL, frustum.Right, sphere);

    if (rr == 1)
    {
        return 0;
    }
    else if (rr == 2)
    {
        return 2;
    }

    return 1;
}

int Collision__FrustumContainsTriangle(::uStatic* __this, ::app::Uno::Geometry::Frustum frustum, ::app::Uno::Geometry::Triangle triangle)
{
    int rn = Collision__PlaneIntersectsTriangle(NULL, frustum.Near, triangle);

    if (rn == 1)
    {
        return 0;
    }
    else if (rn == 2)
    {
        return 2;
    }

    int rf = Collision__PlaneIntersectsTriangle(NULL, frustum.Far, triangle);

    if (rf == 1)
    {
        return 0;
    }
    else if (rf == 2)
    {
        return 2;
    }

    int rt = Collision__PlaneIntersectsTriangle(NULL, frustum.Top, triangle);

    if (rt == 1)
    {
        return 0;
    }
    else if (rt == 2)
    {
        return 2;
    }

    int rb = Collision__PlaneIntersectsTriangle(NULL, frustum.Bottom, triangle);

    if (rb == 1)
    {
        return 0;
    }
    else if (rb == 2)
    {
        return 2;
    }

    int rl = Collision__PlaneIntersectsTriangle(NULL, frustum.Left, triangle);

    if (rl == 1)
    {
        return 0;
    }
    else if (rl == 2)
    {
        return 2;
    }

    int rr = Collision__PlaneIntersectsTriangle(NULL, frustum.Right, triangle);

    if (rr == 1)
    {
        return 0;
    }
    else if (rr == 2)
    {
        return 2;
    }

    return 1;
}

int Collision__PlaneIntersectsBox(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Geometry::Box box)
{
    ::app::Uno::Float3 min = ::app::Uno::Float3();
    ::app::Uno::Float3 max = ::app::Uno::Float3();
    max.X = (plane.Normal.X >= 0.0f) ? box.Minimum.X : box.Maximum.X;
    max.Y = (plane.Normal.Y >= 0.0f) ? box.Minimum.Y : box.Maximum.Y;
    max.Z = (plane.Normal.Z >= 0.0f) ? box.Minimum.Z : box.Maximum.Z;
    min.X = (plane.Normal.X >= 0.0f) ? box.Maximum.X : box.Minimum.X;
    min.Y = (plane.Normal.Y >= 0.0f) ? box.Maximum.Y : box.Minimum.Y;
    min.Z = (plane.Normal.Z >= 0.0f) ? box.Maximum.Z : box.Minimum.Z;
    float distance = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, max);

    if ((distance + plane.D) > 0.0f)
    {
        return 1;
    }

    distance = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, min);

    if ((distance + plane.D) < 0.0f)
    {
        return 0;
    }

    return 2;
}

bool Collision__PlaneIntersectsPlane(::uStatic* __this, ::app::Uno::Geometry::Plane plane1, ::app::Uno::Geometry::Plane plane2)
{
    ::app::Uno::Float3 direction = ::app::Uno::Vector__Cross(NULL, plane1.Normal, plane2.Normal);
    float denominator = ::app::Uno::Vector__Dot_1(NULL, direction, direction);

    if (::app::Uno::Math__Abs_1(NULL, denominator) < 1e-05f)
    {
        return false;
    }

    return true;
}

bool Collision__PlaneIntersectsPlane_1(::uStatic* __this, ::app::Uno::Geometry::Plane plane1, ::app::Uno::Geometry::Plane plane2, ::app::Uno::Geometry::Ray* line)
{
    ::app::Uno::Float3 direction = ::app::Uno::Vector__Cross(NULL, plane1.Normal, plane2.Normal);
    float denominator = ::app::Uno::Vector__Dot_1(NULL, direction, direction);

    if (::app::Uno::Math__Abs_1(NULL, denominator) < 1e-05f)
    {
        *line = ::uDefault< ::app::Uno::Geometry::Ray>();
        return false;
    }

    ::app::Uno::Float3 temp = ::app::Uno::Float3__op_Subtraction_2(NULL, ::app::Uno::Float3__op_Multiply_1(NULL, plane2.Normal, plane1.D), ::app::Uno::Float3__op_Multiply_1(NULL, plane1.Normal, plane2.D));
    ::app::Uno::Float3 point = ::app::Uno::Vector__Cross(NULL, temp, direction);
    (*line).Position = point;
    (*line).Direction = ::app::Uno::Vector__Normalize_1(NULL, direction);
    return true;
}

int Collision__PlaneIntersectsPoint(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Float3 point)
{
    float distance = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, point) + plane.D;

    if (distance > 0.0f)
    {
        return 1;
    }

    if (distance < 0.0f)
    {
        return 0;
    }

    return 2;
}

int Collision__PlaneIntersectsSphere(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Geometry::Sphere sphere)
{
    float distance = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, sphere.Center);
    distance = distance + plane.D;

    if (distance > sphere.Radius)
    {
        return 1;
    }

    if (distance < -sphere.Radius)
    {
        return 0;
    }

    return 2;
}

int Collision__PlaneIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Geometry::Triangle triangle)
{
    int test1 = Collision__PlaneIntersectsPoint(NULL, plane, triangle.A);
    int test2 = Collision__PlaneIntersectsPoint(NULL, plane, triangle.B);
    int test3 = Collision__PlaneIntersectsPoint(NULL, plane, triangle.C);

    if (((test1 == 1) && (test2 == 1)) && (test3 == 1))
    {
        return 1;
    }

    if (((test1 == 0) && (test2 == 0)) && (test3 == 0))
    {
        return 0;
    }

    return 2;
}

bool Collision__RayIntersectsBox(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Box box, float* distance)
{
    *distance = 0.0f;
    float tmax = 3.402823e+38f;

    if (::app::Uno::Math__Abs_1(NULL, ray.Direction.X) < 1e-05f)
    {
        if ((ray.Position.X < box.Minimum.X) || (ray.Position.X > box.Maximum.X))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.X;
        float t1 = (box.Minimum.X - ray.Position.X) * inverse;
        float t2 = (box.Maximum.X - ray.Position.X) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_1(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_1(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::app::Uno::Math__Abs_1(NULL, ray.Direction.Y) < 1e-05f)
    {
        if ((ray.Position.Y < box.Minimum.Y) || (ray.Position.Y > box.Maximum.Y))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.Y;
        float t1 = (box.Minimum.Y - ray.Position.Y) * inverse;
        float t2 = (box.Maximum.Y - ray.Position.Y) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_1(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_1(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::app::Uno::Math__Abs_1(NULL, ray.Direction.Z) < 1e-05f)
    {
        if ((ray.Position.Z < box.Minimum.Z) || (ray.Position.Z > box.Maximum.Z))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.Z;
        float t1 = (box.Minimum.Z - ray.Position.Z) * inverse;
        float t2 = (box.Maximum.Z - ray.Position.Z) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_1(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_1(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    return true;
}

bool Collision__RayIntersectsBox_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Box box, ::app::Uno::Float3* point)
{
    float distance = float();

    if (!Collision__RayIntersectsBox(NULL, ray, box, &distance))
    {
        *point = ::app::Uno::Float3__New_1(NULL, 0.0f);
        return false;
    }

    *point = ::app::Uno::Float3__op_Addition_2(NULL, ray.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray.Direction, distance));
    return true;
}

bool Collision__RayIntersectsPlane(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Plane plane, float* distance)
{
    float direction = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, ray.Direction);

    if (::app::Uno::Math__Abs_1(NULL, direction) < 1e-05f)
    {
        *distance = 0.0f;
        return false;
    }

    float position = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, ray.Position);
    *distance = (-plane.D - position) / direction;

    if (*distance < 0.0f)
    {
        if (*distance < -1e-05f)
        {
            *distance = 0.0f;
            return false;
        }

        *distance = 0.0f;
    }

    return true;
}

bool Collision__RayIntersectsPlane_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Plane plane, ::app::Uno::Float3* point)
{
    float distance = float();

    if (!Collision__RayIntersectsPlane(NULL, ray, plane, &distance))
    {
        *point = ::app::Uno::Float3__New_1(NULL, 0.0f);
        return false;
    }

    *point = ::app::Uno::Float3__op_Addition_2(NULL, ray.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray.Direction, distance));
    return true;
}

bool Collision__RayIntersectsPoint(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Float3 point)
{
    ::app::Uno::Float3 m = ::app::Uno::Float3__op_Subtraction_2(NULL, ray.Position, point);
    float b = ::app::Uno::Vector__Dot_1(NULL, m, ray.Direction);
    float c = ::app::Uno::Vector__Dot_1(NULL, m, m) - 1e-05f;

    if ((c > 0.0f) && (b > 0.0f))
    {
        return false;
    }

    float discriminant = (b * b) - c;

    if (discriminant < 0.0f)
    {
        return false;
    }

    return true;
}

bool Collision__RayIntersectsRay(::uStatic* __this, ::app::Uno::Geometry::Ray ray1, ::app::Uno::Geometry::Ray ray2, ::app::Uno::Float3* point)
{
    ::app::Uno::Float3 cross = ::app::Uno::Vector__Cross(NULL, ray1.Direction, ray2.Direction);
    float denominator = ::app::Uno::Vector__Length_1(NULL, cross);

    if (::app::Uno::Math__Abs_1(NULL, denominator) < 1e-05f)
    {
        if (((::app::Uno::Math__Abs_1(NULL, ray2.Position.X - ray1.Position.X) < 1e-05f) && (::app::Uno::Math__Abs_1(NULL, ray2.Position.Y - ray1.Position.Y) < 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, ray2.Position.Z - ray1.Position.Z) < 1e-05f))
        {
            *point = ::app::Uno::Float3__New_1(NULL, 0.0f);
            return true;
        }
    }

    denominator = denominator * denominator;
    float m11 = ray2.Position.X - ray1.Position.X;
    float m12 = ray2.Position.Y - ray1.Position.Y;
    float m13 = ray2.Position.Z - ray1.Position.Z;
    float m21 = ray2.Direction.X;
    float m22 = ray2.Direction.Y;
    float m23 = ray2.Direction.Z;
    float m31 = cross.X;
    float m32 = cross.Y;
    float m33 = cross.Z;
    float dets = ((((((m11 * m22) * m33) + ((m12 * m23) * m31)) + ((m13 * m21) * m32)) - ((m11 * m23) * m32)) - ((m12 * m21) * m33)) - ((m13 * m22) * m31);
    m21 = ray1.Direction.X;
    m22 = ray1.Direction.Y;
    m23 = ray1.Direction.Z;
    float dett = ((((((m11 * m22) * m33) + ((m12 * m23) * m31)) + ((m13 * m21) * m32)) - ((m11 * m23) * m32)) - ((m12 * m21) * m33)) - ((m13 * m22) * m31);
    float s = dets / denominator;
    float t = dett / denominator;
    ::app::Uno::Float3 point1 = ::app::Uno::Float3__op_Addition_2(NULL, ray1.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray1.Direction, s));
    ::app::Uno::Float3 point2 = ::app::Uno::Float3__op_Addition_2(NULL, ray2.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray2.Direction, t));

    if (((::app::Uno::Math__Abs_1(NULL, point2.X - point1.X) > 1e-05f) || (::app::Uno::Math__Abs_1(NULL, point2.Y - point1.Y) > 1e-05f)) || (::app::Uno::Math__Abs_1(NULL, point2.Z - point1.Z) > 1e-05f))
    {
        *point = ::app::Uno::Float3__New_1(NULL, 0.0f);
        return false;
    }

    *point = point1;
    return true;
}

bool Collision__RayIntersectsSphere(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Sphere sphere, float* distance)
{
    ::app::Uno::Float3 v = ::app::Uno::Float3__op_Subtraction_2(NULL, ray.Position, sphere.Center);
    float b = ::app::Uno::Vector__Dot_1(NULL, v, ray.Direction);
    float c = ::app::Uno::Vector__Dot_1(NULL, v, v) - (sphere.Radius * sphere.Radius);

    if ((c > 0.0f) && (b > 0.0f))
    {
        *distance = 0.0f;
        return false;
    }

    float discriminant = (b * b) - c;

    if (discriminant < 0.0f)
    {
        *distance = 0.0f;
        return false;
    }

    *distance = -b - ::app::Uno::Math__Sqrt_1(NULL, discriminant);

    if (*distance < 0.0f)
    {
        *distance = 0.0f;
    }

    return true;
}

bool Collision__RayIntersectsSphere_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3* point)
{
    float distance = float();

    if (!Collision__RayIntersectsSphere(NULL, ray, sphere, &distance))
    {
        *point = ::app::Uno::Float3__New_1(NULL, 0.0f);
        return false;
    }

    *point = ::app::Uno::Float3__op_Addition_2(NULL, ray.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray.Direction, distance));
    return true;
}

bool Collision__RayIntersectsSphere_2(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3* point, ::app::Uno::Float3* normal)
{
    float distance = float();

    if (!Collision__RayIntersectsSphere(NULL, ray, sphere, &distance))
    {
        *point = ::app::Uno::Float3__New_1(NULL, 0.0f);
        *normal = ::app::Uno::Float3__New_1(NULL, 0.0f);
        return false;
    }

    *point = ::app::Uno::Float3__op_Addition_2(NULL, ray.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray.Direction, distance));
    *normal = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, *point, sphere.Center));
    return true;
}

bool Collision__RayIntersectsSphere_3(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3* entrancePoint, ::app::Uno::Float3* entranceNormal, ::app::Uno::Float3* exitPoint, ::app::Uno::Float3* exitNormal)
{
    ::app::Uno::Float3 v = ::app::Uno::Float3__op_Subtraction_2(NULL, ray.Position, sphere.Center);
    float b = ::app::Uno::Vector__Dot_1(NULL, v, ray.Direction);
    float c = ::app::Uno::Vector__Dot_1(NULL, v, v) - (sphere.Radius * sphere.Radius);

    if ((c > 0.0f) && (b > 0.0f))
    {
        *entrancePoint = ::app::Uno::Float3__New_1(NULL, 0.0f);
        *entranceNormal = ::app::Uno::Float3__New_1(NULL, 0.0f);
        *exitPoint = ::app::Uno::Float3__New_1(NULL, 0.0f);
        *exitNormal = ::app::Uno::Float3__New_1(NULL, 0.0f);
        return false;
    }

    float discriminant = (b * b) - c;

    if (discriminant < 0.0f)
    {
        *entrancePoint = ::app::Uno::Float3__New_1(NULL, 0.0f);
        *entranceNormal = ::app::Uno::Float3__New_1(NULL, 0.0f);
        *exitPoint = ::app::Uno::Float3__New_1(NULL, 0.0f);
        *exitNormal = ::app::Uno::Float3__New_1(NULL, 0.0f);
        return false;
    }

    float discriminantSquared = ::app::Uno::Math__Sqrt_1(NULL, discriminant);
    float distance1 = -b - discriminantSquared;
    float distance2 = -b + discriminantSquared;

    if (distance1 < 0.0f)
    {
        distance1 = 0.0f;
        *entrancePoint = ::app::Uno::Float3__New_1(NULL, 0.0f);
        *entranceNormal = ::app::Uno::Float3__New_1(NULL, 0.0f);
    }
    else
    {
        *entrancePoint = ::app::Uno::Float3__op_Addition_2(NULL, ray.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray.Direction, distance1));
        *entranceNormal = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, *entrancePoint, sphere.Center));
    }

    *exitPoint = ::app::Uno::Float3__op_Addition_2(NULL, ray.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray.Direction, distance2));
    *exitNormal = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, *exitPoint, sphere.Center));
    return true;
}

bool Collision__RayIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Triangle triangle, float* distance)
{
    ::app::Uno::Float3 edge1 = ::app::Uno::Float3__op_Subtraction_2(NULL, triangle.B, triangle.A);
    ::app::Uno::Float3 edge2 = ::app::Uno::Float3__op_Subtraction_2(NULL, triangle.C, triangle.A);
    ::app::Uno::Float3 directioncrossedge2 = ::app::Uno::Vector__Cross(NULL, ray.Direction, edge2);
    float determinant = float();
    determinant = ::app::Uno::Vector__Dot_1(NULL, edge1, directioncrossedge2);

    if ((determinant > -1e-05f) && (determinant < 1e-05f))
    {
        *distance = 0.0f;
        return false;
    }

    float inversedeterminant = 1.0f / determinant;
    ::app::Uno::Float3 distanceVector = ::app::Uno::Float3__op_Subtraction_2(NULL, ray.Position, triangle.A);
    float triangleU = float();
    triangleU = ::app::Uno::Vector__Dot_1(NULL, distanceVector, directioncrossedge2);
    triangleU = triangleU * inversedeterminant;

    if ((triangleU < 0.0f) || (triangleU > 1.0f))
    {
        *distance = 0.0f;
        return false;
    }

    ::app::Uno::Float3 distancecrossedge1 = ::app::Uno::Vector__Cross(NULL, distanceVector, edge1);
    float triangleV = float();
    triangleV = ::app::Uno::Vector__Dot_1(NULL, ray.Direction, distancecrossedge1);
    triangleV = triangleV * inversedeterminant;

    if ((triangleV < 0.0f) || ((triangleU + triangleV) > 1.0f))
    {
        *distance = 0.0f;
        return false;
    }

    float raydistance = float();
    raydistance = ::app::Uno::Vector__Dot_1(NULL, edge2, distancecrossedge1);
    raydistance = raydistance * inversedeterminant;

    if (raydistance < 0.0f)
    {
        *distance = 0.0f;
        return false;
    }

    *distance = raydistance;
    return true;
}

bool Collision__RayIntersectsTriangle_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Triangle triangle, ::app::Uno::Float3* point)
{
    float distance = float();

    if (!Collision__RayIntersectsTriangle(NULL, ray, triangle, &distance))
    {
        *point = ::app::Uno::Float3__New_1(NULL, 0.0f);
        return false;
    }

    *point = ::app::Uno::Float3__op_Addition_2(NULL, ray.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray.Direction, distance));
    return true;
}

int Collision__SphereContainsBox(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Geometry::Box box)
{
    ::app::Uno::Float3 vector = ::app::Uno::Float3();

    if (!Collision__BoxIntersectsSphere(NULL, box, sphere))
    {
        return 0;
    }

    float radiussquared = sphere.Radius * sphere.Radius;
    vector.X = sphere.Center.X - box.Minimum.X;
    vector.Y = sphere.Center.Y - box.Maximum.Y;
    vector.Z = sphere.Center.Z - box.Maximum.Z;

    if (::app::Uno::Vector__LengthSquared_1(NULL, vector) > radiussquared)
    {
        return 2;
    }

    vector.X = sphere.Center.X - box.Maximum.X;
    vector.Y = sphere.Center.Y - box.Maximum.Y;
    vector.Z = sphere.Center.Z - box.Maximum.Z;

    if (::app::Uno::Vector__LengthSquared_1(NULL, vector) > radiussquared)
    {
        return 2;
    }

    vector.X = sphere.Center.X - box.Maximum.X;
    vector.Y = sphere.Center.Y - box.Minimum.Y;
    vector.Z = sphere.Center.Z - box.Maximum.Z;

    if (::app::Uno::Vector__LengthSquared_1(NULL, vector) > radiussquared)
    {
        return 2;
    }

    vector.X = sphere.Center.X - box.Minimum.X;
    vector.Y = sphere.Center.Y - box.Minimum.Y;
    vector.Z = sphere.Center.Z - box.Maximum.Z;

    if (::app::Uno::Vector__LengthSquared_1(NULL, vector) > radiussquared)
    {
        return 2;
    }

    vector.X = sphere.Center.X - box.Minimum.X;
    vector.Y = sphere.Center.Y - box.Maximum.Y;
    vector.Z = sphere.Center.Z - box.Minimum.Z;

    if (::app::Uno::Vector__LengthSquared_1(NULL, vector) > radiussquared)
    {
        return 2;
    }

    vector.X = sphere.Center.X - box.Maximum.X;
    vector.Y = sphere.Center.Y - box.Maximum.Y;
    vector.Z = sphere.Center.Z - box.Minimum.Z;

    if (::app::Uno::Vector__LengthSquared_1(NULL, vector) > radiussquared)
    {
        return 2;
    }

    vector.X = sphere.Center.X - box.Maximum.X;
    vector.Y = sphere.Center.Y - box.Minimum.Y;
    vector.Z = sphere.Center.Z - box.Minimum.Z;

    if (::app::Uno::Vector__LengthSquared_1(NULL, vector) > radiussquared)
    {
        return 2;
    }

    vector.X = sphere.Center.X - box.Minimum.X;
    vector.Y = sphere.Center.Y - box.Minimum.Y;
    vector.Z = sphere.Center.Z - box.Minimum.Z;

    if (::app::Uno::Vector__LengthSquared_1(NULL, vector) > radiussquared)
    {
        return 2;
    }

    return 1;
}

int Collision__SphereContainsPoint(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3 point)
{
    if (::app::Uno::Geometry::Distance__PointPointSquared(NULL, point, sphere.Center) <= (sphere.Radius * sphere.Radius))
    {
        return 1;
    }

    return 0;
}

int Collision__SphereContainsSphere(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere1, ::app::Uno::Geometry::Sphere sphere2)
{
    float distance = ::app::Uno::Geometry::Distance__PointPoint(NULL, sphere1.Center, sphere2.Center);

    if ((sphere1.Radius + sphere2.Radius) < distance)
    {
        return 0;
    }

    if ((sphere1.Radius - sphere2.Radius) < distance)
    {
        return 2;
    }

    return 1;
}

int Collision__SphereContainsTriangle(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Geometry::Triangle triangle)
{
    int test1 = Collision__SphereContainsPoint(NULL, sphere, triangle.A);
    int test2 = Collision__SphereContainsPoint(NULL, sphere, triangle.B);
    int test3 = Collision__SphereContainsPoint(NULL, sphere, triangle.C);

    if (((test1 == 1) && (test2 == 1)) && (test3 == 1))
    {
        return 1;
    }

    ::app::Uno::Float3 point = ::app::Uno::Float3();

    if (Collision__SphereIntersectsTriangle(NULL, sphere, triangle, &point))
    {
        return 2;
    }

    return 0;
}

bool Collision__SphereIntersectsSphere(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere1, ::app::Uno::Geometry::Sphere sphere2)
{
    float radiisum = sphere1.Radius + sphere2.Radius;
    return ::app::Uno::Geometry::Distance__PointPointSquared(NULL, sphere1.Center, sphere2.Center) <= (radiisum * radiisum);
}

bool Collision__SphereIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Geometry::Triangle triangle, ::app::Uno::Float3* point)
{
    Collision__ClosestPointOnTriangleToPoint(NULL, triangle, sphere.Center, point);
    ::app::Uno::Float3 v = ::app::Uno::Float3__op_Subtraction_2(NULL, *point, sphere.Center);
    return ::app::Uno::Vector__Dot_1(NULL, v, v) <= (sphere.Radius * sphere.Radius);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Collision_ContainmentType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Geometry.Collision.ContainmentType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Disjoint", 0LL,
        "Contains", 1LL,
        "Intersects", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Collision_PlaneIntersectionType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Geometry.Collision.PlaneIntersectionType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Back", 0LL,
        "Front", 1LL,
        "Intersecting", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Collision2D__uType* Collision2D__typeof()
{
    static ::uStaticStrong<Collision2D__uType*> type;
    if (type != NULL) return type;

    type = (Collision2D__uType*)::uAllocClassType(sizeof(Collision2D__uType), "Uno.Geometry.Collision2D");

    type->SetFunctions(5,
        ::uNewFunction("AngleBetween", Collision2D__AngleBetween, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("AreParallel", Collision2D__AreParallel, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("LineIntersectionPoint", Collision2D__LineIntersectionPoint, 0, true, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("LineIntersectionPointVector", Collision2D__LineIntersectionPointVector, 0, true, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("TriangleContainsPoint", Collision2D__TriangleContainsPoint, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

float Collision2D__AngleBetween(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    float d = ::app::Uno::Vector__Dot(NULL, a, b);
    float l = ::app::Uno::Vector__Length(NULL, a) * ::app::Uno::Vector__Length(NULL, b);

    if (l < 1e-05f)
    {
        return 0.0f;
    }

    return ::app::Uno::Math__Acos_1(NULL, d / l);
}

bool Collision2D__AreParallel(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, float tolerance)
{
    float l = (a.X * b.Y) - (a.Y * b.X);
    return ::app::Uno::Math__Abs_1(NULL, l) < tolerance;
}

::app::Uno::Float2 Collision2D__LineIntersectionPoint(::uStatic* __this, ::app::Uno::Float2 ps1, ::app::Uno::Float2 pe1, ::app::Uno::Float2 ps2, ::app::Uno::Float2 pe2)
{
    return Collision2D__LineIntersectionPointVector(NULL, ps1, ::app::Uno::Float2__op_Subtraction_2(NULL, pe1, ps1), ps2, ::app::Uno::Float2__op_Subtraction_2(NULL, pe2, ps2));
}

::app::Uno::Float2 Collision2D__LineIntersectionPointVector(::uStatic* __this, ::app::Uno::Float2 ps1, ::app::Uno::Float2 v1, ::app::Uno::Float2 ps2, ::app::Uno::Float2 v2)
{
    float A1 = v1.Y;
    float B1 = -v1.X;
    float C1 = (A1 * ps1.X) + (B1 * ps1.Y);
    float A2 = v2.Y;
    float B2 = -v2.X;
    float C2 = (A2 * ps2.X) + (B2 * ps2.Y);
    float delta = (A1 * B2) - (A2 * B1);

    if (::app::Uno::Math__Abs_1(NULL, delta) < 1e-05f)
    {
        return ps1;
    }

    return ::app::Uno::Float2__New_2(NULL, ((B2 * C1) - (B1 * C2)) / delta, ((A1 * C2) - (A2 * C1)) / delta);
}

bool Collision2D__TriangleContainsPoint(::uStatic* __this, ::app::Uno::Float2 A, ::app::Uno::Float2 B, ::app::Uno::Float2 C, ::app::Uno::Float2 P)
{
    ::app::Uno::Float2 v0 = ::app::Uno::Float2__op_Subtraction_2(NULL, C, A);
    ::app::Uno::Float2 v1 = ::app::Uno::Float2__op_Subtraction_2(NULL, B, A);
    ::app::Uno::Float2 v2 = ::app::Uno::Float2__op_Subtraction_2(NULL, P, A);
    float dot00 = ::app::Uno::Vector__Dot(NULL, v0, v0);
    float dot01 = ::app::Uno::Vector__Dot(NULL, v0, v1);
    float dot02 = ::app::Uno::Vector__Dot(NULL, v0, v2);
    float dot11 = ::app::Uno::Vector__Dot(NULL, v1, v1);
    float dot12 = ::app::Uno::Vector__Dot(NULL, v1, v2);
    float denom = (dot00 * dot11) - (dot01 * dot01);

    if (denom < 1e-05f)
    {
        return false;
    }

    float invDenom = 1.0f / denom;
    float u = ((dot11 * dot02) - (dot01 * dot12)) * invDenom;
    float v = ((dot00 * dot12) - (dot01 * dot02)) * invDenom;
    bool r = ((u >= 0.0f) && (v >= 0.0f)) && ((u + v) < 1.0f);
    return r;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CubicBezier__uType* CubicBezier__typeof()
{
    static ::uStaticStrong<CubicBezier__uType*> type;
    if (type != NULL) return type;

    type = (CubicBezier__uType*)::uAllocClassType(sizeof(CubicBezier__uType), "Uno.Geometry.CubicBezier", false, 0, 2, 0);

    type->SetStrongRefs(
        "_head", offsetof(CubicBezier, _head),
        "_last", offsetof(CubicBezier, _last));

    type->SetFields(3,
        ::uNewField("_head", NULL, offsetof(CubicBezier, _head), ::app::Uno::Geometry::Vertex__typeof()),
        ::uNewField("_last", NULL, offsetof(CubicBezier, _last), ::app::Uno::Geometry::Vertex__typeof()),
        ::uNewField("_maxErrorSquared", NULL, offsetof(CubicBezier, _maxErrorSquared), ::app::Uno::Float__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("AddPoint", CubicBezier__AddPoint, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_HasLength", CubicBezier__get_HasLength, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("Subdivide", CubicBezier__Subdivide, 0, true, ::app::Uno::Collections::IEnumerable__float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SubdivideRecursive", CubicBezier__SubdivideRecursive, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void CubicBezier___ObjInit(CubicBezier* __this, float maxError)
{
    __this->_head = __this->_last = ::app::Uno::Geometry::Vertex__New_1(NULL);
    __this->_maxErrorSquared = maxError * maxError;
}

void CubicBezier__AddPoint(CubicBezier* __this, float x, float y)
{
    ::app::Uno::Geometry::Vertex* collection_123;
    __this->_last = ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_last)->Next = (collection_123 = ::app::Uno::Geometry::Vertex__New_1(NULL), ::uPtr< ::app::Uno::Geometry::Vertex*>(collection_123)->X = x, ::uPtr< ::app::Uno::Geometry::Vertex*>(collection_123)->Y = y, collection_123);
}

bool CubicBezier__get_HasLength(CubicBezier* __this)
{
    return (__this->_head != __this->_last) && (::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_head)->Next != __this->_last);
}

CubicBezier* CubicBezier__New_1(::uStatic* __this, float maxError)
{
    CubicBezier* inst = (CubicBezier*)::uAllocObject(sizeof(CubicBezier), CubicBezier__typeof());
    inst->_ObjInit(maxError);
    return inst;
}

::uObject* CubicBezier__Subdivide(::uStatic* __this, ::app::Uno::Float2 p1, ::app::Uno::Float2 p2, ::app::Uno::Float2 p3, ::app::Uno::Float2 p4, float maxError)
{
    CubicBezier* s = CubicBezier__New_1(NULL, maxError);
    ::uPtr< CubicBezier*>(s)->AddPoint(p1.X, p1.Y);
    s->SubdivideRecursive(p1.X, p1.Y, p2.X, p2.Y, p3.X, p3.Y, p4.X, p4.Y, 0);
    s->AddPoint(p4.X, p4.Y);
    return (::uObject*)::app::Uno::Geometry::VertexEnumerable__New_1(NULL, s->_head);
}

void CubicBezier__SubdivideRecursive(CubicBezier* __this, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int level)
{
    if ((((((::app::Uno::Math__Abs_1(NULL, x1 - x2) <= 1e-05f) && (::app::Uno::Math__Abs_1(NULL, x2 - x3) <= 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, x3 - x4) <= 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, y1 - y2) <= 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, y2 - y3) <= 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, y3 - y4) <= 1e-05f))
    {
        return;
    }

    float x12 = (x1 + x2) / 2.0f;
    float y12 = (y1 + y2) / 2.0f;
    float x23 = (x2 + x3) / 2.0f;
    float y23 = (y2 + y3) / 2.0f;
    float x34 = (x3 + x4) / 2.0f;
    float y34 = (y3 + y4) / 2.0f;
    float x123 = (x12 + x23) / 2.0f;
    float y123 = (y12 + y23) / 2.0f;
    float x234 = (x23 + x34) / 2.0f;
    float y234 = (y23 + y34) / 2.0f;
    float x1234 = (x123 + x234) / 2.0f;
    float y1234 = (y123 + y234) / 2.0f;
    float dx = x4 - x1;
    float dy = y4 - y1;
    float d2 = ::app::Uno::Math__Abs_1(NULL, ((x2 - x4) * dy) - ((y2 - y4) * dx));
    float d3 = ::app::Uno::Math__Abs_1(NULL, ((x3 - x4) * dy) - ((y3 - y4) * dx));

    if (((d2 + d3) * (d2 + d3)) < (__this->_maxErrorSquared * ((dx * dx) + (dy * dy))))
    {
        __this->AddPoint(x1234, y1234);
        return;
    }

    __this->SubdivideRecursive(x1, y1, x12, y12, x123, y123, x1234, y1234, level + 1);
    __this->SubdivideRecursive(x1234, y1234, x234, y234, x34, y34, x4, y4, level + 1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Distance__uType* Distance__typeof()
{
    static ::uStaticStrong<Distance__uType*> type;
    if (type != NULL) return type;

    type = (Distance__uType*)::uAllocClassType(sizeof(Distance__uType), "Uno.Geometry.Distance");

    type->SetFunctions(10,
        ::uNewFunction("BoxBox", Distance__BoxBox, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("BoxPoint", Distance__BoxPoint, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("LineSegmentPoint", Distance__LineSegmentPoint, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("PlanePoint", Distance__PlanePoint, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Geometry::Plane__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("PointPoint", Distance__PointPoint, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("PointPointSquared", Distance__PointPointSquared, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("RayPoint", Distance__RayPoint, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("SpherePoint", Distance__SpherePoint, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("SpherePointSquared", Distance__SpherePointSquared, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("SphereSphere", Distance__SphereSphere, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Geometry::Sphere__typeof()));

    ::uRegisterType(type);
    return type;
}

float Distance__BoxBox(::uStatic* __this, ::app::Uno::Geometry::Box box1, ::app::Uno::Geometry::Box box2)
{
    float distance = 0.0f;

    if (box1.Minimum.X > box2.Maximum.X)
    {
        float delta = box2.Maximum.X - box1.Minimum.X;
        distance = distance + (delta * delta);
    }
    else if (box2.Minimum.X > box1.Maximum.X)
    {
        float delta = box1.Maximum.X - box2.Minimum.X;
        distance = distance + (delta * delta);
    }

    if (box1.Minimum.Y > box2.Maximum.Y)
    {
        float delta = box2.Maximum.Y - box1.Minimum.Y;
        distance = distance + (delta * delta);
    }
    else if (box2.Minimum.Y > box1.Maximum.Y)
    {
        float delta = box1.Maximum.Y - box2.Minimum.Y;
        distance = distance + (delta * delta);
    }

    if (box1.Minimum.Z > box2.Maximum.Z)
    {
        float delta = box2.Maximum.Z - box1.Minimum.Z;
        distance = distance + (delta * delta);
    }
    else if (box2.Minimum.Z > box1.Maximum.Z)
    {
        float delta = box1.Maximum.Z - box2.Minimum.Z;
        distance = distance + (delta * delta);
    }

    return ::app::Uno::Math__Sqrt_1(NULL, distance);
}

float Distance__BoxPoint(::uStatic* __this, ::app::Uno::Geometry::Box box, ::app::Uno::Float3 point)
{
    float distance = 0.0f;

    if (point.X < box.Minimum.X)
    {
        distance = distance + ((box.Minimum.X - point.X) * (box.Minimum.X - point.X));
    }

    if (point.X > box.Maximum.X)
    {
        distance = distance + ((point.X - box.Maximum.X) * (point.X - box.Maximum.X));
    }

    if (point.Y < box.Minimum.Y)
    {
        distance = distance + ((box.Minimum.Y - point.Y) * (box.Minimum.Y - point.Y));
    }

    if (point.Y > box.Maximum.Y)
    {
        distance = distance + ((point.Y - box.Maximum.Y) * (point.Y - box.Maximum.Y));
    }

    if (point.Z < box.Minimum.Z)
    {
        distance = distance + ((box.Minimum.Z - point.Z) * (box.Minimum.Z - point.Z));
    }

    if (point.Z > box.Maximum.Z)
    {
        distance = distance + ((point.Z - box.Maximum.Z) * (point.Z - box.Maximum.Z));
    }

    return ::app::Uno::Math__Sqrt_1(NULL, distance);
}

float Distance__LineSegmentPoint(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 p)
{
    float l2 = ::app::Uno::Vector__LengthSquared_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, a, b));

    if ((double)l2 == 0.0)
    {
        return ::app::Uno::Vector__Distance_1(NULL, p, a);
    }

    float t = ::app::Uno::Vector__Dot_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, p, a), ::app::Uno::Float3__op_Subtraction_2(NULL, b, a)) / l2;

    if ((double)t < 0.0)
    {
        return ::app::Uno::Vector__Distance_1(NULL, p, a);
    }
    else if ((double)t > 1.0)
    {
        return ::app::Uno::Vector__Distance_1(NULL, p, b);
    }

    ::app::Uno::Float3 projection = ::app::Uno::Float3__op_Addition_2(NULL, a, ::app::Uno::Float3__op_Multiply(NULL, t, ::app::Uno::Float3__op_Subtraction_2(NULL, b, a)));
    return ::app::Uno::Vector__Distance_1(NULL, p, projection);
}

float Distance__PlanePoint(::uStatic* __this, ::app::Uno::Geometry::Plane plane, ::app::Uno::Float3 point)
{
    float dot = ::app::Uno::Vector__Dot_1(NULL, plane.Normal, point);
    return dot + plane.D;
}

float Distance__PointPoint(::uStatic* __this, ::app::Uno::Float3 point1, ::app::Uno::Float3 point2)
{
    return ::app::Uno::Vector__Length_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, point2, point1));
}

float Distance__PointPointSquared(::uStatic* __this, ::app::Uno::Float3 point1, ::app::Uno::Float3 point2)
{
    return ::app::Uno::Vector__LengthSquared_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, point2, point1));
}

float Distance__RayPoint(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Float3 point)
{
    ::app::Uno::Float3 diff = ::app::Uno::Float3__op_Subtraction_2(NULL, point, ray.Position);
    float mul = ::app::Uno::Vector__Dot_1(NULL, ray.Direction, diff);
    ::app::Uno::Float3 cp = (mul > 0.0f) ? ::app::Uno::Float3__op_Addition_2(NULL, ray.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ray.Direction, mul)) : ray.Position;
    return ::app::Uno::Vector__Length_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, cp, point));
}

float Distance__SpherePoint(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3 point)
{
    return ::app::Uno::Math__Max_1(NULL, 0.0f, Distance__PointPoint(NULL, sphere.Center, point) - sphere.Radius);
}

float Distance__SpherePointSquared(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere, ::app::Uno::Float3 point)
{
    return ::app::Uno::Math__Max_1(NULL, 0.0f, Distance__PointPointSquared(NULL, sphere.Center, point) - (sphere.Radius * sphere.Radius));
}

float Distance__SphereSphere(::uStatic* __this, ::app::Uno::Geometry::Sphere sphere1, ::app::Uno::Geometry::Sphere sphere2)
{
    return ::app::Uno::Math__Max_1(NULL, 0.0f, Distance__PointPoint(NULL, sphere1.Center, sphere2.Center) - (sphere1.Radius + sphere2.Radius));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Frustum__uType* Frustum__typeof()
{
    static ::uStaticStrong<Frustum__uType*> type;
    if (type != NULL) return type;

    type = (Frustum__uType*)::uAllocStructType(sizeof(Frustum__uType), "Uno.Geometry.Frustum", sizeof(Frustum), 0, 0, 0);

    type->SetFields(6,
        ::uNewField("Bottom", NULL, offsetof(Frustum, Bottom), ::app::Uno::Geometry::Plane__typeof()),
        ::uNewField("Far", NULL, offsetof(Frustum, Far), ::app::Uno::Geometry::Plane__typeof()),
        ::uNewField("Left", NULL, offsetof(Frustum, Left), ::app::Uno::Geometry::Plane__typeof()),
        ::uNewField("Near", NULL, offsetof(Frustum, Near), ::app::Uno::Geometry::Plane__typeof()),
        ::uNewField("Right", NULL, offsetof(Frustum, Right), ::app::Uno::Geometry::Plane__typeof()),
        ::uNewField("Top", NULL, offsetof(Frustum, Top), ::app::Uno::Geometry::Plane__typeof()));

    type->SetFunctions(1,
        ::uNewFunctionVoid("Normalize", Frustum__Normalize, 0, false));

    ::uRegisterType(type);
    return type;
}

void Frustum__Normalize(Frustum* __this)
{
    __this->Near.Normalize();
    __this->Far.Normalize();
    __this->Top.Normalize();
    __this->Bottom.Normalize();
    __this->Left.Normalize();
    __this->Right.Normalize();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Plane__uType* Plane__typeof()
{
    static ::uStaticStrong<Plane__uType*> type;
    if (type != NULL) return type;

    type = (Plane__uType*)::uAllocStructType(sizeof(Plane__uType), "Uno.Geometry.Plane", sizeof(Plane), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("D", NULL, offsetof(Plane, D), ::app::Uno::Float__typeof()),
        ::uNewField("Normal", NULL, offsetof(Plane, Normal), ::app::Uno::Float3__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", Plane__New_3, 0, true, Plane__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("Normalize", Plane__Normalize, 0, false));

    ::uRegisterType(type);
    return type;
}

void Plane___ObjInit_2(Plane* __this, ::app::Uno::Float3 point, ::app::Uno::Float3 normal)
{
    __this->Normal = normal;
    __this->D = -::app::Uno::Vector__Dot_1(NULL, normal, point);
}

Plane Plane__New_3(::uStatic* __this, ::app::Uno::Float3 point, ::app::Uno::Float3 normal)
{
    Plane inst = ::uDefault< Plane>();
    inst._ObjInit_2(point, normal);
    return inst;
}

void Plane__Normalize(Plane* __this)
{
    float invMagnitude = 1.0f / ::app::Uno::Math__Sqrt_1(NULL, ((__this->Normal.X * __this->Normal.X) + (__this->Normal.Y * __this->Normal.Y)) + (__this->Normal.Z * __this->Normal.Z));
    __this->Normal.X = __this->Normal.X * invMagnitude;
    __this->Normal.Y = __this->Normal.Y * invMagnitude;
    __this->Normal.Z = __this->Normal.Z * invMagnitude;
    __this->D = __this->D * invMagnitude;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Ray__uType* Ray__typeof()
{
    static ::uStaticStrong<Ray__uType*> type;
    if (type != NULL) return type;

    type = (Ray__uType*)::uAllocStructType(sizeof(Ray__uType), "Uno.Geometry.Ray", sizeof(Ray), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Direction", NULL, offsetof(Ray, Direction), ::app::Uno::Float3__typeof()),
        ::uNewField("Position", NULL, offsetof(Ray, Position), ::app::Uno::Float3__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", Ray__New_1, 0, true, Ray__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("Transform", Ray__Transform, 0, true, Ray__typeof(), Ray__typeof(), ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Ray___ObjInit(Ray* __this, ::app::Uno::Float3 pos, ::app::Uno::Float3 dir)
{
    __this->Position = pos;
    __this->Direction = dir;
}

Ray Ray__New_1(::uStatic* __this, ::app::Uno::Float3 pos, ::app::Uno::Float3 dir)
{
    Ray inst = ::uDefault< Ray>();
    inst._ObjInit(pos, dir);
    return inst;
}

Ray Ray__Transform(::uStatic* __this, Ray ray, ::app::Uno::Float4x4 transform)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    return Ray__New_1(NULL, (ind_123 = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float4__New_8(NULL, ray.Position, 1.0f), transform), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal_1(NULL, ray.Direction, transform)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Sphere__uType* Sphere__typeof()
{
    static ::uStaticStrong<Sphere__uType*> type;
    if (type != NULL) return type;

    type = (Sphere__uType*)::uAllocStructType(sizeof(Sphere__uType), "Uno.Geometry.Sphere", sizeof(Sphere), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Center", NULL, offsetof(Sphere, Center), ::app::Uno::Float3__typeof()),
        ::uNewField("Radius", NULL, offsetof(Sphere, Radius), ::app::Uno::Float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Sphere__New_2, 0, true, Sphere__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Sphere___ObjInit_1(Sphere* __this, ::app::Uno::Float3 center, float radius)
{
    __this->Center = center;
    __this->Radius = radius;
}

Sphere Sphere__New_2(::uStatic* __this, ::app::Uno::Float3 center, float radius)
{
    Sphere inst = ::uDefault< Sphere>();
    inst._ObjInit_1(center, radius);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Triangle__uType* Triangle__typeof()
{
    static ::uStaticStrong<Triangle__uType*> type;
    if (type != NULL) return type;

    type = (Triangle__uType*)::uAllocStructType(sizeof(Triangle__uType), "Uno.Geometry.Triangle", sizeof(Triangle), 0, 0, 0);

    type->SetFields(3,
        ::uNewField("A", NULL, offsetof(Triangle, A), ::app::Uno::Float3__typeof()),
        ::uNewField("B", NULL, offsetof(Triangle, B), ::app::Uno::Float3__typeof()),
        ::uNewField("C", NULL, offsetof(Triangle, C), ::app::Uno::Float3__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Normal", Triangle__get_Normal, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("GetBarycentricCoordinatesAt", Triangle__GetBarycentricCoordinatesAt, 0, false, ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", Triangle__New_1, 0, true, Triangle__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void Triangle___ObjInit(Triangle* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c)
{
    __this->A = a;
    __this->B = b;
    __this->C = c;
}

::app::Uno::Float3 Triangle__get_Normal(Triangle* __this)
{
    return ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__Cross(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, __this->B, __this->A), ::app::Uno::Float3__op_Subtraction_2(NULL, __this->C, __this->A)));
}

::app::Uno::Float3 Triangle__GetBarycentricCoordinatesAt(Triangle* __this, ::app::Uno::Float3 p)
{
    ::app::Uno::Float3 normal = __this->Normal();
    float areaABC = ::app::Uno::Vector__Dot_1(NULL, normal, ::app::Uno::Vector__Cross(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, __this->B, __this->A), ::app::Uno::Float3__op_Subtraction_2(NULL, __this->C, __this->A)));
    float areaPBC = ::app::Uno::Vector__Dot_1(NULL, normal, ::app::Uno::Vector__Cross(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, __this->B, p), ::app::Uno::Float3__op_Subtraction_2(NULL, __this->C, p)));
    float areaPCA = ::app::Uno::Vector__Dot_1(NULL, normal, ::app::Uno::Vector__Cross(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, __this->C, p), ::app::Uno::Float3__op_Subtraction_2(NULL, __this->A, p)));
    float x = areaPBC / areaABC;
    float y = areaPCA / areaABC;
    return ::app::Uno::Float3__New_2(NULL, x, y, (1.0f - x) - y);
}

Triangle Triangle__New_1(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c)
{
    Triangle inst = ::uDefault< Triangle>();
    inst._ObjInit(a, b, c);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Triangle2D__uType* Triangle2D__typeof()
{
    static ::uStaticStrong<Triangle2D__uType*> type;
    if (type != NULL) return type;

    type = (Triangle2D__uType*)::uAllocClassType(sizeof(Triangle2D__uType), "Uno.Geometry.Triangle2D", false, 0, 0, 0);

    type->SetFields(3,
        ::uNewField("A", NULL, offsetof(Triangle2D, A), ::app::Uno::Float2__typeof()),
        ::uNewField("B", NULL, offsetof(Triangle2D, B), ::app::Uno::Float2__typeof()),
        ::uNewField("C", NULL, offsetof(Triangle2D, C), ::app::Uno::Float2__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Triangle2D__New_1, 0, true, Triangle2D__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Triangle2D___ObjInit(Triangle2D* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, ::app::Uno::Float2 c)
{
    __this->A = a;
    __this->B = b;
    __this->C = c;
}

Triangle2D* Triangle2D__New_1(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, ::app::Uno::Float2 c)
{
    Triangle2D* inst = (Triangle2D*)::uAllocObject(sizeof(Triangle2D), Triangle2D__typeof());
    inst->_ObjInit(a, b, c);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vertex__uType* Vertex__typeof()
{
    static ::uStaticStrong<Vertex__uType*> type;
    if (type != NULL) return type;

    type = (Vertex__uType*)::uAllocClassType(sizeof(Vertex__uType), "Uno.Geometry.Vertex", false, 0, 1, 0);

    type->SetStrongRefs(
        "Next", offsetof(Vertex, Next));

    type->SetFields(3,
        ::uNewField("Next", NULL, offsetof(Vertex, Next), Vertex__typeof()),
        ::uNewField("X", NULL, offsetof(Vertex, X), ::app::Uno::Float__typeof()),
        ::uNewField("Y", NULL, offsetof(Vertex, Y), ::app::Uno::Float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Vertex__New_1, 0, true, Vertex__typeof()));

    ::uRegisterType(type);
    return type;
}

void Vertex___ObjInit(Vertex* __this)
{
}

Vertex* Vertex__New_1(::uStatic* __this)
{
    Vertex* inst = (Vertex*)::uAllocObject(sizeof(Vertex), Vertex__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexEnumerable__uType* VertexEnumerable__typeof()
{
    static ::uStaticStrong<VertexEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (VertexEnumerable__uType*)::uAllocClassType(sizeof(VertexEnumerable__uType), "Uno.Geometry.VertexEnumerable", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))VertexEnumerable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(VertexEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_head", offsetof(VertexEnumerable, _head));

    type->SetFields(1,
        ::uNewField("_head", NULL, offsetof(VertexEnumerable, _head), ::app::Uno::Geometry::Vertex__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", VertexEnumerable__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__float2__typeof()),
        ::uNewFunction(".ctor", VertexEnumerable__New_1, 0, true, VertexEnumerable__typeof(), ::app::Uno::Geometry::Vertex__typeof()));

    ::uRegisterType(type);
    return type;
}

void VertexEnumerable___ObjInit(VertexEnumerable* __this, ::app::Uno::Geometry::Vertex* head)
{
    __this->_head = head;
}

::uObject* VertexEnumerable__GetEnumerator(VertexEnumerable* __this)
{
    return (::uObject*)::app::Uno::Geometry::VertexEnumerator__New_1(NULL, __this->_head);
}

VertexEnumerable* VertexEnumerable__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head)
{
    VertexEnumerable* inst = (VertexEnumerable*)::uAllocObject(sizeof(VertexEnumerable), VertexEnumerable__typeof());
    inst->_ObjInit(head);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexEnumerator__uType* VertexEnumerator__typeof()
{
    static ::uStaticStrong<VertexEnumerator__uType*> type;
    if (type != NULL) return type;

    type = (VertexEnumerator__uType*)::uAllocClassType(sizeof(VertexEnumerator__uType), "Uno.Geometry.VertexEnumerator", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))VertexEnumerator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))VertexEnumerator__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))VertexEnumerator__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))VertexEnumerator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(VertexEnumerator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(VertexEnumerator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(VertexEnumerator__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(VertexEnumerator, _current),
        "_head", offsetof(VertexEnumerator, _head));

    type->SetFields(2,
        ::uNewField("_current", NULL, offsetof(VertexEnumerator, _current), ::app::Uno::Geometry::Vertex__typeof()),
        ::uNewField("_head", NULL, offsetof(VertexEnumerator, _head), ::app::Uno::Geometry::Vertex__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", VertexEnumerator__Dispose, 0, false),
        ::uNewFunction("get_Current", VertexEnumerator__get_Current, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("MoveNext", VertexEnumerator__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", VertexEnumerator__New_1, 0, true, VertexEnumerator__typeof(), ::app::Uno::Geometry::Vertex__typeof()),
        ::uNewFunctionVoid("Reset", VertexEnumerator__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void VertexEnumerator___ObjInit(VertexEnumerator* __this, ::app::Uno::Geometry::Vertex* head)
{
    __this->_head = __this->_current = head;
}

void VertexEnumerator__Dispose(VertexEnumerator* __this)
{
}

::app::Uno::Float2 VertexEnumerator__get_Current(VertexEnumerator* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->X, ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->Y);
}

bool VertexEnumerator__MoveNext(VertexEnumerator* __this)
{
    return (__this->_current = ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->Next) != NULL;
}

VertexEnumerator* VertexEnumerator__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head)
{
    VertexEnumerator* inst = (VertexEnumerator*)::uAllocObject(sizeof(VertexEnumerator), VertexEnumerator__typeof());
    inst->_ObjInit(head);
    return inst;
}

void VertexEnumerator__Reset(VertexEnumerator* __this)
{
    __this->_current = __this->_head;
}

}}}
