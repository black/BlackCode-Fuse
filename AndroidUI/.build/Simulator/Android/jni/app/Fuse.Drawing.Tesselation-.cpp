#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h>
#include <app/Fuse.Drawing.Tesselation.Collections.Dict__Fuse_Drawing_Tessela-4a6f6c6d.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-21490bec.h>
#include <app/Fuse.Drawing.Tesselation.Collections.PriorityQueue__Fuse_Drawin-b60a1789.h>
#include <app/Fuse.Drawing.Tesselation.Collections.VertexQueue.h>
#include <app/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.EdgesEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.FacesEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.Geom.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.MeshBuilder.h>
#include <app/Fuse.Drawing.Tesselation.OriginEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.Sweep.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Fuse.Drawing.Tesselation.VerticesEnumerable.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>
#include <app/Uno.Geometry.Triangle2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ActiveRegion__uType* ActiveRegion__typeof()
{
    static ::uStaticStrong<ActiveRegion__uType*> type;
    if (type != NULL) return type;

    type = (ActiveRegion__uType*)::uAllocClassType(sizeof(ActiveRegion__uType), "Fuse.Drawing.Tesselation.ActiveRegion", false, 0, 0, 3);

    type->__fp_ToString = (::uString*(*)(::uObject*))ActiveRegion__ToString;

    type->SetWeakRefs(
        "_mesh", offsetof(ActiveRegion, _mesh),
        "_upperEdge", offsetof(ActiveRegion, _upperEdge),
        "_upperEdgeDictNode", offsetof(ActiveRegion, _upperEdgeDictNode));

    type->SetFields(3,
        ::uNewField("_mesh", NULL, offsetof(ActiveRegion, _mesh), ::app::Fuse::Drawing::Tesselation::Mesh__typeof()),
        ::uNewField("_upperEdge", NULL, offsetof(ActiveRegion, _upperEdge), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewField("_upperEdgeDictNode", NULL, offsetof(ActiveRegion, _upperEdgeDictNode), ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof()));

    type->SetFunctions(20,
        ::uNewFunctionVoid("FixUpperEdge", ActiveRegion__FixUpperEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction("get_Above", ActiveRegion__get_Above, 0, false, ActiveRegion__typeof()),
        ::uNewFunction("get_Below", ActiveRegion__get_Below, 0, false, ActiveRegion__typeof()),
        ::uNewFunction("get_fixUpperEdge", ActiveRegion__get_fixUpperEdge, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsDirty", ActiveRegion__get_IsDirty, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsInside", ActiveRegion__get_IsInside, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Sentinel", ActiveRegion__get_Sentinel, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_TopLeft", ActiveRegion__get_TopLeft, 0, false, ActiveRegion__typeof()),
        ::uNewFunction("get_TopRight", ActiveRegion__get_TopRight, 0, false, ActiveRegion__typeof()),
        ::uNewFunction("get_UpperEdge", ActiveRegion__get_UpperEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction("get_UpperEdgeDictNode", ActiveRegion__get_UpperEdgeDictNode, 0, false, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof()),
        ::uNewFunction("get_WindingNumber", ActiveRegion__get_WindingNumber, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", ActiveRegion__New_1, 0, true, ActiveRegion__typeof(), ::app::Fuse::Drawing::Tesselation::Mesh__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_fixUpperEdge", ActiveRegion__set_fixUpperEdge, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsDirty", ActiveRegion__set_IsDirty, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsInside", ActiveRegion__set_IsInside, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Sentinel", ActiveRegion__set_Sentinel, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_UpperEdge", ActiveRegion__set_UpperEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("set_UpperEdgeDictNode", ActiveRegion__set_UpperEdgeDictNode, 0, false, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof()),
        ::uNewFunctionVoid("set_WindingNumber", ActiveRegion__set_WindingNumber, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void ActiveRegion___ObjInit(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel)
{
    __this->_mesh = mesh;
    __this->UpperEdge(upperEdge);
    __this->Sentinel(sentinel);
}

void ActiveRegion__FixUpperEdge(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* newEdge)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(__this->UpperEdge());
    __this->fixUpperEdge(false);
    __this->UpperEdge(newEdge);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(newEdge)->ActiveRegion(__this);
}

ActiveRegion* ActiveRegion__get_Above(ActiveRegion* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->UpperEdgeDictNode())->Next())->Key();
}

ActiveRegion* ActiveRegion__get_Below(ActiveRegion* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->UpperEdgeDictNode())->Prev())->Key();
}

bool ActiveRegion__get_fixUpperEdge(ActiveRegion* __this)
{
    return __this->_fixUpperEdge;
}

bool ActiveRegion__get_IsDirty(ActiveRegion* __this)
{
    return __this->_IsDirty;
}

bool ActiveRegion__get_IsInside(ActiveRegion* __this)
{
    return __this->_IsInside;
}

bool ActiveRegion__get_Sentinel(ActiveRegion* __this)
{
    return __this->_Sentinel;
}

ActiveRegion* ActiveRegion__get_TopLeft(ActiveRegion* __this)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* org = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->UpperEdge())->Origin();
    ActiveRegion* reg = __this;

    do
    {
        reg = ::uPtr< ActiveRegion*>(reg)->Above();
    }
    while (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(reg->UpperEdge())->Origin() == org);

    if (::uPtr< ActiveRegion*>(reg)->fixUpperEdge())
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ActiveRegion*>(::uPtr< ActiveRegion*>(reg)->Below())->UpperEdge())->Sym(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ActiveRegion*>(reg)->UpperEdge())->LeftNext());
        reg->FixUpperEdge(e);
        reg = ::uPtr< ActiveRegion*>(reg)->Above();
    }

    return reg;
}

ActiveRegion* ActiveRegion__get_TopRight(ActiveRegion* __this)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* dst = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->UpperEdge())->Destination();
    ActiveRegion* reg = __this;

    do
    {
        reg = ::uPtr< ActiveRegion*>(reg)->Above();
    }
    while (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(reg->UpperEdge())->Destination() == dst);

    return reg;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* ActiveRegion__get_UpperEdge(ActiveRegion* __this)
{
    return __this->_upperEdge;
}

::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* ActiveRegion__get_UpperEdgeDictNode(ActiveRegion* __this)
{
    return __this->_upperEdgeDictNode;
}

int ActiveRegion__get_WindingNumber(ActiveRegion* __this)
{
    return __this->_WindingNumber;
}

ActiveRegion* ActiveRegion__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel)
{
    ActiveRegion* inst = (ActiveRegion*)::uAllocObject(sizeof(ActiveRegion), ActiveRegion__typeof());
    inst->_ObjInit(mesh, upperEdge, sentinel);
    return inst;
}

void ActiveRegion__set_fixUpperEdge(ActiveRegion* __this, bool value)
{
    __this->_fixUpperEdge = value;
}

void ActiveRegion__set_IsDirty(ActiveRegion* __this, bool value)
{
    __this->_IsDirty = value;
}

void ActiveRegion__set_IsInside(ActiveRegion* __this, bool value)
{
    __this->_IsInside = value;
}

void ActiveRegion__set_Sentinel(ActiveRegion* __this, bool value)
{
    __this->_Sentinel = value;
}

void ActiveRegion__set_UpperEdge(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->_upperEdge = value;
}

void ActiveRegion__set_UpperEdgeDictNode(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value)
{
    __this->_upperEdgeDictNode = value;
}

void ActiveRegion__set_WindingNumber(ActiveRegion* __this, int value)
{
    __this->_WindingNumber = value;
}

::uString* ActiveRegion__ToString(ActiveRegion* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Region of "), (::uObject*)__this->UpperEdge()), __this->fixUpperEdge() ? ::uGetConstString(" NEEDS FIX") : ::uGetConstString(""));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EdgeLoopEnumerable__uType* EdgeLoopEnumerable__typeof()
{
    static ::uStaticStrong<EdgeLoopEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (EdgeLoopEnumerable__uType*)::uAllocClassType(sizeof(EdgeLoopEnumerable__uType), "Fuse.Drawing.Tesselation.EdgeLoopEnumerable", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof());
    type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::HalfEdge*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*, ::app::Fuse::Drawing::Tesselation::HalfEdge*))EdgeLoopEnumerable__GetNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), offsetof(EdgeLoopEnumerable__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", EdgeLoopEnumerable__New_1, 0, true, EdgeLoopEnumerable__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()));

    ::uRegisterType(type);
    return type;
}

void EdgeLoopEnumerable___ObjInit_1(EdgeLoopEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(__this, anEdge);
}

::app::Fuse::Drawing::Tesselation::HalfEdge* EdgeLoopEnumerable__GetNext(EdgeLoopEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext() == __this->_first) ? (::app::Fuse::Drawing::Tesselation::HalfEdge*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
}

EdgeLoopEnumerable* EdgeLoopEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    EdgeLoopEnumerable* inst = (EdgeLoopEnumerable*)::uAllocObject(sizeof(EdgeLoopEnumerable), EdgeLoopEnumerable__typeof());
    inst->_ObjInit_1(anEdge);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EdgesEnumerable__uType* EdgesEnumerable__typeof()
{
    static ::uStaticStrong<EdgesEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (EdgesEnumerable__uType*)::uAllocClassType(sizeof(EdgesEnumerable__uType), "Fuse.Drawing.Tesselation.EdgesEnumerable", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof());
    type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::HalfEdge*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*, ::app::Fuse::Drawing::Tesselation::HalfEdge*))EdgesEnumerable__GetNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), offsetof(EdgesEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_head", offsetof(EdgesEnumerable, _head));

    type->SetFields(1,
        ::uNewField("_head", NULL, offsetof(EdgesEnumerable, _head), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", EdgesEnumerable__New_1, 0, true, EdgesEnumerable__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()));

    ::uRegisterType(type);
    return type;
}

void EdgesEnumerable___ObjInit_1(EdgesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* head)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(__this, (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(head)->Next() == head) ? (::app::Fuse::Drawing::Tesselation::HalfEdge*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(head)->Next());
    __this->_head = head;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* EdgesEnumerable__GetNext(EdgesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* v)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(v)->Next() == __this->_head) ? (::app::Fuse::Drawing::Tesselation::HalfEdge*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(v)->Next();
}

EdgesEnumerable* EdgesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* head)
{
    EdgesEnumerable* inst = (EdgesEnumerable*)::uAllocObject(sizeof(EdgesEnumerable), EdgesEnumerable__typeof());
    inst->_ObjInit_1(head);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Face__uType* Face__typeof()
{
    static ::uStaticStrong<Face__uType*> type;
    if (type != NULL) return type;

    type = (Face__uType*)::uAllocClassType(sizeof(Face__uType), "Fuse.Drawing.Tesselation.Face", false, 0, 1, 2);

    type->SetStrongRefs(
        "_Next", offsetof(Face, _Next));

    type->SetWeakRefs(
        "_anEdge", offsetof(Face, _anEdge),
        "_prev", offsetof(Face, _prev));

    type->SetFields(2,
        ::uNewField("_anEdge", NULL, offsetof(Face, _anEdge), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewField("_prev", NULL, offsetof(Face, _prev), Face__typeof()));

    type->SetFunctions(15,
        ::uNewFunction("Coords", Face__Coords, 0, true, ::app::Uno::Float2__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction("get_AnEdge", Face__get_AnEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction("get_EdgeLoop", Face__get_EdgeLoop, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof()),
        ::uNewFunction("get_IsInside", Face__get_IsInside, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Next", Face__get_Next, 0, false, Face__typeof()),
        ::uNewFunction("get_Prev", Face__get_Prev, 0, false, Face__typeof()),
        ::uNewFunctionVoid("KillFace", Face__KillFace, 0, true, Face__typeof(), Face__typeof()),
        ::uNewFunction("MakeFace", Face__MakeFace, 0, true, Face__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), Face__typeof()),
        ::uNewFunction(".ctor", Face__New_1, 0, true, Face__typeof()),
        ::uNewFunctionVoid("set_AnEdge", Face__set_AnEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("set_IsInside", Face__set_IsInside, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Next", Face__set_Next, 0, false, Face__typeof()),
        ::uNewFunctionVoid("set_Prev", Face__set_Prev, 0, false, Face__typeof()),
        ::uNewFunction("ToContour", Face__ToContour, 0, false, ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewFunction("ToTriangle", Face__ToTriangle, 0, false, ::app::Uno::Geometry::Triangle2D__typeof()));

    ::uRegisterType(type);
    return type;
}

void Face___ObjInit(Face* __this)
{
}

::app::Uno::Float2 Face__Coords(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* edge)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(edge)->Origin())->Coords();
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Face__get_AnEdge(Face* __this)
{
    return __this->_anEdge;
}

::uObject* Face__get_EdgeLoop(Face* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::EdgeLoopEnumerable__New_1(NULL, __this->AnEdge());
}

bool Face__get_IsInside(Face* __this)
{
    return __this->_IsInside;
}

Face* Face__get_Next(Face* __this)
{
    return __this->_Next;
}

Face* Face__get_Prev(Face* __this)
{
    return __this->_prev;
}

void Face__KillFace(::uStatic* __this, Face* fDel, Face* newLface)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eStart = ::uPtr< Face*>(fDel)->AnEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = eStart;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left(newLface);
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
    }
    while (e != eStart);

    Face* fPrev = fDel->Prev();
    Face* fNext = fDel->Next();
    ::uPtr< Face*>(fNext)->Prev(fPrev);
    ::uPtr< Face*>(fPrev)->Next(fNext);
}

Face* Face__MakeFace(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Face* fNext)
{
    Face* fNew = Face__New_1(NULL);
    Face* fPrev = ::uPtr< Face*>(fNext)->Prev();
    ::uPtr< Face*>(fNew)->Prev(fPrev);
    ::uPtr< Face*>(fPrev)->Next(fNew);
    fNew->Next(fNext);
    fNext->Prev(fNew);
    fNew->AnEdge(eOrig);
    fNew->IsInside(fNext->IsInside());
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = eOrig;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left(fNew);
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
    }
    while (e != eOrig);

    return fNew;
}

Face* Face__New_1(::uStatic* __this)
{
    Face* inst = (Face*)::uAllocObject(sizeof(Face), Face__typeof());
    inst->_ObjInit();
    return inst;
}

void Face__set_AnEdge(Face* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->_anEdge = value;
}

void Face__set_IsInside(Face* __this, bool value)
{
    __this->_IsInside = value;
}

void Face__set_Next(Face* __this, Face* value)
{
    __this->_Next = value;
}

void Face__set_Prev(Face* __this, Face* value)
{
    __this->_prev = value;
}

::app::Fuse::Drawing::Contour* Face__ToContour(Face* __this)
{
    return ::app::Fuse::Drawing::Contour__New_2(NULL, true, ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Tesselation_HalfEdge__float2(NULL, __this->EdgeLoop(), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof(), (const void*)Face__Coords)));
}

::app::Uno::Geometry::Triangle2D* Face__ToTriangle(Face* __this)
{
    ::uObject* iter = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->EdgeLoop()));

    if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(iter)))
    {
        return NULL;
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* a = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(iter));

    if (!::app::Uno::Collections::IEnumerator::MoveNext(iter))
    {
        return NULL;
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* b = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(iter);

    if (!::app::Uno::Collections::IEnumerator::MoveNext(iter))
    {
        return NULL;
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* c = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(iter);

    if (::app::Uno::Collections::IEnumerator::MoveNext(iter))
    {
        return NULL;
    }

    return ::app::Uno::Geometry::Triangle2D__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(a)->Origin())->Coords(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(b)->Origin())->Coords(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(c)->Origin())->Coords());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FacesEnumerable__uType* FacesEnumerable__typeof()
{
    static ::uStaticStrong<FacesEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (FacesEnumerable__uType*)::uAllocClassType(sizeof(FacesEnumerable__uType), "Fuse.Drawing.Tesselation.FacesEnumerable", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__typeof());
    type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::Face*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face*, ::app::Fuse::Drawing::Tesselation::Face*))FacesEnumerable__GetNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof(), offsetof(FacesEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_head", offsetof(FacesEnumerable, _head));

    type->SetFields(1,
        ::uNewField("_head", NULL, offsetof(FacesEnumerable, _head), ::app::Fuse::Drawing::Tesselation::Face__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FacesEnumerable__New_1, 0, true, FacesEnumerable__typeof(), ::app::Fuse::Drawing::Tesselation::Face__typeof()));

    ::uRegisterType(type);
    return type;
}

void FacesEnumerable___ObjInit_1(FacesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Face* head)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(__this, (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(head)->Next() == head) ? (::app::Fuse::Drawing::Tesselation::Face*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(head)->Next());
    __this->_head = head;
}

::app::Fuse::Drawing::Tesselation::Face* FacesEnumerable__GetNext(FacesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Face* v)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(v)->Next() == __this->_head) ? (::app::Fuse::Drawing::Tesselation::Face*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(v)->Next();
}

FacesEnumerable* FacesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Face* head)
{
    FacesEnumerable* inst = (FacesEnumerable*)::uAllocObject(sizeof(FacesEnumerable), FacesEnumerable__typeof());
    inst->_ObjInit_1(head);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Geom__uType* Geom__typeof()
{
    static ::uStaticStrong<Geom__uType*> type;
    if (type != NULL) return type;

    type = (Geom__uType*)::uAllocClassType(sizeof(Geom__uType), "Fuse.Drawing.Tesselation.Geom");

    type->SetFunctions(10,
        ::uNewFunction("EdgeEval", Geom__EdgeEval, 0, true, ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("EdgeSign", Geom__EdgeSign, 0, true, ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("Interpolate", Geom__Interpolate, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Intersect", Geom__Intersect, 0, true, ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunctionVoid("Swap", Geom__Swap, 0, true, ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("TransEval", Geom__TransEval, 0, true, ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("TransLeq", Geom__TransLeq, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("TransSign", Geom__TransSign, 0, true, ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("VertCCW", Geom__VertCCW, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("VertL1dist", Geom__VertL1dist, 0, true, ::app::Uno::Double__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()));

    ::uRegisterType(type);
    return type;
}

float Geom__EdgeEval(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    double gapL = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S;
    double gapR = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S - v->S;
    double gap = gapL + gapR;

    if (gap > 9.9999997473787516e-06)
    {
        if (gapL < gapR)
        {
            return (float)((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T) * (gapL / (gapL + gapR))));
        }
        else
        {
            return (float)((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T) * (gapR / (gapL + gapR))));
        }
    }

    return 0.0f;
}

float Geom__EdgeSign(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    double gapL = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S;
    double gapR = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S - v->S;
    double gap = gapL + gapR;

    if (gap > 9.9999997473787516e-06)
    {
        return (float)(((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T) * gapL) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T) * gapR));
    }

    return 0.0f;
}

double Geom__Interpolate(::uStatic* __this, double ai, double x, double bi, double y)
{
    double a = ::app::Uno::Math__Max(NULL, 0.0, ai);
    double b = ::app::Uno::Math__Max(NULL, 0.0, bi);
    return (a <= b) ? ((::app::Uno::Math__Abs(NULL, b) <= 9.9999997473787516e-06) ? ((x + y) / 2.0) : (x + ((y - x) * (a / (a + b))))) : (y + ((x - y) * (b / (a + b))));
}

::app::Fuse::Drawing::Tesselation::Vertex* Geom__Intersect(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* o1p, ::app::Fuse::Drawing::Tesselation::Vertex* d1p, ::app::Fuse::Drawing::Tesselation::Vertex* o2p, ::app::Fuse::Drawing::Tesselation::Vertex* d2p)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* o1 = o1p;
    ::app::Fuse::Drawing::Tesselation::Vertex* d1 = d1p;
    ::app::Fuse::Drawing::Tesselation::Vertex* o2 = o2p;
    ::app::Fuse::Drawing::Tesselation::Vertex* d2 = d2p;
    ::app::Fuse::Drawing::Tesselation::Vertex* v = ::app::Fuse::Drawing::Tesselation::Vertex__New_1(NULL);
    float z1 = float();
    float z2 = float();

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o1)->VertLeq(d1))
    {
        Geom__Swap(NULL, &o1, &d1);
    }

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->VertLeq(d2))
    {
        Geom__Swap(NULL, &o2, &d2);
    }

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o1)->VertLeq(o2))
    {
        Geom__Swap(NULL, &o1, &o2);
        Geom__Swap(NULL, &d1, &d2);
    }

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->VertLeq(d1))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S = (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->S + ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->S) / 2.0;
    }
    else if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->VertLeq(d2))
    {
        z1 = Geom__EdgeEval(NULL, o1, o2, d1);
        z2 = Geom__EdgeEval(NULL, o2, d1, d2);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S = Geom__Interpolate(NULL, (double)z1, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->S, (double)z2, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->S);
    }
    else
    {
        z1 = Geom__EdgeSign(NULL, o1, o2, d1);
        z2 = -Geom__EdgeSign(NULL, o1, d2, d1);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S = Geom__Interpolate(NULL, (double)z1, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->S, (double)z2, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d2)->S);
    }

    if (!Geom__TransLeq(NULL, o1, d1))
    {
        Geom__Swap(NULL, &o1, &d1);
    }

    if (!Geom__TransLeq(NULL, o2, d2))
    {
        Geom__Swap(NULL, &o2, &d2);
    }

    if (!Geom__TransLeq(NULL, o1, o2))
    {
        Geom__Swap(NULL, &o1, &o2);
        Geom__Swap(NULL, &d1, &d2);
    }

    if (!Geom__TransLeq(NULL, o2, d1))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T = (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->T + ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->T) / 2.0;
    }
    else if (Geom__TransLeq(NULL, d1, d2))
    {
        z1 = Geom__TransEval(NULL, o1, o2, d1);
        z2 = Geom__TransEval(NULL, o2, d1, d2);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T = Geom__Interpolate(NULL, (double)z1, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->T, (double)z2, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->T);
    }
    else
    {
        z1 = Geom__TransSign(NULL, o1, o2, d1);
        z2 = -Geom__TransSign(NULL, o1, d2, d1);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T = Geom__Interpolate(NULL, (double)z1, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->T, (double)z2, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d2)->T);
    }

    return v;
}

void Geom__Swap(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex** a, ::app::Fuse::Drawing::Tesselation::Vertex** b)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* tmp = *a;
    *a = *b;
    *b = tmp;
}

float Geom__TransEval(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    double gapL = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T;
    double gapR = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T - v->T;

    if ((gapL + gapR) > 9.9999997473787516e-06)
    {
        if (gapL < gapR)
        {
            return (float)((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S) * (gapL / (gapL + gapR))));
        }
        else
        {
            return (float)((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S) * (gapR / (gapL + gapR))));
        }
    }

    return 0.0f;
}

bool Geom__TransLeq(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T < ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T) || ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T == ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T) && (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S <= ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S));
}

float Geom__TransSign(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    double gapL = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T;
    double gapR = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T - v->T;

    if ((gapL + gapR) > 9.9999997473787516e-06)
    {
        return (float)(((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S) * gapL) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S) * gapR));
    }

    return 0.0f;
}

bool Geom__VertCCW(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    return (((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S * (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T)) + (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S * (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T))) + (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S * (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T))) >= 0.0;
}

double Geom__VertL1dist(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v)
{
    return ::app::Uno::Math__Abs(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S) + ::app::Uno::Math__Abs(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HalfEdge__uType* HalfEdge__typeof()
{
    static ::uStaticStrong<HalfEdge__uType*> type;
    if (type != NULL) return type;

    type = (HalfEdge__uType*)::uAllocClassType(sizeof(HalfEdge__uType), "Fuse.Drawing.Tesselation.HalfEdge", false, 0, 7, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))HalfEdge__ToString;

    type->SetStrongRefs(
        "_ActiveRegion", offsetof(HalfEdge, _ActiveRegion),
        "_Left", offsetof(HalfEdge, _Left),
        "_LeftNext", offsetof(HalfEdge, _LeftNext),
        "_Next", offsetof(HalfEdge, _Next),
        "_Origin", offsetof(HalfEdge, _Origin),
        "_OriginNext", offsetof(HalfEdge, _OriginNext),
        "_Sym", offsetof(HalfEdge, _Sym));

    type->SetFields(1,
        ::uNewField("_isFirst", NULL, offsetof(HalfEdge, _isFirst), ::app::Uno::Bool__typeof()));

    type->SetFunctions(37,
        ::uNewFunction("AddEdgeVertex", HalfEdge__AddEdgeVertex, 0, false, HalfEdge__typeof()),
        ::uNewFunctionVoid("AddWinding", HalfEdge__AddWinding, 0, true, HalfEdge__typeof(), HalfEdge__typeof()),
        ::uNewFunctionVoid("ExchangeOriginNextAkaSplice", HalfEdge__ExchangeOriginNextAkaSplice, 0, true, HalfEdge__typeof(), HalfEdge__typeof()),
        ::uNewFunction("get_ActiveRegion", HalfEdge__get_ActiveRegion, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunction("get_Destination", HalfEdge__get_Destination, 0, false, ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("get_DestinationNext", HalfEdge__get_DestinationNext, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_DestinationPrev", HalfEdge__get_DestinationPrev, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_GoesLeft", HalfEdge__get_GoesLeft, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_GoesRight", HalfEdge__get_GoesRight, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsBoundaryEdge", HalfEdge__get_IsBoundaryEdge, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsFirst", HalfEdge__get_IsFirst, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Left", HalfEdge__get_Left, 0, false, ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewFunction("get_LeftNext", HalfEdge__get_LeftNext, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_LeftPrev", HalfEdge__get_LeftPrev, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_Next", HalfEdge__get_Next, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_Origin", HalfEdge__get_Origin, 0, false, ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("get_OriginNext", HalfEdge__get_OriginNext, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_OriginPrev", HalfEdge__get_OriginPrev, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_Right", HalfEdge__get_Right, 0, false, ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewFunction("get_RightNext", HalfEdge__get_RightNext, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_RightPrev", HalfEdge__get_RightPrev, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_Sym", HalfEdge__get_Sym, 0, false, HalfEdge__typeof()),
        ::uNewFunction("get_Winding", HalfEdge__get_Winding, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("KillEdge", HalfEdge__KillEdge, 0, true, HalfEdge__typeof()),
        ::uNewFunction("MakeEdge", HalfEdge__MakeEdge, 0, true, HalfEdge__typeof(), HalfEdge__typeof()),
        ::uNewFunction(".ctor", HalfEdge__New_1, 0, true, HalfEdge__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_ActiveRegion", HalfEdge__set_ActiveRegion, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunctionVoid("set_Destination", HalfEdge__set_Destination, 0, false, ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunctionVoid("set_Left", HalfEdge__set_Left, 0, false, ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewFunctionVoid("set_LeftNext", HalfEdge__set_LeftNext, 0, false, HalfEdge__typeof()),
        ::uNewFunctionVoid("set_Next", HalfEdge__set_Next, 0, false, HalfEdge__typeof()),
        ::uNewFunctionVoid("set_Origin", HalfEdge__set_Origin, 0, false, ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunctionVoid("set_OriginNext", HalfEdge__set_OriginNext, 0, false, HalfEdge__typeof()),
        ::uNewFunctionVoid("set_Right", HalfEdge__set_Right, 0, false, ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewFunctionVoid("set_Sym", HalfEdge__set_Sym, 0, false, HalfEdge__typeof()),
        ::uNewFunctionVoid("set_Winding", HalfEdge__set_Winding, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Split", HalfEdge__Split, 0, false, HalfEdge__typeof()));

    ::uRegisterType(type);
    return type;
}

void HalfEdge___ObjInit(HalfEdge* __this, bool isFirst)
{
    __this->_isFirst = isFirst;
}

HalfEdge* HalfEdge__AddEdgeVertex(HalfEdge* __this)
{
    ::app::Fuse::Drawing::Tesselation::Face* ind_123;
    HalfEdge* newEdge = HalfEdge__MakeEdge(NULL, __this);
    HalfEdge* eNewSym = ::uPtr< HalfEdge*>(newEdge)->Sym();
    HalfEdge__ExchangeOriginNextAkaSplice(NULL, newEdge, __this->LeftNext());
    newEdge->Origin(__this->Destination());
    ::app::Fuse::Drawing::Tesselation::Vertex__MakeVertex(NULL, eNewSym, newEdge->Origin());
    newEdge->Left((ind_123 = __this->Left(), ::uPtr< HalfEdge*>(eNewSym)->Left(ind_123), ind_123));
    return newEdge;
}

void HalfEdge__AddWinding(::uStatic* __this, HalfEdge* eDst, HalfEdge* eSrc)
{
    ::uPtr< HalfEdge*>(eDst)->Winding(::uPtr< HalfEdge*>(eDst)->Winding() + ::uPtr< HalfEdge*>(eSrc)->Winding());
    ::uPtr< HalfEdge*>(eDst->Sym())->Winding(::uPtr< HalfEdge*>(eDst->Sym())->Winding() + ::uPtr< HalfEdge*>(eSrc->Sym())->Winding());
}

void HalfEdge__ExchangeOriginNextAkaSplice(::uStatic* __this, HalfEdge* a, HalfEdge* b)
{
    HalfEdge* aOnext = ::uPtr< HalfEdge*>(a)->OriginNext();
    HalfEdge* bOnext = ::uPtr< HalfEdge*>(b)->OriginNext();
    ::uPtr< HalfEdge*>(::uPtr< HalfEdge*>(aOnext)->Sym())->LeftNext(b);
    ::uPtr< HalfEdge*>(::uPtr< HalfEdge*>(bOnext)->Sym())->LeftNext(a);
    a->OriginNext(bOnext);
    b->OriginNext(aOnext);
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* HalfEdge__get_ActiveRegion(HalfEdge* __this)
{
    return __this->_ActiveRegion;
}

::app::Fuse::Drawing::Tesselation::Vertex* HalfEdge__get_Destination(HalfEdge* __this)
{
    return ::uPtr< HalfEdge*>(__this->Sym())->Origin();
}

HalfEdge* HalfEdge__get_DestinationNext(HalfEdge* __this)
{
    return ::uPtr< HalfEdge*>(__this->RightPrev())->Sym();
}

HalfEdge* HalfEdge__get_DestinationPrev(HalfEdge* __this)
{
    return ::uPtr< HalfEdge*>(__this->LeftNext())->Sym();
}

bool HalfEdge__get_GoesLeft(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->Destination())->VertLeq(__this->Origin());
}

bool HalfEdge__get_GoesRight(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->Origin())->VertLeq(__this->Destination());
}

bool HalfEdge__get_IsBoundaryEdge(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->Right())->IsInside() != ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->Left())->IsInside();
}

bool HalfEdge__get_IsFirst(HalfEdge* __this)
{
    return __this->_isFirst;
}

::app::Fuse::Drawing::Tesselation::Face* HalfEdge__get_Left(HalfEdge* __this)
{
    return __this->_Left;
}

HalfEdge* HalfEdge__get_LeftNext(HalfEdge* __this)
{
    return __this->_LeftNext;
}

HalfEdge* HalfEdge__get_LeftPrev(HalfEdge* __this)
{
    return ::uPtr< HalfEdge*>(__this->OriginNext())->Sym();
}

HalfEdge* HalfEdge__get_Next(HalfEdge* __this)
{
    return __this->_Next;
}

::app::Fuse::Drawing::Tesselation::Vertex* HalfEdge__get_Origin(HalfEdge* __this)
{
    return __this->_Origin;
}

HalfEdge* HalfEdge__get_OriginNext(HalfEdge* __this)
{
    return __this->_OriginNext;
}

HalfEdge* HalfEdge__get_OriginPrev(HalfEdge* __this)
{
    return ::uPtr< HalfEdge*>(__this->Sym())->LeftNext();
}

::app::Fuse::Drawing::Tesselation::Face* HalfEdge__get_Right(HalfEdge* __this)
{
    return ::uPtr< HalfEdge*>(__this->Sym())->Left();
}

HalfEdge* HalfEdge__get_RightNext(HalfEdge* __this)
{
    return ::uPtr< HalfEdge*>(__this->OriginPrev())->Sym();
}

HalfEdge* HalfEdge__get_RightPrev(HalfEdge* __this)
{
    return ::uPtr< HalfEdge*>(__this->Sym())->OriginNext();
}

HalfEdge* HalfEdge__get_Sym(HalfEdge* __this)
{
    return __this->_Sym;
}

int HalfEdge__get_Winding(HalfEdge* __this)
{
    return __this->_Winding;
}

void HalfEdge__KillEdge(::uStatic* __this, HalfEdge* eDel)
{
    if (::uPtr< HalfEdge*>(::uPtr< HalfEdge*>(eDel)->Sym())->_isFirst)
    {
        eDel = ::uPtr< HalfEdge*>(eDel)->Sym();
    }

    HalfEdge* eNext = ::uPtr< HalfEdge*>(eDel)->Next();
    HalfEdge* ePrev = ::uPtr< HalfEdge*>(eDel->Sym())->Next();
    ::uPtr< HalfEdge*>(::uPtr< HalfEdge*>(eNext)->Sym())->Next(ePrev);
    ::uPtr< HalfEdge*>(::uPtr< HalfEdge*>(ePrev)->Sym())->Next(eNext);
    ::uPtr< HalfEdge*>(eDel->Sym())->Sym(NULL);
    ::uPtr< HalfEdge*>(eDel->Sym())->Next(NULL);
    ::uPtr< HalfEdge*>(eDel->Sym())->Origin(NULL);
    ::uPtr< HalfEdge*>(eDel->Sym())->OriginNext(NULL);
    ::uPtr< HalfEdge*>(eDel->Sym())->Left(NULL);
    ::uPtr< HalfEdge*>(eDel->Sym())->LeftNext(NULL);
    eDel->Sym(NULL);
    eDel->Next(NULL);
    eDel->Origin(NULL);
    eDel->OriginNext(NULL);
    eDel->Left(NULL);
    eDel->LeftNext(NULL);
}

HalfEdge* HalfEdge__MakeEdge(::uStatic* __this, HalfEdge* eNext)
{
    HalfEdge* e = HalfEdge__New_1(NULL, true);
    HalfEdge* eSym = HalfEdge__New_1(NULL, false);

    if (::uPtr< HalfEdge*>(::uPtr< HalfEdge*>(eNext)->Sym())->_isFirst)
    {
        eNext = ::uPtr< HalfEdge*>(eNext)->Sym();
    }

    HalfEdge* ePrev = ::uPtr< HalfEdge*>(::uPtr< HalfEdge*>(eNext)->Sym())->Next();
    ::uPtr< HalfEdge*>(eSym)->Next(ePrev);
    ::uPtr< HalfEdge*>(::uPtr< HalfEdge*>(ePrev)->Sym())->Next(e);
    ::uPtr< HalfEdge*>(e)->Next(eNext);
    ::uPtr< HalfEdge*>(eNext->Sym())->Next(eSym);
    e->Sym(eSym);
    e->OriginNext(e);
    e->LeftNext(eSym);
    e->Origin(NULL);
    e->Left(NULL);
    e->Winding(0);
    e->ActiveRegion(NULL);
    eSym->Sym(e);
    eSym->OriginNext(eSym);
    eSym->LeftNext(e);
    eSym->Origin(NULL);
    eSym->Left(NULL);
    eSym->Winding(0);
    eSym->ActiveRegion(NULL);
    return e;
}

HalfEdge* HalfEdge__New_1(::uStatic* __this, bool isFirst)
{
    HalfEdge* inst = (HalfEdge*)::uAllocObject(sizeof(HalfEdge), HalfEdge__typeof());
    inst->_ObjInit(isFirst);
    return inst;
}

void HalfEdge__set_ActiveRegion(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* value)
{
    __this->_ActiveRegion = value;
}

void HalfEdge__set_Destination(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Vertex* value)
{
    ::uPtr< HalfEdge*>(__this->Sym())->Origin(value);
}

void HalfEdge__set_Left(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Face* value)
{
    __this->_Left = value;
}

void HalfEdge__set_LeftNext(HalfEdge* __this, HalfEdge* value)
{
    __this->_LeftNext = value;
}

void HalfEdge__set_Next(HalfEdge* __this, HalfEdge* value)
{
    __this->_Next = value;
}

void HalfEdge__set_Origin(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Vertex* value)
{
    __this->_Origin = value;
}

void HalfEdge__set_OriginNext(HalfEdge* __this, HalfEdge* value)
{
    __this->_OriginNext = value;
}

void HalfEdge__set_Right(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Face* value)
{
    ::uPtr< HalfEdge*>(__this->Sym())->Left(value);
}

void HalfEdge__set_Sym(HalfEdge* __this, HalfEdge* value)
{
    __this->_Sym = value;
}

void HalfEdge__set_Winding(HalfEdge* __this, int value)
{
    __this->_Winding = value;
}

HalfEdge* HalfEdge__Split(HalfEdge* __this)
{
    HalfEdge* tempHalfEdge = __this->AddEdgeVertex();
    HalfEdge* newEdge = ::uPtr< HalfEdge*>(tempHalfEdge)->Sym();
    HalfEdge__ExchangeOriginNextAkaSplice(NULL, __this->Sym(), ::uPtr< HalfEdge*>(__this->Sym())->OriginPrev());
    HalfEdge__ExchangeOriginNextAkaSplice(NULL, __this->Sym(), newEdge);
    __this->Destination(::uPtr< HalfEdge*>(newEdge)->Origin());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(newEdge->Destination())->AnEdge(newEdge->Sym());
    newEdge->Right(__this->Right());
    newEdge->Winding(__this->Winding());
    ::uPtr< HalfEdge*>(newEdge->Sym())->Winding(::uPtr< HalfEdge*>(__this->Sym())->Winding());
    return newEdge;
}

::uString* HalfEdge__ToString(HalfEdge* __this)
{
    return __this->GoesLeft() ? ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Left edge "), (::uObject*)__this->Destination()), ::uGetConstString(" <= ")), (::uObject*)__this->Origin()) : ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Right edge "), (::uObject*)__this->Origin()), ::uGetConstString(" => ")), (::uObject*)__this->Destination());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Mesh__uType* Mesh__typeof()
{
    static ::uStaticStrong<Mesh__uType*> type;
    if (type != NULL) return type;

    type = (Mesh__uType*)::uAllocClassType(sizeof(Mesh__uType), "Fuse.Drawing.Tesselation.Mesh", false, 0, 4, 0);

    type->SetStrongRefs(
        "_edgesHeadSym", offsetof(Mesh, _edgesHeadSym),
        "EdgesHead", offsetof(Mesh, EdgesHead),
        "FacesHead", offsetof(Mesh, FacesHead),
        "VerticesHead", offsetof(Mesh, VerticesHead));

    type->SetFields(4,
        ::uNewField("_edgesHeadSym", NULL, offsetof(Mesh, _edgesHeadSym), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewField("EdgesHead", NULL, offsetof(Mesh, EdgesHead), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewField("FacesHead", NULL, offsetof(Mesh, FacesHead), ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewField("VerticesHead", NULL, offsetof(Mesh, VerticesHead), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()));

    type->SetFunctions(24,
        ::uNewFunctionVoid("Add", Mesh__Add, 0, false, Mesh__typeof()),
        ::uNewFunctionVoid("CheckConsistency", Mesh__CheckConsistency, 0, false),
        ::uNewFunctionVoid("ComputeInterior", Mesh__ComputeInterior, 0, false, ::app::Uno::Predicate__int__typeof()),
        ::uNewFunction("Connect", Mesh__Connect, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction("CreateContour", Mesh__CreateContour, 0, false, ::app::Fuse::Drawing::Contour__typeof(), ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewFunctionVoid("Delete", Mesh__Delete, 0, false),
        ::uNewFunctionVoid("DeleteEdge", Mesh__DeleteEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("DeleteInternalEdges", Mesh__DeleteInternalEdges, 0, false),
        ::uNewFunctionVoid("DiscardExterior", Mesh__DiscardExterior, 0, false),
        ::uNewFunctionVoid("Dispose", Mesh__Dispose, 0, false),
        ::uNewFunction("get_Edges", Mesh__get_Edges, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof()),
        ::uNewFunction("get_Faces", Mesh__get_Faces, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof()),
        ::uNewFunction("get_InteriorFaces", Mesh__get_InteriorFaces, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof()),
        ::uNewFunction("get_Vertices", Mesh__get_Vertices, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof()),
        ::uNewFunction("GetContours", Mesh__GetContours, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("IsInside", Mesh__IsInside, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewFunction("MakeEdge", Mesh__MakeEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction(".ctor", Mesh__New_1, 0, true, Mesh__typeof()),
        ::uNewFunctionVoid("SetWindingNumber", Mesh__SetWindingNumber, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Splice", Mesh__Splice, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction("SplitEdge", Mesh__SplitEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("TessellateInterior", Mesh__TessellateInterior, 0, false),
        ::uNewFunctionVoid("TessellateMonoRegion", Mesh__TessellateMonoRegion, 0, false, ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewFunctionVoid("ZapFace", Mesh__ZapFace, 0, false, ::app::Fuse::Drawing::Tesselation::Face__typeof()));

    ::uRegisterType(type);
    return type;
}

void Mesh___ObjInit(Mesh* __this)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* ind_129;
    ::app::Fuse::Drawing::Tesselation::Face* ind_130;
    __this->VerticesHead = ::app::Fuse::Drawing::Tesselation::Vertex__New_1(NULL);
    __this->FacesHead = ::app::Fuse::Drawing::Tesselation::Face__New_1(NULL);
    __this->EdgesHead = ::app::Fuse::Drawing::Tesselation::HalfEdge__New_1(NULL, true);
    __this->_edgesHeadSym = ::app::Fuse::Drawing::Tesselation::HalfEdge__New_1(NULL, false);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->VerticesHead)->Next((ind_129 = __this->VerticesHead, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->VerticesHead)->Prev(ind_129), ind_129));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->VerticesHead)->AnEdge(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->Next((ind_130 = __this->FacesHead, ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->Prev(ind_130), ind_130));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->AnEdge(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->IsInside(false);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Next(__this->EdgesHead);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Sym(__this->_edgesHeadSym);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->OriginNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->LeftNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Origin(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Left(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Winding(0);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->ActiveRegion(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Next(__this->_edgesHeadSym);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Sym(__this->EdgesHead);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->OriginNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->LeftNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Origin(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Left(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Winding(0);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->ActiveRegion(NULL);
}

void Mesh__Add(Mesh* __this, Mesh* mesh2)
{
    Mesh* mesh1 = __this;
    ::app::Fuse::Drawing::Tesselation::Face* f1 = mesh1->FacesHead;
    ::app::Fuse::Drawing::Tesselation::Vertex* v1 = mesh1->VerticesHead;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e1 = mesh1->EdgesHead;
    ::app::Fuse::Drawing::Tesselation::Face* f2 = ::uPtr< Mesh*>(mesh2)->FacesHead;
    ::app::Fuse::Drawing::Tesselation::Vertex* v2 = mesh2->VerticesHead;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e2 = mesh2->EdgesHead;

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f2)->Next() != f2)
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f1)->Prev())->Next(::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f2)->Next());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f2->Next())->Prev(f1->Prev());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f2->Prev())->Next(f1);
        f1->Prev(f2->Prev());
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v2)->Next() != v2)
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v1)->Prev())->Next(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v2)->Next());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v2->Next())->Prev(v1->Prev());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v2->Prev())->Next(v1);
        v1->Prev(v2->Prev());
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Next() != e2)
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Sym())->Next())->Sym())->Next(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Next());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2->Next())->Sym())->Next(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1->Sym())->Next());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2->Sym())->Next())->Sym())->Next(e1);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1->Sym())->Next(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2->Sym())->Next());
    }
}

void Mesh__CheckConsistency(Mesh* __this)
{
}

void Mesh__ComputeInterior(Mesh* __this, ::uDelegate* windingRule)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(::app::Fuse::Drawing::Tesselation::Sweep__New_1(NULL, __this, windingRule))->ComputeInterior();
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__Connect(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDst)
{
    ::app::Fuse::Drawing::Tesselation::Face* ind_128;
    bool joiningLoops = false;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNew = ::app::Fuse::Drawing::Tesselation::HalfEdge__MakeEdge(NULL, eOrg);
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNewSym = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNew)->Sym();

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Left() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left())
    {
        joiningLoops = true;
        ::app::Fuse::Drawing::Tesselation::Face__KillFace(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Left(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left());
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eNew, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->LeftNext());
    ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eNewSym, eDst);
    eNew->Origin(eOrg->Destination());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNewSym)->Origin(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Origin());
    eNew->Left((ind_128 = eOrg->Left(), eNewSym->Left(ind_128), ind_128));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(eOrg->Left())->AnEdge(eNewSym);

    if (!joiningLoops)
    {
        ::app::Fuse::Drawing::Tesselation::Face__MakeFace(NULL, eNew, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left());
    }

    return eNew;
}

::app::Fuse::Drawing::Contour* Mesh__CreateContour(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* f)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->ToContour();
}

void Mesh__Delete(Mesh* __this)
{
    ::app::Fuse::Drawing::Tesselation::Face* head = __this->FacesHead;

    while (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(head)->Next() != head)
    {
        __this->ZapFace(::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(head)->Next());
    }
}

void Mesh__DeleteEdge(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDel)
{
    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Origin() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("eDel.Origin was null"), ::uBox(::app::Uno::Float2__typeof(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Destination())->Coords()))));
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Destination() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("eDel.Destination was null "), ::uBox(::app::Uno::Float2__typeof(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Origin())->Coords()))));
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* eDelSym = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Sym();
    bool joiningLoops = false;

    if (eDel->Left() != eDel->Right())
    {
        joiningLoops = true;
        ::app::Fuse::Drawing::Tesselation::Face__KillFace(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Left(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Right());
    }

    if (eDel->OriginNext() == eDel)
    {
        ::app::Fuse::Drawing::Tesselation::Vertex__KillVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Origin(), NULL);
    }
    else
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Right())->AnEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->OriginPrev());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eDel->Origin())->AnEdge(eDel->OriginNext());
        ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eDel, eDel->OriginPrev());

        if (!joiningLoops)
        {
            ::app::Fuse::Drawing::Tesselation::Face__MakeFace(NULL, eDel, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Left());
        }
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDelSym)->OriginNext() == eDelSym)
    {
        ::app::Fuse::Drawing::Tesselation::Vertex__KillVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDelSym)->Origin(), NULL);
        ::app::Fuse::Drawing::Tesselation::Face__KillFace(NULL, eDelSym->Left(), NULL);
    }
    else
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Left())->AnEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDelSym)->OriginPrev());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eDelSym->Origin())->AnEdge(eDelSym->OriginNext());
        ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eDelSym, eDelSym->OriginPrev());
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge__KillEdge(NULL, eDel);
}

void Mesh__DeleteInternalEdges(Mesh* __this)
{
    for (::uObject* enum_126 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->Edges())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_126));

        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->IsBoundaryEdge())
        {
            __this->DeleteEdge(e);
        }
    }
}

void Mesh__DiscardExterior(Mesh* __this)
{
    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->Faces())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Drawing::Tesselation::Face* f = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(enum_124));

        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->IsInside())
        {
            __this->ZapFace(f);
        }
    }
}

void Mesh__Dispose(Mesh* __this)
{
    for (::uObject* enum_127 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->Edges())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* edge = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_127));
        ::app::Fuse::Drawing::Tesselation::HalfEdge__KillEdge(NULL, edge);
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge__KillEdge(NULL, __this->EdgesHead);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->VerticesHead)->Next(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->Next(NULL);
}

::uObject* Mesh__get_Edges(Mesh* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::EdgesEnumerable__New_1(NULL, __this->EdgesHead);
}

::uObject* Mesh__get_Faces(Mesh* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::FacesEnumerable__New_1(NULL, __this->FacesHead);
}

::uObject* Mesh__get_InteriorFaces(Mesh* __this)
{
    return ::app::Uno::Collections::EnumerableExtensions__Where__Fuse_Drawing_Tesselation_Face(NULL, __this->Faces(), ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Drawing_Tesselation_Face__typeof(), (const void*)Mesh__IsInside, __this));
}

::uObject* Mesh__get_Vertices(Mesh* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::VerticesEnumerable__New_1(NULL, __this->VerticesHead);
}

::uObject* Mesh__GetContours(Mesh* __this)
{
    return ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour(NULL, __this->InteriorFaces(), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof(), (const void*)Mesh__CreateContour, __this));
}

bool Mesh__IsInside(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* face)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(face)->IsInside();
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__MakeEdge(Mesh* __this)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::app::Fuse::Drawing::Tesselation::HalfEdge__MakeEdge(NULL, __this->EdgesHead);
    ::app::Fuse::Drawing::Tesselation::Vertex__MakeVertex(NULL, e, __this->VerticesHead);
    ::app::Fuse::Drawing::Tesselation::Vertex__MakeVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym(), __this->VerticesHead);
    ::app::Fuse::Drawing::Tesselation::Face__MakeFace(NULL, e, __this->FacesHead);
    return e;
}

Mesh* Mesh__New_1(::uStatic* __this)
{
    Mesh* inst = (Mesh*)::uAllocObject(sizeof(Mesh), Mesh__typeof());
    inst->_ObjInit();
    return inst;
}

void Mesh__SetWindingNumber(Mesh* __this, int value)
{
    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->Edges())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_125));
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Winding(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->IsBoundaryEdge() ? (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left())->IsInside() ? value : -value) : 0);
    }
}

void Mesh__Splice(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDst)
{
    bool joiningLoops = false;
    bool joiningVertices = false;

    if (eOrg == eDst)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Origin())
    {
        joiningVertices = true;
        ::app::Fuse::Drawing::Tesselation::Vertex__KillVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Origin());
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Left() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left())
    {
        joiningLoops = true;
        ::app::Fuse::Drawing::Tesselation::Face__KillFace(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Left(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left());
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eDst, eOrg);

    if (!joiningVertices)
    {
        ::app::Fuse::Drawing::Tesselation::Vertex__MakeVertex(NULL, eDst, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Origin());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eOrg->Origin())->AnEdge(eOrg);
    }

    if (!joiningLoops)
    {
        ::app::Fuse::Drawing::Tesselation::Face__MakeFace(NULL, eDst, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(eOrg->Left())->AnEdge(eOrg);
    }
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__SplitEdge(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Split();
}

void Mesh__TessellateInterior(Mesh* __this)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->Faces())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Tesselation::Face* f = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(enum_123));

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->IsInside())
        {
            __this->TessellateMonoRegion(f);
        }
    }
}

void Mesh__TessellateMonoRegion(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* face)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* up = ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(face)->AnEdge();

    while (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Destination())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Origin()))
    {
        up = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftPrev();
    }

    while (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(up->Origin())->VertLeq(up->Destination()))
    {
        up = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftNext();
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* lo = up->LeftPrev();

    while (up->LeftNext() != lo)
    {
        if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Destination())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->Origin()))
        {
            while ((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext() != up) && (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext())->GoesLeft() || (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext())->Destination()) <= 0.0f)))
            {
                lo = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext(), lo))->Sym();
            }

            lo = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftPrev();
        }
        else
        {
            while ((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext() != up) && (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftPrev())->GoesRight() || (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftPrev())->Origin()) >= 0.0f)))
            {
                up = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Connect(up, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftPrev()))->Sym();
            }

            up = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftNext();
        }
    }

    while (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext())->LeftNext() != up)
    {
        lo = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext(), lo))->Sym();
    }
}

void Mesh__ZapFace(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* fZap)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eStart = ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fZap)->AnEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eStart)->LeftNext();

    do
    {
        e = eNext;
        eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
        e->Left(NULL);

        if (e->Right() == NULL)
        {
            if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext() == e)
            {
                ::app::Fuse::Drawing::Tesselation::Vertex__KillVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin(), NULL);
            }
            else
            {
                ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin())->AnEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext());
                ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, e, e->OriginPrev());
            }

            ::app::Fuse::Drawing::Tesselation::HalfEdge* eSym = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym();

            if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eSym)->OriginNext() == eSym)
            {
                ::app::Fuse::Drawing::Tesselation::Vertex__KillVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eSym)->Origin(), NULL);
            }
            else
            {
                ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eSym)->Origin())->AnEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eSym)->OriginNext());
                ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eSym, eSym->OriginPrev());
            }

            ::app::Fuse::Drawing::Tesselation::HalfEdge__KillEdge(NULL, e);
        }
    }
    while (e != eStart);

    ::app::Fuse::Drawing::Tesselation::Face* fPrev = fZap->Prev();
    ::app::Fuse::Drawing::Tesselation::Face* fNext = fZap->Next();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fNext)->Prev(fPrev);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fPrev)->Next(fNext);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MeshBuilder__uType* MeshBuilder__typeof()
{
    static ::uStaticStrong<MeshBuilder__uType*> type;
    if (type != NULL) return type;

    type = (MeshBuilder__uType*)::uAllocClassType(sizeof(MeshBuilder__uType), "Fuse.Drawing.Tesselation.MeshBuilder", false, 0, 2, 0);

    type->SetStrongRefs(
        "_lastEdge", offsetof(MeshBuilder, _lastEdge),
        "_mesh", offsetof(MeshBuilder, _mesh));

    type->SetFields(2,
        ::uNewField("_lastEdge", NULL, offsetof(MeshBuilder, _lastEdge), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewField("_mesh", NULL, offsetof(MeshBuilder, _mesh), ::app::Fuse::Drawing::Tesselation::Mesh__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("AddVertex", MeshBuilder__AddVertex, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("Complete", MeshBuilder__Complete, 0, false, ::app::Fuse::Drawing::Tesselation::Mesh__typeof()),
        ::uNewFunction("CreateFromContours", MeshBuilder__CreateFromContours, 0, true, ::app::Fuse::Drawing::Tesselation::Mesh__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("CreateSelfLoop", MeshBuilder__CreateSelfLoop, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction(".ctor", MeshBuilder__New_1, 0, true, MeshBuilder__typeof()),
        ::uNewFunctionVoid("NewContour", MeshBuilder__NewContour, 0, false));

    ::uRegisterType(type);
    return type;
}

void MeshBuilder___ObjInit(MeshBuilder* __this)
{
    __this->_mesh = ::app::Fuse::Drawing::Tesselation::Mesh__New_1(NULL);
}

void MeshBuilder__AddVertex(MeshBuilder* __this, float x, float y)
{
    if ((x != x) || (y != y))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Vertex was NaN")));
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = (__this->_lastEdge != NULL) ? ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_lastEdge)->Split() : __this->CreateSelfLoop();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin())->S = (double)x;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Origin())->T = (double)y;
    e->Winding(1);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e->Sym())->Winding(-1);
    __this->_lastEdge = e;
}

::app::Fuse::Drawing::Tesselation::Mesh* MeshBuilder__Complete(MeshBuilder* __this)
{
    return __this->_mesh;
}

::app::Fuse::Drawing::Tesselation::Mesh* MeshBuilder__CreateFromContours(::uStatic* __this, ::uObject* contours)
{
    MeshBuilder* b = MeshBuilder__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(contours)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Contour* contour = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< MeshBuilder*>(b)->NewContour();

        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Vertices())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Uno::Float2 v = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(enum_124));
            ::uPtr< MeshBuilder*>(b)->AddVertex(v.X, v.Y);
        }
    }

    return ::uPtr< MeshBuilder*>(b)->Complete();
}

::app::Fuse::Drawing::Tesselation::HalfEdge* MeshBuilder__CreateSelfLoop(MeshBuilder* __this)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->MakeEdge();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(e, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym());
    return e;
}

MeshBuilder* MeshBuilder__New_1(::uStatic* __this)
{
    MeshBuilder* inst = (MeshBuilder*)::uAllocObject(sizeof(MeshBuilder), MeshBuilder__typeof());
    inst->_ObjInit();
    return inst;
}

void MeshBuilder__NewContour(MeshBuilder* __this)
{
    __this->_lastEdge = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OriginEnumerable__uType* OriginEnumerable__typeof()
{
    static ::uStaticStrong<OriginEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (OriginEnumerable__uType*)::uAllocClassType(sizeof(OriginEnumerable__uType), "Fuse.Drawing.Tesselation.OriginEnumerable", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof());
    type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::HalfEdge*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*, ::app::Fuse::Drawing::Tesselation::HalfEdge*))OriginEnumerable__GetNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), offsetof(OriginEnumerable__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", OriginEnumerable__New_1, 0, true, OriginEnumerable__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()));

    ::uRegisterType(type);
    return type;
}

void OriginEnumerable___ObjInit_1(OriginEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(__this, anEdge);
}

::app::Fuse::Drawing::Tesselation::HalfEdge* OriginEnumerable__GetNext(OriginEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* edge)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(edge)->OriginNext() == __this->_first) ? (::app::Fuse::Drawing::Tesselation::HalfEdge*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(edge)->OriginNext();
}

OriginEnumerable* OriginEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    OriginEnumerable* inst = (OriginEnumerable*)::uAllocObject(sizeof(OriginEnumerable), OriginEnumerable__typeof());
    inst->_ObjInit_1(anEdge);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Sweep__uType* Sweep__typeof()
{
    static ::uStaticStrong<Sweep__uType*> type;
    if (type != NULL) return type;

    type = (Sweep__uType*)::uAllocClassType(sizeof(Sweep__uType), "Fuse.Drawing.Tesselation.Sweep", false, 0, 4, 1);

    type->SetStrongRefs(
        "_dict", offsetof(Sweep, _dict),
        "_event", offsetof(Sweep, _event),
        "_isWindingInside", offsetof(Sweep, _isWindingInside),
        "_pq", offsetof(Sweep, _pq));

    type->SetWeakRefs(
        "_mesh", offsetof(Sweep, _mesh));

    type->SetFields(5,
        ::uNewField("_dict", NULL, offsetof(Sweep, _dict), ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict__typeof()),
        ::uNewField("_event", NULL, offsetof(Sweep, _event), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewField("_isWindingInside", NULL, offsetof(Sweep, _isWindingInside), ::app::Uno::Predicate__int__typeof()),
        ::uNewField("_mesh", NULL, offsetof(Sweep, _mesh), ::app::Fuse::Drawing::Tesselation::Mesh__typeof()),
        ::uNewField("_pq", NULL, offsetof(Sweep, _pq), ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue__typeof()));

    type->SetFunctions(24,
        ::uNewFunctionVoid("AddRightEdges", Sweep__AddRightEdges, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("AddSentinel", Sweep__AddSentinel, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("CheckForIntersect", Sweep__CheckForIntersect, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunction("CheckForLeftSplice", Sweep__CheckForLeftSplice, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunction("CheckForRightSplice", Sweep__CheckForRightSplice, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunctionVoid("ComputeInterior", Sweep__ComputeInterior, 0, false),
        ::uNewFunctionVoid("ComputeWinding", Sweep__ComputeWinding, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunctionVoid("ConnectLeftDegenerate", Sweep__ConnectLeftDegenerate, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunctionVoid("ConnectLeftVertex", Sweep__ConnectLeftVertex, 0, false, ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunctionVoid("ConnectRightVertex", Sweep__ConnectRightVertex, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("DeleteRegion", Sweep__DeleteRegion, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunctionVoid("DoneEdgeDict", Sweep__DoneEdgeDict, 0, false),
        ::uNewFunction("FinishLeftRegions", Sweep__FinishLeftRegions, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof(), ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunctionVoid("FinishRegion", Sweep__FinishRegion, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()),
        ::uNewFunction("get_Event", Sweep__get_Event, 0, false, ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction("HasActiveRegion", Sweep__HasActiveRegion, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("InitEdgeDict", Sweep__InitEdgeDict, 0, false),
        ::uNewFunctionVoid("InitPriorityQ", Sweep__InitPriorityQ, 0, false),
        ::uNewFunction(".ctor", Sweep__New_1, 0, true, Sweep__typeof(), ::app::Fuse::Drawing::Tesselation::Mesh__typeof(), ::app::Uno::Predicate__int__typeof()),
        ::uNewFunctionVoid("RemoveDegenerateEdges", Sweep__RemoveDegenerateEdges, 0, false),
        ::uNewFunctionVoid("RemoveDegenerateFaces", Sweep__RemoveDegenerateFaces, 0, false),
        ::uNewFunctionVoid("SpliceMergeVertices", Sweep__SpliceMergeVertices, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("SweepEvent", Sweep__SweepEvent, 0, false, ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunctionVoid("WalkDirtyRegions", Sweep__WalkDirtyRegions, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof()));

    ::uRegisterType(type);
    return type;
}

void Sweep___ObjInit(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule)
{
    __this->_mesh = mesh;
    __this->_isWindingInside = windingRule;
    __this->_dict = ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict__New_1(NULL, __this, __this->_mesh);
    __this->_pq = ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue__New_1(NULL);
}

void Sweep__AddRightEdges(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::app::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool cleanUp)
{
    bool firstTime = true;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* re = eFirst;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->AddRegionBelow(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(re)->Sym());
        re = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(re)->OriginNext();
    }
    while (re != eLast);

    if (eTopLeft == NULL)
    {
        eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below())->UpperEdge())->RightPrev();
    }

    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = NULL;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = NULL;
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regPrev = regUp;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* ePrev = eTopLeft;

    for (; ; )
    {
        reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regPrev)->Below();
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->Sym();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->Origin())
        {
            break;
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext() != ePrev)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginPrev(), e);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->OriginPrev(), e);
        }

        reg->WindingNumber(regPrev->WindingNumber() - ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Winding());
        reg->IsInside(::uPtr< ::uDelegate*>(__this->_isWindingInside)->Invoke< bool, int>(reg->WindingNumber()));
        regPrev->IsDirty(true);

        if (!firstTime && __this->CheckForRightSplice(regPrev))
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge__AddWinding(NULL, e, ePrev);
            __this->DeleteRegion(regPrev);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(ePrev);
        }

        firstTime = false;
        regPrev = reg;
        ePrev = e;
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regPrev)->IsDirty(true);

    if (cleanUp)
    {
        __this->WalkDirtyRegions(regPrev);
    }
}

void Sweep__AddSentinel(Sweep* __this, float t)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->MakeEdge();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin())->S = 9.9999998430674944e+17;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Origin())->T = (double)t;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Destination())->S = -9.9999998430674944e+17;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Destination())->T = (double)t;
    __this->_event = e->Destination();
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = ::app::Fuse::Drawing::Tesselation::ActiveRegion__New_1(NULL, __this->_mesh, e, true);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdgeDictNode(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->Insert(reg));
}

bool Sweep__CheckForIntersect(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    bool ind_125 = bool();
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::Vertex* orgUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin();
    ::app::Fuse::Drawing::Tesselation::Vertex* orgLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin();
    ::app::Fuse::Drawing::Tesselation::Vertex* dstUp = eUp->Destination();
    ::app::Fuse::Drawing::Tesselation::Vertex* dstLo = eLo->Destination();

    if (orgUp == orgLo)
    {
        return false;
    }

    double tMinUp = ::app::Uno::Math__Min(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(orgUp)->T, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(dstUp)->T);
    double tMaxLo = ::app::Uno::Math__Max(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(orgLo)->T, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(dstLo)->T);

    if (tMinUp > tMaxLo)
    {
        return false;
    }

    if (orgUp->VertLeq(orgLo))
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstLo, orgUp, orgLo) > 0.0f)
        {
            return false;
        }
    }
    else
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstUp, orgLo, orgUp) < 0.0f)
        {
            return false;
        }
    }

    ::app::Fuse::Drawing::Tesselation::Vertex* isect = ::app::Fuse::Drawing::Tesselation::Geom__Intersect(NULL, dstUp, orgUp, dstLo, orgLo);

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->VertLeq(__this->_event))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->S;
        isect->T = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->T;
    }

    ::app::Fuse::Drawing::Tesselation::Vertex* orgMin = orgUp->VertLeq(orgLo) ? orgUp : orgLo;

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(orgMin)->VertLeq(isect))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(orgMin)->S;
        isect->T = orgMin->T;
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->VertEq(orgUp) || ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->VertEq(orgLo))
    {
        __this->CheckForRightSplice(regUp);
        return false;
    }

    if ((!dstUp->VertEq(__this->_event) && (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstUp, __this->_event, isect) >= 0.0f)) || (!dstLo->VertEq(__this->_event) && (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstLo, __this->_event, isect) <= 0.0f)))
    {
        if (dstLo == __this->_event)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym(), eUp);
            regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->TopLeft();

            if (regUp == NULL)
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("longjmp(tess.env, 1);")));
            }

            eUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp->Below())->UpperEdge();
            __this->FinishLeftRegions(regUp->Below(), regLo);
            __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->OriginPrev(), eUp, eUp, true);
            return true;
        }

        if (dstUp == __this->_event)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->LeftNext(), eLo->OriginPrev());
            regLo = regUp;
            regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->TopRight();
            ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp->Below())->UpperEdge())->RightPrev();
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge(eLo->OriginPrev());
            eLo = __this->FinishLeftRegions(regLo, NULL);
            __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginNext(), eUp->RightPrev(), e, true);
            return true;
        }

        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstUp, __this->_event, isect) >= 0.0f)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above())->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(true), true));
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eUp->Origin())->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->S;
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eUp->Origin())->T = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->T;
        }

        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstLo, __this->_event, isect) <= 0.0f)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty(true), true));
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eLo->Origin())->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->S;
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eLo->Origin())->T = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->T;
        }

        return false;
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Sym());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(eLo->OriginPrev(), eUp);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eUp->Origin())->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->S;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eUp->Origin())->T = isect->T;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Enqueue(eUp->Origin());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above())->IsDirty((ind_125 = (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty(true), true), ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(ind_125), ind_125));
    return false;
}

bool Sweep__CheckForLeftSplice(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination()))
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin()) < 0.0f)
        {
            return false;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above())->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(true), true));
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Split();
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym(), e);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left())->IsInside(regUp->IsInside());
    }
    else
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()) > 0.0f)
        {
            return false;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty(true), true));
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Split();
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->LeftNext(), eLo->Sym());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Right())->IsInside(regUp->IsInside());
    }

    return true;
}

bool Sweep__CheckForRightSplice(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()))
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()) > 0.0f)
        {
            return false;
        }

        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin())->VertEq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()))
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(eUp, eLo->OriginPrev());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty(true), true));
        }
        else if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin())
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Remove(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin())->QueueHandle());
            __this->SpliceMergeVertices(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginPrev(), eUp);
        }
    }
    else
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin()) < 0.0f)
        {
            return false;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above())->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(true), true));
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Sym());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginPrev(), eUp);
    }

    return true;
}

void Sweep__ComputeInterior(Sweep* __this)
{
    __this->RemoveDegenerateEdges();
    __this->InitPriorityQ();
    __this->InitEdgeDict();
    ::app::Fuse::Drawing::Tesselation::Vertex* v;

    while ((v = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Dequeue()) != NULL)
    {
        for (; ; )
        {
            ::app::Fuse::Drawing::Tesselation::Vertex* vNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Peek();

            if ((vNext == NULL) || !::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vNext)->VertEq(v))
            {
                break;
            }

            vNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Dequeue();
            __this->SpliceMergeVertices(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->AnEdge(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vNext)->AnEdge());
        }

        __this->SweepEvent(v);
    }

    __this->_event = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->Min())->Key())->UpperEdge())->Origin();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->CheckInvariants();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->CheckConsistency();
    __this->DoneEdgeDict();
    __this->RemoveDegenerateFaces();
}

void Sweep__ComputeWinding(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->WindingNumber(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->Above())->WindingNumber() + ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->Winding());
    reg->IsInside(::uPtr< ::uDelegate*>(__this->_isWindingInside)->Invoke< bool, int>(reg->WindingNumber()));
}

void Sweep__ConnectLeftDegenerate(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->UpperEdge();

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin())->VertEq(vEvent))
    {
        __this->SpliceMergeVertices(e, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge());
        return;
    }

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Destination())->VertEq(vEvent))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym());

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->fixUpperEdge())
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->fixUpperEdge(false);
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge(), e);
        __this->SweepEvent(vEvent);
        return;
    }

    regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->TopRight();
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = regUp->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopRight = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->Sym();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopRight)->OriginNext();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLast = eTopLeft;

    if (reg->fixUpperEdge())
    {
        __this->DeleteRegion(reg);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eTopRight);
        eTopRight = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopLeft)->OriginPrev();
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge(), eTopRight);

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopLeft)->GoesLeft())
    {
        eTopLeft = NULL;
    }

    __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopRight)->OriginNext(), eLast, eTopLeft, true);
}

void Sweep__ConnectLeftVertex(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->GetRegionContaining(vEvent);
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();

    if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination(), vEvent, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin()) == 0.0f)
    {
        __this->ConnectLeftDegenerate(regUp, vEvent);
        return;
    }

    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination()) ? regUp : regLo;

    if (regUp->IsInside() || ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* eNew;

        if (reg == regUp)
        {
            eNew = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge())->Sym(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->LeftNext());
        }
        else
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge* tempHalfEdge = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->DestinationNext(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge());
            eNew = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(tempHalfEdge)->Sym();
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->FixUpperEdge(eNew);
        }
        else
        {
            __this->ComputeWinding(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->AddRegionBelow(regUp, eNew));
        }

        __this->SweepEvent(vEvent);
    }
    else
    {
        __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge(), NULL, true);
    }
}

void Sweep__ConnectRightVertex(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->OriginNext();
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();
    bool degenerate = false;

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination())
    {
        __this->CheckForIntersect(regUp);
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin())->VertEq(__this->_event))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopLeft)->OriginPrev(), eUp);
        regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->TopLeft();

        if (regUp == NULL)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("longjmp(tess.env, 1);")));
        }

        eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp->Below())->UpperEdge();
        __this->FinishLeftRegions(regUp->Below(), regLo);
        degenerate = true;
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin())->VertEq(__this->_event))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(eBottomLeft, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginPrev());
        eBottomLeft = __this->FinishLeftRegions(regLo, NULL);
        degenerate = true;
    }

    if (degenerate)
    {
        __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->OriginNext(), eTopLeft, eTopLeft, true);
        return;
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* tmp = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin()) ? ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginPrev() : eUp;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNew = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->LeftPrev(), tmp);
    __this->AddRightEdges(regUp, eNew, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNew)->OriginNext(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNew)->OriginNext(), false);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNew->Sym())->ActiveRegion())->fixUpperEdge(true);
    __this->WalkDirtyRegions(regUp);
}

void Sweep__DeleteRegion(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
    {
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->ActiveRegion(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->Delete(reg->UpperEdgeDictNode());
}

void Sweep__DoneEdgeDict(Sweep* __this)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg;

    while ((reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->Min())->Key()) != NULL)
    {
        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->Sentinel())
        {
        }

        __this->DeleteRegion(reg);
    }
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Sweep__FinishLeftRegions(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLast)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regPrev = regFirst;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* ePrev = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regFirst)->UpperEdge();

    while (regPrev != regLast)
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regPrev)->fixUpperEdge(false);
        ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = regPrev->Below();
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->Origin())
        {
            if (!::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
            {
                __this->FinishRegion(regPrev);
                break;
            }

            e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->LeftPrev(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->FixUpperEdge(e);
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->OriginNext() != e)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginPrev(), e);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(ePrev, e);
        }

        __this->FinishRegion(regPrev);
        ePrev = reg->UpperEdge();
        regPrev = reg;
    }

    return ePrev;
}

void Sweep__FinishRegion(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::Face* f = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->IsInside(reg->IsInside());
    f->AnEdge(e);
    __this->DeleteRegion(reg);
}

::app::Fuse::Drawing::Tesselation::Vertex* Sweep__get_Event(Sweep* __this)
{
    return __this->_event;
}

bool Sweep__HasActiveRegion(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->ActiveRegion() != NULL;
}

void Sweep__InitEdgeDict(Sweep* __this)
{
    __this->AddSentinel(-1e+18f);
    __this->AddSentinel(1e+18f);
}

void Sweep__InitPriorityQ(Sweep* __this)
{
    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Vertex::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Vertices())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Drawing::Tesselation::Vertex* v = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Vertex::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Enqueue(v);
    }
}

Sweep* Sweep__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule)
{
    Sweep* inst = (Sweep*)::uAllocObject(sizeof(Sweep), Sweep__typeof());
    inst->_ObjInit(mesh, windingRule);
    return inst;
}

void Sweep__RemoveDegenerateEdges(Sweep* __this)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNext;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eHead = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->EdgesHead;

    for (e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eHead)->Next(); e != eHead; e = eNext)
    {
        eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Next();
        ::app::Fuse::Drawing::Tesselation::HalfEdge* eLnext = e->LeftNext();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Origin())->VertEq(e->Destination()) && (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e->LeftNext())->LeftNext() != e))
        {
            __this->SpliceMergeVertices(eLnext, e);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(e);
            e = eLnext;
            eLnext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLnext)->LeftNext() == e)
        {
            if (eLnext != e)
            {
                if ((eLnext == eNext) || (eLnext == ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Sym()))
                {
                    eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Next();
                }

                ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eLnext);
            }

            if ((e == eNext) || (e == ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Sym()))
            {
                eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Next();
            }

            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(e);
        }
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->CheckConsistency();
}

void Sweep__RemoveDegenerateFaces(Sweep* __this)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Faces())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Tesselation::Face* f = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(enum_123));
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->AnEdge();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext())->LeftNext() == e)
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge__AddWinding(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext(), e);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(e);
        }
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->CheckConsistency();
}

void Sweep__SpliceMergeVertices(Sweep* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(e1, e2);
}

void Sweep__SweepEvent(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    __this->_event = vEvent;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->CheckInvariants();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->CheckConsistency();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::app::Uno::Collections::EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge_1(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->OutgoingEdges(), ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Drawing_Tesselation_HalfEdge__typeof(), (const void*)Sweep__HasActiveRegion));

    if (e == NULL)
    {
        __this->ConnectLeftVertex(vEvent);
        return;
    }

    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->ActiveRegion())->TopLeft();

    if (regUp == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("longjmp(tess.env, 1);")));
    }

    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft = __this->FinishLeftRegions(reg, NULL);

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->OriginNext() == eTopLeft)
    {
        __this->ConnectRightVertex(regUp, eBottomLeft);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->CheckInvariants();
    }
    else
    {
        __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->OriginNext(), eTopLeft, eTopLeft, true);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->CheckInvariants();
    }
}

void Sweep__WalkDirtyRegions(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();

    while (true)
    {
        while (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty())
        {
            regUp = regLo;
            regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->Below();
        }

        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty())
        {
            regLo = regUp;
            regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above();

            if ((regUp == NULL) || !regUp->IsDirty())
            {
                return;
            }
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(false);
        ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
        ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination())
        {
            if (__this->CheckForLeftSplice(regUp))
            {
                if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->fixUpperEdge())
                {
                    __this->DeleteRegion(regLo);
                    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eLo);
                    regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
                    eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();
                }
                else if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->fixUpperEdge())
                {
                    __this->DeleteRegion(regUp);
                    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eUp);
                    regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->Above();
                    eUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->UpperEdge();
                }
            }
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin())
        {
            if ((((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination()) && !::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->fixUpperEdge()) && !::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->fixUpperEdge()) && ((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() == __this->_event) || (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination() == __this->_event)))
            {
                if (__this->CheckForIntersect(regUp))
                {
                    return;
                }
            }
            else
            {
                __this->CheckForRightSplice(regUp);
            }
        }

        if ((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin() == ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()) && (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() == ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination()))
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge__AddWinding(NULL, eLo, eUp);
            __this->DeleteRegion(regUp);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eUp);
            regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->Above();
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vertex__uType* Vertex__typeof()
{
    static ::uStaticStrong<Vertex__uType*> type;
    if (type != NULL) return type;

    type = (Vertex__uType*)::uAllocClassType(sizeof(Vertex__uType), "Fuse.Drawing.Tesselation.Vertex", false, 0, 1, 2);

    type->__fp_ToString = (::uString*(*)(::uObject*))Vertex__ToString;

    type->SetStrongRefs(
        "_Next", offsetof(Vertex, _Next));

    type->SetWeakRefs(
        "_anEdge", offsetof(Vertex, _anEdge),
        "_prev", offsetof(Vertex, _prev));

    type->SetFields(4,
        ::uNewField("_anEdge", NULL, offsetof(Vertex, _anEdge), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewField("_prev", NULL, offsetof(Vertex, _prev), Vertex__typeof()),
        ::uNewField("S", NULL, offsetof(Vertex, S), ::app::Uno::Double__typeof()),
        ::uNewField("T", NULL, offsetof(Vertex, T), ::app::Uno::Double__typeof()));

    type->SetFunctions(14,
        ::uNewFunction("get_AnEdge", Vertex__get_AnEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction("get_Coords", Vertex__get_Coords, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Next", Vertex__get_Next, 0, false, Vertex__typeof()),
        ::uNewFunction("get_OutgoingEdges", Vertex__get_OutgoingEdges, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof()),
        ::uNewFunction("get_Prev", Vertex__get_Prev, 0, false, Vertex__typeof()),
        ::uNewFunction("get_QueueHandle", Vertex__get_QueueHandle, 0, false, Vertex__typeof()),
        ::uNewFunctionVoid("KillVertex", Vertex__KillVertex, 0, true, Vertex__typeof(), Vertex__typeof()),
        ::uNewFunction("MakeVertex", Vertex__MakeVertex, 0, true, Vertex__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), Vertex__typeof()),
        ::uNewFunction(".ctor", Vertex__New_1, 0, true, Vertex__typeof()),
        ::uNewFunctionVoid("set_AnEdge", Vertex__set_AnEdge, 0, false, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("set_Next", Vertex__set_Next, 0, false, Vertex__typeof()),
        ::uNewFunctionVoid("set_Prev", Vertex__set_Prev, 0, false, Vertex__typeof()),
        ::uNewFunction("VertEq", Vertex__VertEq, 0, false, ::app::Uno::Bool__typeof(), Vertex__typeof()),
        ::uNewFunction("VertLeq", Vertex__VertLeq, 0, false, ::app::Uno::Bool__typeof(), Vertex__typeof()));

    ::uRegisterType(type);
    return type;
}

void Vertex___ObjInit(Vertex* __this)
{
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Vertex__get_AnEdge(Vertex* __this)
{
    return __this->_anEdge;
}

::app::Uno::Float2 Vertex__get_Coords(Vertex* __this)
{
    return ::app::Uno::Float2__New_2(NULL, (float)__this->S, (float)__this->T);
}

Vertex* Vertex__get_Next(Vertex* __this)
{
    return __this->_Next;
}

::uObject* Vertex__get_OutgoingEdges(Vertex* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::OriginEnumerable__New_1(NULL, __this->AnEdge());
}

Vertex* Vertex__get_Prev(Vertex* __this)
{
    return __this->_prev;
}

Vertex* Vertex__get_QueueHandle(Vertex* __this)
{
    return __this;
}

void Vertex__KillVertex(::uStatic* __this, Vertex* vDel, Vertex* newOrg)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eStart = ::uPtr< Vertex*>(vDel)->AnEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = eStart;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin(newOrg);
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext();
    }
    while (e != eStart);

    Vertex* vPrev = vDel->Prev();
    Vertex* vNext = vDel->Next();
    ::uPtr< Vertex*>(vNext)->Prev(vPrev);
    ::uPtr< Vertex*>(vPrev)->Next(vNext);
}

Vertex* Vertex__MakeVertex(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Vertex* vNext)
{
    Vertex* vNew = Vertex__New_1(NULL);
    Vertex* vPrev = ::uPtr< Vertex*>(vNext)->Prev();
    ::uPtr< Vertex*>(vNew)->Prev(vPrev);
    ::uPtr< Vertex*>(vPrev)->Next(vNew);
    vNew->Next(vNext);
    vNext->Prev(vNew);
    vNew->AnEdge(eOrig);
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = eOrig;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin(vNew);
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext();
    }
    while (e != eOrig);

    return vNew;
}

Vertex* Vertex__New_1(::uStatic* __this)
{
    Vertex* inst = (Vertex*)::uAllocObject(sizeof(Vertex), Vertex__typeof());
    inst->_ObjInit();
    return inst;
}

void Vertex__set_AnEdge(Vertex* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->_anEdge = value;
}

void Vertex__set_Next(Vertex* __this, Vertex* value)
{
    __this->_Next = value;
}

void Vertex__set_Prev(Vertex* __this, Vertex* value)
{
    __this->_prev = value;
}

::uString* Vertex__ToString(Vertex* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("["), ::uBox(::app::Uno::Double__typeof(), __this->S)), ::uGetConstString(", ")), ::uBox(::app::Uno::Double__typeof(), __this->T)), ::uGetConstString("]"));
}

bool Vertex__VertEq(Vertex* __this, Vertex* v)
{
    return (__this->S == ::uPtr< Vertex*>(v)->S) && (__this->T == ::uPtr< Vertex*>(v)->T);
}

bool Vertex__VertLeq(Vertex* __this, Vertex* v)
{
    return (__this->S < ::uPtr< Vertex*>(v)->S) || ((__this->S == ::uPtr< Vertex*>(v)->S) && (__this->T <= ::uPtr< Vertex*>(v)->T));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VerticesEnumerable__uType* VerticesEnumerable__typeof()
{
    static ::uStaticStrong<VerticesEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (VerticesEnumerable__uType*)::uAllocClassType(sizeof(VerticesEnumerable__uType), "Fuse.Drawing.Tesselation.VerticesEnumerable", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof());
    type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::Vertex*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*))VerticesEnumerable__GetNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof(), offsetof(VerticesEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_head", offsetof(VerticesEnumerable, _head));

    type->SetFields(1,
        ::uNewField("_head", NULL, offsetof(VerticesEnumerable, _head), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", VerticesEnumerable__New_1, 0, true, VerticesEnumerable__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()));

    ::uRegisterType(type);
    return type;
}

void VerticesEnumerable___ObjInit_1(VerticesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Vertex* head)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex___ObjInit(__this, (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(head)->Next() == head) ? (::app::Fuse::Drawing::Tesselation::Vertex*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(head)->Next());
    __this->_head = head;
}

::app::Fuse::Drawing::Tesselation::Vertex* VerticesEnumerable__GetNext(VerticesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Vertex* v)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->Next() == __this->_head) ? (::app::Fuse::Drawing::Tesselation::Vertex*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->Next();
}

VerticesEnumerable* VerticesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* head)
{
    VerticesEnumerable* inst = (VerticesEnumerable*)::uAllocObject(sizeof(VerticesEnumerable), VerticesEnumerable__typeof());
    inst->_ObjInit_1(head);
    return inst;
}

}}}}
