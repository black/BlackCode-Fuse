#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.Ascii.h>
#include <app/Uno.Text.Base64.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Text.StringBuilderElement.h>
#include <app/Uno.Text.Utf8.h>

namespace app {
namespace Uno {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Ascii__uType* Ascii__typeof()
{
    static ::uStaticStrong<Ascii__uType*> type;
    if (type != NULL) return type;

    type = (Ascii__uType*)::uAllocClassType(sizeof(Ascii__uType), "Uno.Text.Ascii");

    type->SetFunctions(2,
        ::uNewFunction("GetBytes", Ascii__GetBytes, 0, true, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunction("GetString", Ascii__GetString, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())));

    ::uRegisterType(type);
    return type;
}

::uArray* Ascii__GetBytes(::uStatic* __this, ::uString* value)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeAscii(NULL, value);
}

::uString* Ascii__GetString(::uStatic* __this, ::uArray* value)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeAscii(NULL, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Base64__uType* Base64__typeof()
{
    static ::uStaticStrong<Base64__uType*> type;
    if (type != NULL) return type;

    type = (Base64__uType*)::uAllocClassType(sizeof(Base64__uType), "Uno.Text.Base64");

    type->SetFunctions(2,
        ::uNewFunction("GetBytes", Base64__GetBytes, 0, true, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunction("GetString", Base64__GetString, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())));

    ::uRegisterType(type);
    return type;
}

::uArray* Base64__GetBytes(::uStatic* __this, ::uString* value)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeBase64(NULL, value);
}

::uString* Base64__GetString(::uStatic* __this, ::uArray* value)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeBase64(NULL, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringBuilder__uType* StringBuilder__typeof()
{
    static ::uStaticStrong<StringBuilder__uType*> type;
    if (type != NULL) return type;

    type = (StringBuilder__uType*)::uAllocClassType(sizeof(StringBuilder__uType), "Uno.Text.StringBuilder", false, 0, 2, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))StringBuilder__ToString;

    type->SetStrongRefs(
        "firstElement", offsetof(StringBuilder, firstElement),
        "lastElement", offsetof(StringBuilder, lastElement));

    type->SetFields(2,
        ::uNewField("firstElement", NULL, offsetof(StringBuilder, firstElement), ::app::Uno::Text::StringBuilderElement__typeof()),
        ::uNewField("lastElement", NULL, offsetof(StringBuilder, lastElement), ::app::Uno::Text::StringBuilderElement__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("Append", StringBuilder__Append, 0, false, StringBuilder__typeof(), ::uGetArrayType(::app::Uno::Char__typeof())),
        ::uNewFunction("Append", StringBuilder__Append_1, 0, false, StringBuilder__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("AppendLine", StringBuilder__AppendLine, 0, false, StringBuilder__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("get_Length", StringBuilder__get_Length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_MaxCapacity", StringBuilder__get_MaxCapacity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", StringBuilder__New_1, 0, true, StringBuilder__typeof()),
        ::uNewFunctionVoid("set_Length", StringBuilder__set_Length, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void StringBuilder___ObjInit(StringBuilder* __this)
{
}

StringBuilder* StringBuilder__Append(StringBuilder* __this, ::uArray* chars)
{
    ::app::Uno::Text::StringBuilderElement* collection_123;

    if ((__this->MaxCapacity() - __this->Length()) < ::uPtr< ::uArray*>(chars)->Length())
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("")));
    }

    __this->Length(__this->Length() + ::uPtr< ::uArray*>(chars)->Length());
    __this->lastElement = (collection_123 = ::app::Uno::Text::StringBuilderElement__New_1(NULL), ::uPtr< ::app::Uno::Text::StringBuilderElement*>(collection_123)->chars = chars, collection_123);

    if (__this->firstElement == NULL)
    {
        __this->firstElement = __this->lastElement;
    }
    else
    {
        ::app::Uno::Text::StringBuilderElement* elem = __this->firstElement;

        while (::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->next != NULL)
        {
            elem = ::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->next;
        }

        ::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->next = __this->lastElement;
    }

    return __this;
}

StringBuilder* StringBuilder__Append_1(StringBuilder* __this, ::uString* str)
{
    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(str)->Length());

    for (int i = 0; i < str->Length(); i++)
    {
        chars->Item< ::uChar>(i) = str->Item(i);
    }

    return __this->Append(chars);
}

StringBuilder* StringBuilder__AppendLine(StringBuilder* __this, ::uString* str)
{
    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(str)->Length() + 2);

    for (int i = 0; i < str->Length(); i++)
    {
        chars->Item< ::uChar>(i) = str->Item(i);
    }

    chars->Item< ::uChar>(chars->Length() - 2) = 13;
    chars->Item< ::uChar>(chars->Length() - 1) = 10;
    return __this->Append(chars);
}

int StringBuilder__get_Length(StringBuilder* __this)
{
    return __this->_Length;
}

int StringBuilder__get_MaxCapacity(StringBuilder* __this)
{
    return 2147483647;
}

StringBuilder* StringBuilder__New_1(::uStatic* __this)
{
    StringBuilder* inst = (StringBuilder*)::uAllocObject(sizeof(StringBuilder), StringBuilder__typeof());
    inst->_ObjInit();
    return inst;
}

void StringBuilder__set_Length(StringBuilder* __this, int value)
{
    __this->_Length = value;
}

::uString* StringBuilder__ToString(StringBuilder* __this)
{
    if (__this->firstElement == NULL)
    {
        return ::uGetConstString("");
    }

    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), __this->Length());
    ::app::Uno::Text::StringBuilderElement* elem = __this->firstElement;
    int pos = 0;

    while (elem != NULL)
    {
        for (int i = 0; i < ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->chars)->Length(); i++)
        {
            ::uPtr< ::uArray*>(chars)->Item< ::uChar>(pos + i) = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->chars)->Item< ::uChar>(i);
        }

        pos = pos + ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->chars)->Length();
        elem = ::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->next;
    }

    return ::uNewStringFromArray(chars);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringBuilderElement__uType* StringBuilderElement__typeof()
{
    static ::uStaticStrong<StringBuilderElement__uType*> type;
    if (type != NULL) return type;

    type = (StringBuilderElement__uType*)::uAllocClassType(sizeof(StringBuilderElement__uType), "Uno.Text.StringBuilderElement", false, 0, 2, 0);

    type->SetStrongRefs(
        "chars", offsetof(StringBuilderElement, chars),
        "next", offsetof(StringBuilderElement, next));

    type->SetFields(2,
        ::uNewField("chars", NULL, offsetof(StringBuilderElement, chars), ::uGetArrayType(::app::Uno::Char__typeof())),
        ::uNewField("next", NULL, offsetof(StringBuilderElement, next), StringBuilderElement__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", StringBuilderElement__New_1, 0, true, StringBuilderElement__typeof()));

    ::uRegisterType(type);
    return type;
}

void StringBuilderElement___ObjInit(StringBuilderElement* __this)
{
}

StringBuilderElement* StringBuilderElement__New_1(::uStatic* __this)
{
    StringBuilderElement* inst = (StringBuilderElement*)::uAllocObject(sizeof(StringBuilderElement), StringBuilderElement__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Utf8__uType* Utf8__typeof()
{
    static ::uStaticStrong<Utf8__uType*> type;
    if (type != NULL) return type;

    type = (Utf8__uType*)::uAllocClassType(sizeof(Utf8__uType), "Uno.Text.Utf8");

    type->SetFunctions(2,
        ::uNewFunction("GetBytes", Utf8__GetBytes, 0, true, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunction("GetString", Utf8__GetString, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())));

    ::uRegisterType(type);
    return type;
}

::uArray* Utf8__GetBytes(::uStatic* __this, ::uString* value)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, value);
}

::uString* Utf8__GetString(::uStatic* __this, ::uArray* value)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeUtf8(NULL, value);
}

}}}
