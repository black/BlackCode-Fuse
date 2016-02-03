// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_FACE_H__
#define __APP_FUSE_DRAWING_TESSELATION_FACE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Uno { namespace Geometry { struct Triangle2D; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct Face;

struct Face__uType : ::uClassType
{
};

Face__uType* Face__typeof();

void Face___ObjInit(Face* __this);
::app::Uno::Float2 Face__Coords(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* edge);
::app::Fuse::Drawing::Tesselation::HalfEdge* Face__get_AnEdge(Face* __this);
::uObject* Face__get_EdgeLoop(Face* __this);
bool Face__get_IsInside(Face* __this);
Face* Face__get_Next(Face* __this);
Face* Face__get_Prev(Face* __this);
void Face__KillFace(::uStatic* __this, Face* fDel, Face* newLface);
Face* Face__MakeFace(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Face* fNext);
Face* Face__New_1(::uStatic* __this);
void Face__set_AnEdge(Face* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value);
void Face__set_IsInside(Face* __this, bool value);
void Face__set_Next(Face* __this, Face* value);
void Face__set_Prev(Face* __this, Face* value);
::app::Fuse::Drawing::Contour* Face__ToContour(Face* __this);
::app::Uno::Geometry::Triangle2D* Face__ToTriangle(Face* __this);

struct Face : ::uObject
{
    ::uWeak< Face*> _prev;
    ::uWeak< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _anEdge;
    ::uStrong< Face*> _Next;
    bool _IsInside;

    void _ObjInit() { Face___ObjInit(this); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* AnEdge() { return Face__get_AnEdge(this); }
    ::uObject* EdgeLoop() { return Face__get_EdgeLoop(this); }
    bool IsInside() { return Face__get_IsInside(this); }
    Face* Next() { return Face__get_Next(this); }
    Face* Prev() { return Face__get_Prev(this); }
    void AnEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* value) { Face__set_AnEdge(this, value); }
    void IsInside(bool value) { Face__set_IsInside(this, value); }
    void Next(Face* value) { Face__set_Next(this, value); }
    void Prev(Face* value) { Face__set_Prev(this, value); }
    ::app::Fuse::Drawing::Contour* ToContour() { return Face__ToContour(this); }
    ::app::Uno::Geometry::Triangle2D* ToTriangle() { return Face__ToTriangle(this); }
};

}}}}


#endif
