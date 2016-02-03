// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_LOCAL_DATE_TIME_BUCKET_H__
#define __APP_UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_LOCAL_DATE_TIME_BUCKET_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct LocalDateTimePattern_LocalDateTimeBucket;

struct LocalDateTimePattern_LocalDateTimeBucket__uType : ::uClassType
{
};

LocalDateTimePattern_LocalDateTimeBucket__uType* LocalDateTimePattern_LocalDateTimeBucket__typeof();

void LocalDateTimePattern_LocalDateTimeBucket___ObjInit(LocalDateTimePattern_LocalDateTimeBucket* __this);
LocalDateTimePattern_LocalDateTimeBucket* LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this);

struct LocalDateTimePattern_LocalDateTimeBucket : ::uObject
{
    int Sign;
    int Year;
    int Month;
    int Day;
    int Hour;
    int Minute;
    int Second;

    void _ObjInit() { LocalDateTimePattern_LocalDateTimeBucket___ObjInit(this); }
};

}}}}


#endif
