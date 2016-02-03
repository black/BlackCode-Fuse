// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Text.StringBuilderElement.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Text.UTF8Decoder.h>
#include <Uno.Text.UTF8Encoding.h>
static uString* STRINGS[6];
static uType* TYPES[8];

namespace g{
namespace Uno{
namespace Text{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(7)
// -------------------------------------------------------------------

// public static class Ascii :7
// {
uClassType* Ascii_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Ascii", options);
    type->Reflection.SetFunctions(2,
        new uFunction("GetBytes", NULL, (void*)Ascii__GetBytes_fn, 0, true, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetString", NULL, (void*)Ascii__GetString_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
    return type;
}

// public static byte[] GetBytes(string value) :9
void Ascii__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Ascii::GetBytes(value);
}

// public static string GetString(byte[] value) :14
void Ascii__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Ascii::GetString(value);
}

// public static byte[] GetBytes(string value) [static] :9
uArray* Ascii::GetBytes(uString* value)
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeAscii(value);
}

// public static string GetString(byte[] value) [static] :14
uString* Ascii::GetString(uArray* value)
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeAscii(value);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(26)
// --------------------------------------------------------------------

// public static class Base64 :26
// {
uClassType* Base64_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Base64", options);
    type->Reflection.SetFunctions(2,
        new uFunction("GetBytes", NULL, (void*)Base64__GetBytes_fn, 0, true, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetString", NULL, (void*)Base64__GetString_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
    return type;
}

// public static byte[] GetBytes(string value) :28
void Base64__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Base64::GetBytes(value);
}

// public static string GetString(byte[] value) :33
void Base64__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Base64::GetString(value);
}

// public static byte[] GetBytes(string value) [static] :28
uArray* Base64::GetBytes(uString* value)
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeBase64(value);
}

// public static string GetString(byte[] value) [static] :33
uString* Base64::GetString(uArray* value)
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeBase64(value);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(136)
// ---------------------------------------------------------------------

// public abstract class Decoder :136
// {
Decoder_type* Decoder_typeof()
{
    static uSStrong<Decoder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Decoder);
    options.TypeSize = sizeof(Decoder_type);
    type = (Decoder_type*)uClassType::New("Uno.Text.Decoder", options);
    type->Reflection.SetFunctions(1,
        new uFunction("GetChars", NULL, NULL, offsetof(Decoder_type, fp_GetChars), false, ::g::Uno::Int_typeof(), 5, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Char_typeof()->Array(), ::g::Uno::Int_typeof()));
    return type;
}

// protected generated Decoder() :136
void Decoder__ctor__fn(Decoder* __this)
{
    __this->ctor_();
}

// protected generated Decoder() [instance] :136
void Decoder::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(387)
// ---------------------------------------------------------------------

// public abstract class Encoding :387
// {
Encoding_type* Encoding_typeof()
{
    static uSStrong<Encoding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Encoding);
    options.TypeSize = sizeof(Encoding_type);
    type = (Encoding_type*)uClassType::New("Uno.Text.Encoding", options);
    type->SetFields(0,
        ::g::Uno::Text::UTF8Encoding_typeof(), (uintptr_t)&::g::Uno::Text::Encoding::_utf8_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("GetDecoder", NULL, NULL, offsetof(Encoding_type, fp_GetDecoder), false, ::g::Uno::Text::Decoder_typeof(), 0),
        new uFunction("get_UTF8", NULL, (void*)Encoding__get_UTF8_fn, 0, true, Encoding_typeof(), 0));
    return type;
}

// protected generated Encoding() :387
void Encoding__ctor__fn(Encoding* __this)
{
    __this->ctor_();
}

// public static Uno.Text.Encoding get_UTF8() :392
void Encoding__get_UTF8_fn(Encoding** __retval)
{
    *__retval = Encoding::UTF8();
}

uSStrong< ::g::Uno::Text::UTF8Encoding*> Encoding::_utf8_;

// protected generated Encoding() [instance] :387
void Encoding::ctor_()
{
}

// public static Uno.Text.Encoding get_UTF8() [static] :392
Encoding* Encoding::UTF8()
{
    if (Encoding::_utf8() == NULL)
        Encoding::_utf8() = ::g::Uno::Text::UTF8Encoding::New1();

    return Encoding::_utf8();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(43)
// --------------------------------------------------------------------

// public sealed class StringBuilder :43
// {
uType* StringBuilder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(StringBuilder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Text.StringBuilder", options);
    type->fp_ctor_ = (void*)StringBuilder__New1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringBuilder__ToString_fn;
    ::STRINGS[0] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Text::StringBuilderElement_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Text::StringBuilderElement_typeof(), offsetof(::g::Uno::Text::StringBuilder, firstElement), 0,
        ::g::Uno::Text::StringBuilderElement_typeof(), offsetof(::g::Uno::Text::StringBuilder, lastElement), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Text::StringBuilder, _Length), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("Append", NULL, (void*)StringBuilder__Append_fn, 0, false, StringBuilder_typeof(), 1, ::g::Uno::Char_typeof()->Array()),
        new uFunction("Append", NULL, (void*)StringBuilder__Append1_fn, 0, false, StringBuilder_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("AppendLine", NULL, (void*)StringBuilder__AppendLine_fn, 0, false, StringBuilder_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Length", NULL, (void*)StringBuilder__get_Length_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_MaxCapacity", NULL, (void*)StringBuilder__get_MaxCapacity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)StringBuilder__New1_fn, 0, true, StringBuilder_typeof(), 0));
    return type;
}

// public generated StringBuilder() :43
void StringBuilder__ctor__fn(StringBuilder* __this)
{
    __this->ctor_();
}

// public Uno.Text.StringBuilder Append(char[] chars) :72
void StringBuilder__Append_fn(StringBuilder* __this, uArray* chars, StringBuilder** __retval)
{
    *__retval = __this->Append(chars);
}

// public Uno.Text.StringBuilder Append(string str) :97
void StringBuilder__Append1_fn(StringBuilder* __this, uString* str, StringBuilder** __retval)
{
    *__retval = __this->Append1(str);
}

// public Uno.Text.StringBuilder AppendLine(string str) :105
void StringBuilder__AppendLine_fn(StringBuilder* __this, uString* str, StringBuilder** __retval)
{
    *__retval = __this->AppendLine(str);
}

// public generated int get_Length() :70
void StringBuilder__get_Length_fn(StringBuilder* __this, int* __retval)
{
    *__retval = __this->Length();
}

// private generated void set_Length(int value) :70
void StringBuilder__set_Length_fn(StringBuilder* __this, int* value)
{
    __this->Length(*value);
}

// public int get_MaxCapacity() :48
void StringBuilder__get_MaxCapacity_fn(StringBuilder* __this, int* __retval)
{
    *__retval = __this->MaxCapacity();
}

// public generated StringBuilder New() :43
void StringBuilder__New1_fn(StringBuilder** __retval)
{
    *__retval = StringBuilder::New1();
}

// public override sealed string ToString() :50
void StringBuilder__ToString_fn(StringBuilder* __this, uString** __retval)
{
    if (__this->firstElement == NULL)
        return *__retval = ::STRINGS[0/*""*/], void();

    uArray* chars = uArray::New(::TYPES[0/*char[]*/], __this->Length());
    ::g::Uno::Text::StringBuilderElement* elem = __this->firstElement;
    int pos = 0;

    while (elem != NULL)
    {
        for (int i = 0; i < uPtr(uPtr(elem)->chars)->Length(); i++)
            uPtr(chars)->Item<uChar>(pos + i) = uPtr(uPtr(elem)->chars)->Item<uChar>(i);

        pos = pos + uPtr(uPtr(elem)->chars)->Length();
        elem = uPtr(elem)->next;
    }

    return *__retval = uString::CharArray(chars), void();
}

// public generated StringBuilder() [instance] :43
void StringBuilder::ctor_()
{
}

// public Uno.Text.StringBuilder Append(char[] chars) [instance] :72
StringBuilder* StringBuilder::Append(uArray* chars)
{
    ::g::Uno::Text::StringBuilderElement* collection1;

    if ((MaxCapacity() - Length()) < uPtr(chars)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*""*/]));

    Length(Length() + uPtr(chars)->Length());
    lastElement = (collection1 = ::g::Uno::Text::StringBuilderElement::New1(), uPtr(collection1)->chars = chars, collection1);

    if (firstElement == NULL)
        firstElement = lastElement;
    else
    {
        ::g::Uno::Text::StringBuilderElement* elem = firstElement;

        while (uPtr(elem)->next != NULL)
            elem = uPtr(elem)->next;

        uPtr(elem)->next = lastElement;
    }

    return this;
}

// public Uno.Text.StringBuilder Append(string str) [instance] :97
StringBuilder* StringBuilder::Append1(uString* str)
{
    uArray* chars = uArray::New(::TYPES[0/*char[]*/], uPtr(str)->Length());

    for (int i = 0; i < str->Length(); i++)
        chars->Item<uChar>(i) = str->Item(i);

    return Append(chars);
}

// public Uno.Text.StringBuilder AppendLine(string str) [instance] :105
StringBuilder* StringBuilder::AppendLine(uString* str)
{
    uArray* chars = uArray::New(::TYPES[0/*char[]*/], uPtr(str)->Length() + 2);

    for (int i = 0; i < str->Length(); i++)
        chars->Item<uChar>(i) = str->Item(i);

    chars->Item<uChar>(chars->Length() - 2) = 13;
    chars->Item<uChar>(chars->Length() - 1) = 10;
    return Append(chars);
}

// public generated int get_Length() [instance] :70
int StringBuilder::Length()
{
    return _Length;
}

// private generated void set_Length(int value) [instance] :70
void StringBuilder::Length(int value)
{
    _Length = value;
}

// public int get_MaxCapacity() [instance] :48
int StringBuilder::MaxCapacity()
{
    return 2147483647;
}

// public generated StringBuilder New() [static] :43
StringBuilder* StringBuilder::New1()
{
    StringBuilder* obj2 = (StringBuilder*)uNew(StringBuilder_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(121)
// ---------------------------------------------------------------------

// internal sealed class StringBuilderElement :121
// {
uType* StringBuilderElement_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StringBuilderElement);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Text.StringBuilderElement", options);
    type->fp_ctor_ = (void*)StringBuilderElement__New1_fn;
    type->SetFields(0,
        ::g::Uno::Char_typeof()->Array(), offsetof(::g::Uno::Text::StringBuilderElement, chars), 0,
        StringBuilderElement_typeof(), offsetof(::g::Uno::Text::StringBuilderElement, next), 0);
    return type;
}

// public generated StringBuilderElement() :121
void StringBuilderElement__ctor__fn(StringBuilderElement* __this)
{
    __this->ctor_();
}

// public generated StringBuilderElement New() :121
void StringBuilderElement__New1_fn(StringBuilderElement** __retval)
{
    *__retval = StringBuilderElement::New1();
}

// public generated StringBuilderElement() [instance] :121
void StringBuilderElement::ctor_()
{
}

// public generated StringBuilderElement New() [static] :121
StringBuilderElement* StringBuilderElement::New1()
{
    StringBuilderElement* obj1 = (StringBuilderElement*)uNew(StringBuilderElement_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(413)
// ---------------------------------------------------------------------

// public static class Utf8 :413
// {
uClassType* Utf8_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Utf8", options);
    type->Reflection.SetFunctions(2,
        new uFunction("GetBytes", NULL, (void*)Utf8__GetBytes_fn, 0, true, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetString", NULL, (void*)Utf8__GetString_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
    return type;
}

// public static byte[] GetBytes(string value) :415
void Utf8__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Utf8::GetBytes(value);
}

// public static string GetString(byte[] value) :420
void Utf8__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Utf8::GetString(value);
}

// public static byte[] GetBytes(string value) [static] :415
uArray* Utf8::GetBytes(uString* value)
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
}

// public static string GetString(byte[] value) [static] :420
uString* Utf8::GetString(uArray* value)
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(value);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(143)
// ---------------------------------------------------------------------

// internal sealed class UTF8Decoder :143
// {
::g::Uno::Text::Decoder_type* UTF8Decoder_typeof()
{
    static uSStrong< ::g::Uno::Text::Decoder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UTF8Decoder);
    options.TypeSize = sizeof(::g::Uno::Text::Decoder_type);
    type = (::g::Uno::Text::Decoder_type*)uClassType::New("Uno.Text.UTF8Decoder", options);
    type->SetBase(::g::Uno::Text::Decoder_typeof());
    type->fp_ctor_ = (void*)UTF8Decoder__New1_fn;
    type->fp_GetChars = (void(*)(::g::Uno::Text::Decoder*, uArray*, int*, int*, uArray*, int*, int*))UTF8Decoder__GetChars_fn;
    ::STRINGS[1] = uString::Const("chars");
    ::STRINGS[2] = uString::Const("bytes");
    ::STRINGS[3] = uString::Const("byteIndex");
    ::STRINGS[4] = uString::Const("byteCount");
    ::STRINGS[5] = uString::Const("charIndex");
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Uno::Char_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[0] = ::g::Uno::Char_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Text::UTF8Decoder, _state), 0);
    return type;
}

// public generated UTF8Decoder() :143
void UTF8Decoder__ctor_1_fn(UTF8Decoder* __this)
{
    __this->ctor_1();
}

// private int ConvertInternal(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount) :167
void UTF8Decoder__ConvertInternal_fn(UTF8Decoder* __this, uArray* bytes, int* byteIndex, int* byteCount, uArray* chars, int* charIndex, int* charCount, int* __retval)
{
    *__retval = __this->ConvertInternal(bytes, *byteIndex, *byteCount, chars, *charIndex, *charCount);
}

// public override sealed int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) :363
void UTF8Decoder__GetChars_fn(UTF8Decoder* __this, uArray* bytes, int* byteIndex, int* byteCount, uArray* chars, int* charIndex, int* __retval)
{
    int byteIndex_ = *byteIndex;
    int byteCount_ = *byteCount;
    int charIndex_ = *charIndex;

    if (bytes == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"bytes"*/]));

    if (byteIndex_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[3/*"byteIndex"*/]));

    if (byteCount_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[4/*"byteCount"*/]));

    if (chars == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"chars"*/]));

    if (charIndex_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"charIndex"*/]));

    if ((uPtr(bytes)->Length() - byteIndex_) < byteCount_)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[2/*"bytes"*/]));

    int charCount = uPtr(chars)->Length() - charIndex_;
    return *__retval = __this->ConvertInternal(bytes, byteIndex_, byteCount_, chars, charIndex_, charCount), void();
}

// public generated UTF8Decoder New() :143
void UTF8Decoder__New1_fn(UTF8Decoder** __retval)
{
    *__retval = UTF8Decoder::New1();
}

// public generated UTF8Decoder() [instance] :143
void UTF8Decoder::ctor_1()
{
    ctor_();
}

// private int ConvertInternal(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount) [instance] :167
int UTF8Decoder::ConvertInternal(uArray* bytes, int byteIndex, int byteCount, uArray* chars, int charIndex, int charCount)
{
    int bytesUsed = 0;
    int charsUsed = 0;
    int ch = _state;
    _state = 0;

    while (bytesUsed < byteCount)
    {
        if (ch == 0)
        {
            ch = (int)uPtr(bytes)->Item<uint8_t>(byteIndex + (bytesUsed++));

            if (ch < 128)
            {
                if (chars != NULL)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                    uPtr(chars)->Item<uChar>(charIndex + charsUsed) = (uChar)ch;
                }

                ++charsUsed;
                ch = 0;
                continue;
            }

            if ((ch & 224) == 192)
            {
                ch = ch & 31;

                if (ch <= 1)
                {
                    if (chars != NULL)
                    {
                        if (charsUsed >= charCount)
                            U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                        uPtr(chars)->Item<uChar>(charIndex + charsUsed) = 65533;
                    }

                    ++charsUsed;
                    ch = 0;
                    continue;
                }

                ch = ch | 4194304;
            }
            else if ((ch & 240) == 224)
            {
                ch = ch & 15;
                ch = ch | 8454144;
            }
            else if ((ch & 248) == 240)
            {
                ch = ch & 7;

                if (ch > 4)
                {
                    if (chars != NULL)
                    {
                        if (charsUsed >= charCount)
                            U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                        uPtr(chars)->Item<uChar>(charIndex + charsUsed) = 65533;
                    }

                    ++charsUsed;
                    ch = 0;
                    continue;
                }

                ch = ch | 12583936;
            }
            else
            {
                if (chars != NULL)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                    uPtr(chars)->Item<uChar>(charIndex + charsUsed) = 65533;
                }

                ++charsUsed;
                ch = 0;
                continue;
            }
        }

        bool done = false;
        bool invalid = false;

        do
        {
            if (bytesUsed == byteCount)
            {
                _state = ch;
                return charsUsed;
            }

            uint8_t ch2 = uPtr(bytes)->Item<uint8_t>(byteIndex + bytesUsed);

            if ((ch2 & 192) != 128)
            {
                invalid = true;
                break;
            }

            ch = (ch << 6) | (int)(ch2 & 63);
            ++bytesUsed;

            switch (ch & 805306368)
            {
                case 268435456:
                {
                    done = true;
                    break;
                }
                case 536870912:
                {
                    if (((ch & 992) == 0) || ((ch & 992) == 864))
                    {
                        invalid = true;
                        done = true;
                    }

                    break;
                }
                case 805306368:
                {
                    if (((ch & 496) < 16) || ((ch & 496) > 256))
                    {
                        invalid = true;
                        done = true;
                    }

                    break;
                }
            }
        }
        while (!done);

        if (invalid)
        {
            if (chars != NULL)
            {
                if (charsUsed >= charCount)
                    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                uPtr(chars)->Item<uChar>(charIndex + charsUsed) = 65533;
            }

            ++charsUsed;
        }
        else
        {
            int codePoint = ch & 2097151;

            if (codePoint < 65536)
            {
                if (chars != NULL)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                    uPtr(chars)->Item<uChar>(charIndex + charsUsed) = (uChar)codePoint;
                }

                ++charsUsed;
            }
            else
            {
                if (chars != NULL)
                {
                    if ((charsUsed + 1) >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                    codePoint = codePoint - 65536;
                    uPtr(chars)->Item<uChar>(charIndex + charsUsed) = (uChar)(55296 + (codePoint >> 10));
                    chars->Item<uChar>((charIndex + charsUsed) + 1) = (uChar)(56320 + (codePoint & 1023));
                }

                charsUsed = charsUsed + 2;
            }
        }

        ch = 0;
    }

    _state = 0;
    return charsUsed;
}

// public generated UTF8Decoder New() [static] :143
UTF8Decoder* UTF8Decoder::New1()
{
    UTF8Decoder* obj1 = (UTF8Decoder*)uNew(UTF8Decoder_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno(405)
// ---------------------------------------------------------------------

// public sealed class UTF8Encoding :405
// {
::g::Uno::Text::Encoding_type* UTF8Encoding_typeof()
{
    static uSStrong< ::g::Uno::Text::Encoding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UTF8Encoding);
    options.TypeSize = sizeof(::g::Uno::Text::Encoding_type);
    type = (::g::Uno::Text::Encoding_type*)uClassType::New("Uno.Text.UTF8Encoding", options);
    type->SetBase(::g::Uno::Text::Encoding_typeof());
    type->fp_ctor_ = (void*)UTF8Encoding__New1_fn;
    type->fp_GetDecoder = (void(*)(::g::Uno::Text::Encoding*, ::g::Uno::Text::Decoder**))UTF8Encoding__GetDecoder_fn;
    ::TYPES[7] = ::g::Uno::Text::Decoder_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UTF8Encoding__New1_fn, 0, true, UTF8Encoding_typeof(), 0));
    return type;
}

// public generated UTF8Encoding() :405
void UTF8Encoding__ctor_1_fn(UTF8Encoding* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Text.Decoder GetDecoder() :407
void UTF8Encoding__GetDecoder_fn(UTF8Encoding* __this, ::g::Uno::Text::Decoder** __retval)
{
    return *__retval = ::g::Uno::Text::UTF8Decoder::New1(), void();
}

// public generated UTF8Encoding New() :405
void UTF8Encoding__New1_fn(UTF8Encoding** __retval)
{
    *__retval = UTF8Encoding::New1();
}

// public generated UTF8Encoding() [instance] :405
void UTF8Encoding::ctor_1()
{
    ctor_();
}

// public generated UTF8Encoding New() [static] :405
UTF8Encoding* UTF8Encoding::New1()
{
    UTF8Encoding* obj1 = (UTF8Encoding*)uNew(UTF8Encoding_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Text
