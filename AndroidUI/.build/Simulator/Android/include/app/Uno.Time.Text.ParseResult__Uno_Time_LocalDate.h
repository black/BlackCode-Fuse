// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_LOCAL_DATE_H__
#define __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_LOCAL_DATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct LocalDate; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct ParseResult__Uno_Time_LocalDate;

struct ParseResult__Uno_Time_LocalDate__uType : ::uClassType
{
};

ParseResult__Uno_Time_LocalDate__uType* ParseResult__Uno_Time_LocalDate__typeof();

void ParseResult__Uno_Time_LocalDate___ObjInit(ParseResult__Uno_Time_LocalDate* __this, ::app::Uno::Exception* exception);
void ParseResult__Uno_Time_LocalDate___ObjInit_1(ParseResult__Uno_Time_LocalDate* __this, ::app::Uno::Time::LocalDate* value);
ParseResult__Uno_Time_LocalDate* ParseResult__Uno_Time_LocalDate__ForException(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_LocalDate* ParseResult__Uno_Time_LocalDate__ForValue(::uStatic* __this, ::app::Uno::Time::LocalDate* value);
::app::Uno::Exception* ParseResult__Uno_Time_LocalDate__get_Exception(ParseResult__Uno_Time_LocalDate* __this);
bool ParseResult__Uno_Time_LocalDate__get_Success(ParseResult__Uno_Time_LocalDate* __this);
::app::Uno::Time::LocalDate* ParseResult__Uno_Time_LocalDate__get_Value(ParseResult__Uno_Time_LocalDate* __this);
::app::Uno::Time::LocalDate* ParseResult__Uno_Time_LocalDate__GetValueOrThrow(ParseResult__Uno_Time_LocalDate* __this);
ParseResult__Uno_Time_LocalDate* ParseResult__Uno_Time_LocalDate__New_1(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_LocalDate* ParseResult__Uno_Time_LocalDate__New_2(::uStatic* __this, ::app::Uno::Time::LocalDate* value);
bool ParseResult__Uno_Time_LocalDate__TryGetValue(ParseResult__Uno_Time_LocalDate* __this, ::app::Uno::Time::LocalDate* failureValue, ::app::Uno::Time::LocalDate** result);

struct ParseResult__Uno_Time_LocalDate : ::uObject
{
    ::uStrong< ::app::Uno::Time::LocalDate*> _value;
    ::uStrong< ::app::Uno::Exception*> _exception;

    void _ObjInit(::app::Uno::Exception* exception) { ParseResult__Uno_Time_LocalDate___ObjInit(this, exception); }
    void _ObjInit_1(::app::Uno::Time::LocalDate* value) { ParseResult__Uno_Time_LocalDate___ObjInit_1(this, value); }
    ::app::Uno::Exception* Exception() { return ParseResult__Uno_Time_LocalDate__get_Exception(this); }
    bool Success() { return ParseResult__Uno_Time_LocalDate__get_Success(this); }
    ::app::Uno::Time::LocalDate* Value() { return ParseResult__Uno_Time_LocalDate__get_Value(this); }
    ::app::Uno::Time::LocalDate* GetValueOrThrow() { return ParseResult__Uno_Time_LocalDate__GetValueOrThrow(this); }
    bool TryGetValue(::app::Uno::Time::LocalDate* failureValue, ::app::Uno::Time::LocalDate** result) { return ParseResult__Uno_Time_LocalDate__TryGetValue(this, failureValue, result); }
};

}}}}


#endif
