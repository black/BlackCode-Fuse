// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_OFFSET_H__
#define __APP_UNO_TIME_TEXT_PARSE_RESULT__UNO_TIME_OFFSET_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Offset.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct ParseResult__Uno_Time_Offset;

struct ParseResult__Uno_Time_Offset__uType : ::uClassType
{
};

ParseResult__Uno_Time_Offset__uType* ParseResult__Uno_Time_Offset__typeof();

void ParseResult__Uno_Time_Offset___ObjInit(ParseResult__Uno_Time_Offset* __this, ::app::Uno::Exception* exception);
void ParseResult__Uno_Time_Offset___ObjInit_1(ParseResult__Uno_Time_Offset* __this, ::app::Uno::Time::Offset value);
ParseResult__Uno_Time_Offset* ParseResult__Uno_Time_Offset__ForException(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_Offset* ParseResult__Uno_Time_Offset__ForValue(::uStatic* __this, ::app::Uno::Time::Offset value);
::app::Uno::Exception* ParseResult__Uno_Time_Offset__get_Exception(ParseResult__Uno_Time_Offset* __this);
bool ParseResult__Uno_Time_Offset__get_Success(ParseResult__Uno_Time_Offset* __this);
::app::Uno::Time::Offset ParseResult__Uno_Time_Offset__get_Value(ParseResult__Uno_Time_Offset* __this);
::app::Uno::Time::Offset ParseResult__Uno_Time_Offset__GetValueOrThrow(ParseResult__Uno_Time_Offset* __this);
ParseResult__Uno_Time_Offset* ParseResult__Uno_Time_Offset__New_1(::uStatic* __this, ::app::Uno::Exception* exception);
ParseResult__Uno_Time_Offset* ParseResult__Uno_Time_Offset__New_2(::uStatic* __this, ::app::Uno::Time::Offset value);
bool ParseResult__Uno_Time_Offset__TryGetValue(ParseResult__Uno_Time_Offset* __this, ::app::Uno::Time::Offset failureValue, ::app::Uno::Time::Offset* result);

struct ParseResult__Uno_Time_Offset : ::uObject
{
    ::app::Uno::Time::Offset _value;
    ::uStrong< ::app::Uno::Exception*> _exception;

    void _ObjInit(::app::Uno::Exception* exception) { ParseResult__Uno_Time_Offset___ObjInit(this, exception); }
    void _ObjInit_1(::app::Uno::Time::Offset value) { ParseResult__Uno_Time_Offset___ObjInit_1(this, value); }
    ::app::Uno::Exception* Exception() { return ParseResult__Uno_Time_Offset__get_Exception(this); }
    bool Success() { return ParseResult__Uno_Time_Offset__get_Success(this); }
    ::app::Uno::Time::Offset Value() { return ParseResult__Uno_Time_Offset__get_Value(this); }
    ::app::Uno::Time::Offset GetValueOrThrow() { return ParseResult__Uno_Time_Offset__GetValueOrThrow(this); }
    bool TryGetValue(::app::Uno::Time::Offset failureValue, ::app::Uno::Time::Offset* result) { return ParseResult__Uno_Time_Offset__TryGetValue(this, failureValue, result); }
};

}}}}


#endif
