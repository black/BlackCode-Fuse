#include <app/-.HashableWeakReference.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.view.View.h>
#include <app/Experimental.Cache.DiskCacheEntry.h>
#include <app/Experimental.Cache.RecordHeader.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer_FontKey.h>
#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Shapes.GeometryCacheEntry.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.Bytecode.Variable.h>
#include <app/Outracks.Simulator.ByteFileSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Collections.KeyValuePair__char__float.h>
#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_BitmapFon-48bc2940.h>
#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.KeyValuePair__Experimental_Cache_DiskCacheEntry-bfbae3c6.h>
#include <app/Uno.Collections.KeyValuePair__framebuffer__bool.h>
#include <app/Uno.Collections.KeyValuePair__framebuffer__int.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Controls_Internal_DefaultTex-c90e5439.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing-1cd47656.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Material__Uno_Colle-c68f1aae.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_-817a38d0.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Mesh__Uno_Collectio-b5eaa907.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Font__Fuse_Controls_Internal-6652b2a4.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Navigation_NavigationEdge__F-8e1d2091.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Node__bool.h>
#include <app/Uno.Collections.KeyValuePair__HashableWeakReference__Outracks_S-355124a0.h>
#include <app/Uno.Collections.KeyValuePair__HashableWeakReference__string.h>
#include <app/Uno.Collections.KeyValuePair__int__bool.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.KeyValuePair__int__int.h>
#include <app/Uno.Collections.KeyValuePair__int__string.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_IList_Fuse_I-758df93b.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_List_Fuse_In-7328e3bd.h>
#include <app/Uno.Collections.KeyValuePair__object__object.h>
#include <app/Uno.Collections.KeyValuePair__object__string.h>
#include <app/Uno.Collections.KeyValuePair__Outracks_Simulator_Bytecode_TypeN-1f80eab4.h>
#include <app/Uno.Collections.KeyValuePair__Outracks_Simulator_Bytecode_TypeN-4e1d4b4a.h>
#include <app/Uno.Collections.KeyValuePair__Outracks_Simulator_Bytecode_Varia-7ba73cc1.h>
#include <app/Uno.Collections.KeyValuePair__string__Android_android_graphics_Bitmap.h>
#include <app/Uno.Collections.KeyValuePair__string__Android_android_graphics_Typeface.h>
#include <app/Uno.Collections.KeyValuePair__string__bool.h>
#include <app/Uno.Collections.KeyValuePair__string__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.Collections.KeyValuePair__string__int.h>
#include <app/Uno.Collections.KeyValuePair__string__object.h>
#include <app/Uno.Collections.KeyValuePair__string__Outracks_Simulator_ByteFileSource.h>
#include <app/Uno.Collections.KeyValuePair__string__string.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Collections_List_Fuse-be0daee7.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Collections_List_Uno_Action_.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_ModelParameter.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-7e6c5d3f.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Data_Xml_XmlEncoding.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Runtime_Implementatio-52535d9.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_WeakReference_Fuse_Re-e9892c74.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Content_Fonts_BitmapFont_Char-b8da209b.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Type__object.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Type__Uno_Reflection_CppField__.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__.h>
#include <app/Uno.Collections.KeyValuePair__Uno_UX_FileSource__Uno_Content_Fo-65d16951.h>
#include <app/Uno.Collections.KeyValuePair__Uno_UX_FileSource__Uno_WeakRefere-103e5354.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Collections.List__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
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

KeyValuePair__Android_android_view_View__Fuse_Node__uType* KeyValuePair__Android_android_view_View__Fuse_Node__typeof()
{
    static ::uStaticStrong<KeyValuePair__Android_android_view_View__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Android_android_view_View__Fuse_Node__uType*)::uAllocStructType(sizeof(KeyValuePair__Android_android_view_View__Fuse_Node__uType), "Uno.Collections.KeyValuePair<Android.android.view.View,Fuse.Node>", sizeof(KeyValuePair__Android_android_view_View__Fuse_Node), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Android_android_view_View__Fuse_Node, _key),
        "_value", offsetof(KeyValuePair__Android_android_view_View__Fuse_Node, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Android_android_view_View__Fuse_Node, _key), ::app::Android::android::view::View__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Android_android_view_View__Fuse_Node, _value), ::app::Fuse::Node__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Android_android_view_View__Fuse_Node__get_Key, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Android_android_view_View__Fuse_Node__get_Value, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Android_android_view_View__Fuse_Node__New_1, 0, true, KeyValuePair__Android_android_view_View__Fuse_Node__typeof(), ::app::Android::android::view::View__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Android_android_view_View__Fuse_Node___ObjInit(KeyValuePair__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Android::android::view::View* KeyValuePair__Android_android_view_View__Fuse_Node__get_Key(KeyValuePair__Android_android_view_View__Fuse_Node* __this)
{
    return __this->_key;
}

::app::Fuse::Node* KeyValuePair__Android_android_view_View__Fuse_Node__get_Value(KeyValuePair__Android_android_view_View__Fuse_Node* __this)
{
    return __this->_value;
}

KeyValuePair__Android_android_view_View__Fuse_Node KeyValuePair__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node* value)
{
    KeyValuePair__Android_android_view_View__Fuse_Node inst = ::uDefault< KeyValuePair__Android_android_view_View__Fuse_Node>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__char__float__uType* KeyValuePair__char__float__typeof()
{
    static ::uStaticStrong<KeyValuePair__char__float__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__char__float__uType*)::uAllocStructType(sizeof(KeyValuePair__char__float__uType), "Uno.Collections.KeyValuePair<char,float>", sizeof(KeyValuePair__char__float), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__char__float, _key), ::app::Uno::Char__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__char__float, _value), ::app::Uno::Float__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__char__float__get_Key, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__char__float__get_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__char__float__New_1, 0, true, KeyValuePair__char__float__typeof(), ::app::Uno::Char__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__char__float___ObjInit(KeyValuePair__char__float* __this, ::uChar key, float value)
{
    __this->_key = key;
    __this->_value = value;
}

::uChar KeyValuePair__char__float__get_Key(KeyValuePair__char__float* __this)
{
    return __this->_key;
}

float KeyValuePair__char__float__get_Value(KeyValuePair__char__float* __this)
{
    return __this->_value;
}

KeyValuePair__char__float KeyValuePair__char__float__New_1(::uStatic* __this, ::uChar key, float value)
{
    KeyValuePair__char__float inst = ::uDefault< KeyValuePair__char__float>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof()
{
    static ::uStaticStrong<KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType*)::uAllocStructType(sizeof(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType), "Uno.Collections.KeyValuePair<char,Uno.Content.Fonts.BitmapFont_GlyphInfo>", sizeof(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _key), ::app::Uno::Char__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _value), ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Key, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Value, 0, false, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1, 0, true, KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof(), ::app::Uno::Char__typeof(), ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value)
{
    __this->_key = key;
    __this->_value = value;
}

::uChar KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Key(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    return __this->_key;
}

::app::Uno::Content::Fonts::BitmapFont_GlyphInfo KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Value(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    return __this->_value;
}

KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value)
{
    KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo inst = ::uDefault< KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType* KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong<KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocStructType(sizeof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.KeyValuePair<char,Uno.Content.Fonts.RenderedGlyph>", sizeof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph), 0, 1, 0);

    type->SetStrongRefs(
        "_value.Bitmap", offsetof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph, _value.Bitmap));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph, _key), ::app::Uno::Char__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph, _value), ::app::Uno::Content::Fonts::RenderedGlyph__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Key, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Value, 0, false, ::app::Uno::Content::Fonts::RenderedGlyph__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__New_1, 0, true, KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof(), ::app::Uno::Char__typeof(), ::app::Uno::Content::Fonts::RenderedGlyph__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value)
{
    __this->_key = key;
    __this->_value = value;
}

::uChar KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Key(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_key;
}

::app::Uno::Content::Fonts::RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Value(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_value;
}

KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value)
{
    KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph inst = ::uDefault< KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()
{
    static ::uStaticStrong<KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType*)::uAllocStructType(sizeof(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType), "Uno.Collections.KeyValuePair<Experimental.Cache.DiskCacheEntry,Experimental.Cache.RecordHeader>", sizeof(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _key),
        "_value", offsetof(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _key), ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader, _value), ::app::Experimental::Cache::RecordHeader__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Key, 0, false, ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Value, 0, false, ::app::Experimental::Cache::RecordHeader__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1, 0, true, KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof(), ::app::Experimental::Cache::DiskCacheEntry__typeof(), ::app::Experimental::Cache::RecordHeader__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Experimental::Cache::DiskCacheEntry* KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Key(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
    return __this->_key;
}

::app::Experimental::Cache::RecordHeader* KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Value(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this)
{
    return __this->_value;
}

KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(::uStatic* __this, ::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value)
{
    KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader inst = ::uDefault< KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__framebuffer__bool__uType* KeyValuePair__framebuffer__bool__typeof()
{
    static ::uStaticStrong<KeyValuePair__framebuffer__bool__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__framebuffer__bool__uType*)::uAllocStructType(sizeof(KeyValuePair__framebuffer__bool__uType), "Uno.Collections.KeyValuePair<framebuffer,bool>", sizeof(KeyValuePair__framebuffer__bool), 0, 1, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__framebuffer__bool, _key));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__framebuffer__bool, _key), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__framebuffer__bool, _value), ::app::Uno::Bool__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__framebuffer__bool__get_Key, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__framebuffer__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__framebuffer__bool__New_1, 0, true, KeyValuePair__framebuffer__bool__typeof(), ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__framebuffer__bool___ObjInit(KeyValuePair__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Uno::Graphics::Framebuffer* KeyValuePair__framebuffer__bool__get_Key(KeyValuePair__framebuffer__bool* __this)
{
    return __this->_key;
}

bool KeyValuePair__framebuffer__bool__get_Value(KeyValuePair__framebuffer__bool* __this)
{
    return __this->_value;
}

KeyValuePair__framebuffer__bool KeyValuePair__framebuffer__bool__New_1(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* key, bool value)
{
    KeyValuePair__framebuffer__bool inst = ::uDefault< KeyValuePair__framebuffer__bool>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__framebuffer__int__uType* KeyValuePair__framebuffer__int__typeof()
{
    static ::uStaticStrong<KeyValuePair__framebuffer__int__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__framebuffer__int__uType*)::uAllocStructType(sizeof(KeyValuePair__framebuffer__int__uType), "Uno.Collections.KeyValuePair<framebuffer,int>", sizeof(KeyValuePair__framebuffer__int), 0, 1, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__framebuffer__int, _key));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__framebuffer__int, _key), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__framebuffer__int, _value), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__framebuffer__int__get_Key, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__framebuffer__int__get_Value, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__framebuffer__int__New_1, 0, true, KeyValuePair__framebuffer__int__typeof(), ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__framebuffer__int___ObjInit(KeyValuePair__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Uno::Graphics::Framebuffer* KeyValuePair__framebuffer__int__get_Key(KeyValuePair__framebuffer__int* __this)
{
    return __this->_key;
}

int KeyValuePair__framebuffer__int__get_Value(KeyValuePair__framebuffer__int* __this)
{
    return __this->_value;
}

KeyValuePair__framebuffer__int KeyValuePair__framebuffer__int__New_1(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* key, int value)
{
    KeyValuePair__framebuffer__int inst = ::uDefault< KeyValuePair__framebuffer__int>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType* KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType), "Uno.Collections.KeyValuePair<Fuse.Controls.Internal.DefaultTextRenderer_FontKey,Uno.Content.Fonts.BitmapFont>", sizeof(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _key),
        "_value", offsetof(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _key), ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _value), ::app::Uno::Content::Fonts::BitmapFont__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Key, 0, false, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Value, 0, false, ::app::Uno::Content::Fonts::BitmapFont__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__New_1, 0, true, KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof(), ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey__typeof(), ::app::Uno::Content::Fonts::BitmapFont__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Key(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    return __this->_key;
}

::app::Uno::Content::Fonts::BitmapFont* KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Value(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__New_1(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value)
{
    KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont inst = ::uDefault< KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.KeyValuePair<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>", sizeof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _key),
        "_value", offsetof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _key), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _value), ::app::Fuse::Drawing::PolygonFiller__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Key, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Value, 0, false, ::app::Fuse::Drawing::PolygonFiller__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1, 0, true, KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Fuse::Drawing::PolygonFiller__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Drawing::Stroke* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Key(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_key;
}

::app::Fuse::Drawing::PolygonFiller* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Value(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value)
{
    KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller inst = ::uDefault< KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.KeyValuePair<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>", sizeof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _key),
        "_value", offsetof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _key), ::app::Fuse::Entities::Material__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _value), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Key, 0, false, ::app::Fuse::Entities::Material__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Value, 0, false, ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1, 0, true, KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof(), ::app::Fuse::Entities::Material__typeof(), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Entities::Material* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Key(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return __this->_key;
}

::app::Uno::Collections::List__Fuse_Entities_Entry* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Value(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value)
{
    KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ inst = ::uDefault< KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType), "Uno.Collections.KeyValuePair<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>", sizeof(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _key),
        "_value", offsetof(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _key), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _value), ::app::Fuse::Drawing::Batching::MeshBatcher__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Key, 0, false, ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Value, 0, false, ::app::Fuse::Drawing::Batching::MeshBatcher__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1, 0, true, KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof(), ::app::Fuse::Entities::Mesh__typeof(), ::app::Fuse::Drawing::Batching::MeshBatcher__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Entities::Mesh* KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Key(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    return __this->_key;
}

::app::Fuse::Drawing::Batching::MeshBatcher* KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Value(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value)
{
    KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher inst = ::uDefault< KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType* KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.KeyValuePair<Fuse.Entities.Mesh,Uno.Collections.List<Fuse.Entities.Entry>>", sizeof(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _key),
        "_value", offsetof(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _key), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _value), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Key, 0, false, ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Value, 0, false, ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1, 0, true, KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof(), ::app::Fuse::Entities::Mesh__typeof(), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Entities::Mesh* KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Key(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return __this->_key;
}

::app::Uno::Collections::List__Fuse_Entities_Entry* KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Value(KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Fuse::Entities::Mesh* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value)
{
    KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ inst = ::uDefault< KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType), "Uno.Collections.KeyValuePair<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>", sizeof(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _key),
        "_value", offsetof(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _key), ::app::Fuse::Font__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _value), ::app::Fuse::Controls::Internal::DefaultTextRenderer__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Key, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Value, 0, false, ::app::Fuse::Controls::Internal::DefaultTextRenderer__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1, 0, true, KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof(), ::app::Fuse::Font__typeof(), ::app::Fuse::Controls::Internal::DefaultTextRenderer__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Font* KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Key(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    return __this->_key;
}

::app::Fuse::Controls::Internal::DefaultTextRenderer* KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Value(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value)
{
    KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer inst = ::uDefault< KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_IFlush__bool__uType* KeyValuePair__Fuse_IFlush__bool__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_IFlush__bool__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_IFlush__bool__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_IFlush__bool__uType), "Uno.Collections.KeyValuePair<Fuse.IFlush,bool>", sizeof(KeyValuePair__Fuse_IFlush__bool), 0, 1, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_IFlush__bool, _key));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_IFlush__bool, _key), ::app::Fuse::IFlush__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_IFlush__bool, _value), ::app::Uno::Bool__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_IFlush__bool__get_Key, 0, false, ::app::Fuse::IFlush__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_IFlush__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_IFlush__bool__New_1, 0, true, KeyValuePair__Fuse_IFlush__bool__typeof(), ::app::Fuse::IFlush__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_IFlush__bool___ObjInit(KeyValuePair__Fuse_IFlush__bool* __this, ::uObject* key, bool value)
{
    __this->_key = key;
    __this->_value = value;
}

::uObject* KeyValuePair__Fuse_IFlush__bool__get_Key(KeyValuePair__Fuse_IFlush__bool* __this)
{
    return __this->_key;
}

bool KeyValuePair__Fuse_IFlush__bool__get_Value(KeyValuePair__Fuse_IFlush__bool* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_IFlush__bool KeyValuePair__Fuse_IFlush__bool__New_1(::uStatic* __this, ::uObject* key, bool value)
{
    KeyValuePair__Fuse_IFlush__bool inst = ::uDefault< KeyValuePair__Fuse_IFlush__bool>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType), "Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>", sizeof(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _key), ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _value), ::app::Fuse::Gestures::Internal::EdgeSwiper__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Key, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Value, 0, false, ::app::Fuse::Gestures::Internal::EdgeSwiper__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1, 0, true, KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof(), ::app::Fuse::Navigation::NavigationEdge__typeof(), ::app::Fuse::Gestures::Internal::EdgeSwiper__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Key(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    return __this->_key;
}

::app::Fuse::Gestures::Internal::EdgeSwiper* KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Value(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this, int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value)
{
    KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper inst = ::uDefault< KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Node__bool__uType* KeyValuePair__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Node__bool__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Node__bool__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Node__bool__uType), "Uno.Collections.KeyValuePair<Fuse.Node,bool>", sizeof(KeyValuePair__Fuse_Node__bool), 0, 1, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_Node__bool, _key));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Fuse_Node__bool, _key), ::app::Fuse::Node__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Fuse_Node__bool, _value), ::app::Uno::Bool__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Fuse_Node__bool__get_Key, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Fuse_Node__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Fuse_Node__bool__New_1, 0, true, KeyValuePair__Fuse_Node__bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Fuse_Node__bool___ObjInit(KeyValuePair__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Node* KeyValuePair__Fuse_Node__bool__get_Key(KeyValuePair__Fuse_Node__bool* __this)
{
    return __this->_key;
}

bool KeyValuePair__Fuse_Node__bool__get_Value(KeyValuePair__Fuse_Node__bool* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Node__bool KeyValuePair__Fuse_Node__bool__New_1(::uStatic* __this, ::app::Fuse::Node* key, bool value)
{
    KeyValuePair__Fuse_Node__bool inst = ::uDefault< KeyValuePair__Fuse_Node__bool>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType* KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocStructType(sizeof(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.KeyValuePair<HashableWeakReference,Outracks.Simulator.Bytecode.TypeName>", sizeof(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _key),
        "_value", offsetof(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _key), ::app::HashableWeakReference__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName, _value), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Key, 0, false, ::app::HashableWeakReference__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Value, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1, 0, true, KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::HashableWeakReference__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::HashableWeakReference* KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Key(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->_key;
}

::app::Outracks::Simulator::Bytecode::TypeName* KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Value(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->_value;
}

KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName inst = ::uDefault< KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__HashableWeakReference__string__uType* KeyValuePair__HashableWeakReference__string__typeof()
{
    static ::uStaticStrong<KeyValuePair__HashableWeakReference__string__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__HashableWeakReference__string__uType*)::uAllocStructType(sizeof(KeyValuePair__HashableWeakReference__string__uType), "Uno.Collections.KeyValuePair<HashableWeakReference,string>", sizeof(KeyValuePair__HashableWeakReference__string), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__HashableWeakReference__string, _key),
        "_value", offsetof(KeyValuePair__HashableWeakReference__string, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__HashableWeakReference__string, _key), ::app::HashableWeakReference__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__HashableWeakReference__string, _value), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__HashableWeakReference__string__get_Key, 0, false, ::app::HashableWeakReference__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__HashableWeakReference__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__HashableWeakReference__string__New_1, 0, true, KeyValuePair__HashableWeakReference__string__typeof(), ::app::HashableWeakReference__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__HashableWeakReference__string___ObjInit(KeyValuePair__HashableWeakReference__string* __this, ::app::HashableWeakReference* key, ::uString* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::HashableWeakReference* KeyValuePair__HashableWeakReference__string__get_Key(KeyValuePair__HashableWeakReference__string* __this)
{
    return __this->_key;
}

::uString* KeyValuePair__HashableWeakReference__string__get_Value(KeyValuePair__HashableWeakReference__string* __this)
{
    return __this->_value;
}

KeyValuePair__HashableWeakReference__string KeyValuePair__HashableWeakReference__string__New_1(::uStatic* __this, ::app::HashableWeakReference* key, ::uString* value)
{
    KeyValuePair__HashableWeakReference__string inst = ::uDefault< KeyValuePair__HashableWeakReference__string>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__bool__uType* KeyValuePair__int__bool__typeof()
{
    static ::uStaticStrong<KeyValuePair__int__bool__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__bool__uType*)::uAllocStructType(sizeof(KeyValuePair__int__bool__uType), "Uno.Collections.KeyValuePair<int,bool>", sizeof(KeyValuePair__int__bool), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__int__bool, _key), ::app::Uno::Int__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__int__bool, _value), ::app::Uno::Bool__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__int__bool__get_Key, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__int__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__int__bool__New_1, 0, true, KeyValuePair__int__bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__int__bool___ObjInit(KeyValuePair__int__bool* __this, int key, bool value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__bool__get_Key(KeyValuePair__int__bool* __this)
{
    return __this->_key;
}

bool KeyValuePair__int__bool__get_Value(KeyValuePair__int__bool* __this)
{
    return __this->_value;
}

KeyValuePair__int__bool KeyValuePair__int__bool__New_1(::uStatic* __this, int key, bool value)
{
    KeyValuePair__int__bool inst = ::uDefault< KeyValuePair__int__bool>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__Fuse_Input_Capturer__uType* KeyValuePair__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<KeyValuePair__int__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__Fuse_Input_Capturer__uType*)::uAllocStructType(sizeof(KeyValuePair__int__Fuse_Input_Capturer__uType), "Uno.Collections.KeyValuePair<int,Fuse.Input.Capturer>", sizeof(KeyValuePair__int__Fuse_Input_Capturer), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__Fuse_Input_Capturer, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__int__Fuse_Input_Capturer, _key), ::app::Uno::Int__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__int__Fuse_Input_Capturer, _value), ::app::Fuse::Input::Capturer__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__int__Fuse_Input_Capturer__get_Key, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__int__Fuse_Input_Capturer__get_Value, 0, false, ::app::Fuse::Input::Capturer__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__int__Fuse_Input_Capturer__New_1, 0, true, KeyValuePair__int__Fuse_Input_Capturer__typeof(), ::app::Uno::Int__typeof(), ::app::Fuse::Input::Capturer__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__int__Fuse_Input_Capturer___ObjInit(KeyValuePair__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__Fuse_Input_Capturer__get_Key(KeyValuePair__int__Fuse_Input_Capturer* __this)
{
    return __this->_key;
}

::app::Fuse::Input::Capturer* KeyValuePair__int__Fuse_Input_Capturer__get_Value(KeyValuePair__int__Fuse_Input_Capturer* __this)
{
    return __this->_value;
}

KeyValuePair__int__Fuse_Input_Capturer KeyValuePair__int__Fuse_Input_Capturer__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    KeyValuePair__int__Fuse_Input_Capturer inst = ::uDefault< KeyValuePair__int__Fuse_Input_Capturer>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType* KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong<KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType*)::uAllocStructType(sizeof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType), "Uno.Collections.KeyValuePair<int,Fuse.Input.Pointer_PointerRecord>", sizeof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord, _key), ::app::Uno::Int__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord, _value), ::app::Fuse::Input::Pointer_PointerRecord__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Key, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Value, 0, false, ::app::Fuse::Input::Pointer_PointerRecord__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__New_1, 0, true, KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof(), ::app::Uno::Int__typeof(), ::app::Fuse::Input::Pointer_PointerRecord__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__int__Fuse_Input_Pointer_PointerRecord___ObjInit(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Key(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return __this->_key;
}

::app::Fuse::Input::Pointer_PointerRecord* KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Value(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return __this->_value;
}

KeyValuePair__int__Fuse_Input_Pointer_PointerRecord KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value)
{
    KeyValuePair__int__Fuse_Input_Pointer_PointerRecord inst = ::uDefault< KeyValuePair__int__Fuse_Input_Pointer_PointerRecord>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__Fuse_Scripting_Callback__uType* KeyValuePair__int__Fuse_Scripting_Callback__typeof()
{
    static ::uStaticStrong<KeyValuePair__int__Fuse_Scripting_Callback__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__Fuse_Scripting_Callback__uType*)::uAllocStructType(sizeof(KeyValuePair__int__Fuse_Scripting_Callback__uType), "Uno.Collections.KeyValuePair<int,Fuse.Scripting.Callback>", sizeof(KeyValuePair__int__Fuse_Scripting_Callback), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__Fuse_Scripting_Callback, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__int__Fuse_Scripting_Callback, _key), ::app::Uno::Int__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__int__Fuse_Scripting_Callback, _value), ::app::Fuse::Scripting::Callback__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__int__Fuse_Scripting_Callback__get_Key, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__int__Fuse_Scripting_Callback__get_Value, 0, false, ::app::Fuse::Scripting::Callback__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__int__Fuse_Scripting_Callback__New_1, 0, true, KeyValuePair__int__Fuse_Scripting_Callback__typeof(), ::app::Uno::Int__typeof(), ::app::Fuse::Scripting::Callback__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__int__Fuse_Scripting_Callback___ObjInit(KeyValuePair__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__Fuse_Scripting_Callback__get_Key(KeyValuePair__int__Fuse_Scripting_Callback* __this)
{
    return __this->_key;
}

::uDelegate* KeyValuePair__int__Fuse_Scripting_Callback__get_Value(KeyValuePair__int__Fuse_Scripting_Callback* __this)
{
    return __this->_value;
}

KeyValuePair__int__Fuse_Scripting_Callback KeyValuePair__int__Fuse_Scripting_Callback__New_1(::uStatic* __this, int key, ::uDelegate* value)
{
    KeyValuePair__int__Fuse_Scripting_Callback inst = ::uDefault< KeyValuePair__int__Fuse_Scripting_Callback>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__int__uType* KeyValuePair__int__int__typeof()
{
    static ::uStaticStrong<KeyValuePair__int__int__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__int__uType*)::uAllocStructType(sizeof(KeyValuePair__int__int__uType), "Uno.Collections.KeyValuePair<int,int>", sizeof(KeyValuePair__int__int), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__int__int, _key), ::app::Uno::Int__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__int__int, _value), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__int__int__get_Key, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__int__int__get_Value, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__int__int__New_1, 0, true, KeyValuePair__int__int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__int__int___ObjInit(KeyValuePair__int__int* __this, int key, int value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__int__get_Key(KeyValuePair__int__int* __this)
{
    return __this->_key;
}

int KeyValuePair__int__int__get_Value(KeyValuePair__int__int* __this)
{
    return __this->_value;
}

KeyValuePair__int__int KeyValuePair__int__int__New_1(::uStatic* __this, int key, int value)
{
    KeyValuePair__int__int inst = ::uDefault< KeyValuePair__int__int>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__string__uType* KeyValuePair__int__string__typeof()
{
    static ::uStaticStrong<KeyValuePair__int__string__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__string__uType*)::uAllocStructType(sizeof(KeyValuePair__int__string__uType), "Uno.Collections.KeyValuePair<int,string>", sizeof(KeyValuePair__int__string), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__string, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__int__string, _key), ::app::Uno::Int__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__int__string, _value), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__int__string__get_Key, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__int__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__int__string__New_1, 0, true, KeyValuePair__int__string__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__int__string___ObjInit(KeyValuePair__int__string* __this, int key, ::uString* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__string__get_Key(KeyValuePair__int__string* __this)
{
    return __this->_key;
}

::uString* KeyValuePair__int__string__get_Value(KeyValuePair__int__string* __this)
{
    return __this->_value;
}

KeyValuePair__int__string KeyValuePair__int__string__New_1(::uStatic* __this, int key, ::uString* value)
{
    KeyValuePair__int__string inst = ::uDefault< KeyValuePair__int__string>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong<KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocStructType(sizeof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.KeyValuePair<int,Uno.Collections.IList<Fuse.Input.Capturer>>", sizeof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_, _key), ::app::Uno::Int__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_, _value), ::app::Uno::Collections::IList__Fuse_Input_Capturer__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Key, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Value, 0, false, ::app::Uno::Collections::IList__Fuse_Input_Capturer__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1, 0, true, KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IList__Fuse_Input_Capturer__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Key(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return __this->_key;
}

::uObject* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Value(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return __this->_value;
}

KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, int key, ::uObject* value)
{
    KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ inst = ::uDefault< KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()
{
    static ::uStaticStrong<KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*)::uAllocStructType(sizeof(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType), "Uno.Collections.KeyValuePair<int,Uno.Collections.List<Fuse.Input.Pointer_PELHolder>>", sizeof(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _key), ::app::Uno::Int__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _value), ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Key, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Value, 0, false, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1, 0, true, KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Key(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    return __this->_key;
}

::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Value(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    return __this->_value;
}

KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(::uStatic* __this, int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* value)
{
    KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ inst = ::uDefault< KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__object__object__uType* KeyValuePair__object__object__typeof()
{
    static ::uStaticStrong<KeyValuePair__object__object__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__object__object__uType*)::uAllocStructType(sizeof(KeyValuePair__object__object__uType), "Uno.Collections.KeyValuePair<object,object>", sizeof(KeyValuePair__object__object), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__object__object, _key),
        "_value", offsetof(KeyValuePair__object__object, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__object__object, _key), ::uObject__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__object__object, _value), ::uObject__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__object__object__get_Key, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__object__object__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__object__object__New_1, 0, true, KeyValuePair__object__object__typeof(), ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__object__object___ObjInit(KeyValuePair__object__object* __this, ::uObject* key, ::uObject* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uObject* KeyValuePair__object__object__get_Key(KeyValuePair__object__object* __this)
{
    return __this->_key;
}

::uObject* KeyValuePair__object__object__get_Value(KeyValuePair__object__object* __this)
{
    return __this->_value;
}

KeyValuePair__object__object KeyValuePair__object__object__New_1(::uStatic* __this, ::uObject* key, ::uObject* value)
{
    KeyValuePair__object__object inst = ::uDefault< KeyValuePair__object__object>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__object__string__uType* KeyValuePair__object__string__typeof()
{
    static ::uStaticStrong<KeyValuePair__object__string__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__object__string__uType*)::uAllocStructType(sizeof(KeyValuePair__object__string__uType), "Uno.Collections.KeyValuePair<object,string>", sizeof(KeyValuePair__object__string), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__object__string, _key),
        "_value", offsetof(KeyValuePair__object__string, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__object__string, _key), ::uObject__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__object__string, _value), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__object__string__get_Key, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__object__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__object__string__New_1, 0, true, KeyValuePair__object__string__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__object__string___ObjInit(KeyValuePair__object__string* __this, ::uObject* key, ::uString* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uObject* KeyValuePair__object__string__get_Key(KeyValuePair__object__string* __this)
{
    return __this->_key;
}

::uString* KeyValuePair__object__string__get_Value(KeyValuePair__object__string* __this)
{
    return __this->_value;
}

KeyValuePair__object__string KeyValuePair__object__string__New_1(::uStatic* __this, ::uObject* key, ::uString* value)
{
    KeyValuePair__object__string inst = ::uDefault< KeyValuePair__object__string>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocStructType(sizeof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName>", sizeof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _key),
        "_value", offsetof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _key), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName, _value), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Key, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Value, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__New_1, 0, true, KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName___ObjInit(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Outracks::Simulator::Bytecode::TypeName* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Key(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->_key;
}

::app::Outracks::Simulator::Bytecode::TypeName* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Value(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->_value;
}

KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName inst = ::uDefault< KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()
{
    static ::uStaticStrong<KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType*)::uAllocStructType(sizeof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType), "Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.TypeName,Uno.Type>", sizeof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _key),
        "_value", offsetof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _key), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type, _value), ::uType__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Key, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Value, 0, false, ::uType__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1, 0, true, KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uType__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Outracks::Simulator::Bytecode::TypeName* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Key(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
    return __this->_key;
}

::uType* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Value(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this)
{
    return __this->_value;
}

KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value)
{
    KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type inst = ::uDefault< KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__uType* KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__typeof()
{
    static ::uStaticStrong<KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__uType*)::uAllocStructType(sizeof(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__uType), "Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.Variable,object>", sizeof(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object, _key),
        "_value", offsetof(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object, _key), ::app::Outracks::Simulator::Bytecode::Variable__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object, _value), ::uObject__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__get_Key, 0, false, ::app::Outracks::Simulator::Bytecode::Variable__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__New_1, 0, true, KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__typeof(), ::app::Outracks::Simulator::Bytecode::Variable__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Outracks_Simulator_Bytecode_Variable__object___ObjInit(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Outracks::Simulator::Bytecode::Variable* KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__get_Key(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object* __this)
{
    return __this->_key;
}

::uObject* KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__get_Value(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object* __this)
{
    return __this->_value;
}

KeyValuePair__Outracks_Simulator_Bytecode_Variable__object KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value)
{
    KeyValuePair__Outracks_Simulator_Bytecode_Variable__object inst = ::uDefault< KeyValuePair__Outracks_Simulator_Bytecode_Variable__object>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Android_android_graphics_Bitmap__uType* KeyValuePair__string__Android_android_graphics_Bitmap__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Android_android_graphics_Bitmap__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Android_android_graphics_Bitmap__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Android_android_graphics_Bitmap__uType), "Uno.Collections.KeyValuePair<string,Android.android.graphics.Bitmap>", sizeof(KeyValuePair__string__Android_android_graphics_Bitmap), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Android_android_graphics_Bitmap, _key),
        "_value", offsetof(KeyValuePair__string__Android_android_graphics_Bitmap, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Android_android_graphics_Bitmap, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Android_android_graphics_Bitmap, _value), ::app::Android::android::graphics::Bitmap__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Android_android_graphics_Bitmap__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Android_android_graphics_Bitmap__get_Value, 0, false, ::app::Android::android::graphics::Bitmap__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Android_android_graphics_Bitmap__New_1, 0, true, KeyValuePair__string__Android_android_graphics_Bitmap__typeof(), ::app::Uno::String__typeof(), ::app::Android::android::graphics::Bitmap__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Android_android_graphics_Bitmap___ObjInit(KeyValuePair__string__Android_android_graphics_Bitmap* __this, ::uString* key, ::app::Android::android::graphics::Bitmap* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Android_android_graphics_Bitmap__get_Key(KeyValuePair__string__Android_android_graphics_Bitmap* __this)
{
    return __this->_key;
}

::app::Android::android::graphics::Bitmap* KeyValuePair__string__Android_android_graphics_Bitmap__get_Value(KeyValuePair__string__Android_android_graphics_Bitmap* __this)
{
    return __this->_value;
}

KeyValuePair__string__Android_android_graphics_Bitmap KeyValuePair__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this, ::uString* key, ::app::Android::android::graphics::Bitmap* value)
{
    KeyValuePair__string__Android_android_graphics_Bitmap inst = ::uDefault< KeyValuePair__string__Android_android_graphics_Bitmap>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Android_android_graphics_Typeface__uType* KeyValuePair__string__Android_android_graphics_Typeface__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Android_android_graphics_Typeface__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Android_android_graphics_Typeface__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Android_android_graphics_Typeface__uType), "Uno.Collections.KeyValuePair<string,Android.android.graphics.Typeface>", sizeof(KeyValuePair__string__Android_android_graphics_Typeface), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Android_android_graphics_Typeface, _key),
        "_value", offsetof(KeyValuePair__string__Android_android_graphics_Typeface, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Android_android_graphics_Typeface, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Android_android_graphics_Typeface, _value), ::app::Android::android::graphics::Typeface__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Android_android_graphics_Typeface__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Android_android_graphics_Typeface__get_Value, 0, false, ::app::Android::android::graphics::Typeface__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Android_android_graphics_Typeface__New_1, 0, true, KeyValuePair__string__Android_android_graphics_Typeface__typeof(), ::app::Uno::String__typeof(), ::app::Android::android::graphics::Typeface__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Android_android_graphics_Typeface___ObjInit(KeyValuePair__string__Android_android_graphics_Typeface* __this, ::uString* key, ::app::Android::android::graphics::Typeface* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Android_android_graphics_Typeface__get_Key(KeyValuePair__string__Android_android_graphics_Typeface* __this)
{
    return __this->_key;
}

::app::Android::android::graphics::Typeface* KeyValuePair__string__Android_android_graphics_Typeface__get_Value(KeyValuePair__string__Android_android_graphics_Typeface* __this)
{
    return __this->_value;
}

KeyValuePair__string__Android_android_graphics_Typeface KeyValuePair__string__Android_android_graphics_Typeface__New_1(::uStatic* __this, ::uString* key, ::app::Android::android::graphics::Typeface* value)
{
    KeyValuePair__string__Android_android_graphics_Typeface inst = ::uDefault< KeyValuePair__string__Android_android_graphics_Typeface>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__bool__uType* KeyValuePair__string__bool__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__bool__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__bool__uType*)::uAllocStructType(sizeof(KeyValuePair__string__bool__uType), "Uno.Collections.KeyValuePair<string,bool>", sizeof(KeyValuePair__string__bool), 0, 1, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__bool, _key));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__bool, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__bool, _value), ::app::Uno::Bool__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__bool__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__bool__New_1, 0, true, KeyValuePair__string__bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__bool___ObjInit(KeyValuePair__string__bool* __this, ::uString* key, bool value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__bool__get_Key(KeyValuePair__string__bool* __this)
{
    return __this->_key;
}

bool KeyValuePair__string__bool__get_Value(KeyValuePair__string__bool* __this)
{
    return __this->_value;
}

KeyValuePair__string__bool KeyValuePair__string__bool__New_1(::uStatic* __this, ::uString* key, bool value)
{
    KeyValuePair__string__bool inst = ::uDefault< KeyValuePair__string__bool>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Experimental_Cache_DiskCacheEntry__uType* KeyValuePair__string__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Experimental_Cache_DiskCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Experimental_Cache_DiskCacheEntry__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Experimental_Cache_DiskCacheEntry__uType), "Uno.Collections.KeyValuePair<string,Experimental.Cache.DiskCacheEntry>", sizeof(KeyValuePair__string__Experimental_Cache_DiskCacheEntry), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Experimental_Cache_DiskCacheEntry, _key),
        "_value", offsetof(KeyValuePair__string__Experimental_Cache_DiskCacheEntry, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Experimental_Cache_DiskCacheEntry, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Experimental_Cache_DiskCacheEntry, _value), ::app::Experimental::Cache::DiskCacheEntry__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Experimental_Cache_DiskCacheEntry__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Experimental_Cache_DiskCacheEntry__get_Value, 0, false, ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Experimental_Cache_DiskCacheEntry__New_1, 0, true, KeyValuePair__string__Experimental_Cache_DiskCacheEntry__typeof(), ::app::Uno::String__typeof(), ::app::Experimental::Cache::DiskCacheEntry__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Experimental_Cache_DiskCacheEntry___ObjInit(KeyValuePair__string__Experimental_Cache_DiskCacheEntry* __this, ::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Experimental_Cache_DiskCacheEntry__get_Key(KeyValuePair__string__Experimental_Cache_DiskCacheEntry* __this)
{
    return __this->_key;
}

::app::Experimental::Cache::DiskCacheEntry* KeyValuePair__string__Experimental_Cache_DiskCacheEntry__get_Value(KeyValuePair__string__Experimental_Cache_DiskCacheEntry* __this)
{
    return __this->_value;
}

KeyValuePair__string__Experimental_Cache_DiskCacheEntry KeyValuePair__string__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this, ::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value)
{
    KeyValuePair__string__Experimental_Cache_DiskCacheEntry inst = ::uDefault< KeyValuePair__string__Experimental_Cache_DiskCacheEntry>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType), "Uno.Collections.KeyValuePair<string,Fuse.Shapes.GeometryCacheEntry>", sizeof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry, _key),
        "_value", offsetof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry, _value), ::app::Fuse::Shapes::GeometryCacheEntry__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Value, 0, false, ::app::Fuse::Shapes::GeometryCacheEntry__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__New_1, 0, true, KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Shapes::GeometryCacheEntry__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Key(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    return __this->_key;
}

::app::Fuse::Shapes::GeometryCacheEntry* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Value(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    return __this->_value;
}

KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value)
{
    KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry inst = ::uDefault< KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__int__uType* KeyValuePair__string__int__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__int__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__int__uType*)::uAllocStructType(sizeof(KeyValuePair__string__int__uType), "Uno.Collections.KeyValuePair<string,int>", sizeof(KeyValuePair__string__int), 0, 1, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__int, _key));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__int, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__int, _value), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__int__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__int__get_Value, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__int__New_1, 0, true, KeyValuePair__string__int__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__int___ObjInit(KeyValuePair__string__int* __this, ::uString* key, int value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__int__get_Key(KeyValuePair__string__int* __this)
{
    return __this->_key;
}

int KeyValuePair__string__int__get_Value(KeyValuePair__string__int* __this)
{
    return __this->_value;
}

KeyValuePair__string__int KeyValuePair__string__int__New_1(::uStatic* __this, ::uString* key, int value)
{
    KeyValuePair__string__int inst = ::uDefault< KeyValuePair__string__int>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__object__uType* KeyValuePair__string__object__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__object__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__object__uType*)::uAllocStructType(sizeof(KeyValuePair__string__object__uType), "Uno.Collections.KeyValuePair<string,object>", sizeof(KeyValuePair__string__object), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__object, _key),
        "_value", offsetof(KeyValuePair__string__object, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__object, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__object, _value), ::uObject__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__object__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__object__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__object__New_1, 0, true, KeyValuePair__string__object__typeof(), ::app::Uno::String__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__object___ObjInit(KeyValuePair__string__object* __this, ::uString* key, ::uObject* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__object__get_Key(KeyValuePair__string__object* __this)
{
    return __this->_key;
}

::uObject* KeyValuePair__string__object__get_Value(KeyValuePair__string__object* __this)
{
    return __this->_value;
}

KeyValuePair__string__object KeyValuePair__string__object__New_1(::uStatic* __this, ::uString* key, ::uObject* value)
{
    KeyValuePair__string__object inst = ::uDefault< KeyValuePair__string__object>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Outracks_Simulator_ByteFileSource__uType* KeyValuePair__string__Outracks_Simulator_ByteFileSource__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Outracks_Simulator_ByteFileSource__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Outracks_Simulator_ByteFileSource__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Outracks_Simulator_ByteFileSource__uType), "Uno.Collections.KeyValuePair<string,Outracks.Simulator.ByteFileSource>", sizeof(KeyValuePair__string__Outracks_Simulator_ByteFileSource), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Outracks_Simulator_ByteFileSource, _key),
        "_value", offsetof(KeyValuePair__string__Outracks_Simulator_ByteFileSource, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Outracks_Simulator_ByteFileSource, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Outracks_Simulator_ByteFileSource, _value), ::app::Outracks::Simulator::ByteFileSource__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Outracks_Simulator_ByteFileSource__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Outracks_Simulator_ByteFileSource__get_Value, 0, false, ::app::Outracks::Simulator::ByteFileSource__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Outracks_Simulator_ByteFileSource__New_1, 0, true, KeyValuePair__string__Outracks_Simulator_ByteFileSource__typeof(), ::app::Uno::String__typeof(), ::app::Outracks::Simulator::ByteFileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Outracks_Simulator_ByteFileSource___ObjInit(KeyValuePair__string__Outracks_Simulator_ByteFileSource* __this, ::uString* key, ::app::Outracks::Simulator::ByteFileSource* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Outracks_Simulator_ByteFileSource__get_Key(KeyValuePair__string__Outracks_Simulator_ByteFileSource* __this)
{
    return __this->_key;
}

::app::Outracks::Simulator::ByteFileSource* KeyValuePair__string__Outracks_Simulator_ByteFileSource__get_Value(KeyValuePair__string__Outracks_Simulator_ByteFileSource* __this)
{
    return __this->_value;
}

KeyValuePair__string__Outracks_Simulator_ByteFileSource KeyValuePair__string__Outracks_Simulator_ByteFileSource__New_1(::uStatic* __this, ::uString* key, ::app::Outracks::Simulator::ByteFileSource* value)
{
    KeyValuePair__string__Outracks_Simulator_ByteFileSource inst = ::uDefault< KeyValuePair__string__Outracks_Simulator_ByteFileSource>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__string__uType* KeyValuePair__string__string__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__string__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__string__uType*)::uAllocStructType(sizeof(KeyValuePair__string__string__uType), "Uno.Collections.KeyValuePair<string,string>", sizeof(KeyValuePair__string__string), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__string, _key),
        "_value", offsetof(KeyValuePair__string__string, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__string, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__string, _value), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__string__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__string__New_1, 0, true, KeyValuePair__string__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__string___ObjInit(KeyValuePair__string__string* __this, ::uString* key, ::uString* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__string__get_Key(KeyValuePair__string__string* __this)
{
    return __this->_key;
}

::uString* KeyValuePair__string__string__get_Value(KeyValuePair__string__string* __this)
{
    return __this->_value;
}

KeyValuePair__string__string KeyValuePair__string__string__New_1(::uStatic* __this, ::uString* key, ::uString* value)
{
    KeyValuePair__string__string inst = ::uDefault< KeyValuePair__string__string>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType), "Uno.Collections.KeyValuePair<string,Uno.Collections.List<Fuse.Scripting.INameListener>>", sizeof(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _key),
        "_value", offsetof(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _value), ::app::Uno::Collections::List__Fuse_Scripting_INameListener__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Value, 0, false, ::app::Uno::Collections::List__Fuse_Scripting_INameListener__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1, 0, true, KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof(), ::app::Uno::String__typeof(), ::app::Uno::Collections::List__Fuse_Scripting_INameListener__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Key(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    return __this->_key;
}

::app::Uno::Collections::List__Fuse_Scripting_INameListener* KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Value(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_ KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this, ::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value)
{
    KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_ inst = ::uDefault< KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Collections_List_object___uType* KeyValuePair__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Collections_List_object___uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Collections_List_object___uType), "Uno.Collections.KeyValuePair<string,Uno.Collections.List<object>>", sizeof(KeyValuePair__string__Uno_Collections_List_object_), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Collections_List_object_, _key),
        "_value", offsetof(KeyValuePair__string__Uno_Collections_List_object_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_Collections_List_object_, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_Collections_List_object_, _value), ::app::Uno::Collections::List__object__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_Collections_List_object___get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_Collections_List_object___get_Value, 0, false, ::app::Uno::Collections::List__object__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_Collections_List_object___New_1, 0, true, KeyValuePair__string__Uno_Collections_List_object___typeof(), ::app::Uno::String__typeof(), ::app::Uno::Collections::List__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_Collections_List_object____ObjInit(KeyValuePair__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Collections_List_object___get_Key(KeyValuePair__string__Uno_Collections_List_object_* __this)
{
    return __this->_key;
}

::app::Uno::Collections::List__object* KeyValuePair__string__Uno_Collections_List_object___get_Value(KeyValuePair__string__Uno_Collections_List_object_* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Collections_List_object_ KeyValuePair__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::uString* key, ::app::Uno::Collections::List__object* value)
{
    KeyValuePair__string__Uno_Collections_List_object_ inst = ::uDefault< KeyValuePair__string__Uno_Collections_List_object_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Collections_List_Uno_Action___uType* KeyValuePair__string__Uno_Collections_List_Uno_Action___typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Collections_List_Uno_Action___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Collections_List_Uno_Action___uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Collections_List_Uno_Action___uType), "Uno.Collections.KeyValuePair<string,Uno.Collections.List<Uno.Action>>", sizeof(KeyValuePair__string__Uno_Collections_List_Uno_Action_), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Collections_List_Uno_Action_, _key),
        "_value", offsetof(KeyValuePair__string__Uno_Collections_List_Uno_Action_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_Collections_List_Uno_Action_, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_Collections_List_Uno_Action_, _value), ::app::Uno::Collections::List__Uno_Action__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_Collections_List_Uno_Action___get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_Collections_List_Uno_Action___get_Value, 0, false, ::app::Uno::Collections::List__Uno_Action__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_Collections_List_Uno_Action___New_1, 0, true, KeyValuePair__string__Uno_Collections_List_Uno_Action___typeof(), ::app::Uno::String__typeof(), ::app::Uno::Collections::List__Uno_Action__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_Collections_List_Uno_Action____ObjInit(KeyValuePair__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Collections_List_Uno_Action___get_Key(KeyValuePair__string__Uno_Collections_List_Uno_Action_* __this)
{
    return __this->_key;
}

::app::Uno::Collections::List__Uno_Action* KeyValuePair__string__Uno_Collections_List_Uno_Action___get_Value(KeyValuePair__string__Uno_Collections_List_Uno_Action_* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Collections_List_Uno_Action_ KeyValuePair__string__Uno_Collections_List_Uno_Action___New_1(::uStatic* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action* value)
{
    KeyValuePair__string__Uno_Collections_List_Uno_Action_ inst = ::uDefault< KeyValuePair__string__Uno_Collections_List_Uno_Action_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Content_Models_ModelParameter__uType* KeyValuePair__string__Uno_Content_Models_ModelParameter__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Content_Models_ModelParameter__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Content_Models_ModelParameter__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Content_Models_ModelParameter__uType), "Uno.Collections.KeyValuePair<string,Uno.Content.Models.ModelParameter>", sizeof(KeyValuePair__string__Uno_Content_Models_ModelParameter), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Content_Models_ModelParameter, _key),
        "_value", offsetof(KeyValuePair__string__Uno_Content_Models_ModelParameter, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_Content_Models_ModelParameter, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_Content_Models_ModelParameter, _value), ::app::Uno::Content::Models::ModelParameter__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_Content_Models_ModelParameter__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_Content_Models_ModelParameter__get_Value, 0, false, ::app::Uno::Content::Models::ModelParameter__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_Content_Models_ModelParameter__New_1, 0, true, KeyValuePair__string__Uno_Content_Models_ModelParameter__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Content::Models::ModelParameter__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_Content_Models_ModelParameter___ObjInit(KeyValuePair__string__Uno_Content_Models_ModelParameter* __this, ::uString* key, ::app::Uno::Content::Models::ModelParameter* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Content_Models_ModelParameter__get_Key(KeyValuePair__string__Uno_Content_Models_ModelParameter* __this)
{
    return __this->_key;
}

::app::Uno::Content::Models::ModelParameter* KeyValuePair__string__Uno_Content_Models_ModelParameter__get_Value(KeyValuePair__string__Uno_Content_Models_ModelParameter* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Content_Models_ModelParameter KeyValuePair__string__Uno_Content_Models_ModelParameter__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Content::Models::ModelParameter* value)
{
    KeyValuePair__string__Uno_Content_Models_ModelParameter inst = ::uDefault< KeyValuePair__string__Uno_Content_Models_ModelParameter>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType), "Uno.Collections.KeyValuePair<string,Uno.Content.Models.VertexAttributeArray>", sizeof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray, _key),
        "_value", offsetof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray, _value), ::app::Uno::Content::Models::VertexAttributeArray__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Value, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__New_1, 0, true, KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Content::Models::VertexAttributeArray__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_Content_Models_VertexAttributeArray___ObjInit(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Key(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return __this->_key;
}

::app::Uno::Content::Models::VertexAttributeArray* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Value(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Content_Models_VertexAttributeArray KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value)
{
    KeyValuePair__string__Uno_Content_Models_VertexAttributeArray inst = ::uDefault< KeyValuePair__string__Uno_Content_Models_VertexAttributeArray>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Data_Json_Value__uType* KeyValuePair__string__Uno_Data_Json_Value__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Data_Json_Value__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Data_Json_Value__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Data_Json_Value__uType), "Uno.Collections.KeyValuePair<string,Uno.Data.Json.Value>", sizeof(KeyValuePair__string__Uno_Data_Json_Value), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Data_Json_Value, _key),
        "_value", offsetof(KeyValuePair__string__Uno_Data_Json_Value, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_Data_Json_Value, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_Data_Json_Value, _value), ::app::Uno::Data::Json::Value__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_Data_Json_Value__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_Data_Json_Value__get_Value, 0, false, ::app::Uno::Data::Json::Value__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_Data_Json_Value__New_1, 0, true, KeyValuePair__string__Uno_Data_Json_Value__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Data::Json::Value__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_Data_Json_Value___ObjInit(KeyValuePair__string__Uno_Data_Json_Value* __this, ::uString* key, ::app::Uno::Data::Json::Value* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Data_Json_Value__get_Key(KeyValuePair__string__Uno_Data_Json_Value* __this)
{
    return __this->_key;
}

::app::Uno::Data::Json::Value* KeyValuePair__string__Uno_Data_Json_Value__get_Value(KeyValuePair__string__Uno_Data_Json_Value* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Data_Json_Value KeyValuePair__string__Uno_Data_Json_Value__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Data::Json::Value* value)
{
    KeyValuePair__string__Uno_Data_Json_Value inst = ::uDefault< KeyValuePair__string__Uno_Data_Json_Value>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Data_Xml_XmlEncoding__uType* KeyValuePair__string__Uno_Data_Xml_XmlEncoding__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Data_Xml_XmlEncoding__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Data_Xml_XmlEncoding__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Data_Xml_XmlEncoding__uType), "Uno.Collections.KeyValuePair<string,Uno.Data.Xml.XmlEncoding>", sizeof(KeyValuePair__string__Uno_Data_Xml_XmlEncoding), 0, 1, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Data_Xml_XmlEncoding, _key));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_Data_Xml_XmlEncoding, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_Data_Xml_XmlEncoding, _value), ::app::Uno::Data::Xml::XmlEncoding__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_Data_Xml_XmlEncoding__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_Data_Xml_XmlEncoding__get_Value, 0, false, ::app::Uno::Data::Xml::XmlEncoding__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_Data_Xml_XmlEncoding__New_1, 0, true, KeyValuePair__string__Uno_Data_Xml_XmlEncoding__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Data::Xml::XmlEncoding__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_Data_Xml_XmlEncoding___ObjInit(KeyValuePair__string__Uno_Data_Xml_XmlEncoding* __this, ::uString* key, int value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Data_Xml_XmlEncoding__get_Key(KeyValuePair__string__Uno_Data_Xml_XmlEncoding* __this)
{
    return __this->_key;
}

int KeyValuePair__string__Uno_Data_Xml_XmlEncoding__get_Value(KeyValuePair__string__Uno_Data_Xml_XmlEncoding* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Data_Xml_XmlEncoding KeyValuePair__string__Uno_Data_Xml_XmlEncoding__New_1(::uStatic* __this, ::uString* key, int value)
{
    KeyValuePair__string__Uno_Data_Xml_XmlEncoding inst = ::uDefault< KeyValuePair__string__Uno_Data_Xml_XmlEncoding>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType), "Uno.Collections.KeyValuePair<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>", sizeof(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _key),
        "_value", offsetof(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _value), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Value, 0, false, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1, 0, true, KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___ObjInit(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::uString* key, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Key(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    return __this->_key;
}

::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Value(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* value)
{
    KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram inst = ::uDefault< KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType), "Uno.Collections.KeyValuePair<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>", sizeof(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _key),
        "_value", offsetof(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _key), ::app::Uno::String__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _value), ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Value, 0, false, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1, 0, true, KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof(), ::app::Uno::String__typeof(), ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Key(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    return __this->_key;
}

::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Value(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this, ::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value)
{
    KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ inst = ::uDefault< KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof()
{
    static ::uStaticStrong<KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__uType*)::uAllocStructType(sizeof(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__uType), "Uno.Collections.KeyValuePair<Uno.Content.Fonts.BitmapFont_CharPair,float>", sizeof(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float, _key), ::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float, _value), ::app::Uno::Float__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Key, 0, false, ::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1, 0, true, KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof(), ::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Uno::Content::Fonts::BitmapFont_CharPair KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Key(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    return __this->_key;
}

float KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Value(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    return __this->_value;
}

KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value)
{
    KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float inst = ::uDefault< KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Uno_Type__object__uType* KeyValuePair__Uno_Type__object__typeof()
{
    static ::uStaticStrong<KeyValuePair__Uno_Type__object__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Uno_Type__object__uType*)::uAllocStructType(sizeof(KeyValuePair__Uno_Type__object__uType), "Uno.Collections.KeyValuePair<Uno.Type,object>", sizeof(KeyValuePair__Uno_Type__object), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Uno_Type__object, _key),
        "_value", offsetof(KeyValuePair__Uno_Type__object, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Uno_Type__object, _key), ::uType__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Uno_Type__object, _value), ::uObject__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Uno_Type__object__get_Key, 0, false, ::uType__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Uno_Type__object__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Uno_Type__object__New_1, 0, true, KeyValuePair__Uno_Type__object__typeof(), ::uType__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Uno_Type__object___ObjInit(KeyValuePair__Uno_Type__object* __this, ::uType* key, ::uObject* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uType* KeyValuePair__Uno_Type__object__get_Key(KeyValuePair__Uno_Type__object* __this)
{
    return __this->_key;
}

::uObject* KeyValuePair__Uno_Type__object__get_Value(KeyValuePair__Uno_Type__object* __this)
{
    return __this->_value;
}

KeyValuePair__Uno_Type__object KeyValuePair__Uno_Type__object__New_1(::uStatic* __this, ::uType* key, ::uObject* value)
{
    KeyValuePair__Uno_Type__object inst = ::uDefault< KeyValuePair__Uno_Type__object>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Uno_Type__Uno_Reflection_CppField____uType* KeyValuePair__Uno_Type__Uno_Reflection_CppField____typeof()
{
    static ::uStaticStrong<KeyValuePair__Uno_Type__Uno_Reflection_CppField____uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Uno_Type__Uno_Reflection_CppField____uType*)::uAllocStructType(sizeof(KeyValuePair__Uno_Type__Uno_Reflection_CppField____uType), "Uno.Collections.KeyValuePair<Uno.Type,Uno.Reflection.CppField[]>", sizeof(KeyValuePair__Uno_Type__Uno_Reflection_CppField__), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Uno_Type__Uno_Reflection_CppField__, _key),
        "_value", offsetof(KeyValuePair__Uno_Type__Uno_Reflection_CppField__, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Uno_Type__Uno_Reflection_CppField__, _key), ::uType__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Uno_Type__Uno_Reflection_CppField__, _value), ::uGetArrayType(::app::Uno::Reflection::CppField__typeof())));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Uno_Type__Uno_Reflection_CppField____get_Key, 0, false, ::uType__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Uno_Type__Uno_Reflection_CppField____get_Value, 0, false, ::uGetArrayType(::app::Uno::Reflection::CppField__typeof())),
        ::uNewFunction(".ctor", KeyValuePair__Uno_Type__Uno_Reflection_CppField____New_1, 0, true, KeyValuePair__Uno_Type__Uno_Reflection_CppField____typeof(), ::uType__typeof(), ::uGetArrayType(::app::Uno::Reflection::CppField__typeof())));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Uno_Type__Uno_Reflection_CppField_____ObjInit(KeyValuePair__Uno_Type__Uno_Reflection_CppField__* __this, ::uType* key, ::uArray* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uType* KeyValuePair__Uno_Type__Uno_Reflection_CppField____get_Key(KeyValuePair__Uno_Type__Uno_Reflection_CppField__* __this)
{
    return __this->_key;
}

::uArray* KeyValuePair__Uno_Type__Uno_Reflection_CppField____get_Value(KeyValuePair__Uno_Type__Uno_Reflection_CppField__* __this)
{
    return __this->_value;
}

KeyValuePair__Uno_Type__Uno_Reflection_CppField__ KeyValuePair__Uno_Type__Uno_Reflection_CppField____New_1(::uStatic* __this, ::uType* key, ::uArray* value)
{
    KeyValuePair__Uno_Type__Uno_Reflection_CppField__ inst = ::uDefault< KeyValuePair__Uno_Type__Uno_Reflection_CppField__>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____uType* KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____typeof()
{
    static ::uStaticStrong<KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____uType*)::uAllocStructType(sizeof(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____uType), "Uno.Collections.KeyValuePair<Uno.Type,Uno.Reflection.CppFunction[]>", sizeof(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__, _key),
        "_value", offsetof(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__, _key), ::uType__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__, _value), ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof())));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____get_Key, 0, false, ::uType__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____get_Value, 0, false, ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof())),
        ::uNewFunction(".ctor", KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____New_1, 0, true, KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____typeof(), ::uType__typeof(), ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof())));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* key, ::uArray* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uType* KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____get_Key(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__* __this)
{
    return __this->_key;
}

::uArray* KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____get_Value(KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__* __this)
{
    return __this->_value;
}

KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__ KeyValuePair__Uno_Type__Uno_Reflection_CppFunction____New_1(::uStatic* __this, ::uType* key, ::uArray* value)
{
    KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__ inst = ::uDefault< KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()
{
    static ::uStaticStrong<KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*)::uAllocStructType(sizeof(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType), "Uno.Collections.KeyValuePair<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>", sizeof(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _key),
        "_value", offsetof(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _key), ::app::Uno::UX::FileSource__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _value), ::app::Uno::Content::Fonts::FontFace__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Key, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Value, 0, false, ::app::Uno::Content::Fonts::FontFace__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1, 0, true, KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof(), ::app::Uno::UX::FileSource__typeof(), ::app::Uno::Content::Fonts::FontFace__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Uno::UX::FileSource* KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Key(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    return __this->_key;
}

::app::Uno::Content::Fonts::FontFace* KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Value(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    return __this->_value;
}

KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value)
{
    KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace inst = ::uDefault< KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()
{
    static ::uStaticStrong<KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*)::uAllocStructType(sizeof(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType), "Uno.Collections.KeyValuePair<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>", sizeof(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _key),
        "_value", offsetof(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _value));

    type->SetFields(2,
        ::uNewField("_key", NULL, offsetof(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _key), ::app::Uno::UX::FileSource__typeof()),
        ::uNewField("_value", NULL, offsetof(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _value), ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Key", KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Key, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Value", KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Value, 0, false, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl__typeof()),
        ::uNewFunction(".ctor", KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1, 0, true, KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof(), ::app::Uno::UX::FileSource__typeof(), ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Uno::UX::FileSource* KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Key(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    return __this->_key;
}

::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Value(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    return __this->_value;
}

KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value)
{
    KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ inst = ::uDefault< KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
