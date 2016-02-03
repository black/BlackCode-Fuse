// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__
#define __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetPattern_OffsetBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket;

struct NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType
{
};

NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof();

void NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_1(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
::uString* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__GetPart(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uString* line, int index);
NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
int NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);
::uString* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);

struct NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int
{
    void _ObjInit_1(int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter) { NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_1(this, size, obligatory, setter, getter); }
    ::uString* GetPart(::uString* line, int index) { return NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__GetPart(this, line, index); }
};

}}}}


#endif
