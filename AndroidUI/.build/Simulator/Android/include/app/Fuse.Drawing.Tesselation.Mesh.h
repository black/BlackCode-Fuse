// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_MESH_H__
#define __APP_FUSE_DRAWING_TESSELATION_MESH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct Mesh;

struct Mesh__uType : ::uClassType
{
};

Mesh__uType* Mesh__typeof();

void Mesh___ObjInit(Mesh* __this);
void Mesh__Add(Mesh* __this, Mesh* mesh2);
void Mesh__CheckConsistency(Mesh* __this);
void Mesh__ComputeInterior(Mesh* __this, ::uDelegate* windingRule);
::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__Connect(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDst);
::app::Fuse::Drawing::Contour* Mesh__CreateContour(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* f);
void Mesh__Delete(Mesh* __this);
void Mesh__DeleteEdge(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDel);
void Mesh__DeleteInternalEdges(Mesh* __this);
void Mesh__DiscardExterior(Mesh* __this);
void Mesh__Dispose(Mesh* __this);
::uObject* Mesh__get_Edges(Mesh* __this);
::uObject* Mesh__get_Faces(Mesh* __this);
::uObject* Mesh__get_InteriorFaces(Mesh* __this);
::uObject* Mesh__get_Vertices(Mesh* __this);
::uObject* Mesh__GetContours(Mesh* __this);
bool Mesh__IsInside(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* face);
::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__MakeEdge(Mesh* __this);
Mesh* Mesh__New_1(::uStatic* __this);
void Mesh__SetWindingNumber(Mesh* __this, int value);
void Mesh__Splice(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDst);
::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__SplitEdge(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e);
void Mesh__TessellateInterior(Mesh* __this);
void Mesh__TessellateMonoRegion(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* face);
void Mesh__ZapFace(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* fZap);

struct Mesh : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> VerticesHead;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Face*> FacesHead;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::HalfEdge*> EdgesHead;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _edgesHeadSym;

    void _ObjInit() { Mesh___ObjInit(this); }
    void Add(Mesh* mesh2) { Mesh__Add(this, mesh2); }
    void CheckConsistency() { Mesh__CheckConsistency(this); }
    void ComputeInterior(::uDelegate* windingRule) { Mesh__ComputeInterior(this, windingRule); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* Connect(::app::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDst) { return Mesh__Connect(this, eOrg, eDst); }
    ::app::Fuse::Drawing::Contour* CreateContour(::app::Fuse::Drawing::Tesselation::Face* f) { return Mesh__CreateContour(this, f); }
    void Delete() { Mesh__Delete(this); }
    void DeleteEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* eDel) { Mesh__DeleteEdge(this, eDel); }
    void DeleteInternalEdges() { Mesh__DeleteInternalEdges(this); }
    void DiscardExterior() { Mesh__DiscardExterior(this); }
    void Dispose() { Mesh__Dispose(this); }
    ::uObject* Edges() { return Mesh__get_Edges(this); }
    ::uObject* Faces() { return Mesh__get_Faces(this); }
    ::uObject* InteriorFaces() { return Mesh__get_InteriorFaces(this); }
    ::uObject* Vertices() { return Mesh__get_Vertices(this); }
    ::uObject* GetContours() { return Mesh__GetContours(this); }
    bool IsInside(::app::Fuse::Drawing::Tesselation::Face* face) { return Mesh__IsInside(this, face); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* MakeEdge() { return Mesh__MakeEdge(this); }
    void SetWindingNumber(int value) { Mesh__SetWindingNumber(this, value); }
    void Splice(::app::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDst) { Mesh__Splice(this, eOrg, eDst); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* SplitEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* e) { return Mesh__SplitEdge(this, e); }
    void TessellateInterior() { Mesh__TessellateInterior(this); }
    void TessellateMonoRegion(::app::Fuse::Drawing::Tesselation::Face* face) { Mesh__TessellateMonoRegion(this, face); }
    void ZapFace(::app::Fuse::Drawing::Tesselation::Face* fZap) { Mesh__ZapFace(this, fZap); }
};

}}}}


#endif
