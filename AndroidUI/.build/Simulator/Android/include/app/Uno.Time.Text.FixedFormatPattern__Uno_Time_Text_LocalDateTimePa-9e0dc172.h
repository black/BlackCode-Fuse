// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_LOCAL_DATE_TIME_PA_9E0DC172_H__
#define __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_LOCAL_DATE_TIME_PA_9E0DC172_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDateTimePattern_LocalDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket;

struct FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType : ::uClassType
{
};

FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof();

void FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uArray* parts);
::uString* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Format(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket);
FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, ::uArray* parts);
void FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Parse(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket);

struct FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket : ::uObject
{
    ::uStrong< ::uArray*> _parts;

    void _ObjInit(::uArray* parts) { FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit(this, parts); }
    ::uString* Format(::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket) { return FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Format(this, bucket); }
    void Parse(::uString* line, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket) { FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Parse(this, line, bucket); }
};

}}}}


#endif
