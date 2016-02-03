// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_RAY_H__
#define __APP_UNO_GEOMETRY_RAY_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {
namespace Geometry {

struct Ray;

struct Ray__uType : ::uStructType
{
};

Ray__uType* Ray__typeof();

void Ray___ObjInit(Ray* __this, ::app::Uno::Float3 pos, ::app::Uno::Float3 dir);
Ray Ray__New_1(::uStatic* __this, ::app::Uno::Float3 pos, ::app::Uno::Float3 dir);
Ray Ray__Transform(::uStatic* __this, Ray ray, ::app::Uno::Float4x4 transform);

struct Ray
{
    ::app::Uno::Float3 Position;
    ::app::Uno::Float3 Direction;

    void _ObjInit(::app::Uno::Float3 pos, ::app::Uno::Float3 dir) { Ray___ObjInit(this, pos, dir); }
};

}}}


#endif
