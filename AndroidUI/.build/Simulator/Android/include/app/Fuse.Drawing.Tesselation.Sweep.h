// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_SWEEP_H__
#define __APP_FUSE_DRAWING_TESSELATION_SWEEP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct ActiveRegionDict; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct VertexQueue; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct ActiveRegion; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Mesh; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct Sweep;

struct Sweep__uType : ::uClassType
{
};

Sweep__uType* Sweep__typeof();

void Sweep___ObjInit(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule);
void Sweep__AddRightEdges(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::app::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool cleanUp);
void Sweep__AddSentinel(Sweep* __this, float t);
bool Sweep__CheckForIntersect(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
bool Sweep__CheckForLeftSplice(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
bool Sweep__CheckForRightSplice(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
void Sweep__ComputeInterior(Sweep* __this);
void Sweep__ComputeWinding(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg);
void Sweep__ConnectLeftDegenerate(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent);
void Sweep__ConnectLeftVertex(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent);
void Sweep__ConnectRightVertex(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft);
void Sweep__DeleteRegion(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg);
void Sweep__DoneEdgeDict(Sweep* __this);
::app::Fuse::Drawing::Tesselation::HalfEdge* Sweep__FinishLeftRegions(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLast);
void Sweep__FinishRegion(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg);
::app::Fuse::Drawing::Tesselation::Vertex* Sweep__get_Event(Sweep* __this);
bool Sweep__HasActiveRegion(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e);
void Sweep__InitEdgeDict(Sweep* __this);
void Sweep__InitPriorityQ(Sweep* __this);
Sweep* Sweep__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule);
void Sweep__RemoveDegenerateEdges(Sweep* __this);
void Sweep__RemoveDegenerateFaces(Sweep* __this);
void Sweep__SpliceMergeVertices(Sweep* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2);
void Sweep__SweepEvent(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent);
void Sweep__WalkDirtyRegions(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp);

struct Sweep : ::uObject
{
    ::uWeak< ::app::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    ::uStrong< ::uDelegate*> _isWindingInside;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*> _dict;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*> _pq;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _event;

    void _ObjInit(::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule) { Sweep___ObjInit(this, mesh, windingRule); }
    void AddRightEdges(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::app::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool cleanUp) { Sweep__AddRightEdges(this, regUp, eFirst, eLast, eTopLeft, cleanUp); }
    void AddSentinel(float t) { Sweep__AddSentinel(this, t); }
    bool CheckForIntersect(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp) { return Sweep__CheckForIntersect(this, regUp); }
    bool CheckForLeftSplice(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp) { return Sweep__CheckForLeftSplice(this, regUp); }
    bool CheckForRightSplice(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp) { return Sweep__CheckForRightSplice(this, regUp); }
    void ComputeInterior() { Sweep__ComputeInterior(this); }
    void ComputeWinding(::app::Fuse::Drawing::Tesselation::ActiveRegion* reg) { Sweep__ComputeWinding(this, reg); }
    void ConnectLeftDegenerate(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent) { Sweep__ConnectLeftDegenerate(this, regUp, vEvent); }
    void ConnectLeftVertex(::app::Fuse::Drawing::Tesselation::Vertex* vEvent) { Sweep__ConnectLeftVertex(this, vEvent); }
    void ConnectRightVertex(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft) { Sweep__ConnectRightVertex(this, regUp, eBottomLeft); }
    void DeleteRegion(::app::Fuse::Drawing::Tesselation::ActiveRegion* reg) { Sweep__DeleteRegion(this, reg); }
    void DoneEdgeDict() { Sweep__DoneEdgeDict(this); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* FinishLeftRegions(::app::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLast) { return Sweep__FinishLeftRegions(this, regFirst, regLast); }
    void FinishRegion(::app::Fuse::Drawing::Tesselation::ActiveRegion* reg) { Sweep__FinishRegion(this, reg); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Event() { return Sweep__get_Event(this); }
    void InitEdgeDict() { Sweep__InitEdgeDict(this); }
    void InitPriorityQ() { Sweep__InitPriorityQ(this); }
    void RemoveDegenerateEdges() { Sweep__RemoveDegenerateEdges(this); }
    void RemoveDegenerateFaces() { Sweep__RemoveDegenerateFaces(this); }
    void SpliceMergeVertices(::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2) { Sweep__SpliceMergeVertices(this, e1, e2); }
    void SweepEvent(::app::Fuse::Drawing::Tesselation::Vertex* vEvent) { Sweep__SweepEvent(this, vEvent); }
    void WalkDirtyRegions(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp) { Sweep__WalkDirtyRegions(this, regUp); }
};

}}}}


#endif
