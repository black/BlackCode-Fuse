// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_VERTEX_H__
#define __APP_UNO_GEOMETRY_VERTEX_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Geometry {

struct Vertex;

struct Vertex__uType : ::uClassType
{
};

Vertex__uType* Vertex__typeof();

void Vertex___ObjInit(Vertex* __this);
Vertex* Vertex__New_1(::uStatic* __this);

struct Vertex : ::uObject
{
    float X;
    float Y;
    ::uStrong< Vertex*> Next;

    void _ObjInit() { Vertex___ObjInit(this); }
};

}}}


#endif
