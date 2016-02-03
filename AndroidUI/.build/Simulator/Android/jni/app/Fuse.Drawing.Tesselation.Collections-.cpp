#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-21490bec.h>
#include <app/Fuse.Drawing.Tesselation.Collections.VertexQueue.h>
#include <app/Fuse.Drawing.Tesselation.Geom.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.Sweep.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ActiveRegionDict__uType* ActiveRegionDict__typeof()
{
    static ::uStaticStrong<ActiveRegionDict__uType*> type;
    if (type != NULL) return type;

    type = (ActiveRegionDict__uType*)::uAllocClassType(sizeof(ActiveRegionDict__uType), "Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", false, 0, 0, 2);

    type->SetBaseType(::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion__typeof());
    type->__fp_Leq = (bool(*)(::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion*, ::app::Fuse::Drawing::Tesselation::ActiveRegion*, ::app::Fuse::Drawing::Tesselation::ActiveRegion*))ActiveRegionDict__Leq;

    type->SetWeakRefs(
        "_mesh", offsetof(ActiveRegionDict, _mesh),
        "_sweep", offsetof(ActiveRegionDict, _sweep));

    type->SetFields(2,
        ::uNewField("_mesh", NULL, offsetof(ActiveRegionDict, _mesh), ::app::Fuse::Drawing::Tesselation::Mesh__typeof()),
        ::uNewField("_sweep", NULL, offsetof(ActiveRegionDict, _sweep), ::app::Fuse::Drawing::Tesselation::Sweep__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("AddRegionBelow", ActiveRegionDict__AddRegionBelow, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof(), ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunctionVoid("CheckInvariants", ActiveRegionDict__CheckInvariants, 0, false),
        ::uNewFunction("EdgeLeq", ActiveRegionDict__EdgeLeq, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof()),
        ::uNewFunction("GetRegionContaining", ActiveRegionDict__GetRegionContaining, 0, false, ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof(), ::app::Fuse::Drawing::Tesselation::Vertex__typeof()),
        ::uNewFunction(".ctor", ActiveRegionDict__New_1, 0, true, ActiveRegionDict__typeof(), ::app::Fuse::Drawing::Tesselation::Sweep__typeof(), ::app::Fuse::Drawing::Tesselation::Mesh__typeof()));

    ::uRegisterType(type);
    return type;
}

void ActiveRegionDict___ObjInit_1(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::Sweep* sweep, ::app::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    ::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(__this);
    __this->_mesh = mesh;
    __this->_sweep = sweep;
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict__AddRegionBelow(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::app::Fuse::Drawing::Tesselation::HalfEdge* eNewUp)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regNew = ::app::Fuse::Drawing::Tesselation::ActiveRegion__New_1(NULL, __this->_mesh, eNewUp, false);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regNew)->UpperEdgeDictNode(__this->InsertBefore(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regAbove)->UpperEdgeDictNode(), regNew));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNewUp)->ActiveRegion(regNew);
    return regNew;
}

void ActiveRegionDict__CheckInvariants(ActiveRegionDict* __this)
{
}

bool ActiveRegionDict__EdgeLeq(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2)
{
    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Destination() == ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event())
    {
        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination() == ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event())
        {
            if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin()))
            {
                return ::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin()) <= 0.0f;
            }
            else
            {
                return ::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin()) >= 0.0f;
            }
        }
        else
        {
            return ::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin()) <= 0.0f;
        }
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination() == ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event())
    {
        return ::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin()) >= 0.0f;
    }

    float t1 = ::app::Fuse::Drawing::Tesselation::Geom__EdgeEval(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin());
    float t2 = ::app::Fuse::Drawing::Tesselation::Geom__EdgeEval(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin());
    return t1 >= t2;
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict__GetRegionContaining(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->Search(::app::Fuse::Drawing::Tesselation::ActiveRegion__New_1(NULL, __this->_mesh, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge())->Sym(), false)))->Key();
}

bool ActiveRegionDict__Leq(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg1, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg2)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e1 = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg1)->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e2 = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg2)->UpperEdge();
    return __this->EdgeLeq(e1, e2);
}

ActiveRegionDict* ActiveRegionDict__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Sweep* sweep, ::app::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    ActiveRegionDict* inst = (ActiveRegionDict*)::uAllocObject(sizeof(ActiveRegionDict), ActiveRegionDict__typeof());
    inst->_ObjInit_1(sweep, mesh);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexQueue__uType* VertexQueue__typeof()
{
    static ::uStaticStrong<VertexQueue__uType*> type;
    if (type != NULL) return type;

    type = (VertexQueue__uType*)::uAllocClassType(sizeof(VertexQueue__uType), "Fuse.Drawing.Tesselation.Collections.VertexQueue", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex__typeof());
    type->__fp_Leq_1 = (bool(*)(::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*))VertexQueue__Leq_1;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", VertexQueue__New_1, 0, true, VertexQueue__typeof()));

    ::uRegisterType(type);
    return type;
}

void VertexQueue___ObjInit_1(VertexQueue* __this)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* collection_123;
    ::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex___ObjInit(__this, (collection_123 = ::app::Fuse::Drawing::Tesselation::Vertex__New_1(NULL), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(collection_123)->S = 3.4028230607370965e+38, collection_123));
}

bool VertexQueue__Leq_1(VertexQueue* __this, ::app::Fuse::Drawing::Tesselation::Vertex* a, ::app::Fuse::Drawing::Tesselation::Vertex* b)
{
    return !::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(a)->VertLeq(b);
}

VertexQueue* VertexQueue__New_1(::uStatic* __this)
{
    VertexQueue* inst = (VertexQueue*)::uAllocObject(sizeof(VertexQueue), VertexQueue__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}}
