// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_HALF_EDGE_H__
#define __APP_FUSE_DRAWING_TESSELATION_HALF_EDGE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct ActiveRegion; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct HalfEdge;

struct HalfEdge__uType : ::uClassType
{
};

HalfEdge__uType* HalfEdge__typeof();

void HalfEdge___ObjInit(HalfEdge* __this, bool isFirst);
HalfEdge* HalfEdge__AddEdgeVertex(HalfEdge* __this);
void HalfEdge__AddWinding(::uStatic* __this, HalfEdge* eDst, HalfEdge* eSrc);
void HalfEdge__ExchangeOriginNextAkaSplice(::uStatic* __this, HalfEdge* a, HalfEdge* b);
::app::Fuse::Drawing::Tesselation::ActiveRegion* HalfEdge__get_ActiveRegion(HalfEdge* __this);
::app::Fuse::Drawing::Tesselation::Vertex* HalfEdge__get_Destination(HalfEdge* __this);
HalfEdge* HalfEdge__get_DestinationNext(HalfEdge* __this);
HalfEdge* HalfEdge__get_DestinationPrev(HalfEdge* __this);
bool HalfEdge__get_GoesLeft(HalfEdge* __this);
bool HalfEdge__get_GoesRight(HalfEdge* __this);
bool HalfEdge__get_IsBoundaryEdge(HalfEdge* __this);
bool HalfEdge__get_IsFirst(HalfEdge* __this);
::app::Fuse::Drawing::Tesselation::Face* HalfEdge__get_Left(HalfEdge* __this);
HalfEdge* HalfEdge__get_LeftNext(HalfEdge* __this);
HalfEdge* HalfEdge__get_LeftPrev(HalfEdge* __this);
HalfEdge* HalfEdge__get_Next(HalfEdge* __this);
::app::Fuse::Drawing::Tesselation::Vertex* HalfEdge__get_Origin(HalfEdge* __this);
HalfEdge* HalfEdge__get_OriginNext(HalfEdge* __this);
HalfEdge* HalfEdge__get_OriginPrev(HalfEdge* __this);
::app::Fuse::Drawing::Tesselation::Face* HalfEdge__get_Right(HalfEdge* __this);
HalfEdge* HalfEdge__get_RightNext(HalfEdge* __this);
HalfEdge* HalfEdge__get_RightPrev(HalfEdge* __this);
HalfEdge* HalfEdge__get_Sym(HalfEdge* __this);
int HalfEdge__get_Winding(HalfEdge* __this);
void HalfEdge__KillEdge(::uStatic* __this, HalfEdge* eDel);
HalfEdge* HalfEdge__MakeEdge(::uStatic* __this, HalfEdge* eNext);
HalfEdge* HalfEdge__New_1(::uStatic* __this, bool isFirst);
void HalfEdge__set_ActiveRegion(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* value);
void HalfEdge__set_Destination(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Vertex* value);
void HalfEdge__set_Left(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Face* value);
void HalfEdge__set_LeftNext(HalfEdge* __this, HalfEdge* value);
void HalfEdge__set_Next(HalfEdge* __this, HalfEdge* value);
void HalfEdge__set_Origin(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Vertex* value);
void HalfEdge__set_OriginNext(HalfEdge* __this, HalfEdge* value);
void HalfEdge__set_Right(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Face* value);
void HalfEdge__set_Sym(HalfEdge* __this, HalfEdge* value);
void HalfEdge__set_Winding(HalfEdge* __this, int value);
HalfEdge* HalfEdge__Split(HalfEdge* __this);
::uString* HalfEdge__ToString(HalfEdge* __this);

struct HalfEdge : ::uObject
{
    bool _isFirst;
    ::uStrong< HalfEdge*> _LeftNext;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Face*> _Left;
    ::uStrong< HalfEdge*> _OriginNext;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _Origin;
    ::uStrong< HalfEdge*> _Sym;
    int _Winding;
    ::uStrong< HalfEdge*> _Next;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::ActiveRegion*> _ActiveRegion;

    void _ObjInit(bool isFirst) { HalfEdge___ObjInit(this, isFirst); }
    HalfEdge* AddEdgeVertex() { return HalfEdge__AddEdgeVertex(this); }
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegion() { return HalfEdge__get_ActiveRegion(this); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Destination() { return HalfEdge__get_Destination(this); }
    HalfEdge* DestinationNext() { return HalfEdge__get_DestinationNext(this); }
    HalfEdge* DestinationPrev() { return HalfEdge__get_DestinationPrev(this); }
    bool GoesLeft() { return HalfEdge__get_GoesLeft(this); }
    bool GoesRight() { return HalfEdge__get_GoesRight(this); }
    bool IsBoundaryEdge() { return HalfEdge__get_IsBoundaryEdge(this); }
    bool IsFirst() { return HalfEdge__get_IsFirst(this); }
    ::app::Fuse::Drawing::Tesselation::Face* Left() { return HalfEdge__get_Left(this); }
    HalfEdge* LeftNext() { return HalfEdge__get_LeftNext(this); }
    HalfEdge* LeftPrev() { return HalfEdge__get_LeftPrev(this); }
    HalfEdge* Next() { return HalfEdge__get_Next(this); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Origin() { return HalfEdge__get_Origin(this); }
    HalfEdge* OriginNext() { return HalfEdge__get_OriginNext(this); }
    HalfEdge* OriginPrev() { return HalfEdge__get_OriginPrev(this); }
    ::app::Fuse::Drawing::Tesselation::Face* Right() { return HalfEdge__get_Right(this); }
    HalfEdge* RightNext() { return HalfEdge__get_RightNext(this); }
    HalfEdge* RightPrev() { return HalfEdge__get_RightPrev(this); }
    HalfEdge* Sym() { return HalfEdge__get_Sym(this); }
    int Winding() { return HalfEdge__get_Winding(this); }
    void ActiveRegion(::app::Fuse::Drawing::Tesselation::ActiveRegion* value) { HalfEdge__set_ActiveRegion(this, value); }
    void Destination(::app::Fuse::Drawing::Tesselation::Vertex* value) { HalfEdge__set_Destination(this, value); }
    void Left(::app::Fuse::Drawing::Tesselation::Face* value) { HalfEdge__set_Left(this, value); }
    void LeftNext(HalfEdge* value) { HalfEdge__set_LeftNext(this, value); }
    void Next(HalfEdge* value) { HalfEdge__set_Next(this, value); }
    void Origin(::app::Fuse::Drawing::Tesselation::Vertex* value) { HalfEdge__set_Origin(this, value); }
    void OriginNext(HalfEdge* value) { HalfEdge__set_OriginNext(this, value); }
    void Right(::app::Fuse::Drawing::Tesselation::Face* value) { HalfEdge__set_Right(this, value); }
    void Sym(HalfEdge* value) { HalfEdge__set_Sym(this, value); }
    void Winding(int value) { HalfEdge__set_Winding(this, value); }
    HalfEdge* Split() { return HalfEdge__Split(this); }
};

}}}}


#endif
