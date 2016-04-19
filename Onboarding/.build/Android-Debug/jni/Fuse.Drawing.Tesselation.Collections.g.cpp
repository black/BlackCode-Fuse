// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h>
#include <Fuse.Drawing.Tesselation.Collections.Dict-1.h>
#include <Fuse.Drawing.Tesselation.Collections.DictNode-1.h>
#include <Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h>
#include <Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h>
#include <Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h>
#include <Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h>
#include <Fuse.Drawing.Tesselation.Collections.VertexQueue.h>
#include <Fuse.Drawing.Tesselation.Geom.h>
#include <Fuse.Drawing.Tesselation.HalfEdge.h>
#include <Fuse.Drawing.Tesselation.Mesh.h>
#include <Fuse.Drawing.Tesselation.Sweep.h>
#include <Fuse.Drawing.Tesselation.Vertex.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[3];
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(187)
// -------------------------------------------------------------------------------

// internal sealed class ActiveRegionDict :187
// {
::g::Fuse::Drawing::Tesselation::Collections::Dict_type* ActiveRegionDict_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::Dict_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ActiveRegionDict);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::Dict_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::Dict_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", options);
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::Dict_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::ActiveRegion_typeof()));
    type->fp_Leq = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::Dict*, void*, void*, bool*))ActiveRegionDict__Leq_fn;
    ::TYPES[0] = ::g::Fuse::Drawing::Tesselation::ActiveRegion_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::Tesselation::Sweep_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::ActiveRegion_typeof());
    ::TYPES[4] = ::g::Fuse::Drawing::Tesselation::Vertex_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::Tesselation::Mesh_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict, _mesh), uFieldFlagsWeak,
        ::g::Fuse::Drawing::Tesselation::Sweep_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict, _sweep), uFieldFlagsWeak);
    return type;
}

// public ActiveRegionDict(Fuse.Drawing.Tesselation.Sweep sweep, Fuse.Drawing.Tesselation.Mesh mesh) :194
void ActiveRegionDict__ctor_1_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    __this->ctor_1(sweep, mesh);
}

// public Fuse.Drawing.Tesselation.ActiveRegion AddRegionBelow(Fuse.Drawing.Tesselation.ActiveRegion regAbove, Fuse.Drawing.Tesselation.HalfEdge eNewUp) :288
void ActiveRegionDict__AddRegionBelow_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::g::Fuse::Drawing::Tesselation::HalfEdge* eNewUp, ::g::Fuse::Drawing::Tesselation::ActiveRegion** __retval)
{
    *__retval = __this->AddRegionBelow(regAbove, eNewUp);
}

// public void CheckInvariants() :201
void ActiveRegionDict__CheckInvariants_fn(ActiveRegionDict* __this)
{
    __this->CheckInvariants();
}

// public bool EdgeLeq(Fuse.Drawing.Tesselation.HalfEdge e1, Fuse.Drawing.Tesselation.HalfEdge e2) :252
void ActiveRegionDict__EdgeLeq_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2, bool* __retval)
{
    *__retval = __this->EdgeLeq(e1, e2);
}

// public Fuse.Drawing.Tesselation.ActiveRegion GetRegionContaining(Fuse.Drawing.Tesselation.Vertex vEvent) :296
void ActiveRegionDict__GetRegionContaining_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent, ::g::Fuse::Drawing::Tesselation::ActiveRegion** __retval)
{
    *__retval = __this->GetRegionContaining(vEvent);
}

// protected override sealed bool Leq(Fuse.Drawing.Tesselation.ActiveRegion reg1, Fuse.Drawing.Tesselation.ActiveRegion reg2) :245
void ActiveRegionDict__Leq_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg1, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg2, bool* __retval)
{
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e1 = uPtr(reg1)->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e2 = uPtr(reg2)->UpperEdge();
    return *__retval = __this->EdgeLeq(e1, e2), void();
}

// public ActiveRegionDict New(Fuse.Drawing.Tesselation.Sweep sweep, Fuse.Drawing.Tesselation.Mesh mesh) :194
void ActiveRegionDict__New1_fn(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh, ActiveRegionDict** __retval)
{
    *__retval = ActiveRegionDict::New1(sweep, mesh);
}

// public ActiveRegionDict(Fuse.Drawing.Tesselation.Sweep sweep, Fuse.Drawing.Tesselation.Mesh mesh) [instance] :194
void ActiveRegionDict::ctor_1(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    ctor_();
    _mesh = mesh;
    _sweep = sweep;
}

// public Fuse.Drawing.Tesselation.ActiveRegion AddRegionBelow(Fuse.Drawing.Tesselation.ActiveRegion regAbove, Fuse.Drawing.Tesselation.HalfEdge eNewUp) [instance] :288
::g::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict::AddRegionBelow(::g::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::g::Fuse::Drawing::Tesselation::HalfEdge* eNewUp)
{
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret2;
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regNew = ::g::Fuse::Drawing::Tesselation::ActiveRegion::New1(_mesh, eNewUp, false);
    regNew->UpperEdgeDictNode((::g::Fuse::Drawing::Tesselation::Collections::Dict__InsertBefore_fn(this, uPtr(regAbove)->UpperEdgeDictNode(), regNew, &ret2), ret2));
    uPtr(eNewUp)->ActiveRegion(regNew);
    return regNew;
}

// public void CheckInvariants() [instance] :201
void ActiveRegionDict::CheckInvariants()
{
}

// public bool EdgeLeq(Fuse.Drawing.Tesselation.HalfEdge e1, Fuse.Drawing.Tesselation.HalfEdge e2) [instance] :252
bool ActiveRegionDict::EdgeLeq(::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2)
{
    if (uPtr(e1)->Destination() == uPtr(_sweep)->Event())
    {
        if (uPtr(e2)->Destination() == uPtr(_sweep)->Event())
        {
            if (uPtr(uPtr(e1)->Origin())->VertLeq(uPtr(e2)->Origin()))
                return ::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(e2)->Destination(), uPtr(e1)->Origin(), uPtr(e2)->Origin()) <= 0.0f;
            else
                return ::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(e1)->Destination(), uPtr(e2)->Origin(), uPtr(e1)->Origin()) >= 0.0f;
        }
        else
            return ::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(e2)->Destination(), uPtr(_sweep)->Event(), uPtr(e2)->Origin()) <= 0.0f;
    }

    if (uPtr(e2)->Destination() == uPtr(_sweep)->Event())
        return ::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(e1)->Destination(), uPtr(_sweep)->Event(), uPtr(e1)->Origin()) >= 0.0f;

    float t1 = ::g::Fuse::Drawing::Tesselation::Geom::EdgeEval(uPtr(e1)->Destination(), uPtr(_sweep)->Event(), uPtr(e1)->Origin());
    float t2 = ::g::Fuse::Drawing::Tesselation::Geom::EdgeEval(uPtr(e2)->Destination(), uPtr(_sweep)->Event(), uPtr(e2)->Origin());
    return t1 >= t2;
}

// public Fuse.Drawing.Tesselation.ActiveRegion GetRegionContaining(Fuse.Drawing.Tesselation.Vertex vEvent) [instance] :296
::g::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict::GetRegionContaining(::g::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* ret3;
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret4;
    return (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr((::g::Fuse::Drawing::Tesselation::Collections::Dict__Search_fn(this, ::g::Fuse::Drawing::Tesselation::ActiveRegion::New1(_mesh, uPtr(uPtr(vEvent)->AnEdge())->Sym(), false), &ret4), ret4)), &ret3), ret3);
}

// public ActiveRegionDict New(Fuse.Drawing.Tesselation.Sweep sweep, Fuse.Drawing.Tesselation.Mesh mesh) [static] :194
ActiveRegionDict* ActiveRegionDict::New1(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    ActiveRegionDict* obj1 = (ActiveRegionDict*)uNew(ActiveRegionDict_typeof());
    obj1->ctor_1(sweep, mesh);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(127)
// -------------------------------------------------------------------------------

// internal abstract class Dict<T> :127
// {
//  ~Dict() :142
static void Dict__Finalize_fn(Dict* __this)
{
    uPtr(__this->_head)->Unlink();
    __this->_head = NULL;
}

Dict_type* Dict_typeof()
{
    static uSStrong<Dict_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Dict);
    options.TypeSize = sizeof(Dict_type);
    type = (Dict_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.Dict`1", options);
    type->fp_Finalize = (void(*)(uObject*))Dict__Finalize_fn;
    ::TYPES[5] = ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[5/*Fuse.Drawing.Tesselation.Collections.DictNode`1*/]->MakeType(type->T(0)),
        ::TYPES[6/*Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Tesselation::Collections::Dict, _head), 0,
        ::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Tesselation::Collections::Dict, _nodes), 0);
    return type;
}

// protected Dict() :137
void Dict__ctor__fn(Dict* __this)
{
    __this->ctor_();
}

// public void Delete(Fuse.Drawing.Tesselation.Collections.DictNode<T> node) :181
void Dict__Delete_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node)
{
    __this->Delete(node);
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> Insert(T key) :168
void Dict__Insert_fn(Dict* __this, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Dict_typeof())->T(0),
    };
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret1;
    return *__retval = (Dict__InsertBefore_fn(__this, __this->_head, key, &ret1), ret1), void();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> InsertBefore(Fuse.Drawing.Tesselation.Collections.DictNode<T> node, T key) :173
void Dict__InsertBefore_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Dict_typeof())->T(0),
        __this->__type->GetBase(Dict_typeof())->Precalced(0/*Fuse.Drawing.Tesselation.Collections.DictNode<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret3;
    ;
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret5;

    do
        node = (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(node)->Prev();
    while ((uBoxPtr(__types[0], (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret2), ret2)) != NULL) && !(__this->Leq_ex((::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret4), ret4), key, &ret3), ret3));

    return *__retval = (::g::Fuse::Drawing::Tesselation::Collections::DictNode__InsertBefore_fn(uPtr(node), key, &ret5), ret5), void();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Min() :134
void Dict__get_Min_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    *__retval = __this->Min();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> Search(T key) :158
void Dict__Search_fn(Dict* __this, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Dict_typeof())->T(0),
        __this->__type->GetBase(Dict_typeof())->Precalced(0/*Fuse.Drawing.Tesselation.Collections.DictNode<T>*/),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret8;
    ;
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node = __this->_head;

    do
        node = (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(node)->Next();
    while ((uBoxPtr(__types[0], (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret7), ret7)) != NULL) && !(__this->Leq_ex(key, (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret9), ret9), &ret8), ret8));

    return *__retval = node, void();
}

// protected Dict() [instance] :137
void Dict::ctor_()
{
    uType* __types[] = {
        __type->GetBase(Dict_typeof())->Precalced(0/*Fuse.Drawing.Tesselation.Collections.DictNode<T>*/),
        __type->GetBase(Dict_typeof())->T(0),
        __type->GetBase(Dict_typeof())->Precalced(1/*Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable<T>*/),
    };
    _head = ((::g::Fuse::Drawing::Tesselation::Collections::DictNode*)::g::Fuse::Drawing::Tesselation::Collections::DictNode::New1(__types[0]));
    _nodes = ((::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable*)::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable::New1(__types[2], _head));
}

// public void Delete(Fuse.Drawing.Tesselation.Collections.DictNode<T> node) [instance] :181
void Dict::Delete(::g::Fuse::Drawing::Tesselation::Collections::DictNode* node)
{
    uPtr(node)->Unlink();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Min() [instance] :134
::g::Fuse::Drawing::Tesselation::Collections::DictNode* Dict::Min()
{
    uType* __types[] = {
        __type->GetBase(Dict_typeof())->Precalced(0/*Fuse.Drawing.Tesselation.Collections.DictNode<T>*/),
        __type->GetBase(Dict_typeof())->T(0),
    };
    return (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(_head)->Next();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(69)
// ------------------------------------------------------------------------------

// internal sealed class DictNode<T> :69
// {
uType* DictNode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(DictNode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.Collections.DictNode`1", options);
    type->fp_ctor_ = (void*)DictNode__New1_fn;
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type, offsetof(::g::Fuse::Drawing::Tesselation::Collections::DictNode, _prev), uFieldFlagsWeak,
        type, offsetof(::g::Fuse::Drawing::Tesselation::Collections::DictNode, _Next), 0);
    return type;
}

// public DictNode() :81
void DictNode__ctor__fn(DictNode* __this)
{
    __this->ctor_();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> InsertBefore(T key) :88
void DictNode__InsertBefore_fn(DictNode* __this, void* key, DictNode** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    DictNode* collection1;
    collection1 = DictNode::New1(__this->__type);
    DictNode__set_Key_fn(uPtr(collection1), key);
    key;
    DictNode* newNode = collection1;
    DictNode* node = __this;
    uPtr(newNode)->Next(node->Next());
    uPtr(node->Next())->Prev(newNode);
    newNode->Prev(node);
    node->Next(newNode);
    return *__retval = newNode, void();
}

// public T get_Key() :73
void DictNode__get_Key_fn(DictNode* __this, uTRef __retval)
{
    return __retval.Store(__this->_key()), void();
}

// private void set_Key(T value) :73
void DictNode__set_Key_fn(DictNode* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_key() = value;
}

// public DictNode New() :81
void DictNode__New1_fn(uType* __type, DictNode** __retval)
{
    *__retval = DictNode::New1(__type);
}

// public generated Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Next() :75
void DictNode__get_Next_fn(DictNode* __this, DictNode** __retval)
{
    *__retval = __this->Next();
}

// private generated void set_Next(Fuse.Drawing.Tesselation.Collections.DictNode<T> value) :75
void DictNode__set_Next_fn(DictNode* __this, DictNode* value)
{
    __this->Next(value);
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Prev() :79
void DictNode__get_Prev_fn(DictNode* __this, DictNode** __retval)
{
    *__retval = __this->Prev();
}

// private void set_Prev(Fuse.Drawing.Tesselation.Collections.DictNode<T> value) :79
void DictNode__set_Prev_fn(DictNode* __this, DictNode* value)
{
    __this->Prev(value);
}

// public void Unlink() :100
void DictNode__Unlink_fn(DictNode* __this)
{
    __this->Unlink();
}

// public DictNode() [instance] :81
void DictNode::ctor_()
{
    DictNode__set_Key_fn(this, uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize)));
    Next(this);
    Prev(this);
}

// public generated Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Next() [instance] :75
DictNode* DictNode::Next()
{
    return _Next;
}

// private generated void set_Next(Fuse.Drawing.Tesselation.Collections.DictNode<T> value) [instance] :75
void DictNode::Next(DictNode* value)
{
    _Next = value;
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Prev() [instance] :79
DictNode* DictNode::Prev()
{
    return _prev;
}

// private void set_Prev(Fuse.Drawing.Tesselation.Collections.DictNode<T> value) [instance] :79
void DictNode::Prev(DictNode* value)
{
    _prev = value;
}

// public void Unlink() [instance] :100
void DictNode::Unlink()
{
    uPtr(Prev())->Next(Next());
    uPtr(Next())->Prev(Prev());
    Next(NULL);
    Prev(NULL);
}

// public DictNode New() [static] :81
DictNode* DictNode::New1(uType* __type)
{
    DictNode* obj1 = (DictNode*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(111)
// -------------------------------------------------------------------------------

// internal sealed class DictNodeEnumerable<T> :111
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* DictNodeEnumerable_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DictNodeEnumerable);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable`1", options);
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0))));
    type->fp_GetNext = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*, void*, uTRef))DictNodeEnumerable__GetNext_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__GetEnumerator_fn;
    ::TYPES[5] = ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof();
    type->SetPrecalc(
        ::TYPES[5/*Fuse.Drawing.Tesselation.Collections.DictNode`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0))), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable, _head), 0);
    return type;
}

// public DictNodeEnumerable(Fuse.Drawing.Tesselation.Collections.DictNode<T> head) :115
void DictNodeEnumerable__ctor_1_fn(DictNodeEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head)
{
    __this->ctor_1(head);
}

// internal override sealed Fuse.Drawing.Tesselation.Collections.DictNode<T> GetNext(Fuse.Drawing.Tesselation.Collections.DictNode<T> current) :121
void DictNodeEnumerable__GetNext_fn(DictNodeEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* current, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Drawing.Tesselation.Collections.DictNode<T>*/),
        __this->__type->T(0),
    };
    return *__retval = (((::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(current)->Next()) == __this->_head) ? uCast< ::g::Fuse::Drawing::Tesselation::Collections::DictNode*>(NULL, __types[0]) : (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(current)->Next(), void();
}

// public DictNodeEnumerable New(Fuse.Drawing.Tesselation.Collections.DictNode<T> head) :115
void DictNodeEnumerable__New1_fn(uType* __type, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head, DictNodeEnumerable** __retval)
{
    *__retval = DictNodeEnumerable::New1(__type, head);
}

// public DictNodeEnumerable(Fuse.Drawing.Tesselation.Collections.DictNode<T> head) [instance] :115
void DictNodeEnumerable::ctor_1(::g::Fuse::Drawing::Tesselation::Collections::DictNode* head)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Drawing.Tesselation.Collections.DictNode<T>*/),
        __type->T(0),
    };
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__ctor__fn(this, (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(head)->Next());
    _head = head;
}

// public DictNodeEnumerable New(Fuse.Drawing.Tesselation.Collections.DictNode<T> head) [static] :115
DictNodeEnumerable* DictNodeEnumerable::New1(uType* __type, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head)
{
    DictNodeEnumerable* obj1 = (DictNodeEnumerable*)uNew(__type);
    obj1->ctor_1(head);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(312)
// -------------------------------------------------------------------------------

// internal abstract class LinkedListEnumerable<T> :312
// {
LinkedListEnumerable_type* LinkedListEnumerable_typeof()
{
    static uSStrong<LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(LinkedListEnumerable);
    options.TypeSize = sizeof(LinkedListEnumerable_type);
    type = (LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable`1", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))LinkedListEnumerable__GetEnumerator_fn;
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[9/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[10/*Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(LinkedListEnumerable_type, interface0));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// protected LinkedListEnumerable(T first) :318
void LinkedListEnumerable__ctor__fn(LinkedListEnumerable* __this, void* first)
{
    uType* __types[] = {
        __this->__type->GetBase(LinkedListEnumerable_typeof())->T(0),
    };
    __this->_first() = first;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :323
void LinkedListEnumerable__GetEnumerator_fn(LinkedListEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :323
uObject* LinkedListEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->GetBase(LinkedListEnumerable_typeof())->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->GetBase(LinkedListEnumerable_typeof())->T(0),
        __type->GetBase(LinkedListEnumerable_typeof())->Precalced(1/*Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator<T>*/),
    };
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator* ret1;
    return (uObject*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__New1_fn(__types[2], _first(), this, &ret1), ret1);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(341)
// -------------------------------------------------------------------------------

// internal sealed class LinkedListEnumerator<T> :341
// {
LinkedListEnumerator_type* LinkedListEnumerator_typeof()
{
    static uSStrong<LinkedListEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LinkedListEnumerator);
    options.TypeSize = sizeof(LinkedListEnumerator_type);
    type = (LinkedListEnumerator_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator`1", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))LinkedListEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))LinkedListEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))LinkedListEnumerator__MoveNext_fn;
    ::TYPES[7] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(LinkedListEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LinkedListEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(LinkedListEnumerator_type, interface2));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator, _enumerable), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public LinkedListEnumerator(T first, Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<T> enumerable) :347
void LinkedListEnumerator__ctor__fn(LinkedListEnumerator* __this, void* first, ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable* enumerable)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_enumerable = enumerable;
    __this->_current().Default();
    __this->_next() = first;
}

// public T get_Current() :371
void LinkedListEnumerator__get_Current_fn(LinkedListEnumerator* __this, uTRef __retval)
{
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :354
void LinkedListEnumerator__Dispose_fn(LinkedListEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :356
void LinkedListEnumerator__MoveNext_fn(LinkedListEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public LinkedListEnumerator New(T first, Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<T> enumerable) :347
void LinkedListEnumerator__New1_fn(uType* __type, void* first, ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable* enumerable, LinkedListEnumerator** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    LinkedListEnumerator* obj1 = (LinkedListEnumerator*)uNew(__type);
    LinkedListEnumerator__ctor__fn(obj1, first, enumerable);
    return *__retval = obj1, void();
}

// public void Dispose() [instance] :354
void LinkedListEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :356
bool LinkedListEnumerator::MoveNext()
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uBoxPtr(__types[0], _next()) == NULL)
        return false;

    _current() = _next();
    _next() = (uPtr(_enumerable)->GetNext_ex(_current(), &ret2), ret2);
    return true;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(480)
// -------------------------------------------------------------------------------

// internal abstract class PriorityQueue<PQkey> :480
// {
PriorityQueue_type* PriorityQueue_typeof()
{
    static uSStrong<PriorityQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PriorityQueue);
    options.TypeSize = sizeof(PriorityQueue_type);
    type = (PriorityQueue_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", options);
    ::STRINGS[0] = uString::Const("item ");
    ::STRINGS[1] = uString::Const(" not found in queue");
    ::STRINGS[2] = uString::Const("item");
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = uObject_typeof();
    type->SetPrecalc(
        type->T(0)->Array());
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue, _elements), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue, _used), 0);
    return type;
}

// protected PriorityQueue(PQkey maxValue) :496
void PriorityQueue__ctor__fn(PriorityQueue* __this, void* maxValue)
{
    uType* __types[] = {
        __this->__type->GetBase(PriorityQueue_typeof())->T(0),
        __this->__type->GetBase(PriorityQueue_typeof())->Precalced(0/*PQkey[]*/),
    };
    __this->_maxValue() = maxValue;
    __this->_elements = uArray::New(__types[1], 256);
    __this->_used = 0;
}

// public PQkey Dequeue() :535
void PriorityQueue__Dequeue_fn(PriorityQueue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(PriorityQueue_typeof())->T(0),
    };
    uT max(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->IsEmpty())
        return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();

    max = uPtr(__this->_elements)->TItem(0);
    __this->RemoveAt(0);
    return __retval.Store(max), void();
}

// public void Enqueue(PQkey newKey) :503
void PriorityQueue__Enqueue_fn(PriorityQueue* __this, void* newKey)
{
    uType* __types[] = {
        __this->__type->GetBase(PriorityQueue_typeof())->T(0),
    };
    __this->EnsureCapacity();
    __this->_used = (__this->_used + 1);
    uPtr(__this->_elements)->TItem(__this->_used - 1) = __this->_maxValue();
    PriorityQueue__HeapIncreaseKey_fn(__this, uCRef<int>(__this->_used - 1), newKey);
}

// private void EnsureCapacity() :512
void PriorityQueue__EnsureCapacity_fn(PriorityQueue* __this)
{
    __this->EnsureCapacity();
}

// private void HeapIncreaseKey(int i, PQkey key) :523
void PriorityQueue__HeapIncreaseKey_fn(PriorityQueue* __this, int* i, void* key)
{
    uType* __types[] = {
        __this->__type->GetBase(PriorityQueue_typeof())->T(0),
    };
    int i_ = *i;
    uPtr(__this->_elements)->TItem(i_) = key;

    while ((i_ > 0) && __this->Leq(__this->Parent(i_), i_))
    {
        __this->Swap(i_, __this->Parent(i_));
        i_ = __this->Parent(i_);
    }
}

// public bool get_IsEmpty() :614
void PriorityQueue__get_IsEmpty_fn(PriorityQueue* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// private int Left(int i) :597
void PriorityQueue__Left_fn(PriorityQueue* __this, int* i, int* __retval)
{
    *__retval = __this->Left(*i);
}

// private bool Leq(int ai, int bi) :488
void PriorityQueue__Leq_fn(PriorityQueue* __this, int* ai, int* bi, bool* __retval)
{
    *__retval = __this->Leq(*ai, *bi);
}

// private void MaxHeapify(int i) :564
void PriorityQueue__MaxHeapify_fn(PriorityQueue* __this, int* i)
{
    __this->MaxHeapify(*i);
}

// private int Parent(int i) :592
void PriorityQueue__Parent_fn(PriorityQueue* __this, int* i, int* __retval)
{
    *__retval = __this->Parent(*i);
}

// public PQkey get_Peek() :609
void PriorityQueue__get_Peek_fn(PriorityQueue* __this, uTRef __retval)
{
    return __retval.Store(__this->__type->GetBase(PriorityQueue_typeof())->T(0), __this->IsEmpty() ? uT(__this->__type->GetBase(PriorityQueue_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(PriorityQueue_typeof())->T(0)->ValueSize)) : (void*)uPtr(__this->_elements)->TItem(0)), void();
}

// public void Remove(PQkey item) :543
void PriorityQueue__Remove_fn(PriorityQueue* __this, void* item)
{
    uType* __types[] = {
        __this->__type->GetBase(PriorityQueue_typeof())->T(0),
    };

    for (int index = 0; index < __this->_used; ++index)
        if (::g::Uno::Object::Equals(uBoxPtr(__types[0], item, U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], uPtr(__this->_elements)->TItem(index))))
        {
            __this->RemoveAt(index);
            return;
        }

    U_THROW(::g::Uno::ArgumentException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"item "*/], uBoxPtr(__types[0], item)), ::STRINGS[1/*" not found ...*/]), ::STRINGS[2/*"item"*/]));
}

// private void RemoveAt(int index) :556
void PriorityQueue__RemoveAt_fn(PriorityQueue* __this, int* index)
{
    __this->RemoveAt(*index);
}

// private int Right(int i) :602
void PriorityQueue__Right_fn(PriorityQueue* __this, int* i, int* __retval)
{
    *__retval = __this->Right(*i);
}

// private void Swap(int a, int b) :585
void PriorityQueue__Swap_fn(PriorityQueue* __this, int* a, int* b)
{
    __this->Swap(*a, *b);
}

// private void EnsureCapacity() [instance] :512
void PriorityQueue::EnsureCapacity()
{
    uType* __types[] = {
        __type->GetBase(PriorityQueue_typeof())->Precalced(0/*PQkey[]*/),
    };

    if (uPtr(_elements)->Length() == _used)
    {
        uArray* oldElements = _elements;
        _elements = uArray::New(__types[0], uPtr(_elements)->Length() * 2);

        for (int i = 0; i < _used; i++)
            uPtr(_elements)->TItem(i) = uPtr(oldElements)->TItem(i);
    }
}

// public bool get_IsEmpty() [instance] :614
bool PriorityQueue::IsEmpty()
{
    return _used < 1;
}

// private int Left(int i) [instance] :597
int PriorityQueue::Left(int i)
{
    return 2 * i;
}

// private bool Leq(int ai, int bi) [instance] :488
bool PriorityQueue::Leq(int ai, int bi)
{
    bool ret1;
    return (Leq1_ex(uPtr(_elements)->TItem(ai), uPtr(_elements)->TItem(bi), &ret1), ret1);
}

// private void MaxHeapify(int i) [instance] :564
void PriorityQueue::MaxHeapify(int i)
{
    bool ret2;
    bool ret3;
    int l = Left(i);
    int r = Right(i);
    int largest = -1;

    if ((l < _used) && !(Leq1_ex(uPtr(_elements)->TItem(l), uPtr(_elements)->TItem(i), &ret2), ret2))
        largest = l;
    else
        largest = i;

    if ((r < _used) && !(Leq1_ex(uPtr(_elements)->TItem(r), uPtr(_elements)->TItem(largest), &ret3), ret3))
        largest = r;

    if (largest != i)
    {
        Swap(i, largest);
        MaxHeapify(largest);
    }
}

// private int Parent(int i) [instance] :592
int PriorityQueue::Parent(int i)
{
    return i / 2;
}

// private void RemoveAt(int index) [instance] :556
void PriorityQueue::RemoveAt(int index)
{
    _used--;
    uPtr(_elements)->TItem(index) = uPtr(_elements)->TItem(_used);
    uPtr(_elements)->TItem(_used).Default();
    MaxHeapify(index);
}

// private int Right(int i) [instance] :602
int PriorityQueue::Right(int i)
{
    return (2 * i) + 1;
}

// private void Swap(int a, int b) [instance] :585
void PriorityQueue::Swap(int a, int b)
{
    uType* __types[] = {
        __type->GetBase(PriorityQueue_typeof())->T(0),
    };
    uT tmp(__types[0], U_ALLOCA(__types[0]->ValueSize));
    tmp = uPtr(_elements)->TItem(a);
    uPtr(_elements)->TItem(a) = uPtr(_elements)->TItem(b);
    uPtr(_elements)->TItem(b) = tmp;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(466)
// -------------------------------------------------------------------------------

// internal sealed class VertexQueue :466
// {
::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type* VertexQueue_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VertexQueue);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.VertexQueue", options);
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Vertex_typeof()));
    type->fp_ctor_ = (void*)VertexQueue__New1_fn;
    type->fp_Leq1 = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue*, void*, void*, bool*))VertexQueue__Leq1_fn;
    ::TYPES[4] = ::g::Fuse::Drawing::Tesselation::Vertex_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    type->SetFields(3);
    return type;
}

// public VertexQueue() :468
void VertexQueue__ctor_1_fn(VertexQueue* __this)
{
    __this->ctor_1();
}

// protected override sealed bool Leq(Fuse.Drawing.Tesselation.Vertex a, Fuse.Drawing.Tesselation.Vertex b) :473
void VertexQueue__Leq1_fn(VertexQueue* __this, ::g::Fuse::Drawing::Tesselation::Vertex* a, ::g::Fuse::Drawing::Tesselation::Vertex* b, bool* __retval)
{
    return *__retval = !uPtr(a)->VertLeq(b), void();
}

// public VertexQueue New() :468
void VertexQueue__New1_fn(VertexQueue** __retval)
{
    *__retval = VertexQueue::New1();
}

// public VertexQueue() [instance] :468
void VertexQueue::ctor_1()
{
    ::g::Fuse::Drawing::Tesselation::Vertex* collection1;
    ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue__ctor__fn(this, (collection1 = ::g::Fuse::Drawing::Tesselation::Vertex::New1(), uPtr(collection1)->S = 3.4028230607370965e+38, collection1));
}

// public VertexQueue New() [static] :468
VertexQueue* VertexQueue::New1()
{
    VertexQueue* obj2 = (VertexQueue*)uNew(VertexQueue_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
