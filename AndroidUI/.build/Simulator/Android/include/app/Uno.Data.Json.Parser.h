// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_PARSER_H__
#define __APP_UNO_DATA_JSON_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Json { struct Array; } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Boolean; } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct JsonException; } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Null; } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Number; } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Object; } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct String; } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct Parser;

struct Parser__uType : ::uClassType
{
};

Parser__uType* Parser__typeof();

void Parser___ObjInit(Parser* __this, ::uString* json);
int Parser__Advance(Parser* __this);
bool Parser__Eof(Parser* __this);
::uUInt Parser__GetHexValue(::uStatic* __this, ::uChar hexChar);
bool Parser__IsNumericChar(Parser* __this, ::uChar c);
bool Parser__IsNumericStartChar(Parser* __this, ::uChar c);
Parser* Parser__New_1(::uStatic* __this, ::uString* json);
::app::Uno::Data::Json::Value* Parser__Parse(::uStatic* __this, ::uString* json);
::app::Uno::Data::Json::Array* Parser__ParseArray(Parser* __this);
::app::Uno::Data::Json::Boolean* Parser__ParseFalse(Parser* __this);
::app::Uno::Data::Json::Null* Parser__ParseNull(Parser* __this);
::app::Uno::Data::Json::Number* Parser__ParseNumber(Parser* __this);
::app::Uno::Data::Json::Object* Parser__ParseObject(Parser* __this);
::uString* Parser__ParseRawString(Parser* __this);
::app::Uno::Data::Json::String* Parser__ParseString(Parser* __this);
::app::Uno::Data::Json::Boolean* Parser__ParseTrue(Parser* __this);
::app::Uno::Data::Json::Value* Parser__ParseValue(Parser* __this);
::uChar Parser__Peek(Parser* __this);
void Parser__SkipWhiteSpace(Parser* __this);
::uString* Parser__Unescape(Parser* __this, int start, int length);
::app::Uno::Data::Json::JsonException* Parser__UnexpectedCharacter(::uStatic* __this, ::uChar c);
::app::Uno::Data::Json::JsonException* Parser__UnexpectedEndOfFile(::uStatic* __this);

struct Parser : ::uObject
{
    ::uStrong< ::uString*> _json;
    int _pos;

    void _ObjInit(::uString* json) { Parser___ObjInit(this, json); }
    int Advance() { return Parser__Advance(this); }
    bool Eof() { return Parser__Eof(this); }
    bool IsNumericChar(::uChar c) { return Parser__IsNumericChar(this, c); }
    bool IsNumericStartChar(::uChar c) { return Parser__IsNumericStartChar(this, c); }
    ::app::Uno::Data::Json::Array* ParseArray() { return Parser__ParseArray(this); }
    ::app::Uno::Data::Json::Boolean* ParseFalse() { return Parser__ParseFalse(this); }
    ::app::Uno::Data::Json::Null* ParseNull() { return Parser__ParseNull(this); }
    ::app::Uno::Data::Json::Number* ParseNumber() { return Parser__ParseNumber(this); }
    ::app::Uno::Data::Json::Object* ParseObject() { return Parser__ParseObject(this); }
    ::uString* ParseRawString() { return Parser__ParseRawString(this); }
    ::app::Uno::Data::Json::String* ParseString() { return Parser__ParseString(this); }
    ::app::Uno::Data::Json::Boolean* ParseTrue() { return Parser__ParseTrue(this); }
    ::app::Uno::Data::Json::Value* ParseValue() { return Parser__ParseValue(this); }
    ::uChar Peek() { return Parser__Peek(this); }
    void SkipWhiteSpace() { Parser__SkipWhiteSpace(this); }
    ::uString* Unescape(int start, int length) { return Parser__Unescape(this, start, length); }
};

}}}}


#endif
