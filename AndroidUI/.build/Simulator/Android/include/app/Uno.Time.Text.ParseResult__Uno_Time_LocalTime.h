// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_LOCAL_TIME_H__
#define __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_LOCAL_TIME_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.LocalTime.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct ParseResult__Uno_Time_LocalTime;

struct ParseResult__Uno_Time_LocalTime__uType : ::uClassType
{
};

ParseResult__Uno_Time_LocalTime__uType* ParseResult__Uno_Time_LocalTime__typeof();

void ParseResult__Uno_Time_LocalTime___ObjInit(ParseResult__Uno_Time_LocalTime* __this, ::app::Uno::Exception* exception);
void ParseResult__Uno_Time_LocalTime___ObjInit_1(ParseResult__Uno_Time_LocalTime* __this, ::app::Uno::Time::LocalTime value);
ParseResult__Uno_Time_LocalTime* ParseResult__Uno_Time_LocalTime__ForException(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_LocalTime* ParseResult__Uno_Time_LocalTime__ForValue(::uStatic* __this, ::app::Uno::Time::LocalTime value);
::app::Uno::Exception* ParseResult__Uno_Time_LocalTime__get_Exception(ParseResult__Uno_Time_LocalTime* __this);
bool ParseResult__Uno_Time_LocalTime__get_Success(ParseResult__Uno_Time_LocalTime* __this);
::app::Uno::Time::LocalTime ParseResult__Uno_Time_LocalTime__get_Value(ParseResult__Uno_Time_LocalTime* __this);
::app::Uno::Time::LocalTime ParseResult__Uno_Time_LocalTime__GetValueOrThrow(ParseResult__Uno_Time_LocalTime* __this);
ParseResult__Uno_Time_LocalTime* ParseResult__Uno_Time_LocalTime__New_1(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_LocalTime* ParseResult__Uno_Time_LocalTime__New_2(::uStatic* __this, ::app::Uno::Time::LocalTime value);
bool ParseResult__Uno_Time_LocalTime__TryGetValue(ParseResult__Uno_Time_LocalTime* __this, ::app::Uno::Time::LocalTime failureValue, ::app::Uno::Time::LocalTime* result);

struct ParseResult__Uno_Time_LocalTime : ::uObject
{
    ::app::Uno::Time::LocalTime _value;
    ::uStrong< ::app::Uno::Exception*> _exception;

    void _ObjInit(::app::Uno::Exception* exception) { ParseResult__Uno_Time_LocalTime___ObjInit(this, exception); }
    void _ObjInit_1(::app::Uno::Time::LocalTime value) { ParseResult__Uno_Time_LocalTime___ObjInit_1(this, value); }
    ::app::Uno::Exception* Exception() { return ParseResult__Uno_Time_LocalTime__get_Exception(this); }
    bool Success() { return ParseResult__Uno_Time_LocalTime__get_Success(this); }
    ::app::Uno::Time::LocalTime Value() { return ParseResult__Uno_Time_LocalTime__get_Value(this); }
    ::app::Uno::Time::LocalTime GetValueOrThrow() { return ParseResult__Uno_Time_LocalTime__GetValueOrThrow(this); }
    bool TryGetValue(::app::Uno::Time::LocalTime failureValue, ::app::Uno::Time::LocalTime* result) { return ParseResult__Uno_Time_LocalTime__TryGetValue(this, failureValue, result); }
};

}}}}


#endif
