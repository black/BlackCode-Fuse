// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_SIGN_PART__UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__
#define __APP_UNO_TIME_TEXT_SIGN_PART__UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetPattern_OffsetBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket;

struct SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType
{
};

SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof();

void SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_1(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uDelegate* setter, ::uDelegate* getter);
void SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_2(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter);
SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(::uStatic* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
int SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);
::uString* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);

struct SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int
{
    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter) { SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_1(this, setter, getter); }
    void _ObjInit_2(bool obligatory, ::uDelegate* setter, ::uDelegate* getter) { SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_2(this, obligatory, setter, getter); }
};

}}}}


#endif
