#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Experimental.Cache.DiskCacheEntry.h>
#include <app/Experimental.Cache.RecordHeader.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Shapes.GeometryCacheEntry.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.ByteFileSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Collections.Dictionary__char__float.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.Dictionary__Experimental_Cache_DiskCacheEntry__-87a4d55f.h>
#include <app/Uno.Collections.Dictionary__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary__framebuffer__int.h>
#include <app/Uno.Collections.Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_P-6de5e25e.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Material__Uno_Collect-63ed3ce3.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Ba-2233579d.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Mesh__Uno_Collections-6685c86a.h>
#include <app/Uno.Collections.Dictionary__Fuse_Font__Fuse_Controls_Internal_D-402f9c04.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Navigation_NavigationEdge__Fus-e579cb65.h>
#include <app/Uno.Collections.Dictionary__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary__HashableWeakReference__Outracks_Sim-1c81327d.h>
#include <app/Uno.Collections.Dictionary__HashableWeakReference__string.h>
#include <app/Uno.Collections.Dictionary__int__bool.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.Dictionary__int__int.h>
#include <app/Uno.Collections.Dictionary__int__string.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_IList_Fuse_Inp-fadbd451.h>
#include <app/Uno.Collections.Dictionary__object__object.h>
#include <app/Uno.Collections.Dictionary__object__string.h>
#include <app/Uno.Collections.Dictionary__Outracks_Simulator_Bytecode_TypeNam-95c49e9b.h>
#include <app/Uno.Collections.Dictionary__Outracks_Simulator_Bytecode_TypeNam-d07ac730.h>
#include <app/Uno.Collections.Dictionary__Outracks_Simulator_Bytecode_Variable__object.h>
#include <app/Uno.Collections.Dictionary__string__Android_android_graphics_Bitmap.h>
#include <app/Uno.Collections.Dictionary__string__Android_android_graphics_Typeface.h>
#include <app/Uno.Collections.Dictionary__string__bool.h>
#include <app/Uno.Collections.Dictionary__string__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.Dictionary__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.Collections.Dictionary__string__int.h>
#include <app/Uno.Collections.Dictionary__string__object.h>
#include <app/Uno.Collections.Dictionary__string__Outracks_Simulator_ByteFileSource.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_Fuse_S-81745686.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_Uno_Action_.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_ModelParameter.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-1b8a56c1.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Data_Xml_XmlEncoding.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Runtime_Implementation_-2891cd12.h>
#include <app/Uno.Collections.Dictionary__string__Uno_WeakReference_Fuse_Reso-7f4f8b85.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__object.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__Uno_Reflection_CppField__.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__Uno_Reflection_CppFunction__.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__Uno_Content_Font-acd5257b.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__Uno_WeakReferenc-1152b5e6.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Android_android_vi-dc48aabc.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__char__float.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__char__Uno_Content_-67b5ea03.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Experimental_Cache-c996781d.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__framebuffer__int.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Drawing_Strok-d86a258a.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Entities_Mate-a19a0ab5.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Entities_Mesh-22e7a0ce.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Entities_Mesh-62669c51.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Font__Fuse_Co-35f8859c.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Navigation_Na-14a77dce.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__HashableWeakRefere-8d0151c1.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__HashableWeakRefere-99a0927c.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__int__bool.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__int__Fuse_Scriptin-a08b3ed.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__int__int.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__int__string.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__int__Uno_Collectio-b5d9c91c.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__object__object.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__object__string.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Outracks_Simulator-4390f9bd.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Outracks_Simulator-51b3ff98.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Outracks_Simulator-d5eddb2d.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Android_an-63804229.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Android_an-79a9f5ed.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__bool.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Experiment-20952a3.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Fuse_Shape-60319715.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__int.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__object.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Outracks_S-865c6ca5.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__string.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Collec-402bacc3.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Collec-99184dfe.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Collec-cba2947c.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Conten-888e8122.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Conten-ad531ebb.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Data_X-e594d0f7.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Runtim-d556594.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_WeakRe-590d8a81.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Uno_Type__object.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Uno_Type__Uno_Refl-2e7cbddb.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Uno_Type__Uno_Refl-3aa64054.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Uno_UX_FileSource_-7649f81.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Uno_UX_FileSource_-a44f53a.h>
#include <app/Uno.Collections.IEnumerator__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__int.h>
#include <app/Uno.Collections.IEnumerator__object.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.List__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Content.Models.ModelParameter.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Data.Json.Value.h>
#include <app/Uno.Data.Xml.XmlEncoding.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Reflection.CppField.h>
#include <app/Uno.Reflection.CppFunction.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.WeakReference__Fuse_Resources_FileImageSourceImpl.h>
#include <app/Uno.WeakReference__Fuse_Resources_HttpImageSourceImpl.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__uType* Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__uType), "Uno.Collections.Dictionary<Android.android.view.View,Fuse.Node>.ValueCollection", false, 2, 1, 0);

    type->__interface_0.__fp_Clear = (void(*)(void*))Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Clear;
    type->__interface_0.__fp_Add = (void(*)(void*, ::app::Fuse::Node*))Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Add;
    type->__interface_0.__fp_Remove = (bool(*)(void*, ::app::Fuse::Node*))Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Remove;
    type->__interface_0.__fp_get_Count = (int(*)(void*))Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__get_Count;
    type->__interface_1.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::ICollection__Fuse_Node__typeof(), offsetof(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__uType, __interface_0),
        ::app::Uno::Collections::IEnumerable__Fuse_Node__typeof(), offsetof(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__uType, __interface_1));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node, _source), ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Android_android_view_View__Fuse_Node__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__GetEnumerator_boxed(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Android_android_view_View__Fuse_Node__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node___ObjInit(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__get_Count(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Android_android_view_View__Fuse_Node Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__GetEnumerator(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Android_android_view_View__Fuse_Node__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source)
{
    Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* inst = (Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node), Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__char__float__uType* Dictionary2_ValueCollection__char__float__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__char__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__char__float__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__char__float__uType), "Uno.Collections.Dictionary<char,float>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__char__float, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__char__float, _source), ::app::Uno::Collections::Dictionary__char__float__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__char__float__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__char__float__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__char__float___ObjInit(Dictionary2_ValueCollection__char__float* __this, ::app::Uno::Collections::Dictionary__char__float* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__char__float__get_Count(Dictionary2_ValueCollection__char__float* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__float Dictionary2_ValueCollection__char__float__GetEnumerator(Dictionary2_ValueCollection__char__float* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__float__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__char__float* Dictionary2_ValueCollection__char__float__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__float* source)
{
    Dictionary2_ValueCollection__char__float* inst = (Dictionary2_ValueCollection__char__float*)::uAllocObject(sizeof(Dictionary2_ValueCollection__char__float), Dictionary2_ValueCollection__char__float__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__char__float__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__char__float* __this, float item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__char__float__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__char__float* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__char__float__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__char__float* __this, float item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__char__float__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__char__float* __this, float item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.Dictionary<char,Uno.Content.Fonts.RenderedGlyph>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph, _source), ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__get_Count(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source)
{
    Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* inst = (Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph*)::uAllocObject(sizeof(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph), Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Content::Fonts::RenderedGlyph item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Content::Fonts::RenderedGlyph item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Content::Fonts::RenderedGlyph item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType), "Uno.Collections.Dictionary<Experimental.Cache.DiskCacheEntry,Experimental.Cache.RecordHeader>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _source), ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Count(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__GetEnumerator(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source)
{
    Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* inst = (Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader), Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::RecordHeader* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::RecordHeader* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::RecordHeader* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__framebuffer__bool__uType* Dictionary2_ValueCollection__framebuffer__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__framebuffer__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__framebuffer__bool__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__framebuffer__bool__uType), "Uno.Collections.Dictionary<framebuffer,bool>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__framebuffer__bool, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__framebuffer__bool, _source), ::app::Uno::Collections::Dictionary__framebuffer__bool__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__framebuffer__bool__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__framebuffer__bool__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__framebuffer__bool___ObjInit(Dictionary2_ValueCollection__framebuffer__bool* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__framebuffer__bool__get_Count(Dictionary2_ValueCollection__framebuffer__bool* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__bool Dictionary2_ValueCollection__framebuffer__bool__GetEnumerator(Dictionary2_ValueCollection__framebuffer__bool* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__bool__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__framebuffer__bool* Dictionary2_ValueCollection__framebuffer__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source)
{
    Dictionary2_ValueCollection__framebuffer__bool* inst = (Dictionary2_ValueCollection__framebuffer__bool*)::uAllocObject(sizeof(Dictionary2_ValueCollection__framebuffer__bool), Dictionary2_ValueCollection__framebuffer__bool__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__framebuffer__bool__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__framebuffer__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__framebuffer__bool__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__framebuffer__bool* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__framebuffer__bool__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__framebuffer__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__framebuffer__bool__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__framebuffer__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__framebuffer__int__uType* Dictionary2_ValueCollection__framebuffer__int__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__framebuffer__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__framebuffer__int__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__framebuffer__int__uType), "Uno.Collections.Dictionary<framebuffer,int>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__framebuffer__int__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__int__typeof(), offsetof(Dictionary2_ValueCollection__framebuffer__int__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__framebuffer__int, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__framebuffer__int, _source), ::app::Uno::Collections::Dictionary__framebuffer__int__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__framebuffer__int__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__framebuffer__int__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__int__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__framebuffer__int__GetEnumerator_boxed(Dictionary2_ValueCollection__framebuffer__int* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__int__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__framebuffer__int___ObjInit(Dictionary2_ValueCollection__framebuffer__int* __this, ::app::Uno::Collections::Dictionary__framebuffer__int* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__framebuffer__int__get_Count(Dictionary2_ValueCollection__framebuffer__int* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__int Dictionary2_ValueCollection__framebuffer__int__GetEnumerator(Dictionary2_ValueCollection__framebuffer__int* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__int__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__framebuffer__int* Dictionary2_ValueCollection__framebuffer__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__int* source)
{
    Dictionary2_ValueCollection__framebuffer__int* inst = (Dictionary2_ValueCollection__framebuffer__int*)::uAllocObject(sizeof(Dictionary2_ValueCollection__framebuffer__int), Dictionary2_ValueCollection__framebuffer__int__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__framebuffer__int__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__framebuffer__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__framebuffer__int__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__framebuffer__int* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__framebuffer__int__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__framebuffer__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__framebuffer__int__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__framebuffer__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.Dictionary<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _source), ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Count(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source)
{
    Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* inst = (Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::PolygonFiller* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::PolygonFiller* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::PolygonFiller* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.Dictionary<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _source), ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Count(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source)
{
    Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* inst = (Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_), Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType), "Uno.Collections.Dictionary<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _source), ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Count(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__GetEnumerator(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source)
{
    Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* inst = (Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher), Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Drawing::Batching::MeshBatcher* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Drawing::Batching::MeshBatcher* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Drawing::Batching::MeshBatcher* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.Dictionary<Fuse.Entities.Mesh,Uno.Collections.List<Fuse.Entities.Entry>>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _source), ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Count(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* source)
{
    Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* inst = (Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_), Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType), "Uno.Collections.Dictionary<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _source), ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Count(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__GetEnumerator(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source)
{
    Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* inst = (Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer), Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_IFlush__bool__uType* Dictionary2_ValueCollection__Fuse_IFlush__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_IFlush__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_IFlush__bool__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_IFlush__bool__uType), "Uno.Collections.Dictionary<Fuse.IFlush,bool>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_IFlush__bool, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_IFlush__bool, _source), ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_IFlush__bool__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_IFlush__bool__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_IFlush__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_IFlush__bool___ObjInit(Dictionary2_ValueCollection__Fuse_IFlush__bool* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_IFlush__bool__get_Count(Dictionary2_ValueCollection__Fuse_IFlush__bool* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_IFlush__bool Dictionary2_ValueCollection__Fuse_IFlush__bool__GetEnumerator(Dictionary2_ValueCollection__Fuse_IFlush__bool* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_IFlush__bool__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_IFlush__bool* Dictionary2_ValueCollection__Fuse_IFlush__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    Dictionary2_ValueCollection__Fuse_IFlush__bool* inst = (Dictionary2_ValueCollection__Fuse_IFlush__bool*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_IFlush__bool), Dictionary2_ValueCollection__Fuse_IFlush__bool__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_IFlush__bool__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_IFlush__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_IFlush__bool__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_IFlush__bool* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_IFlush__bool__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_IFlush__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_IFlush__bool__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_IFlush__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType), "Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _source), ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Count(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__GetEnumerator(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source)
{
    Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* inst = (Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper), Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, ::app::Fuse::Gestures::Internal::EdgeSwiper* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, ::app::Fuse::Gestures::Internal::EdgeSwiper* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, ::app::Fuse::Gestures::Internal::EdgeSwiper* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_Node__bool__uType* Dictionary2_ValueCollection__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_Node__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_Node__bool__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_Node__bool__uType), "Uno.Collections.Dictionary<Fuse.Node,bool>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_Node__bool, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_Node__bool, _source), ::app::Uno::Collections::Dictionary__Fuse_Node__bool__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_Node__bool__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_Node__bool__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Node__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_Node__bool___ObjInit(Dictionary2_ValueCollection__Fuse_Node__bool* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_Node__bool__get_Count(Dictionary2_ValueCollection__Fuse_Node__bool* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Node__bool Dictionary2_ValueCollection__Fuse_Node__bool__GetEnumerator(Dictionary2_ValueCollection__Fuse_Node__bool* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Node__bool__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_Node__bool* Dictionary2_ValueCollection__Fuse_Node__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source)
{
    Dictionary2_ValueCollection__Fuse_Node__bool* inst = (Dictionary2_ValueCollection__Fuse_Node__bool*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_Node__bool), Dictionary2_ValueCollection__Fuse_Node__bool__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_Node__bool__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Node__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_Node__bool__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Node__bool* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Node__bool__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Node__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Node__bool__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Node__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.Dictionary<HashableWeakReference,Outracks.Simulator.Bytecode.TypeName>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _source), ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__GetEnumerator_boxed(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Count(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* source)
{
    Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* inst = (Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*)::uAllocObject(sizeof(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName), Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__HashableWeakReference__string__uType* Dictionary2_ValueCollection__HashableWeakReference__string__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__HashableWeakReference__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__HashableWeakReference__string__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__HashableWeakReference__string__uType), "Uno.Collections.Dictionary<HashableWeakReference,string>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__HashableWeakReference__string__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(Dictionary2_ValueCollection__HashableWeakReference__string__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__HashableWeakReference__string, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__HashableWeakReference__string, _source), ::app::Uno::Collections::Dictionary__HashableWeakReference__string__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__HashableWeakReference__string__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__HashableWeakReference__string__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__HashableWeakReference__string__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__HashableWeakReference__string__GetEnumerator_boxed(Dictionary2_ValueCollection__HashableWeakReference__string* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__HashableWeakReference__string__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__HashableWeakReference__string___ObjInit(Dictionary2_ValueCollection__HashableWeakReference__string* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__string* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__HashableWeakReference__string__get_Count(Dictionary2_ValueCollection__HashableWeakReference__string* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__HashableWeakReference__string Dictionary2_ValueCollection__HashableWeakReference__string__GetEnumerator(Dictionary2_ValueCollection__HashableWeakReference__string* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__HashableWeakReference__string__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__HashableWeakReference__string* Dictionary2_ValueCollection__HashableWeakReference__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__string* source)
{
    Dictionary2_ValueCollection__HashableWeakReference__string* inst = (Dictionary2_ValueCollection__HashableWeakReference__string*)::uAllocObject(sizeof(Dictionary2_ValueCollection__HashableWeakReference__string), Dictionary2_ValueCollection__HashableWeakReference__string__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__HashableWeakReference__string__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__HashableWeakReference__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__HashableWeakReference__string__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__HashableWeakReference__string* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__HashableWeakReference__string__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__HashableWeakReference__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__HashableWeakReference__string__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__HashableWeakReference__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__int__bool__uType* Dictionary2_ValueCollection__int__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__int__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__int__bool__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__int__bool__uType), "Uno.Collections.Dictionary<int,bool>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__int__bool, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__int__bool, _source), ::app::Uno::Collections::Dictionary__int__bool__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__int__bool__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__int__bool__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__int__bool___ObjInit(Dictionary2_ValueCollection__int__bool* __this, ::app::Uno::Collections::Dictionary__int__bool* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__int__bool__get_Count(Dictionary2_ValueCollection__int__bool* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__bool Dictionary2_ValueCollection__int__bool__GetEnumerator(Dictionary2_ValueCollection__int__bool* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__bool__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__int__bool* Dictionary2_ValueCollection__int__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__bool* source)
{
    Dictionary2_ValueCollection__int__bool* inst = (Dictionary2_ValueCollection__int__bool*)::uAllocObject(sizeof(Dictionary2_ValueCollection__int__bool), Dictionary2_ValueCollection__int__bool__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__int__bool__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__int__bool__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__bool* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__bool__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__bool__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__int__Fuse_Input_Capturer__uType* Dictionary2_ValueCollection__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__int__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__int__Fuse_Input_Capturer__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__int__Fuse_Input_Capturer__uType), "Uno.Collections.Dictionary<int,Fuse.Input.Capturer>.ValueCollection", false, 2, 1, 0);

    type->__interface_0.__fp_Clear = (void(*)(void*))Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Clear;
    type->__interface_0.__fp_Add = (void(*)(void*, ::app::Fuse::Input::Capturer*))Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Add;
    type->__interface_0.__fp_get_Count = (int(*)(void*))Dictionary2_ValueCollection__int__Fuse_Input_Capturer__get_Count;
    type->__interface_1.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__int__Fuse_Input_Capturer__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::ICollection__Fuse_Input_Capturer__typeof(), offsetof(Dictionary2_ValueCollection__int__Fuse_Input_Capturer__uType, __interface_0),
        ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer__typeof(), offsetof(Dictionary2_ValueCollection__int__Fuse_Input_Capturer__uType, __interface_1));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__int__Fuse_Input_Capturer, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__int__Fuse_Input_Capturer, _source), ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__int__Fuse_Input_Capturer__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__int__Fuse_Input_Capturer__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__int__Fuse_Input_Capturer__GetEnumerator_boxed(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__int__Fuse_Input_Capturer___ObjInit(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__int__Fuse_Input_Capturer__get_Count(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer Dictionary2_ValueCollection__int__Fuse_Input_Capturer__GetEnumerator(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__int__Fuse_Input_Capturer* Dictionary2_ValueCollection__int__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source)
{
    Dictionary2_ValueCollection__int__Fuse_Input_Capturer* inst = (Dictionary2_ValueCollection__int__Fuse_Input_Capturer*)::uAllocObject(sizeof(Dictionary2_ValueCollection__int__Fuse_Input_Capturer), Dictionary2_ValueCollection__int__Fuse_Input_Capturer__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__uType* Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__uType), "Uno.Collections.Dictionary<int,Fuse.Scripting.Callback>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback, _source), ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Scripting_Callback__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__int__Fuse_Scripting_Callback___ObjInit(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__get_Count(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Scripting_Callback Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__GetEnumerator(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Scripting_Callback__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source)
{
    Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* inst = (Dictionary2_ValueCollection__int__Fuse_Scripting_Callback*)::uAllocObject(sizeof(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback), Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this, ::uDelegate* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this, ::uDelegate* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this, ::uDelegate* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__int__int__uType* Dictionary2_ValueCollection__int__int__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__int__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__int__int__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__int__int__uType), "Uno.Collections.Dictionary<int,int>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__int__int__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__int__typeof(), offsetof(Dictionary2_ValueCollection__int__int__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__int__int, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__int__int, _source), ::app::Uno::Collections::Dictionary__int__int__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__int__int__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__int__int__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__int__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__int__int__GetEnumerator_boxed(Dictionary2_ValueCollection__int__int* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__int__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__int__int___ObjInit(Dictionary2_ValueCollection__int__int* __this, ::app::Uno::Collections::Dictionary__int__int* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__int__int__get_Count(Dictionary2_ValueCollection__int__int* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__int Dictionary2_ValueCollection__int__int__GetEnumerator(Dictionary2_ValueCollection__int__int* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__int__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__int__int* Dictionary2_ValueCollection__int__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__int* source)
{
    Dictionary2_ValueCollection__int__int* inst = (Dictionary2_ValueCollection__int__int*)::uAllocObject(sizeof(Dictionary2_ValueCollection__int__int), Dictionary2_ValueCollection__int__int__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__int__int__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__int__int__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__int* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__int__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__int__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__int__string__uType* Dictionary2_ValueCollection__int__string__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__int__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__int__string__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__int__string__uType), "Uno.Collections.Dictionary<int,string>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__int__string__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(Dictionary2_ValueCollection__int__string__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__int__string, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__int__string, _source), ::app::Uno::Collections::Dictionary__int__string__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__int__string__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__int__string__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__string__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__int__string__GetEnumerator_boxed(Dictionary2_ValueCollection__int__string* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__string__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__int__string___ObjInit(Dictionary2_ValueCollection__int__string* __this, ::app::Uno::Collections::Dictionary__int__string* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__int__string__get_Count(Dictionary2_ValueCollection__int__string* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__string Dictionary2_ValueCollection__int__string__GetEnumerator(Dictionary2_ValueCollection__int__string* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__string__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__int__string* Dictionary2_ValueCollection__int__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__string* source)
{
    Dictionary2_ValueCollection__int__string* inst = (Dictionary2_ValueCollection__int__string*)::uAllocObject(sizeof(Dictionary2_ValueCollection__int__string), Dictionary2_ValueCollection__int__string__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__int__string__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__int__string__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__string* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__string__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__string__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.Dictionary<int,Uno.Collections.IList<Fuse.Input.Capturer>>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_, _source), ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Count(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source)
{
    Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* inst = (Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_), Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__object__object__uType* Dictionary2_ValueCollection__object__object__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__object__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__object__object__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__object__object__uType), "Uno.Collections.Dictionary<object,object>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__object__object__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__object__typeof(), offsetof(Dictionary2_ValueCollection__object__object__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__object__object, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__object__object, _source), ::app::Uno::Collections::Dictionary__object__object__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__object__object__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__object__object__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__object__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__object__object__GetEnumerator_boxed(Dictionary2_ValueCollection__object__object* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__object__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__object__object___ObjInit(Dictionary2_ValueCollection__object__object* __this, ::app::Uno::Collections::Dictionary__object__object* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__object__object__get_Count(Dictionary2_ValueCollection__object__object* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__object Dictionary2_ValueCollection__object__object__GetEnumerator(Dictionary2_ValueCollection__object__object* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__object__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__object__object* Dictionary2_ValueCollection__object__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__object__object* source)
{
    Dictionary2_ValueCollection__object__object* inst = (Dictionary2_ValueCollection__object__object*)::uAllocObject(sizeof(Dictionary2_ValueCollection__object__object), Dictionary2_ValueCollection__object__object__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__object__object__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__object__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__object__object__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__object__object* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__object__object__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__object__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__object__object__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__object__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__object__string__uType* Dictionary2_ValueCollection__object__string__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__object__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__object__string__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__object__string__uType), "Uno.Collections.Dictionary<object,string>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__object__string__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(Dictionary2_ValueCollection__object__string__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__object__string, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__object__string, _source), ::app::Uno::Collections::Dictionary__object__string__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__object__string__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__object__string__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__string__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__object__string__GetEnumerator_boxed(Dictionary2_ValueCollection__object__string* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__string__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__object__string___ObjInit(Dictionary2_ValueCollection__object__string* __this, ::app::Uno::Collections::Dictionary__object__string* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__object__string__get_Count(Dictionary2_ValueCollection__object__string* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__string Dictionary2_ValueCollection__object__string__GetEnumerator(Dictionary2_ValueCollection__object__string* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__string__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__object__string* Dictionary2_ValueCollection__object__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__object__string* source)
{
    Dictionary2_ValueCollection__object__string* inst = (Dictionary2_ValueCollection__object__string*)::uAllocObject(sizeof(Dictionary2_ValueCollection__object__string), Dictionary2_ValueCollection__object__string__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__object__string__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__object__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__object__string__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__object__string* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__object__string__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__object__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__object__string__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__object__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _source), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__GetEnumerator_boxed(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName___ObjInit(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Count(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* source)
{
    Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* inst = (Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName), Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Uno.Type>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _source), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Count(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source)
{
    Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* inst = (Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type), Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::uType* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::uType* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::uType* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__uType* Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable,object>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__object__typeof(), offsetof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object, _source), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__GetEnumerator_boxed(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object___ObjInit(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__get_Count(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__GetEnumerator(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source)
{
    Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* inst = (Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object), Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__uType* Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__uType), "Uno.Collections.Dictionary<string,Android.android.graphics.Bitmap>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap, _source), ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap___ObjInit(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__get_Count(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__GetEnumerator(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source)
{
    Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* inst = (Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap), Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this, ::app::Android::android::graphics::Bitmap* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this, ::app::Android::android::graphics::Bitmap* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this, ::app::Android::android::graphics::Bitmap* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__uType* Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__uType), "Uno.Collections.Dictionary<string,Android.android.graphics.Typeface>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface, _source), ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Typeface__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Android_android_graphics_Typeface___ObjInit(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__get_Count(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Typeface Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__GetEnumerator(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Typeface__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source)
{
    Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* inst = (Dictionary2_ValueCollection__string__Android_android_graphics_Typeface*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface), Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this, ::app::Android::android::graphics::Typeface* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this, ::app::Android::android::graphics::Typeface* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this, ::app::Android::android::graphics::Typeface* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__bool__uType* Dictionary2_ValueCollection__string__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__bool__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__bool__uType), "Uno.Collections.Dictionary<string,bool>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__bool, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__bool, _source), ::app::Uno::Collections::Dictionary__string__bool__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__bool__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__bool__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__bool___ObjInit(Dictionary2_ValueCollection__string__bool* __this, ::app::Uno::Collections::Dictionary__string__bool* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__bool__get_Count(Dictionary2_ValueCollection__string__bool* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__bool Dictionary2_ValueCollection__string__bool__GetEnumerator(Dictionary2_ValueCollection__string__bool* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__bool__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__bool* Dictionary2_ValueCollection__string__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__bool* source)
{
    Dictionary2_ValueCollection__string__bool* inst = (Dictionary2_ValueCollection__string__bool*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__bool), Dictionary2_ValueCollection__string__bool__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__bool__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__bool__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__bool* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__bool__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__bool__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__bool* __this, bool item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__uType* Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__uType), "Uno.Collections.Dictionary<string,Experimental.Cache.DiskCacheEntry>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Experimental_Cache_DiskCacheEntry__typeof(), offsetof(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry, _source), ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__GetEnumerator_boxed(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry___ObjInit(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__get_Count(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__GetEnumerator(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source)
{
    Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* inst = (Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry), Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__uType), "Uno.Collections.Dictionary<string,Fuse.Shapes.GeometryCacheEntry>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry, _source), ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__get_Count(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source)
{
    Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* inst = (Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry), Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Fuse::Shapes::GeometryCacheEntry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Fuse::Shapes::GeometryCacheEntry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Fuse::Shapes::GeometryCacheEntry* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__int__uType* Dictionary2_ValueCollection__string__int__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__int__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__int__uType), "Uno.Collections.Dictionary<string,int>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__string__int__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__int__typeof(), offsetof(Dictionary2_ValueCollection__string__int__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__int, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__int, _source), ::app::Uno::Collections::Dictionary__string__int__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__int__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__int__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__int__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__string__int__GetEnumerator_boxed(Dictionary2_ValueCollection__string__int* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__int__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__string__int___ObjInit(Dictionary2_ValueCollection__string__int* __this, ::app::Uno::Collections::Dictionary__string__int* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__int__get_Count(Dictionary2_ValueCollection__string__int* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__int Dictionary2_ValueCollection__string__int__GetEnumerator(Dictionary2_ValueCollection__string__int* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__int__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__int* Dictionary2_ValueCollection__string__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__int* source)
{
    Dictionary2_ValueCollection__string__int* inst = (Dictionary2_ValueCollection__string__int*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__int), Dictionary2_ValueCollection__string__int__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__int__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__int__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__int* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__int__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__int__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__int* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__object__uType* Dictionary2_ValueCollection__string__object__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__object__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__object__uType), "Uno.Collections.Dictionary<string,object>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__string__object__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__object__typeof(), offsetof(Dictionary2_ValueCollection__string__object__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__object, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__object, _source), ::app::Uno::Collections::Dictionary__string__object__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__object__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__object__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__object__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__string__object__GetEnumerator_boxed(Dictionary2_ValueCollection__string__object* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__object__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__string__object___ObjInit(Dictionary2_ValueCollection__string__object* __this, ::app::Uno::Collections::Dictionary__string__object* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__object__get_Count(Dictionary2_ValueCollection__string__object* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__object Dictionary2_ValueCollection__string__object__GetEnumerator(Dictionary2_ValueCollection__string__object* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__object__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__object* Dictionary2_ValueCollection__string__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__object* source)
{
    Dictionary2_ValueCollection__string__object* inst = (Dictionary2_ValueCollection__string__object*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__object), Dictionary2_ValueCollection__string__object__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__object__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__object__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__object* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__object__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__object__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__uType* Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__uType), "Uno.Collections.Dictionary<string,Outracks.Simulator.ByteFileSource>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource, _source), ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource___ObjInit(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__get_Count(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__GetEnumerator(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source)
{
    Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* inst = (Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource), Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this, ::app::Outracks::Simulator::ByteFileSource* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this, ::app::Outracks::Simulator::ByteFileSource* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this, ::app::Outracks::Simulator::ByteFileSource* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__string__uType* Dictionary2_ValueCollection__string__string__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__string__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__string__uType), "Uno.Collections.Dictionary<string,string>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__string__string__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(Dictionary2_ValueCollection__string__string__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__string, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__string, _source), ::app::Uno::Collections::Dictionary__string__string__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__string__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__string__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__string__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__string__string__GetEnumerator_boxed(Dictionary2_ValueCollection__string__string* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__string__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__string__string___ObjInit(Dictionary2_ValueCollection__string__string* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__string__get_Count(Dictionary2_ValueCollection__string__string* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__string Dictionary2_ValueCollection__string__string__GetEnumerator(Dictionary2_ValueCollection__string__string* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__string__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__string* Dictionary2_ValueCollection__string__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    Dictionary2_ValueCollection__string__string* inst = (Dictionary2_ValueCollection__string__string*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__string), Dictionary2_ValueCollection__string__string__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__string__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__string__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__string* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__string__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__string__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__string* __this, ::uString* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Fuse.Scripting.INameListener>>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _source), ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Count(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___GetEnumerator(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source)
{
    Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* inst = (Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_), Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType* Dictionary2_ValueCollection__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<object>>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_Collections_List_object_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_Collections_List_object_, _source), ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_Collections_List_object___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_Collections_List_object___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_object____ObjInit(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_Collections_List_object___get_Count(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_ValueCollection__string__Uno_Collections_List_object___GetEnumerator(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_Collections_List_object_* Dictionary2_ValueCollection__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source)
{
    Dictionary2_ValueCollection__string__Uno_Collections_List_object_* inst = (Dictionary2_ValueCollection__string__Uno_Collections_List_object_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_Collections_List_object_), Dictionary2_ValueCollection__string__Uno_Collections_List_object___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::List__object* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::List__object* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::List__object* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Uno.Action>>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_, _source), ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action____ObjInit(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___get_Count(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action_ Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___GetEnumerator(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source)
{
    Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* inst = (Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_), Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* __this, ::app::Uno::Collections::List__Uno_Action* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* __this, ::app::Uno::Collections::List__Uno_Action* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Collections_List_Uno_Action_* __this, ::app::Uno::Collections::List__Uno_Action* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__uType* Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__uType), "Uno.Collections.Dictionary<string,Uno.Content.Models.ModelParameter>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter, _source), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_ModelParameter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter___ObjInit(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__get_Count(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_ModelParameter Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_ModelParameter__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source)
{
    Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* inst = (Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter), Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Content::Models::ModelParameter* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Content::Models::ModelParameter* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Content::Models::ModelParameter* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__uType), "Uno.Collections.Dictionary<string,Uno.Content.Models.VertexAttributeArray>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray, _source), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__get_Count(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source)
{
    Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* inst = (Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray), Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Content::Models::VertexAttributeArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Content::Models::VertexAttributeArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Content::Models::VertexAttributeArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_Data_Json_Value__uType* Dictionary2_ValueCollection__string__Uno_Data_Json_Value__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_Data_Json_Value__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_Data_Json_Value__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_Data_Json_Value__uType), "Uno.Collections.Dictionary<string,Uno.Data.Json.Value>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__string__Uno_Data_Json_Value__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Data_Json_Value__typeof(), offsetof(Dictionary2_ValueCollection__string__Uno_Data_Json_Value__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_Data_Json_Value, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_Data_Json_Value, _source), ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_Data_Json_Value__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_Data_Json_Value__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Json_Value__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__string__Uno_Data_Json_Value__GetEnumerator_boxed(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Json_Value__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__string__Uno_Data_Json_Value___ObjInit(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_Data_Json_Value__get_Count(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Json_Value Dictionary2_ValueCollection__string__Uno_Data_Json_Value__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Json_Value__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_Data_Json_Value* Dictionary2_ValueCollection__string__Uno_Data_Json_Value__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source)
{
    Dictionary2_ValueCollection__string__Uno_Data_Json_Value* inst = (Dictionary2_ValueCollection__string__Uno_Data_Json_Value*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_Data_Json_Value), Dictionary2_ValueCollection__string__Uno_Data_Json_Value__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__uType* Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__uType), "Uno.Collections.Dictionary<string,Uno.Data.Xml.XmlEncoding>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding, _source), ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding___ObjInit(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__get_Count(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source)
{
    Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* inst = (Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding), Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this, int item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType), "Uno.Collections.Dictionary<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _source), ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___ObjInit(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Count(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* source)
{
    Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* inst = (Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram), Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType), "Uno.Collections.Dictionary<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _source), ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Count(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___GetEnumerator(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source)
{
    Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* inst = (Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_), Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Uno_Type__object__uType* Dictionary2_ValueCollection__Uno_Type__object__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Uno_Type__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Uno_Type__object__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Uno_Type__object__uType), "Uno.Collections.Dictionary<Uno.Type,object>.ValueCollection", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary2_ValueCollection__Uno_Type__object__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__object__typeof(), offsetof(Dictionary2_ValueCollection__Uno_Type__object__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Uno_Type__object, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Uno_Type__object, _source), ::app::Uno::Collections::Dictionary__Uno_Type__object__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Uno_Type__object__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Uno_Type__object__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__object__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Dictionary2_ValueCollection__Uno_Type__object__GetEnumerator_boxed(Dictionary2_ValueCollection__Uno_Type__object* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__object__typeof(), __this->GetEnumerator());
}

void Dictionary2_ValueCollection__Uno_Type__object___ObjInit(Dictionary2_ValueCollection__Uno_Type__object* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Uno_Type__object__get_Count(Dictionary2_ValueCollection__Uno_Type__object* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__object Dictionary2_ValueCollection__Uno_Type__object__GetEnumerator(Dictionary2_ValueCollection__Uno_Type__object* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__object__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Uno_Type__object* Dictionary2_ValueCollection__Uno_Type__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source)
{
    Dictionary2_ValueCollection__Uno_Type__object* inst = (Dictionary2_ValueCollection__Uno_Type__object*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Uno_Type__object), Dictionary2_ValueCollection__Uno_Type__object__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Uno_Type__object__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Uno_Type__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Uno_Type__object__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Uno_Type__object* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_Type__object__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Uno_Type__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_Type__object__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Uno_Type__object* __this, ::uObject* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____uType* Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____uType), "Uno.Collections.Dictionary<Uno.Type,Uno.Reflection.CppField[]>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__, _source), ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField____typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField_____ObjInit(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____get_Count(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__ Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____GetEnumerator(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__* source)
{
    Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* inst = (Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__), Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* __this, ::uArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* __this, ::uArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField____Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* __this, ::uArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____uType* Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____uType), "Uno.Collections.Dictionary<Uno.Type,Uno.Reflection.CppFunction[]>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__, _source), ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction____typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____get_Count(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source)
{
    Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* inst = (Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__), Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uArray* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _source), ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Count(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source)
{
    Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* inst = (Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace), Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Content::Fonts::FontFace* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Content::Fonts::FontFace* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Content::Fonts::FontFace* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>.ValueCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _source), ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Count(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___GetEnumerator(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* source)
{
    Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* inst = (Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_), Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

}}}
