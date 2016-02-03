// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_LO_3BC4DE42_H__
#define __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_LO_3BC4DE42_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDateTimePattern_-12b203a0.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDateTimePattern_L-f24fb8a6.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDateTimePattern_LocalDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket;

struct NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType
{
};

NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof();

void NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
::uString* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__GetPart(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, int index);
NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
int NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
::uString* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);

struct NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int
{
    void _ObjInit_1(int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter) { NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(this, size, obligatory, setter, getter); }
    ::uString* GetPart(::uString* line, int index) { return NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__GetPart(this, line, index); }
};

}}}}


#endif
