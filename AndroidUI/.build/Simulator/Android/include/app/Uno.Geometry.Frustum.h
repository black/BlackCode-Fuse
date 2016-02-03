// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_FRUSTUM_H__
#define __APP_UNO_GEOMETRY_FRUSTUM_H__

#include <app/Uno.Geometry.Plane.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Geometry {

struct Frustum;

struct Frustum__uType : ::uStructType
{
};

Frustum__uType* Frustum__typeof();

void Frustum__Normalize(Frustum* __this);

struct Frustum
{
    ::app::Uno::Geometry::Plane Near;
    ::app::Uno::Geometry::Plane Far;
    ::app::Uno::Geometry::Plane Top;
    ::app::Uno::Geometry::Plane Bottom;
    ::app::Uno::Geometry::Plane Left;
    ::app::Uno::Geometry::Plane Right;

    void Normalize() { Frustum__Normalize(this); }
};

}}}


#endif
