// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_H__
#define __APP_UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDateTimePattern_LocalDateTimeBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct ParseResult__Uno_Time_LocalDateTime; } } } }
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct LocalDateTimePattern;

extern ::uStaticStrong< LocalDateTimePattern*> LocalDateTimePattern__General;

struct LocalDateTimePattern__uType : ::uClassType
{
};

LocalDateTimePattern__uType* LocalDateTimePattern__typeof();

void LocalDateTimePattern___ObjInit(LocalDateTimePattern* __this);
::uString* LocalDateTimePattern__Format(LocalDateTimePattern* __this, ::app::Uno::Time::LocalDateTime* value);
LocalDateTimePattern* LocalDateTimePattern__get_GeneralIsoPattern(::uStatic* __this);
int LocalDateTimePattern__GetDay(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
int LocalDateTimePattern__GetHour(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
int LocalDateTimePattern__GetMinute(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
int LocalDateTimePattern__GetMonth(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
int LocalDateTimePattern__GetSecond(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
int LocalDateTimePattern__GetSign(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
int LocalDateTimePattern__GetYear(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
LocalDateTimePattern* LocalDateTimePattern__New_1(::uStatic* __this);
::app::Uno::Time::Text::ParseResult__Uno_Time_LocalDateTime* LocalDateTimePattern__Parse(LocalDateTimePattern* __this, ::uString* text);
void LocalDateTimePattern__SetDay(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int day);
void LocalDateTimePattern__SetHour(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int hour);
void LocalDateTimePattern__SetMinute(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int minute);
void LocalDateTimePattern__SetMonth(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int month);
void LocalDateTimePattern__SetSecond(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int second);
void LocalDateTimePattern__SetSign(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int sign);
void LocalDateTimePattern__SetYear(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int year);

struct LocalDateTimePattern : ::uObject
{
    ::uStrong< ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*> _generalPattern;

    void _ObjInit() { LocalDateTimePattern___ObjInit(this); }
    ::uString* Format(::app::Uno::Time::LocalDateTime* value) { return LocalDateTimePattern__Format(this, value); }
    int GetDay(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value) { return LocalDateTimePattern__GetDay(this, value); }
    int GetHour(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value) { return LocalDateTimePattern__GetHour(this, value); }
    int GetMinute(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value) { return LocalDateTimePattern__GetMinute(this, value); }
    int GetMonth(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value) { return LocalDateTimePattern__GetMonth(this, value); }
    int GetSecond(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value) { return LocalDateTimePattern__GetSecond(this, value); }
    int GetSign(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value) { return LocalDateTimePattern__GetSign(this, value); }
    int GetYear(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value) { return LocalDateTimePattern__GetYear(this, value); }
    ::app::Uno::Time::Text::ParseResult__Uno_Time_LocalDateTime* Parse(::uString* text) { return LocalDateTimePattern__Parse(this, text); }
    void SetDay(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int day) { LocalDateTimePattern__SetDay(this, value, day); }
    void SetHour(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int hour) { LocalDateTimePattern__SetHour(this, value, hour); }
    void SetMinute(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int minute) { LocalDateTimePattern__SetMinute(this, value, minute); }
    void SetMonth(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int month) { LocalDateTimePattern__SetMonth(this, value, month); }
    void SetSecond(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int second) { LocalDateTimePattern__SetSecond(this, value, second); }
    void SetSign(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int sign) { LocalDateTimePattern__SetSign(this, value, sign); }
    void SetYear(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int year) { LocalDateTimePattern__SetYear(this, value, year); }
};

}}}}


#endif
