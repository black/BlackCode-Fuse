#include <app/Fuse.Drawing.Batching.Entry.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-21490bec.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Collectio-2ec48932.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Batching_Entry__-52eb05a8.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Border__Fuse_Dra-fbf3bb99.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Contour__Fuse_Dr-f5fd654c.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Coll-7be8c670.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Face-47fb9e4d.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Face-6798dede.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Half-1385e5a9.h>
#include <app/Uno.Collections.SelectEnumerator__Outracks_Simulator_Bytecode_P-efc0a748.h>
#include <app/Uno.Collections.SelectEnumerator__string__string.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Func__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Dr-dd3c2057.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Parameter__string.h>
#include <app/Uno.Func__string__string.h>
#include <app/Uno.Geometry.Triangle2D.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType* SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Batching.Entry,Uno.Content.Models.ModelMesh>", false, 3, 2, 0);

    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelMesh__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh___ObjInit(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__Dispose(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this)
{
}

::app::Uno::Content::Models::ModelMesh* SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__get_Current(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Uno::Content::Models::ModelMesh*, ::app::Fuse::Drawing::Batching::Entry*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Entry::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__MoveNext(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* inst = (SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh), SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__Reset(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Border,Fuse.Drawing.Contour>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Dispose(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__get_Current(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Contour*, ::app::Fuse::Drawing::Border*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__MoveNext(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* inst = (SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour), SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Reset(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Contour,Fuse.Drawing.Border>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Border*(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Dispose(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
}

::app::Fuse::Drawing::Border* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__get_Current(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Border*, ::app::Fuse::Drawing::Contour*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__MoveNext(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* inst = (SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border), SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Reset(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType* SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion>,Fuse.Drawing.Tesselation.ActiveRegion>", false, 3, 2, 0);

    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_ActiveRegion__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Tesselation::ActiveRegion*, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* inst = (SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion), SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__Reset(SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Tesselation.Face,Fuse.Drawing.Contour>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Contour*, ::app::Fuse::Drawing::Tesselation::Face*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* inst = (SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour), SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__Reset(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Tesselation.Face,Uno.Geometry.Triangle2D>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Geometry::Triangle2D*(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Geometry_Triangle2D__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this)
{
}

::app::Uno::Geometry::Triangle2D* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Uno::Geometry::Triangle2D*, ::app::Fuse::Drawing::Tesselation::Face*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* inst = (SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D), SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__Reset(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Tesselation.HalfEdge,float2>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
}

::app::Uno::Float2 SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Uno::Float2, ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* inst = (SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2), SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Reset(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType* SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType*)::uAllocClassType(sizeof(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType), "Uno.Collections.SelectEnumerator<Outracks.Simulator.Bytecode.Parameter,string>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string, _select),
        "_source", offsetof(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string, _source));

    return type;
}

void SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string___ObjInit(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__Dispose(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this)
{
}

::uString* SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__get_Current(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::uString*, ::app::Outracks::Simulator::Bytecode::Parameter*>(::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Parameter::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__MoveNext(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* inst = (SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string*)::uAllocObject(sizeof(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string), SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__Reset(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__string__string__uType* SelectEnumerator__string__string__typeof()
{
    static ::uStaticStrong<SelectEnumerator__string__string__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__string__string__uType*)::uAllocClassType(sizeof(SelectEnumerator__string__string__uType), "Uno.Collections.SelectEnumerator<string,string>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))SelectEnumerator__string__string__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__string__string__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))SelectEnumerator__string__string__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__string__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(SelectEnumerator__string__string__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__string__string__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__string__string__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__string__string, _select),
        "_source", offsetof(SelectEnumerator__string__string, _source));

    return type;
}

void SelectEnumerator__string__string___ObjInit(SelectEnumerator__string__string* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__string__string__Dispose(SelectEnumerator__string__string* __this)
{
}

::uString* SelectEnumerator__string__string__get_Current(SelectEnumerator__string__string* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::uString*, ::uString*>(::app::Uno::Collections::IEnumerator__string::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__string__string__MoveNext(SelectEnumerator__string__string* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__string__string* SelectEnumerator__string__string__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__string__string* inst = (SelectEnumerator__string__string*)::uAllocObject(sizeof(SelectEnumerator__string__string), SelectEnumerator__string__string__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

void SelectEnumerator__string__string__Reset(SelectEnumerator__string__string* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

}}}
