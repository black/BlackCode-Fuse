// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN_OFFSET_DATE_TIME_BUCKET_H__
#define __APP_UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN_OFFSET_DATE_TIME_BUCKET_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Offset.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct OffsetDateTimePattern_OffsetDateTimeBucket;

struct OffsetDateTimePattern_OffsetDateTimeBucket__uType : ::uClassType
{
};

OffsetDateTimePattern_OffsetDateTimeBucket__uType* OffsetDateTimePattern_OffsetDateTimeBucket__typeof();

void OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit(OffsetDateTimePattern_OffsetDateTimeBucket* __this);
OffsetDateTimePattern_OffsetDateTimeBucket* OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this);

struct OffsetDateTimePattern_OffsetDateTimeBucket : ::uObject
{
    int Sign;
    int Year;
    int Month;
    int Day;
    int Hour;
    int Minute;
    int Second;
    int Millisecond;
    ::app::Uno::Time::Offset Offset;

    void _ObjInit() { OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit(this); }
};

}}}}


#endif
