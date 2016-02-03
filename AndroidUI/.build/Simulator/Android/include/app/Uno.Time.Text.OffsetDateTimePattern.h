// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN_H__
#define __APP_UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetDateTimePattern_OffsetDateTimeBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct ParseResult__Uno_Time_OffsetDateTime; } } } }
namespace app { namespace Uno { namespace Time { struct Offset; } } }
namespace app { namespace Uno { namespace Time { struct OffsetDateTime; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct OffsetDateTimePattern;

extern ::uStaticStrong< OffsetDateTimePattern*> OffsetDateTimePattern__General;

struct OffsetDateTimePattern__uType : ::uClassType
{
};

OffsetDateTimePattern__uType* OffsetDateTimePattern__typeof();

void OffsetDateTimePattern___ObjInit(OffsetDateTimePattern* __this);
::uString* OffsetDateTimePattern__Format(OffsetDateTimePattern* __this, ::app::Uno::Time::OffsetDateTime* value);
OffsetDateTimePattern* OffsetDateTimePattern__get_GeneralIsoPattern(::uStatic* __this);
int OffsetDateTimePattern__GetDay(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
int OffsetDateTimePattern__GetHour(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
int OffsetDateTimePattern__GetMillisecond(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
int OffsetDateTimePattern__GetMinute(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
int OffsetDateTimePattern__GetMonth(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
::app::Uno::Time::Offset OffsetDateTimePattern__GetOffset(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
int OffsetDateTimePattern__GetSecond(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
int OffsetDateTimePattern__GetSign(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
int OffsetDateTimePattern__GetYear(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
OffsetDateTimePattern* OffsetDateTimePattern__New_1(::uStatic* __this);
::app::Uno::Time::Text::ParseResult__Uno_Time_OffsetDateTime* OffsetDateTimePattern__Parse(OffsetDateTimePattern* __this, ::uString* text);
void OffsetDateTimePattern__SetDay(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int day);
void OffsetDateTimePattern__SetHour(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int hour);
void OffsetDateTimePattern__SetMillisecond(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int millisecond);
void OffsetDateTimePattern__SetMinute(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int minute);
void OffsetDateTimePattern__SetMonth(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int month);
void OffsetDateTimePattern__SetOffset(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, ::app::Uno::Time::Offset offset);
void OffsetDateTimePattern__SetSecond(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int second);
void OffsetDateTimePattern__SetSign(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int sign);
void OffsetDateTimePattern__SetYear(OffsetDateTimePattern* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int year);

struct OffsetDateTimePattern : ::uObject
{
    ::uStrong< ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*> _generalPattern;

    void _ObjInit() { OffsetDateTimePattern___ObjInit(this); }
    ::uString* Format(::app::Uno::Time::OffsetDateTime* value) { return OffsetDateTimePattern__Format(this, value); }
    int GetDay(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetDay(this, value); }
    int GetHour(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetHour(this, value); }
    int GetMillisecond(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetMillisecond(this, value); }
    int GetMinute(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetMinute(this, value); }
    int GetMonth(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetMonth(this, value); }
    ::app::Uno::Time::Offset GetOffset(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
    int GetSecond(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetSecond(this, value); }
    int GetSign(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetSign(this, value); }
    int GetYear(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetYear(this, value); }
    ::app::Uno::Time::Text::ParseResult__Uno_Time_OffsetDateTime* Parse(::uString* text) { return OffsetDateTimePattern__Parse(this, text); }
    void SetDay(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int day) { OffsetDateTimePattern__SetDay(this, value, day); }
    void SetHour(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int hour) { OffsetDateTimePattern__SetHour(this, value, hour); }
    void SetMillisecond(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int millisecond) { OffsetDateTimePattern__SetMillisecond(this, value, millisecond); }
    void SetMinute(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int minute) { OffsetDateTimePattern__SetMinute(this, value, minute); }
    void SetMonth(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int month) { OffsetDateTimePattern__SetMonth(this, value, month); }
    void SetOffset(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, ::app::Uno::Time::Offset offset);
    void SetSecond(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int second) { OffsetDateTimePattern__SetSecond(this, value, second); }
    void SetSign(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int sign) { OffsetDateTimePattern__SetSign(this, value, sign); }
    void SetYear(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, int year) { OffsetDateTimePattern__SetYear(this, value, year); }
};

}}}}

#include <app/Uno.Time.Offset.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

inline ::app::Uno::Time::Offset OffsetDateTimePattern::GetOffset(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return OffsetDateTimePattern__GetOffset(this, value); }
inline void OffsetDateTimePattern::SetOffset(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value, ::app::Uno::Time::Offset offset) { OffsetDateTimePattern__SetOffset(this, value, offset); }

}}}}


#endif
