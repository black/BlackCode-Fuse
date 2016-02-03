// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTER_A5323E51_H__
#define __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTER_A5323E51_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetDateTimePattern-de961316.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetDateTimePattern_-7c091fe1.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetDateTimePattern_OffsetDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket;

struct SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType
{
};

SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof();

void SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
void SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_2(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
int SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);
::uString* SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);

struct SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char
{
    ::uChar _separator;
    bool _show;

    void _ObjInit_1(bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(this, obligatory, show, separator, skipNextPartsCountIfThisNotSpecified); }
    void _ObjInit_2(bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_2(this, obligatory, separator, skipNextPartsCountIfThisNotSpecified); }
};

}}}}


#endif
