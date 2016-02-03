// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_PLANE_H__
#define __APP_UNO_GEOMETRY_PLANE_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Geometry {

struct Plane;

struct Plane__uType : ::uStructType
{
};

Plane__uType* Plane__typeof();

void Plane___ObjInit_2(Plane* __this, ::app::Uno::Float3 point, ::app::Uno::Float3 normal);
Plane Plane__New_3(::uStatic* __this, ::app::Uno::Float3 point, ::app::Uno::Float3 normal);
void Plane__Normalize(Plane* __this);

struct Plane
{
    ::app::Uno::Float3 Normal;
    float D;

    void _ObjInit_2(::app::Uno::Float3 point, ::app::Uno::Float3 normal) { Plane___ObjInit_2(this, point, normal); }
    void Normalize() { Plane__Normalize(this); }
};

}}}


#endif
