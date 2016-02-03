// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_OFFSET_PATTERN_H__
#define __APP_UNO_TIME_TEXT_OFFSET_PATTERN_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetPattern_OffsetBucket; } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct ParseResult__Uno_Time_Offset; } } } }
namespace app { namespace Uno { namespace Time { struct Offset; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct OffsetPattern;

extern ::uStaticStrong< OffsetPattern*> OffsetPattern__General;

struct OffsetPattern__uType : ::uClassType
{
};

OffsetPattern__uType* OffsetPattern__typeof();

void OffsetPattern___ObjInit(OffsetPattern* __this);
::uString* OffsetPattern__Format(OffsetPattern* __this, ::app::Uno::Time::Offset value);
OffsetPattern* OffsetPattern__get_GeneralIsoPattern(::uStatic* __this);
int OffsetPattern__GetHour(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);
int OffsetPattern__GetMinute(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);
int OffsetPattern__GetSecond(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);
int OffsetPattern__GetSign(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);
OffsetPattern* OffsetPattern__New_1(::uStatic* __this);
::app::Uno::Time::Text::ParseResult__Uno_Time_Offset* OffsetPattern__Parse(OffsetPattern* __this, ::uString* text);
void OffsetPattern__SetHour(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int hour);
void OffsetPattern__SetMinute(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int minute);
void OffsetPattern__SetSecond(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int second);
void OffsetPattern__SetSign(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int sign);

struct OffsetPattern : ::uObject
{
    ::uStrong< ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket*> _generalPattern;

    void _ObjInit() { OffsetPattern___ObjInit(this); }
    ::uString* Format(::app::Uno::Time::Offset value);
    int GetHour(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value) { return OffsetPattern__GetHour(this, value); }
    int GetMinute(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value) { return OffsetPattern__GetMinute(this, value); }
    int GetSecond(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value) { return OffsetPattern__GetSecond(this, value); }
    int GetSign(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value) { return OffsetPattern__GetSign(this, value); }
    ::app::Uno::Time::Text::ParseResult__Uno_Time_Offset* Parse(::uString* text) { return OffsetPattern__Parse(this, text); }
    void SetHour(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int hour) { OffsetPattern__SetHour(this, value, hour); }
    void SetMinute(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int minute) { OffsetPattern__SetMinute(this, value, minute); }
    void SetSecond(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int second) { OffsetPattern__SetSecond(this, value, second); }
    void SetSign(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int sign) { OffsetPattern__SetSign(this, value, sign); }
};

}}}}

#include <app/Uno.Time.Offset.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

inline ::uString* OffsetPattern::Format(::app::Uno::Time::Offset value) { return OffsetPattern__Format(this, value); }

}}}}


#endif
