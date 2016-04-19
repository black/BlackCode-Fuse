// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Collision2D.h>
#include <Uno.Geometry.CubicBezier.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Geometry.Vertex.h>
#include <Uno.Geometry.VertexEnumerable.h>
#include <Uno.Geometry.VertexEnumerator.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Vector.h>
static uType* TYPES[9];

namespace g{
namespace Uno{
namespace Geometry{

// C:\ProgramData\Uno\Packages\Uno.Geometry\0.20.1\$.uno(5)
// --------------------------------------------------------

// public struct Box :5
// {
uStructType* Box_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Box);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Box", options);
    ::TYPES[0] = ::g::Uno::Float3_typeof();
    ::TYPES[1] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Box, Minimum), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Box, Maximum), 0);
    return type;
}

// public Box(float3 min, float3 max) :9
void Box__ctor__fn(Box* __this, ::g::Uno::Float3* min, ::g::Uno::Float3* max)
{
    __this->ctor_(*min, *max);
}

// public Box New(float3 min, float3 max) :9
void Box__New1_fn(::g::Uno::Float3* min, ::g::Uno::Float3* max, Box* __retval)
{
    *__retval = Box__New1(*min, *max);
}

// public static Uno.Geometry.Box Transform(Uno.Geometry.Box box, float4x4 transform) :20
void Box__Transform_fn(Box* box, ::g::Uno::Float4x4* transform, Box* __retval)
{
    *__retval = Box__Transform(*box, *transform);
}

// public Box(float3 min, float3 max) [instance] :9
void Box::ctor_(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Minimum = min;
    Maximum = max;
}

// public Box New(float3 min, float3 max) [static] :9
Box Box__New1(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Box obj9;
    obj9.ctor_(min, max);
    return obj9;
}

// public static Uno.Geometry.Box Transform(Uno.Geometry.Box box, float4x4 transform) [static] :20
Box Box__Transform(Box box, ::g::Uno::Float4x4 transform)
{
    ::g::Uno::Float4 ind1 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New2(box.Minimum.X, box.Minimum.Y, box.Minimum.Z, 1.0f), transform);
    ::g::Uno::Float3 A = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
    ::g::Uno::Float4 ind2 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New2(box.Maximum.X, box.Minimum.Y, box.Minimum.Z, 1.0f), transform);
    ::g::Uno::Float3 B = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
    ::g::Uno::Float4 ind3 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New2(box.Maximum.X, box.Maximum.Y, box.Minimum.Z, 1.0f), transform);
    ::g::Uno::Float3 C = ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z);
    ::g::Uno::Float4 ind4 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New2(box.Minimum.X, box.Maximum.Y, box.Minimum.Z, 1.0f), transform);
    ::g::Uno::Float3 D = ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z);
    ::g::Uno::Float4 ind5 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New2(box.Minimum.X, box.Minimum.Y, box.Maximum.Z, 1.0f), transform);
    ::g::Uno::Float3 E = ::g::Uno::Float3__New2(ind5.X, ind5.Y, ind5.Z);
    ::g::Uno::Float4 ind6 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New2(box.Maximum.X, box.Minimum.Y, box.Maximum.Z, 1.0f), transform);
    ::g::Uno::Float3 F = ::g::Uno::Float3__New2(ind6.X, ind6.Y, ind6.Z);
    ::g::Uno::Float4 ind7 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New2(box.Maximum.X, box.Maximum.Y, box.Maximum.Z, 1.0f), transform);
    ::g::Uno::Float3 G = ::g::Uno::Float3__New2(ind7.X, ind7.Y, ind7.Z);
    ::g::Uno::Float4 ind8 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New2(box.Minimum.X, box.Maximum.Y, box.Maximum.Z, 1.0f), transform);
    ::g::Uno::Float3 H = ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z);
    return Box__New1(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(A, B), C), D), E), F), G), H), ::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(A, B), C), D), E), F), G), H));
}
// }

// C:\ProgramData\Uno\Packages\Uno.Geometry\0.20.1\$.uno(41)
// ---------------------------------------------------------

// public static class Collision :41
// {
uClassType* Collision_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Geometry.Collision", options);
    ::TYPES[0] = ::g::Uno::Float3_typeof();
    ::TYPES[2] = ::g::Uno::Geometry::Ray_typeof();
    ::TYPES[3] = ::g::Uno::Geometry::Box_typeof();
    return type;
}

// public static bool RayIntersectsBox(Uno.Geometry.Ray ray, Uno.Geometry.Box box, float& distance) :430
void Collision__RayIntersectsBox_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Box* box, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsBox(*ray, *box, distance);
}

// public static bool RayIntersectsBox(Uno.Geometry.Ray ray, Uno.Geometry.Box box, float& distance) [static] :430
bool Collision::RayIntersectsBox(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Box box, float* distance)
{
    *distance = 0.0f;
    float tmax = 3.402823e+38f;

    if (::g::Uno::Math::Abs1(ray.Direction.X) < 1e-05f)
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

        *distance = ::g::Uno::Math::Max1(t1, *distance);
        tmax = ::g::Uno::Math::Min1(t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Y) < 1e-05f)
    {
        if ((ray.Position.Y < box.Minimum.Y) || (ray.Position.Y > box.Maximum.Y))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse1 = 1.0f / ray.Direction.Y;
        float t11 = (box.Minimum.Y - ray.Position.Y) * inverse1;
        float t21 = (box.Maximum.Y - ray.Position.Y) * inverse1;

        if (t11 > t21)
        {
            float temp1 = t11;
            t11 = t21;
            t21 = temp1;
        }

        *distance = ::g::Uno::Math::Max1(t11, *distance);
        tmax = ::g::Uno::Math::Min1(t21, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Z) < 1e-05f)
    {
        if ((ray.Position.Z < box.Minimum.Z) || (ray.Position.Z > box.Maximum.Z))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse2 = 1.0f / ray.Direction.Z;
        float t12 = (box.Minimum.Z - ray.Position.Z) * inverse2;
        float t22 = (box.Maximum.Z - ray.Position.Z) * inverse2;

        if (t12 > t22)
        {
            float temp2 = t12;
            t12 = t22;
            t22 = temp2;
        }

        *distance = ::g::Uno::Math::Max1(t12, *distance);
        tmax = ::g::Uno::Math::Min1(t22, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    return true;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Geometry\0.20.1\$.uno(1193)
// -----------------------------------------------------------

// public static class Collision2D :1193
// {
uClassType* Collision2D_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Geometry.Collision2D", options);
    ::TYPES[4] = ::g::Uno::Float2_typeof();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    return type;
}

// public static float AngleBetween(float2 a, float2 b) :1300
void Collision2D__AngleBetween_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = Collision2D::AngleBetween(*a, *b);
}

// public static float2 LineIntersectionPointVector(float2 ps1, float2 v1, float2 ps2, float2 v2) :1270
void Collision2D__LineIntersectionPointVector_fn(::g::Uno::Float2* ps1, ::g::Uno::Float2* v1, ::g::Uno::Float2* ps2, ::g::Uno::Float2* v2, ::g::Uno::Float2* __retval)
{
    *__retval = Collision2D::LineIntersectionPointVector(*ps1, *v1, *ps2, *v2);
}

// public static bool TriangleContainsPoint(float2 A, float2 B, float2 C, float2 P) :1244
void Collision2D__TriangleContainsPoint_fn(::g::Uno::Float2* A, ::g::Uno::Float2* B, ::g::Uno::Float2* C, ::g::Uno::Float2* P, bool* __retval)
{
    *__retval = Collision2D::TriangleContainsPoint(*A, *B, *C, *P);
}

// public static float AngleBetween(float2 a, float2 b) [static] :1300
float Collision2D::AngleBetween(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    float d = ::g::Uno::Vector::Dot(a, b);
    float l = ::g::Uno::Vector::Length(a) * ::g::Uno::Vector::Length(b);

    if (l < 1e-05f)
        return 0.0f;

    return ::g::Uno::Math::Acos1(d / l);
}

// public static float2 LineIntersectionPointVector(float2 ps1, float2 v1, float2 ps2, float2 v2) [static] :1270
::g::Uno::Float2 Collision2D::LineIntersectionPointVector(::g::Uno::Float2 ps1, ::g::Uno::Float2 v1, ::g::Uno::Float2 ps2, ::g::Uno::Float2 v2)
{
    float A1 = v1.Y;
    float B1 = -v1.X;
    float C1 = (A1 * ps1.X) + (B1 * ps1.Y);
    float A2 = v2.Y;
    float B2 = -v2.X;
    float C2 = (A2 * ps2.X) + (B2 * ps2.Y);
    float delta = (A1 * B2) - (A2 * B1);

    if (::g::Uno::Math::Abs1(delta) < 1e-05f)
        return ps1;

    return ::g::Uno::Float2__New2(((B2 * C1) - (B1 * C2)) / delta, ((A1 * C2) - (A2 * C1)) / delta);
}

// public static bool TriangleContainsPoint(float2 A, float2 B, float2 C, float2 P) [static] :1244
bool Collision2D::TriangleContainsPoint(::g::Uno::Float2 A, ::g::Uno::Float2 B, ::g::Uno::Float2 C, ::g::Uno::Float2 P)
{
    ::g::Uno::Float2 v0 = ::g::Uno::Float2__op_Subtraction2(C, A);
    ::g::Uno::Float2 v1 = ::g::Uno::Float2__op_Subtraction2(B, A);
    ::g::Uno::Float2 v2 = ::g::Uno::Float2__op_Subtraction2(P, A);
    float dot00 = ::g::Uno::Vector::Dot(v0, v0);
    float dot01 = ::g::Uno::Vector::Dot(v0, v1);
    float dot02 = ::g::Uno::Vector::Dot(v0, v2);
    float dot11 = ::g::Uno::Vector::Dot(v1, v1);
    float dot12 = ::g::Uno::Vector::Dot(v1, v2);
    float denom = (dot00 * dot11) - (dot01 * dot01);

    if (denom < 1e-05f)
        return false;

    float invDenom = 1.0f / denom;
    float u = ((dot11 * dot02) - (dot01 * dot12)) * invDenom;
    float v = ((dot00 * dot12) - (dot01 * dot02)) * invDenom;
    bool r = ((u >= 0.0f) && (v >= 0.0f)) && ((u + v) < 1.0f);
    return r;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Geometry\0.20.1\Curves\$.uno(12)
// ----------------------------------------------------------------

// public sealed class CubicBezier :12
// {
uType* CubicBezier_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CubicBezier);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Geometry.CubicBezier", options);
    ::TYPES[6] = ::g::Uno::Geometry::Vertex_typeof();
    ::TYPES[4] = ::g::Uno::Float2_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetFields(0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::CubicBezier, _head), 0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::CubicBezier, _last), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::CubicBezier, _maxErrorSquared), 0);
    return type;
}

// private CubicBezier(float maxError) :27
void CubicBezier__ctor__fn(CubicBezier* __this, float* maxError)
{
    __this->ctor_(*maxError);
}

// private void AddPoint(float x, float y) :80
void CubicBezier__AddPoint_fn(CubicBezier* __this, float* x, float* y)
{
    __this->AddPoint(*x, *y);
}

// private CubicBezier New(float maxError) :27
void CubicBezier__New1_fn(float* maxError, CubicBezier** __retval)
{
    *__retval = CubicBezier::New1(*maxError);
}

// public static Uno.Collections.IEnumerable<float2> Subdivide(float2 p1, float2 p2, float2 p3, float2 p4, [float maxError]) :14
void CubicBezier__Subdivide_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* p3, ::g::Uno::Float2* p4, float* maxError, uObject** __retval)
{
    *__retval = CubicBezier::Subdivide(*p1, *p2, *p3, *p4, *maxError);
}

// private void SubdivideRecursive(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, [int level]) :38
void CubicBezier__SubdivideRecursive_fn(CubicBezier* __this, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4, int* level)
{
    __this->SubdivideRecursive(*x1, *y1, *x2, *y2, *x3, *y3, *x4, *y4, *level);
}

// private CubicBezier(float maxError) [instance] :27
void CubicBezier::ctor_(float maxError)
{
    _head = (_last = ::g::Uno::Geometry::Vertex::New1());
    _maxErrorSquared = (maxError * maxError);
}

// private void AddPoint(float x, float y) [instance] :80
void CubicBezier::AddPoint(float x, float y)
{
    ::g::Uno::Geometry::Vertex* collection1;
    _last = (uPtr(_last)->Next = (collection1 = ::g::Uno::Geometry::Vertex::New1(), uPtr(collection1)->X = x, uPtr(collection1)->Y = y, collection1));
}

// private void SubdivideRecursive(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, [int level]) [instance] :38
void CubicBezier::SubdivideRecursive(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int level)
{
    if ((((((::g::Uno::Math::Abs1(x1 - x2) <= 1e-05f) && (::g::Uno::Math::Abs1(x2 - x3) <= 1e-05f)) && (::g::Uno::Math::Abs1(x3 - x4) <= 1e-05f)) && (::g::Uno::Math::Abs1(y1 - y2) <= 1e-05f)) && (::g::Uno::Math::Abs1(y2 - y3) <= 1e-05f)) && (::g::Uno::Math::Abs1(y3 - y4) <= 1e-05f))
        return;

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
    float d2 = ::g::Uno::Math::Abs1(((x2 - x4) * dy) - ((y2 - y4) * dx));
    float d3 = ::g::Uno::Math::Abs1(((x3 - x4) * dy) - ((y3 - y4) * dx));

    if (((d2 + d3) * (d2 + d3)) < (_maxErrorSquared * ((dx * dx) + (dy * dy))))
    {
        AddPoint(x1234, y1234);
        return;
    }

    SubdivideRecursive(x1, y1, x12, y12, x123, y123, x1234, y1234, level + 1);
    SubdivideRecursive(x1234, y1234, x234, y234, x34, y34, x4, y4, level + 1);
}

// private CubicBezier New(float maxError) [static] :27
CubicBezier* CubicBezier::New1(float maxError)
{
    CubicBezier* obj2 = (CubicBezier*)uNew(CubicBezier_typeof());
    obj2->ctor_(maxError);
    return obj2;
}

// public static Uno.Collections.IEnumerable<float2> Subdivide(float2 p1, float2 p2, float2 p3, float2 p4, [float maxError]) [static] :14
uObject* CubicBezier::Subdivide(::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2 p3, ::g::Uno::Float2 p4, float maxError)
{
    CubicBezier* s = CubicBezier::New1(maxError);
    s->AddPoint(p1.X, p1.Y);
    s->SubdivideRecursive(p1.X, p1.Y, p2.X, p2.Y, p3.X, p3.Y, p4.X, p4.Y, 0);
    s->AddPoint(p4.X, p4.Y);
    return (uObject*)::g::Uno::Geometry::VertexEnumerable::New1(s->_head);
}
// }

// C:\ProgramData\Uno\Packages\Uno.Geometry\0.20.1\$.uno(1597)
// -----------------------------------------------------------

// public struct Ray :1597
// {
uStructType* Ray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Ray);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Ray", options);
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Ray, Position), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Ray, Direction), 0);
    return type;
}

// public Ray(float3 pos, float3 dir) :1602
void Ray__ctor__fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir)
{
    __this->ctor_(*pos, *dir);
}

// public Ray New(float3 pos, float3 dir) :1602
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval)
{
    *__retval = Ray__New1(*pos, *dir);
}

// public Ray(float3 pos, float3 dir) [instance] :1602
void Ray::ctor_(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Position = pos;
    Direction = dir;
}

// public Ray New(float3 pos, float3 dir) [static] :1602
Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Ray obj2;
    obj2.ctor_(pos, dir);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Geometry\0.20.1\Curves\$.uno(120)
// -----------------------------------------------------------------

// internal sealed class Vertex :120
// {
uType* Vertex_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Vertex);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Geometry.Vertex", options);
    type->fp_ctor_ = (void*)Vertex__New1_fn;
    type->SetFields(0,
        Vertex_typeof(), offsetof(::g::Uno::Geometry::Vertex, Next), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::Vertex, X), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::Vertex, Y), 0);
    return type;
}

// public generated Vertex() :120
void Vertex__ctor__fn(Vertex* __this)
{
    __this->ctor_();
}

// public generated Vertex New() :120
void Vertex__New1_fn(Vertex** __retval)
{
    *__retval = Vertex::New1();
}

// public generated Vertex() [instance] :120
void Vertex::ctor_()
{
}

// public generated Vertex New() [static] :120
Vertex* Vertex::New1()
{
    Vertex* obj1 = (Vertex*)uNew(Vertex_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Geometry\0.20.1\Curves\$.uno(86)
// ----------------------------------------------------------------

// internal sealed class VertexEnumerable :86
// {
VertexEnumerable_type* VertexEnumerable_typeof()
{
    static uSStrong<VertexEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VertexEnumerable);
    options.TypeSize = sizeof(VertexEnumerable_type);
    type = (VertexEnumerable_type*)uClassType::New("Uno.Geometry.VertexEnumerable", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))VertexEnumerable__GetEnumerator_fn;
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(VertexEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::VertexEnumerable, _head), 0);
    return type;
}

// public VertexEnumerable(Uno.Geometry.Vertex head) :90
void VertexEnumerable__ctor__fn(VertexEnumerable* __this, ::g::Uno::Geometry::Vertex* head)
{
    __this->ctor_(head);
}

// public Uno.Collections.IEnumerator<float2> GetEnumerator() :95
void VertexEnumerable__GetEnumerator_fn(VertexEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public VertexEnumerable New(Uno.Geometry.Vertex head) :90
void VertexEnumerable__New1_fn(::g::Uno::Geometry::Vertex* head, VertexEnumerable** __retval)
{
    *__retval = VertexEnumerable::New1(head);
}

// public VertexEnumerable(Uno.Geometry.Vertex head) [instance] :90
void VertexEnumerable::ctor_(::g::Uno::Geometry::Vertex* head)
{
    _head = head;
}

// public Uno.Collections.IEnumerator<float2> GetEnumerator() [instance] :95
uObject* VertexEnumerable::GetEnumerator()
{
    return (uObject*)::g::Uno::Geometry::VertexEnumerator::New1(_head);
}

// public VertexEnumerable New(Uno.Geometry.Vertex head) [static] :90
VertexEnumerable* VertexEnumerable::New1(::g::Uno::Geometry::Vertex* head)
{
    VertexEnumerable* obj1 = (VertexEnumerable*)uNew(VertexEnumerable_typeof());
    obj1->ctor_(head);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Geometry\0.20.1\Curves\$.uno(101)
// -----------------------------------------------------------------

// internal sealed class VertexEnumerator :101
// {
VertexEnumerator_type* VertexEnumerator_typeof()
{
    static uSStrong<VertexEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(VertexEnumerator);
    options.TypeSize = sizeof(VertexEnumerator_type);
    type = (VertexEnumerator_type*)uClassType::New("Uno.Geometry.VertexEnumerator", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))VertexEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))VertexEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))VertexEnumerator__MoveNext_fn;
    ::TYPES[6] = ::g::Uno::Geometry::Vertex_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(VertexEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(VertexEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(VertexEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::VertexEnumerator, _current), 0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::VertexEnumerator, _head), 0);
    return type;
}

// public VertexEnumerator(Uno.Geometry.Vertex head) :106
void VertexEnumerator__ctor__fn(VertexEnumerator* __this, ::g::Uno::Geometry::Vertex* head)
{
    __this->ctor_(head);
}

// public float2 get_Current() :111
void VertexEnumerator__get_Current_fn(VertexEnumerator* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :117
void VertexEnumerator__Dispose_fn(VertexEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :115
void VertexEnumerator__MoveNext_fn(VertexEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public VertexEnumerator New(Uno.Geometry.Vertex head) :106
void VertexEnumerator__New1_fn(::g::Uno::Geometry::Vertex* head, VertexEnumerator** __retval)
{
    *__retval = VertexEnumerator::New1(head);
}

// public VertexEnumerator(Uno.Geometry.Vertex head) [instance] :106
void VertexEnumerator::ctor_(::g::Uno::Geometry::Vertex* head)
{
    _head = (_current = head);
}

// public float2 get_Current() [instance] :111
::g::Uno::Float2 VertexEnumerator::Current()
{
    return ::g::Uno::Float2__New2(uPtr(_current)->X, uPtr(_current)->Y);
}

// public void Dispose() [instance] :117
void VertexEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :115
bool VertexEnumerator::MoveNext()
{
    return (_current = uPtr(_current)->Next) != NULL;
}

// public VertexEnumerator New(Uno.Geometry.Vertex head) [static] :106
VertexEnumerator* VertexEnumerator::New1(::g::Uno::Geometry::Vertex* head)
{
    VertexEnumerator* obj1 = (VertexEnumerator*)uNew(VertexEnumerator_typeof());
    obj1->ctor_(head);
    return obj1;
}
// }

}}} // ::g::Uno::Geometry
