#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Collectio-6454955f.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_ActiveRegion.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Collectio-2ec48932.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Collections.IEnumerator__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Batching_Entry__-da8ff0b7.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Border__Fuse_Dra-221c4f6c.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Contour__Fuse_Dr-f616b98b.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Coll-d16a0391.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Face-6a404a2b.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Face-c47d7f53.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Half-838edd4e.h>
#include <app/Uno.Collections.SelectEnumerable__Outracks_Simulator_Bytecode_P-308a2ca8.h>
#include <app/Uno.Collections.SelectEnumerable__string__string.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Batching_Entry__-52eb05a8.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Border__Fuse_Dra-fbf3bb99.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Contour__Fuse_Dr-f5fd654c.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Coll-7be8c670.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Face-47fb9e4d.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Face-6798dede.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Half-1385e5a9.h>
#include <app/Uno.Collections.SelectEnumerator__Outracks_Simulator_Bytecode_P-efc0a748.h>
#include <app/Uno.Collections.SelectEnumerator__string__string.h>
#include <app/Uno.Func__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Dr-dd3c2057.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Parameter__string.h>
#include <app/Uno.Func__string__string.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType* SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Batching.Entry,Uno.Content.Models.ModelMesh>", false, 1, 2, 0);

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelMesh__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh___ObjInit(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__GetEnumerator(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Entry::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* inst = (SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh), SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Border,Fuse.Drawing.Contour>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__GetEnumerator(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* inst = (SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour), SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Contour,Fuse.Drawing.Border>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__GetEnumerator(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* inst = (SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border), SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType* SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion>,Fuse.Drawing.Tesselation.ActiveRegion>", false, 1, 2, 0);

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion* inst = (SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion), SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Tesselation.Face,Fuse.Drawing.Contour>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* inst = (SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour), SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Tesselation.Face,Uno.Geometry.Triangle2D>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Geometry_Triangle2D__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* inst = (SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D), SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Tesselation.HalfEdge,float2>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* inst = (SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2), SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__uType* SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__uType*)::uAllocClassType(sizeof(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__uType), "Uno.Collections.SelectEnumerable<Outracks.Simulator.Bytecode.Parameter,string>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string, _select),
        "_source", offsetof(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string, _source));

    return type;
}

void SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string___ObjInit(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__GetEnumerator(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__New_1(NULL, ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string* SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string* inst = (SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string*)::uAllocObject(sizeof(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string), SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__string__string__uType* SelectEnumerable__string__string__typeof()
{
    static ::uStaticStrong<SelectEnumerable__string__string__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__string__string__uType*)::uAllocClassType(sizeof(SelectEnumerable__string__string__uType), "Uno.Collections.SelectEnumerable<string,string>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__string__string__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(SelectEnumerable__string__string__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__string__string, _select),
        "_source", offsetof(SelectEnumerable__string__string, _source));

    return type;
}

void SelectEnumerable__string__string___ObjInit(SelectEnumerable__string__string* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__string__string__GetEnumerator(SelectEnumerable__string__string* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__string__string__New_1(NULL, ::app::Uno::Collections::IEnumerable__string::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__string__string* SelectEnumerable__string__string__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__string__string* inst = (SelectEnumerable__string__string*)::uAllocObject(sizeof(SelectEnumerable__string__string), SelectEnumerable__string__string__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

}}}
