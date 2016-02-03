// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_OFFSET_DATE_TIME_P_455A4790_H__
#define __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_OFFSET_DATE_TIME_P_455A4790_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetDateTimePattern_OffsetDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket;

struct FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType : ::uClassType
{
};

FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof();

void FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uArray* parts);
::uString* FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Format(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket);
FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, ::uArray* parts);
void FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Parse(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket);

struct FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket : ::uObject
{
    ::uStrong< ::uArray*> _parts;

    void _ObjInit(::uArray* parts) { FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit(this, parts); }
    ::uString* Format(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket) { return FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Format(this, bucket); }
    void Parse(::uString* line, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket) { FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Parse(this, line, bucket); }
};

}}}}


#endif
