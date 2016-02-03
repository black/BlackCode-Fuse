// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_LOCAL_DATE_PATTERN_LOCAL_DATE_BUCKET_H__
#define __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_LOCAL_DATE_PATTERN_LOCAL_DATE_BUCKET_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDatePattern_Loca-7947c8c4.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDatePattern_Local-15b2e419.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDatePattern_LocalDateBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket;

struct NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__uType
{
};

NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType* NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof();

void NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_1(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
::uString* NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__GetPart(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, int index);
NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
int NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value);
::uString* NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value);

struct NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int
{
    void _ObjInit_1(int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter) { NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_1(this, size, obligatory, setter, getter); }
    ::uString* GetPart(::uString* line, int index) { return NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__GetPart(this, line, index); }
};

}}}}


#endif
