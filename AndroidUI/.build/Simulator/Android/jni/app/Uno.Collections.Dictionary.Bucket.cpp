#include <app/-.HashableWeakReference.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.view.View.h>
#include <app/Experimental.Cache.DiskCacheEntry.h>
#include <app/Experimental.Cache.RecordHeader.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Shapes.GeometryCacheEntry.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.Bytecode.Variable.h>
#include <app/Outracks.Simulator.ByteFileSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
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
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Reflection.CppField.h>
#include <app/Uno.Reflection.CppFunction.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.WeakReference__Fuse_Resources_FileImageSourceImpl.h>
#include <app/Uno.WeakReference__Fuse_Resources_HttpImageSourceImpl.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType* Dictionary2_Bucket__Android_android_view_View__Fuse_Node__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType), "Uno.Collections.Dictionary<Android.android.view.View,Fuse.Node>.Bucket", sizeof(Dictionary2_Bucket__Android_android_view_View__Fuse_Node), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Android_android_view_View__Fuse_Node, Key),
        "Value", offsetof(Dictionary2_Bucket__Android_android_view_View__Fuse_Node, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__char__float__uType* Dictionary2_Bucket__char__float__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__char__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__char__float__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__char__float__uType), "Uno.Collections.Dictionary<char,float>.Bucket", sizeof(Dictionary2_Bucket__char__float), 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.Dictionary<char,Uno.Content.Fonts.RenderedGlyph>.Bucket", sizeof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph), 0, 1, 0);

    type->SetStrongRefs(
        "Value.Bitmap", offsetof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph, Value.Bitmap));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType), "Uno.Collections.Dictionary<Experimental.Cache.DiskCacheEntry,Experimental.Cache.RecordHeader>.Bucket", sizeof(Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, Key),
        "Value", offsetof(Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__framebuffer__bool__uType* Dictionary2_Bucket__framebuffer__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__framebuffer__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__framebuffer__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__framebuffer__bool__uType), "Uno.Collections.Dictionary<framebuffer,bool>.Bucket", sizeof(Dictionary2_Bucket__framebuffer__bool), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__framebuffer__bool, Key));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__framebuffer__int__uType* Dictionary2_Bucket__framebuffer__int__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__framebuffer__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__framebuffer__int__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__framebuffer__int__uType), "Uno.Collections.Dictionary<framebuffer,int>.Bucket", sizeof(Dictionary2_Bucket__framebuffer__int), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__framebuffer__int, Key));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.Dictionary<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, Key),
        "Value", offsetof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.Dictionary<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, Key),
        "Value", offsetof(Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType), "Uno.Collections.Dictionary<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, Key),
        "Value", offsetof(Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.Dictionary<Fuse.Entities.Mesh,Uno.Collections.List<Fuse.Entities.Entry>>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, Key),
        "Value", offsetof(Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType), "Uno.Collections.Dictionary<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, Key),
        "Value", offsetof(Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_IFlush__bool__uType* Dictionary2_Bucket__Fuse_IFlush__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_IFlush__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_IFlush__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_IFlush__bool__uType), "Uno.Collections.Dictionary<Fuse.IFlush,bool>.Bucket", sizeof(Dictionary2_Bucket__Fuse_IFlush__bool), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_IFlush__bool, Key));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType), "Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Node__bool__uType* Dictionary2_Bucket__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Node__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Node__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Node__bool__uType), "Uno.Collections.Dictionary<Fuse.Node,bool>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Node__bool), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Node__bool, Key));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.Dictionary<HashableWeakReference,Outracks.Simulator.Bytecode.TypeName>.Bucket", sizeof(Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, Key),
        "Value", offsetof(Dictionary2_Bucket__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__HashableWeakReference__string__uType* Dictionary2_Bucket__HashableWeakReference__string__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__HashableWeakReference__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__HashableWeakReference__string__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__HashableWeakReference__string__uType), "Uno.Collections.Dictionary<HashableWeakReference,string>.Bucket", sizeof(Dictionary2_Bucket__HashableWeakReference__string), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__HashableWeakReference__string, Key),
        "Value", offsetof(Dictionary2_Bucket__HashableWeakReference__string, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__bool__uType* Dictionary2_Bucket__int__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__bool__uType), "Uno.Collections.Dictionary<int,bool>.Bucket", sizeof(Dictionary2_Bucket__int__bool), 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__Fuse_Input_Capturer__uType* Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__Fuse_Input_Capturer__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__Fuse_Input_Capturer__uType), "Uno.Collections.Dictionary<int,Fuse.Input.Capturer>.Bucket", sizeof(Dictionary2_Bucket__int__Fuse_Input_Capturer), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__int__Fuse_Input_Capturer, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType* Dictionary2_Bucket__int__Fuse_Scripting_Callback__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType), "Uno.Collections.Dictionary<int,Fuse.Scripting.Callback>.Bucket", sizeof(Dictionary2_Bucket__int__Fuse_Scripting_Callback), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__int__Fuse_Scripting_Callback, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__int__uType* Dictionary2_Bucket__int__int__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__int__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__int__uType), "Uno.Collections.Dictionary<int,int>.Bucket", sizeof(Dictionary2_Bucket__int__int), 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__string__uType* Dictionary2_Bucket__int__string__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__string__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__string__uType), "Uno.Collections.Dictionary<int,string>.Bucket", sizeof(Dictionary2_Bucket__int__string), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__int__string, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.Dictionary<int,Uno.Collections.IList<Fuse.Input.Capturer>>.Bucket", sizeof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__object__object__uType* Dictionary2_Bucket__object__object__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__object__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__object__object__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__object__object__uType), "Uno.Collections.Dictionary<object,object>.Bucket", sizeof(Dictionary2_Bucket__object__object), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__object__object, Key),
        "Value", offsetof(Dictionary2_Bucket__object__object, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__object__string__uType* Dictionary2_Bucket__object__string__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__object__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__object__string__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__object__string__uType), "Uno.Collections.Dictionary<object,string>.Bucket", sizeof(Dictionary2_Bucket__object__string), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__object__string, Key),
        "Value", offsetof(Dictionary2_Bucket__object__string, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName>.Bucket", sizeof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, Key),
        "Value", offsetof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Uno.Type>.Bucket", sizeof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type, Key),
        "Value", offsetof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_TypeName__Uno_Type, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object__uType* Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object__uType), "Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable,object>.Bucket", sizeof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object, Key),
        "Value", offsetof(Dictionary2_Bucket__Outracks_Simulator_Bytecode_Variable__object, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType* Dictionary2_Bucket__string__Android_android_graphics_Bitmap__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType), "Uno.Collections.Dictionary<string,Android.android.graphics.Bitmap>.Bucket", sizeof(Dictionary2_Bucket__string__Android_android_graphics_Bitmap), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Android_android_graphics_Bitmap, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Android_android_graphics_Bitmap, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType* Dictionary2_Bucket__string__Android_android_graphics_Typeface__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType), "Uno.Collections.Dictionary<string,Android.android.graphics.Typeface>.Bucket", sizeof(Dictionary2_Bucket__string__Android_android_graphics_Typeface), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Android_android_graphics_Typeface, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Android_android_graphics_Typeface, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__bool__uType* Dictionary2_Bucket__string__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__bool__uType), "Uno.Collections.Dictionary<string,bool>.Bucket", sizeof(Dictionary2_Bucket__string__bool), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__bool, Key));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry__uType* Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry__uType), "Uno.Collections.Dictionary<string,Experimental.Cache.DiskCacheEntry>.Bucket", sizeof(Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__uType), "Uno.Collections.Dictionary<string,Fuse.Shapes.GeometryCacheEntry>.Bucket", sizeof(Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__int__uType* Dictionary2_Bucket__string__int__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__int__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__int__uType), "Uno.Collections.Dictionary<string,int>.Bucket", sizeof(Dictionary2_Bucket__string__int), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__int, Key));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__object__uType* Dictionary2_Bucket__string__object__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__object__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__object__uType), "Uno.Collections.Dictionary<string,object>.Bucket", sizeof(Dictionary2_Bucket__string__object), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__object, Key),
        "Value", offsetof(Dictionary2_Bucket__string__object, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource__uType* Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource__uType), "Uno.Collections.Dictionary<string,Outracks.Simulator.ByteFileSource>.Bucket", sizeof(Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Outracks_Simulator_ByteFileSource, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__string__uType* Dictionary2_Bucket__string__string__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__string__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__string__uType), "Uno.Collections.Dictionary<string,string>.Bucket", sizeof(Dictionary2_Bucket__string__string), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__string, Key),
        "Value", offsetof(Dictionary2_Bucket__string__string, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Fuse.Scripting.INameListener>>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Collections_List_object___uType* Dictionary2_Bucket__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Collections_List_object___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Collections_List_object___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<object>>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Collections_List_object_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_object_, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_object_, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Uno.Action>>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter__uType* Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter__uType), "Uno.Collections.Dictionary<string,Uno.Content.Models.ModelParameter>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__uType), "Uno.Collections.Dictionary<string,Uno.Content.Models.VertexAttributeArray>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Data_Json_Value__uType* Dictionary2_Bucket__string__Uno_Data_Json_Value__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Data_Json_Value__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Data_Json_Value__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Data_Json_Value__uType), "Uno.Collections.Dictionary<string,Uno.Data.Json.Value>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Data_Json_Value), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Data_Json_Value, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Data_Json_Value, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding__uType* Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding__uType), "Uno.Collections.Dictionary<string,Uno.Data.Xml.XmlEncoding>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding, Key));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType), "Uno.Collections.Dictionary<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType), "Uno.Collections.Dictionary<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Uno_Type__object__uType* Dictionary2_Bucket__Uno_Type__object__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Uno_Type__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Uno_Type__object__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Uno_Type__object__uType), "Uno.Collections.Dictionary<Uno.Type,object>.Bucket", sizeof(Dictionary2_Bucket__Uno_Type__object), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Uno_Type__object, Key),
        "Value", offsetof(Dictionary2_Bucket__Uno_Type__object, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField____uType* Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField____typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField____uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField____uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField____uType), "Uno.Collections.Dictionary<Uno.Type,Uno.Reflection.CppField[]>.Bucket", sizeof(Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField__), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField__, Key),
        "Value", offsetof(Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField__, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction____uType* Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction____typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction____uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction____uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction____uType), "Uno.Collections.Dictionary<Uno.Type,Uno.Reflection.CppFunction[]>.Bucket", sizeof(Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction__), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction__, Key),
        "Value", offsetof(Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppFunction__, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>.Bucket", sizeof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, Key),
        "Value", offsetof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, Value));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>.Bucket", sizeof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, Key),
        "Value", offsetof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, Value));

    return type;
}

}}}
