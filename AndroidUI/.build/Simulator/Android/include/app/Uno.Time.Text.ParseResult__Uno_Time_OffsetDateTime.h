// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_OFFSET_DATE_TIME_H__
#define __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_OFFSET_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct OffsetDateTime; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct ParseResult__Uno_Time_OffsetDateTime;

struct ParseResult__Uno_Time_OffsetDateTime__uType : ::uClassType
{
};

ParseResult__Uno_Time_OffsetDateTime__uType* ParseResult__Uno_Time_OffsetDateTime__typeof();

void ParseResult__Uno_Time_OffsetDateTime___ObjInit(ParseResult__Uno_Time_OffsetDateTime* __this, ::app::Uno::Exception* exception);
void ParseResult__Uno_Time_OffsetDateTime___ObjInit_1(ParseResult__Uno_Time_OffsetDateTime* __this, ::app::Uno::Time::OffsetDateTime* value);
ParseResult__Uno_Time_OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__ForException(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__ForValue(::uStatic* __this, ::app::Uno::Time::OffsetDateTime* value);
::app::Uno::Exception* ParseResult__Uno_Time_OffsetDateTime__get_Exception(ParseResult__Uno_Time_OffsetDateTime* __this);
bool ParseResult__Uno_Time_OffsetDateTime__get_Success(ParseResult__Uno_Time_OffsetDateTime* __this);
::app::Uno::Time::OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__get_Value(ParseResult__Uno_Time_OffsetDateTime* __this);
::app::Uno::Time::OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__GetValueOrThrow(ParseResult__Uno_Time_OffsetDateTime* __this);
ParseResult__Uno_Time_OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__New_1(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__New_2(::uStatic* __this, ::app::Uno::Time::OffsetDateTime* value);
bool ParseResult__Uno_Time_OffsetDateTime__TryGetValue(ParseResult__Uno_Time_OffsetDateTime* __this, ::app::Uno::Time::OffsetDateTime* failureValue, ::app::Uno::Time::OffsetDateTime** result);

struct ParseResult__Uno_Time_OffsetDateTime : ::uObject
{
    ::uStrong< ::app::Uno::Time::OffsetDateTime*> _value;
    ::uStrong< ::app::Uno::Exception*> _exception;

    void _ObjInit(::app::Uno::Exception* exception) { ParseResult__Uno_Time_OffsetDateTime___ObjInit(this, exception); }
    void _ObjInit_1(::app::Uno::Time::OffsetDateTime* value) { ParseResult__Uno_Time_OffsetDateTime___ObjInit_1(this, value); }
    ::app::Uno::Exception* Exception() { return ParseResult__Uno_Time_OffsetDateTime__get_Exception(this); }
    bool Success() { return ParseResult__Uno_Time_OffsetDateTime__get_Success(this); }
    ::app::Uno::Time::OffsetDateTime* Value() { return ParseResult__Uno_Time_OffsetDateTime__get_Value(this); }
    ::app::Uno::Time::OffsetDateTime* GetValueOrThrow() { return ParseResult__Uno_Time_OffsetDateTime__GetValueOrThrow(this); }
    bool TryGetValue(::app::Uno::Time::OffsetDateTime* failureValue, ::app::Uno::Time::OffsetDateTime** result) { return ParseResult__Uno_Time_OffsetDateTime__TryGetValue(this, failureValue, result); }
};

}}}}


#endif
