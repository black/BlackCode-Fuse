// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_LOCAL_DATE_TIME_H__
#define __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_LOCAL_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct ParseResult__Uno_Time_LocalDateTime;

struct ParseResult__Uno_Time_LocalDateTime__uType : ::uClassType
{
};

ParseResult__Uno_Time_LocalDateTime__uType* ParseResult__Uno_Time_LocalDateTime__typeof();

void ParseResult__Uno_Time_LocalDateTime___ObjInit(ParseResult__Uno_Time_LocalDateTime* __this, ::app::Uno::Exception* exception);
void ParseResult__Uno_Time_LocalDateTime___ObjInit_1(ParseResult__Uno_Time_LocalDateTime* __this, ::app::Uno::Time::LocalDateTime* value);
ParseResult__Uno_Time_LocalDateTime* ParseResult__Uno_Time_LocalDateTime__ForException(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_LocalDateTime* ParseResult__Uno_Time_LocalDateTime__ForValue(::uStatic* __this, ::app::Uno::Time::LocalDateTime* value);
::app::Uno::Exception* ParseResult__Uno_Time_LocalDateTime__get_Exception(ParseResult__Uno_Time_LocalDateTime* __this);
bool ParseResult__Uno_Time_LocalDateTime__get_Success(ParseResult__Uno_Time_LocalDateTime* __this);
::app::Uno::Time::LocalDateTime* ParseResult__Uno_Time_LocalDateTime__get_Value(ParseResult__Uno_Time_LocalDateTime* __this);
::app::Uno::Time::LocalDateTime* ParseResult__Uno_Time_LocalDateTime__GetValueOrThrow(ParseResult__Uno_Time_LocalDateTime* __this);
ParseResult__Uno_Time_LocalDateTime* ParseResult__Uno_Time_LocalDateTime__New_1(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_LocalDateTime* ParseResult__Uno_Time_LocalDateTime__New_2(::uStatic* __this, ::app::Uno::Time::LocalDateTime* value);
bool ParseResult__Uno_Time_LocalDateTime__TryGetValue(ParseResult__Uno_Time_LocalDateTime* __this, ::app::Uno::Time::LocalDateTime* failureValue, ::app::Uno::Time::LocalDateTime** result);

struct ParseResult__Uno_Time_LocalDateTime : ::uObject
{
    ::uStrong< ::app::Uno::Time::LocalDateTime*> _value;
    ::uStrong< ::app::Uno::Exception*> _exception;

    void _ObjInit(::app::Uno::Exception* exception) { ParseResult__Uno_Time_LocalDateTime___ObjInit(this, exception); }
    void _ObjInit_1(::app::Uno::Time::LocalDateTime* value) { ParseResult__Uno_Time_LocalDateTime___ObjInit_1(this, value); }
    ::app::Uno::Exception* Exception() { return ParseResult__Uno_Time_LocalDateTime__get_Exception(this); }
    bool Success() { return ParseResult__Uno_Time_LocalDateTime__get_Success(this); }
    ::app::Uno::Time::LocalDateTime* Value() { return ParseResult__Uno_Time_LocalDateTime__get_Value(this); }
    ::app::Uno::Time::LocalDateTime* GetValueOrThrow() { return ParseResult__Uno_Time_LocalDateTime__GetValueOrThrow(this); }
    bool TryGetValue(::app::Uno::Time::LocalDateTime* failureValue, ::app::Uno::Time::LocalDateTime** result) { return ParseResult__Uno_Time_LocalDateTime__TryGetValue(this, failureValue, result); }
};

}}}}


#endif
