// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN_O_85E7EA12_H__
#define __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN_O_85E7EA12_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetDateTimePattern-de961316.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetDateTimePattern_-1c0ee4a9.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetDateTimePattern_OffsetDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket;

struct NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__uType
{
};

NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof();

void NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
::uString* NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__GetPart(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int index);
NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
int NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
::uString* NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);

struct NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int
{
    void _ObjInit_1(int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter) { NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(this, size, obligatory, setter, getter); }
    ::uString* GetPart(::uString* line, int index) { return NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__GetPart(this, line, index); }
};

}}}}


#endif
