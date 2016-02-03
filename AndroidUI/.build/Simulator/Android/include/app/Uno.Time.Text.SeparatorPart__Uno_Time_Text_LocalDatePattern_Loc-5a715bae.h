// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_LOCAL_DATE_PATTERN_LOC_5A715BAE_H__
#define __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_LOCAL_DATE_PATTERN_LOC_5A715BAE_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDatePattern_Loca-7947c8c4.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDatePattern_Local-d55586a3.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDatePattern_LocalDateBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket;

struct SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__uType
{
};

SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType* SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof();

void SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
void SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_1(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_2(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
int SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value);
::uString* SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value);

struct SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char
{
    ::uChar _separator;
    bool _show;

    void _ObjInit_1(bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_1(this, obligatory, show, separator, skipNextPartsCountIfThisNotSpecified); }
    void _ObjInit_2(bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_2(this, obligatory, separator, skipNextPartsCountIfThisNotSpecified); }
};

}}}}


#endif
