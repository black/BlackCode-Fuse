// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_VERTEX_H__
#define __APP_FUSE_DRAWING_TESSELATION_VERTEX_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct Vertex;

struct Vertex__uType : ::uClassType
{
};

Vertex__uType* Vertex__typeof();

void Vertex___ObjInit(Vertex* __this);
::app::Fuse::Drawing::Tesselation::HalfEdge* Vertex__get_AnEdge(Vertex* __this);
::app::Uno::Float2 Vertex__get_Coords(Vertex* __this);
Vertex* Vertex__get_Next(Vertex* __this);
::uObject* Vertex__get_OutgoingEdges(Vertex* __this);
Vertex* Vertex__get_Prev(Vertex* __this);
Vertex* Vertex__get_QueueHandle(Vertex* __this);
void Vertex__KillVertex(::uStatic* __this, Vertex* vDel, Vertex* newOrg);
Vertex* Vertex__MakeVertex(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Vertex* vNext);
Vertex* Vertex__New_1(::uStatic* __this);
void Vertex__set_AnEdge(Vertex* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value);
void Vertex__set_Next(Vertex* __this, Vertex* value);
void Vertex__set_Prev(Vertex* __this, Vertex* value);
::uString* Vertex__ToString(Vertex* __this);
bool Vertex__VertEq(Vertex* __this, Vertex* v);
bool Vertex__VertLeq(Vertex* __this, Vertex* v);

struct Vertex : ::uObject
{
    ::uWeak< Vertex*> _prev;
    ::uWeak< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _anEdge;
    double S;
    double T;
    ::uStrong< Vertex*> _Next;

    void _ObjInit() { Vertex___ObjInit(this); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* AnEdge() { return Vertex__get_AnEdge(this); }
    ::app::Uno::Float2 Coords();
    Vertex* Next() { return Vertex__get_Next(this); }
    ::uObject* OutgoingEdges() { return Vertex__get_OutgoingEdges(this); }
    Vertex* Prev() { return Vertex__get_Prev(this); }
    Vertex* QueueHandle() { return Vertex__get_QueueHandle(this); }
    void AnEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* value) { Vertex__set_AnEdge(this, value); }
    void Next(Vertex* value) { Vertex__set_Next(this, value); }
    void Prev(Vertex* value) { Vertex__set_Prev(this, value); }
    bool VertEq(Vertex* v) { return Vertex__VertEq(this, v); }
    bool VertLeq(Vertex* v) { return Vertex__VertLeq(this, v); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

inline ::app::Uno::Float2 Vertex::Coords() { return Vertex__get_Coords(this); }

}}}}


#endif
