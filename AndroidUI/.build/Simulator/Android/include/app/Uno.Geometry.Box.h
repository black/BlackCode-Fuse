// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_BOX_H__
#define __APP_UNO_GEOMETRY_BOX_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {
namespace Geometry {

struct Box;

struct Box__uType : ::uStructType
{
};

Box__uType* Box__typeof();

void Box___ObjInit(Box* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max);
::app::Uno::Float3 Box__get_Center(Box* __this);
Box Box__New_1(::uStatic* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max);
Box Box__Transform(::uStatic* __this, Box box, ::app::Uno::Float4x4 transform);

struct Box
{
    ::app::Uno::Float3 Minimum;
    ::app::Uno::Float3 Maximum;

    void _ObjInit(::app::Uno::Float3 min, ::app::Uno::Float3 max) { Box___ObjInit(this, min, max); }
    ::app::Uno::Float3 Center() { return Box__get_Center(this); }
};

}}}


#endif
