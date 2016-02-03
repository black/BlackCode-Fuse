// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_LOCAL_TIME_PATTERN_H__
#define __APP_UNO_TIME_TEXT_LOCAL_TIME_PATTERN_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern_LocalTimeBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct ParseResult__Uno_Time_LocalTime; } } } }
namespace app { namespace Uno { namespace Time { struct LocalTime; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct LocalTimePattern;

extern ::uStaticStrong< LocalTimePattern*> LocalTimePattern__General;

struct LocalTimePattern__uType : ::uClassType
{
};

LocalTimePattern__uType* LocalTimePattern__typeof();

void LocalTimePattern___ObjInit(LocalTimePattern* __this);
::uString* LocalTimePattern__Format(LocalTimePattern* __this, ::app::Uno::Time::LocalTime value);
LocalTimePattern* LocalTimePattern__get_GeneralIsoPattern(::uStatic* __this);
int LocalTimePattern__GetHour(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value);
int LocalTimePattern__GetMillisecond(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value);
int LocalTimePattern__GetMinute(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value);
int LocalTimePattern__GetSecond(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value);
LocalTimePattern* LocalTimePattern__New_1(::uStatic* __this);
::app::Uno::Time::Text::ParseResult__Uno_Time_LocalTime* LocalTimePattern__Parse(LocalTimePattern* __this, ::uString* text);
void LocalTimePattern__SetHour(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int hour);
void LocalTimePattern__SetMillisecond(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int millisecond);
void LocalTimePattern__SetMinute(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int minute);
void LocalTimePattern__SetSecond(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int second);

struct LocalTimePattern : ::uObject
{
    ::uStrong< ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*> _generalPattern;

    void _ObjInit() { LocalTimePattern___ObjInit(this); }
    ::uString* Format(::app::Uno::Time::LocalTime value);
    int GetHour(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value) { return LocalTimePattern__GetHour(this, value); }
    int GetMillisecond(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value) { return LocalTimePattern__GetMillisecond(this, value); }
    int GetMinute(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value) { return LocalTimePattern__GetMinute(this, value); }
    int GetSecond(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value) { return LocalTimePattern__GetSecond(this, value); }
    ::app::Uno::Time::Text::ParseResult__Uno_Time_LocalTime* Parse(::uString* text) { return LocalTimePattern__Parse(this, text); }
    void SetHour(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int hour) { LocalTimePattern__SetHour(this, value, hour); }
    void SetMillisecond(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int millisecond) { LocalTimePattern__SetMillisecond(this, value, millisecond); }
    void SetMinute(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int minute) { LocalTimePattern__SetMinute(this, value, minute); }
    void SetSecond(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int second) { LocalTimePattern__SetSecond(this, value, second); }
};

}}}}

#include <app/Uno.Time.LocalTime.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

inline ::uString* LocalTimePattern::Format(::app::Uno::Time::LocalTime value) { return LocalTimePattern__Format(this, value); }

}}}}


#endif
