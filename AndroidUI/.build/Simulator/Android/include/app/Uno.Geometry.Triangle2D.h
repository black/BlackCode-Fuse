// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_TRIANGLE2_D_H__
#define __APP_UNO_GEOMETRY_TRIANGLE2_D_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Geometry {

struct Triangle2D;

struct Triangle2D__uType : ::uClassType
{
};

Triangle2D__uType* Triangle2D__typeof();

void Triangle2D___ObjInit(Triangle2D* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, ::app::Uno::Float2 c);
Triangle2D* Triangle2D__New_1(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, ::app::Uno::Float2 c);

struct Triangle2D : ::uObject
{
    ::app::Uno::Float2 A;
    ::app::Uno::Float2 B;
    ::app::Uno::Float2 C;

    void _ObjInit(::app::Uno::Float2 a, ::app::Uno::Float2 b, ::app::Uno::Float2 c) { Triangle2D___ObjInit(this, a, b, c); }
};

}}}


#endif
