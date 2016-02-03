// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_LOCAL_DATE_PATTERN_H__
#define __APP_UNO_TIME_TEXT_LOCAL_DATE_PATTERN_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDatePattern_LocalDateBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct ParseResult__Uno_Time_LocalDate; } } } }
namespace app { namespace Uno { namespace Time { struct LocalDate; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct LocalDatePattern;

extern ::uStaticStrong< LocalDatePattern*> LocalDatePattern__General;

struct LocalDatePattern__uType : ::uClassType
{
};

LocalDatePattern__uType* LocalDatePattern__typeof();

void LocalDatePattern___ObjInit(LocalDatePattern* __this);
::uString* LocalDatePattern__Format(LocalDatePattern* __this, ::app::Uno::Time::LocalDate* value);
LocalDatePattern* LocalDatePattern__get_GeneralIsoPattern(::uStatic* __this);
int LocalDatePattern__GetDay(LocalDatePattern* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value);
int LocalDatePattern__GetMonth(LocalDatePattern* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value);
int LocalDatePattern__GetSign(LocalDatePattern* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value);
int LocalDatePattern__GetYear(LocalDatePattern* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value);
LocalDatePattern* LocalDatePattern__New_1(::uStatic* __this);
::app::Uno::Time::Text::ParseResult__Uno_Time_LocalDate* LocalDatePattern__Parse(LocalDatePattern* __this, ::uString* text);
void LocalDatePattern__SetDay(LocalDatePattern* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value, int day);
void LocalDatePattern__SetMonth(LocalDatePattern* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value, int month);
void LocalDatePattern__SetSign(LocalDatePattern* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value, int sign);
void LocalDatePattern__SetYear(LocalDatePattern* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value, int year);

struct LocalDatePattern : ::uObject
{
    ::uStrong< ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket*> _generalPattern;

    void _ObjInit() { LocalDatePattern___ObjInit(this); }
    ::uString* Format(::app::Uno::Time::LocalDate* value) { return LocalDatePattern__Format(this, value); }
    int GetDay(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value) { return LocalDatePattern__GetDay(this, value); }
    int GetMonth(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value) { return LocalDatePattern__GetMonth(this, value); }
    int GetSign(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value) { return LocalDatePattern__GetSign(this, value); }
    int GetYear(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value) { return LocalDatePattern__GetYear(this, value); }
    ::app::Uno::Time::Text::ParseResult__Uno_Time_LocalDate* Parse(::uString* text) { return LocalDatePattern__Parse(this, text); }
    void SetDay(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value, int day) { LocalDatePattern__SetDay(this, value, day); }
    void SetMonth(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value, int month) { LocalDatePattern__SetMonth(this, value, month); }
    void SetSign(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value, int sign) { LocalDatePattern__SetSign(this, value, sign); }
    void SetYear(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value, int year) { LocalDatePattern__SetYear(this, value, year); }
};

}}}}


#endif
