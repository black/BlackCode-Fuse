// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_TRIANGLE_H__
#define __APP_UNO_GEOMETRY_TRIANGLE_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Geometry {

struct Triangle;

struct Triangle__uType : ::uStructType
{
};

Triangle__uType* Triangle__typeof();

void Triangle___ObjInit(Triangle* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c);
::app::Uno::Float3 Triangle__get_Normal(Triangle* __this);
::app::Uno::Float3 Triangle__GetBarycentricCoordinatesAt(Triangle* __this, ::app::Uno::Float3 p);
Triangle Triangle__New_1(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c);

struct Triangle
{
    ::app::Uno::Float3 A;
    ::app::Uno::Float3 B;
    ::app::Uno::Float3 C;

    void _ObjInit(::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c) { Triangle___ObjInit(this, a, b, c); }
    ::app::Uno::Float3 Normal() { return Triangle__get_Normal(this); }
    ::app::Uno::Float3 GetBarycentricCoordinatesAt(::app::Uno::Float3 p) { return Triangle__GetBarycentricCoordinatesAt(this, p); }
};

}}}


#endif
