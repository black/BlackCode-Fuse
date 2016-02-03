#include <app/Fuse.Controls.Internal.DefaultTextRenderer_FontKey.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo.h>
#include <app/Uno.Collections.Dictionary__Fuse_Controls_Internal_DefaultTextR-9aaaac6.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_List_Fuse_Inpu-4188694c.h>
#include <app/Uno.Collections.Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float.h>
#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Bit-20a49f53.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Controls_Internal_Defa-70d8fe15.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Pointer_Poi-e3059561.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_List_F-fb40ec81.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Content_Fonts_BitmapFon-6ccf0790.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__char__Uno-4bf13905.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Cont-8f6b478f.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__Fuse-f060a27d.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__Uno_-671f4db5.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_Conte-51aadfd3.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType), "Uno.Collections.Dictionary2_KeyCollection_Enumerator<char,Uno.Content.Fonts.BitmapFont_GlyphInfo>", sizeof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uChar(*)(void*))Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__char__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _current), ::app::Uno::Char__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _source), ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Current, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Dispose(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
}

::uChar Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Current(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__MoveNext(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source)
{
    Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType), "Uno.Collections.Dictionary2_KeyCollection_Enumerator<Fuse.Controls.Internal.DefaultTextRenderer_FontKey,Uno.Content.Fonts.BitmapFont>", sizeof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _current), ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _source), ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* source)
{
    Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType), "Uno.Collections.Dictionary2_KeyCollection_Enumerator<int,Fuse.Input.Pointer_PointerRecord>", sizeof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord, _source), ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this)
{
}

int Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__get_Current(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source)
{
    Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType), "Uno.Collections.Dictionary2_KeyCollection_Enumerator<int,Uno.Collections.List<Fuse.Input.Pointer_PELHolder>>", sizeof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _source), ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Dispose, 0, false),
        ::uNewFunction("get_Current", Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Dispose(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
}

int Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Current(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___MoveNext(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source)
{
    Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType), "Uno.Collections.Dictionary2_KeyCollection_Enumerator<Uno.Content.Fonts.BitmapFont_CharPair,float>", sizeof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float), 2, 1, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType, __interface_1));

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float, _current), ::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof()),
        ::uNewField("_iterator", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float, _source), ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof()),
        ::uNewField("_version", NULL, offsetof(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Dispose, 0, false),
        ::uNewFunction("MoveNext", Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Dispose(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
}

bool Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source)
{
    Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float>();
    inst._ObjInit(source);
    return inst;
}

void Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(__this->_source)->_version;
    __this->_current = ::uDefault< ::app::Uno::Content::Fonts::BitmapFont_CharPair>();
}

}}}
