#include <app/-.HashableWeakReference.h>
#include <app/Android.android.view.View.h>
#include <app/Experimental.Cache.DiskCacheEntry.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Node.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.Bytecode.Variable.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
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
#include <app/Uno.Collections.Dictionary2_Bucket__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Collections.Dictionary2_Bucket__char__float.h>
#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Ren-41393f7e.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Experimental_Cache_DiskCach-ec0b9f49.h>
#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__int.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_D-87503785.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Material__Uno-a4bda65a.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Dr-b40c70bc.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Col-30df674a.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Font__Fuse_Controls_In-49601d7d.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Navigation_NavigationE-fad41f95.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__HashableWeakReference__Outr-bfe8f4c9.h>
#include <app/Uno.Collections.Dictionary2_Bucket__HashableWeakReference__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__int.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_IList_-4500dd64.h>
#include <app/Uno.Collections.Dictionary2_Bucket__object__object.h>
#include <app/Uno.Collections.Dictionary2_Bucket__object__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Outracks_Simulator_Bytecode-25fa6d37.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Outracks_Simulator_Bytecode-485a08ac.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Outracks_Simulator_Bytecode-5f21ef5b.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Android_android_gra-9134a41a.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Android_android_gra-e9aa1960.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Cache_-9e3d91e5.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Fuse_Shapes_Geometr-185180f5.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__int.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__object.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Outracks_Simulator_-bc479cff.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_Lis-b6e40a9e.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_Lis-f384ed5d.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Content_Models_-20bd6136.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Content_Models_-e4b196f7.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Runtime_Impleme-e524ba52.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_WeakReference_F-1427ecd.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__object.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__Uno_Reflection_Cp-e1a02d8d.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField__.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_UX_FileSource__Uno_Cont-ddcc3b.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_UX_FileSource__Uno_Weak-7854e035.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Android_a-209590a9.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__char__float.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__char__Uno-ef5fafe7.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Experimen-6629136e.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__framebuffer__int.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Draw-bd620405.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Enti-8552afb9.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Enti-cde1654d.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Enti-edbd95d5.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Font-2f93afa0.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Navi-c436fd7.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__HashableW-50ccb64f.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__HashableW-a076158b.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__bool.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__Fuse-2a06551c.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__Fuse-5002a79c.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__int.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__string.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__Uno_-17559ed0.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__object__object.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__object__string.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Outracks_-5f61f1ab.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Outracks_-91634632.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Outracks_-a889f281.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__A-3ff13523.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__A-babad289.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__bool.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__E-5ec61e99.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__F-f5fe226b.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__int.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__O-58e27222.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__object.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__string.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-37bdc1.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-654a6eeb.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-706fd45f.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-767a7578.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-785994c0.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-7b885023.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-7d0d9c6d.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-d0fcdda6.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-fbed4902.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_Type__object.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_Type_-4c92f313.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_Type_-6827a02d.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_UX_Fi-2ebc0074.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_UX_Fi-865e6508.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.FileSource.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__uType* Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__uType), "Uno.Collections.Dictionary<Android.android.view.View,Fuse.Node>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node, _current), ::app::Android::android::view::View__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node, _source), ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node___ObjInit(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__Dispose(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__MoveNext(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Android_android_view_View__Fuse_Node>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Android_android_view_View__Fuse_Node bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Android_android_view_View__Fuse_Node>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source)
{
    Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__char__float__uType* Dictionary2_KeyCollection_Enumerator__char__float__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__char__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__char__float__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__char__float__uType), "Uno.Collections.Dictionary<char,float>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__char__float), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__char__float__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uChar(*)(void*))Dictionary2_KeyCollection_Enumerator__char__float__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__char__float__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__char__float__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__char__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__float__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__float__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__float__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__char__float, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__float, _current), ::app::Uno::Char__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__float, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__float, _source), ::app::Uno::Collections::Dictionary__char__float__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__float, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__char__float__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__char__float__get_Current, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__char__float__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__char__float___ObjInit(Dictionary2_KeyCollection_Enumerator__char__float* __this, ::app::Uno::Collections::Dictionary__char__float* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__char__float__Dispose(Dictionary2_KeyCollection_Enumerator__char__float* __this)
{
}

::uChar Dictionary2_KeyCollection_Enumerator__char__float__get_Current(Dictionary2_KeyCollection_Enumerator__char__float* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__char__float__MoveNext(Dictionary2_KeyCollection_Enumerator__char__float* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__char__float bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__char__float Dictionary2_KeyCollection_Enumerator__char__float__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__float* source)
{
    Dictionary2_KeyCollection_Enumerator__char__float inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__char__float>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__char__float__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__char__float* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.Dictionary<char,Uno.Content.Fonts.RenderedGlyph>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uChar(*)(void*))Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__char__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph, _current), ::app::Uno::Char__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph, _source), ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__get_Current, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
}

::uChar Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__get_Current(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source)
{
    Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType), "Uno.Collections.Dictionary<Experimental.Cache.DiskCacheEntry,Experimental.Cache.RecordHeader>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Experimental::Cache::DiskCacheEntry*(*)(void*))Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Experimental_Cache_DiskCacheEntry__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _current), ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _source), ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Current, 0, false, ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Dispose(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
}

::app::Experimental::Cache::DiskCacheEntry* Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Current(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__MoveNext(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source)
{
    Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__framebuffer__bool__uType* Dictionary2_KeyCollection_Enumerator__framebuffer__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__framebuffer__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__framebuffer__bool__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool__uType), "Uno.Collections.Dictionary<framebuffer,bool>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__framebuffer__bool__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Graphics::Framebuffer*(*)(void*))Dictionary2_KeyCollection_Enumerator__framebuffer__bool__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__framebuffer__bool__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__framebuffer__bool__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__framebuffer__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool, _current), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool, _source), ::app::Uno::Collections::Dictionary__framebuffer__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__bool, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__framebuffer__bool__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__framebuffer__bool__get_Current, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__framebuffer__bool__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__framebuffer__bool___ObjInit(Dictionary2_KeyCollection_Enumerator__framebuffer__bool* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__framebuffer__bool__Dispose(Dictionary2_KeyCollection_Enumerator__framebuffer__bool* __this)
{
}

::app::Uno::Graphics::Framebuffer* Dictionary2_KeyCollection_Enumerator__framebuffer__bool__get_Current(Dictionary2_KeyCollection_Enumerator__framebuffer__bool* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__framebuffer__bool__MoveNext(Dictionary2_KeyCollection_Enumerator__framebuffer__bool* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__framebuffer__bool Dictionary2_KeyCollection_Enumerator__framebuffer__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source)
{
    Dictionary2_KeyCollection_Enumerator__framebuffer__bool inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__framebuffer__bool>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__framebuffer__bool__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__framebuffer__bool* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__framebuffer__int__uType* Dictionary2_KeyCollection_Enumerator__framebuffer__int__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__framebuffer__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__framebuffer__int__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__framebuffer__int__uType), "Uno.Collections.Dictionary<framebuffer,int>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__framebuffer__int), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__framebuffer__int__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Graphics::Framebuffer*(*)(void*))Dictionary2_KeyCollection_Enumerator__framebuffer__int__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__framebuffer__int__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__framebuffer__int__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__framebuffer__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int, _current), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int, _source), ::app::Uno::Collections::Dictionary__framebuffer__int__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__framebuffer__int, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__framebuffer__int__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__framebuffer__int__get_Current, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__framebuffer__int__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__framebuffer__int___ObjInit(Dictionary2_KeyCollection_Enumerator__framebuffer__int* __this, ::app::Uno::Collections::Dictionary__framebuffer__int* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__framebuffer__int__Dispose(Dictionary2_KeyCollection_Enumerator__framebuffer__int* __this)
{
}

::app::Uno::Graphics::Framebuffer* Dictionary2_KeyCollection_Enumerator__framebuffer__int__get_Current(Dictionary2_KeyCollection_Enumerator__framebuffer__int* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__framebuffer__int__MoveNext(Dictionary2_KeyCollection_Enumerator__framebuffer__int* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__framebuffer__int Dictionary2_KeyCollection_Enumerator__framebuffer__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__int* source)
{
    Dictionary2_KeyCollection_Enumerator__framebuffer__int inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__framebuffer__int>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__framebuffer__int__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__framebuffer__int* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.Dictionary<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Stroke*(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _current), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _source), ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
}

::app::Fuse::Drawing::Stroke* Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.Dictionary<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _current), ::app::Fuse::Entities::Material__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _source), ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType), "Uno.Collections.Dictionary<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _current), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _source), ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.Dictionary<Fuse.Entities.Mesh,Uno.Collections.List<Fuse.Entities.Entry>>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _current), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _source), ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType), "Uno.Collections.Dictionary<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _current), ::app::Fuse::Font__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _source), ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__uType* Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__uType), "Uno.Collections.Dictionary<Fuse.IFlush,bool>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_IFlush__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool, _current), ::app::Fuse::IFlush__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool, _source), ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__get_Current, 0, false, ::app::Fuse::IFlush__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool___ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool* __this)
{
}

::uObject* Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__get_Current(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType), "Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper), 2, 1, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType, __interface_1));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _current), ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _source), ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__uType* Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__uType), "Uno.Collections.Dictionary<Fuse.Node,bool>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Node*(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Node__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool, _current), ::app::Fuse::Node__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool, _source), ::app::Uno::Collections::Dictionary__Fuse_Node__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__get_Current, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool___ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool* __this)
{
}

::app::Fuse::Node* Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__get_Current(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Node__bool* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.Dictionary<HashableWeakReference,Outracks.Simulator.Bytecode.TypeName>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _current), ::app::HashableWeakReference__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _source), ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Dispose(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__MoveNext(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* source)
{
    Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__uType* Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__uType), "Uno.Collections.Dictionary<HashableWeakReference,string>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string, _current), ::app::HashableWeakReference__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string, _source), ::app::Uno::Collections::Dictionary__HashableWeakReference__string__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string___ObjInit(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__Dispose(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__MoveNext(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__HashableWeakReference__string>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__HashableWeakReference__string bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__HashableWeakReference__string>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__string* source)
{
    Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__int__bool__uType* Dictionary2_KeyCollection_Enumerator__int__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__int__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__int__bool__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__int__bool__uType), "Uno.Collections.Dictionary<int,bool>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__int__bool), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__bool__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))Dictionary2_KeyCollection_Enumerator__int__bool__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__bool__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__int__bool__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__bool__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__bool__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__bool__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__int__bool, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__bool, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__bool, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__bool, _source), ::app::Uno::Collections::Dictionary__int__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__bool, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__int__bool__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__int__bool__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__int__bool__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__int__bool___ObjInit(Dictionary2_KeyCollection_Enumerator__int__bool* __this, ::app::Uno::Collections::Dictionary__int__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__int__bool__Dispose(Dictionary2_KeyCollection_Enumerator__int__bool* __this)
{
}

int Dictionary2_KeyCollection_Enumerator__int__bool__get_Current(Dictionary2_KeyCollection_Enumerator__int__bool* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__int__bool__MoveNext(Dictionary2_KeyCollection_Enumerator__int__bool* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__int__bool Dictionary2_KeyCollection_Enumerator__int__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__bool* source)
{
    Dictionary2_KeyCollection_Enumerator__int__bool inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__int__bool>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__int__bool__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__int__bool* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__uType* Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__uType), "Uno.Collections.Dictionary<int,Fuse.Input.Capturer>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer, _source), ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer___ObjInit(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__Dispose(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer* __this)
{
}

int Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__get_Current(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__MoveNext(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source)
{
    Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Capturer* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__uType* Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__uType), "Uno.Collections.Dictionary<int,Fuse.Scripting.Callback>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback, _source), ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback___ObjInit(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__Dispose(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback* __this)
{
}

int Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__get_Current(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__MoveNext(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source)
{
    Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__int__Fuse_Scripting_Callback* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__int__int__uType* Dictionary2_KeyCollection_Enumerator__int__int__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__int__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__int__int__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__int__int__uType), "Uno.Collections.Dictionary<int,int>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__int__int), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__int__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))Dictionary2_KeyCollection_Enumerator__int__int__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__int__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__int__int__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__int__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__int__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__int__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__int__int, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__int, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__int, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__int, _source), ::app::Uno::Collections::Dictionary__int__int__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__int, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__int__int__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__int__int__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__int__int__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__int__int___ObjInit(Dictionary2_KeyCollection_Enumerator__int__int* __this, ::app::Uno::Collections::Dictionary__int__int* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__int__int__Dispose(Dictionary2_KeyCollection_Enumerator__int__int* __this)
{
}

int Dictionary2_KeyCollection_Enumerator__int__int__get_Current(Dictionary2_KeyCollection_Enumerator__int__int* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__int__int__MoveNext(Dictionary2_KeyCollection_Enumerator__int__int* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__int bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__int__int Dictionary2_KeyCollection_Enumerator__int__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__int* source)
{
    Dictionary2_KeyCollection_Enumerator__int__int inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__int__int>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__int__int__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__int__int* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__int__string__uType* Dictionary2_KeyCollection_Enumerator__int__string__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__int__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__int__string__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__int__string__uType), "Uno.Collections.Dictionary<int,string>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__int__string), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__string__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))Dictionary2_KeyCollection_Enumerator__int__string__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__string__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__int__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__string__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__string__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__string__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__int__string, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__string, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__string, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__string, _source), ::app::Uno::Collections::Dictionary__int__string__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__string, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__int__string__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__int__string__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__int__string__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__int__string___ObjInit(Dictionary2_KeyCollection_Enumerator__int__string* __this, ::app::Uno::Collections::Dictionary__int__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__int__string__Dispose(Dictionary2_KeyCollection_Enumerator__int__string* __this)
{
}

int Dictionary2_KeyCollection_Enumerator__int__string__get_Current(Dictionary2_KeyCollection_Enumerator__int__string* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__int__string__MoveNext(Dictionary2_KeyCollection_Enumerator__int__string* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__string bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__int__string Dictionary2_KeyCollection_Enumerator__int__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__string* source)
{
    Dictionary2_KeyCollection_Enumerator__int__string inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__int__string>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__int__string__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__int__string* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.Dictionary<int,Uno.Collections.IList<Fuse.Input.Capturer>>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _source), ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
}

int Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source)
{
    Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__object__object__uType* Dictionary2_KeyCollection_Enumerator__object__object__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__object__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__object__object__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__object__object__uType), "Uno.Collections.Dictionary<object,object>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__object__object), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__object__object__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))Dictionary2_KeyCollection_Enumerator__object__object__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__object__object__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__object__object__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__object__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__object__object__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__object__object__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__object__object__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__object__object, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__object__object, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__object__object, _current), ::uObject__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__object__object, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__object__object, _source), ::app::Uno::Collections::Dictionary__object__object__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__object__object, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__object__object__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__object__object__get_Current, 0, false, ::uObject__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__object__object__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__object__object___ObjInit(Dictionary2_KeyCollection_Enumerator__object__object* __this, ::app::Uno::Collections::Dictionary__object__object* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__object__object__Dispose(Dictionary2_KeyCollection_Enumerator__object__object* __this)
{
}

::uObject* Dictionary2_KeyCollection_Enumerator__object__object__get_Current(Dictionary2_KeyCollection_Enumerator__object__object* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__object__object__MoveNext(Dictionary2_KeyCollection_Enumerator__object__object* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__object__object bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__object__object Dictionary2_KeyCollection_Enumerator__object__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__object__object* source)
{
    Dictionary2_KeyCollection_Enumerator__object__object inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__object__object>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__object__object__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__object__object* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__object__string__uType* Dictionary2_KeyCollection_Enumerator__object__string__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__object__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__object__string__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__object__string__uType), "Uno.Collections.Dictionary<object,string>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__object__string), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__object__string__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))Dictionary2_KeyCollection_Enumerator__object__string__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__object__string__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__object__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__object__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__object__string__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__object__string__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__object__string__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__object__string, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__object__string, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__object__string, _current), ::uObject__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__object__string, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__object__string, _source), ::app::Uno::Collections::Dictionary__object__string__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__object__string, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__object__string__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__object__string__get_Current, 0, false, ::uObject__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__object__string__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__object__string___ObjInit(Dictionary2_KeyCollection_Enumerator__object__string* __this, ::app::Uno::Collections::Dictionary__object__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__object__string__Dispose(Dictionary2_KeyCollection_Enumerator__object__string* __this)
{
}

::uObject* Dictionary2_KeyCollection_Enumerator__object__string__get_Current(Dictionary2_KeyCollection_Enumerator__object__string* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__object__string__MoveNext(Dictionary2_KeyCollection_Enumerator__object__string* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__object__string bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__object__string Dictionary2_KeyCollection_Enumerator__object__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__object__string* source)
{
    Dictionary2_KeyCollection_Enumerator__object__string inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__object__string>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__object__string__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__object__string* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::TypeName*(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _current), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _source), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Current, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName___ObjInit(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Dispose(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
}

::app::Outracks::Simulator::Bytecode::TypeName* Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Current(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__MoveNext(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* source)
{
    Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Uno.Type>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::TypeName*(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _current), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _source), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Current, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Dispose(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
}

::app::Outracks::Simulator::Bytecode::TypeName* Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Current(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__MoveNext(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source)
{
    Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType* Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable,object>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object, _current), ::app::Outracks::Simulator::Bytecode::Variable__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object, _source), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object___ObjInit(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source)
{
    Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__uType* Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__uType), "Uno.Collections.Dictionary<string,Android.android.graphics.Bitmap>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap, _source), ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__Dispose(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__get_Current(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Android_android_graphics_Bitmap>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Android_android_graphics_Bitmap bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Android_android_graphics_Bitmap>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Bitmap* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__uType* Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__uType), "Uno.Collections.Dictionary<string,Android.android.graphics.Typeface>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface, _source), ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__Dispose(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__get_Current(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Android_android_graphics_Typeface>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Android_android_graphics_Typeface bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Android_android_graphics_Typeface>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__bool__uType* Dictionary2_KeyCollection_Enumerator__string__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__bool__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__bool__uType), "Uno.Collections.Dictionary<string,bool>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__bool), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__bool__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__bool__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__bool__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__bool__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__bool__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__bool__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__bool__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__bool, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__bool, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__bool, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__bool, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__bool, _source), ::app::Uno::Collections::Dictionary__string__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__bool, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__bool__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__bool__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__bool__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__bool___ObjInit(Dictionary2_KeyCollection_Enumerator__string__bool* __this, ::app::Uno::Collections::Dictionary__string__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__bool__Dispose(Dictionary2_KeyCollection_Enumerator__string__bool* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__bool__get_Current(Dictionary2_KeyCollection_Enumerator__string__bool* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__bool__MoveNext(Dictionary2_KeyCollection_Enumerator__string__bool* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__bool Dictionary2_KeyCollection_Enumerator__string__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__bool* source)
{
    Dictionary2_KeyCollection_Enumerator__string__bool inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__bool>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__bool__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__bool* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType* Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType), "Uno.Collections.Dictionary<string,Experimental.Cache.DiskCacheEntry>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry, _source), ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__Dispose(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__get_Current(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType), "Uno.Collections.Dictionary<string,Fuse.Shapes.GeometryCacheEntry>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry, _source), ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Dispose(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__get_Current(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__int__uType* Dictionary2_KeyCollection_Enumerator__string__int__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__int__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__int__uType), "Uno.Collections.Dictionary<string,int>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__int), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__int__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__int__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__int__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__int__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__int__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__int__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__int__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__int, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__int, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__int, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__int, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__int, _source), ::app::Uno::Collections::Dictionary__string__int__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__int, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__int__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__int__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__int__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__int___ObjInit(Dictionary2_KeyCollection_Enumerator__string__int* __this, ::app::Uno::Collections::Dictionary__string__int* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__int__Dispose(Dictionary2_KeyCollection_Enumerator__string__int* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__int__get_Current(Dictionary2_KeyCollection_Enumerator__string__int* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__int__MoveNext(Dictionary2_KeyCollection_Enumerator__string__int* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__int bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__int Dictionary2_KeyCollection_Enumerator__string__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__int* source)
{
    Dictionary2_KeyCollection_Enumerator__string__int inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__int>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__int__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__int* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__object__uType* Dictionary2_KeyCollection_Enumerator__string__object__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__object__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__object__uType), "Uno.Collections.Dictionary<string,object>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__object), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__object__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__object__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__object__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__object__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__object__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__object__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__object__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__object, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__object, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__object, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__object, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__object, _source), ::app::Uno::Collections::Dictionary__string__object__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__object, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__object__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__object__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__object__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__object___ObjInit(Dictionary2_KeyCollection_Enumerator__string__object* __this, ::app::Uno::Collections::Dictionary__string__object* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__object__Dispose(Dictionary2_KeyCollection_Enumerator__string__object* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__object__get_Current(Dictionary2_KeyCollection_Enumerator__string__object* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__object__MoveNext(Dictionary2_KeyCollection_Enumerator__string__object* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__object bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__object Dictionary2_KeyCollection_Enumerator__string__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__object* source)
{
    Dictionary2_KeyCollection_Enumerator__string__object inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__object>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__object__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__object* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType* Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType), "Uno.Collections.Dictionary<string,Outracks.Simulator.ByteFileSource>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource, _source), ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__Dispose(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__get_Current(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__string__uType* Dictionary2_KeyCollection_Enumerator__string__string__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__string__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__string__uType), "Uno.Collections.Dictionary<string,string>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__string), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__string__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__string__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__string__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__string__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__string__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__string__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__string, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__string, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__string, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__string, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__string, _source), ::app::Uno::Collections::Dictionary__string__string__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__string, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__string__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__string__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__string__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__string___ObjInit(Dictionary2_KeyCollection_Enumerator__string__string* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__string__Dispose(Dictionary2_KeyCollection_Enumerator__string__string* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__string__get_Current(Dictionary2_KeyCollection_Enumerator__string__string* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__string__MoveNext(Dictionary2_KeyCollection_Enumerator__string__string* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__string bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__string Dictionary2_KeyCollection_Enumerator__string__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    Dictionary2_KeyCollection_Enumerator__string__string inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__string>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__string__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__string* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Fuse.Scripting.INameListener>>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _source), ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<object>>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_, _source), ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object____ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Uno.Action>>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_, _source), ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action____ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_ Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__uType), "Uno.Collections.Dictionary<string,Uno.Content.Models.ModelParameter>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter, _source), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType), "Uno.Collections.Dictionary<string,Uno.Content.Models.VertexAttributeArray>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _source), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__uType), "Uno.Collections.Dictionary<string,Uno.Data.Json.Value>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value, _source), ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Data_Json_Value>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Data_Json_Value bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Data_Json_Value>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Json_Value* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType), "Uno.Collections.Dictionary<string,Uno.Data.Xml.XmlEncoding>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding, _source), ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType), "Uno.Collections.Dictionary<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _source), ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType), "Uno.Collections.Dictionary<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _source), ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source)
{
    Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Uno_Type__object__uType* Dictionary2_KeyCollection_Enumerator__Uno_Type__object__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Uno_Type__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Uno_Type__object__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object__uType), "Uno.Collections.Dictionary<Uno.Type,object>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__object__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__object__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__object__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object, _current), ::uType__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object, _source), ::app::Uno::Collections::Dictionary__Uno_Type__object__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__object, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Uno_Type__object__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Uno_Type__object__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__object___ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_Type__object* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__object__Dispose(Dictionary2_KeyCollection_Enumerator__Uno_Type__object* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Uno_Type__object__MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_Type__object* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Uno_Type__object Dictionary2_KeyCollection_Enumerator__Uno_Type__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source)
{
    Dictionary2_KeyCollection_Enumerator__Uno_Type__object inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Uno_Type__object>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__object__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_Type__object* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____uType* Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____uType), "Uno.Collections.Dictionary<Uno.Type,Uno.Reflection.CppField[]>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__, _current), ::uType__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__, _source), ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField____typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField_____ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____Dispose(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField__>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField__ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField__>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__ Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__* source)
{
    Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField____Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppField__* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType* Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType), "Uno.Collections.Dictionary<Uno.Type,Uno.Reflection.CppFunction[]>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__, _current), ::uType__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__, _source), ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction____typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Dispose(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction__>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction__ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction__>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source)
{
    Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::UX::FileSource*(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _current), ::app::Uno::UX::FileSource__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _source), ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Current, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Dispose(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
}

::app::Uno::UX::FileSource* Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Current(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source)
{
    Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::UX::FileSource*(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _current), ::app::Uno::UX::FileSource__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _source), ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Current, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Dispose(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
}

::app::Uno::UX::FileSource* Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Current(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* source)
{
    Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(__this->_source)->_version;
    __this->_current = NULL;
}

}}}
