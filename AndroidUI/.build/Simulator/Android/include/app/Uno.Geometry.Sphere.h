// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_SPHERE_H__
#define __APP_UNO_GEOMETRY_SPHERE_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Geometry {

struct Sphere;

struct Sphere__uType : ::uStructType
{
};

Sphere__uType* Sphere__typeof();

void Sphere___ObjInit_1(Sphere* __this, ::app::Uno::Float3 center, float radius);
Sphere Sphere__New_2(::uStatic* __this, ::app::Uno::Float3 center, float radius);

struct Sphere
{
    ::app::Uno::Float3 Center;
    float Radius;

    void _ObjInit_1(::app::Uno::Float3 center, float radius) { Sphere___ObjInit_1(this, center, radius); }
};

}}}


#endif
