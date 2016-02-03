// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOCAL_TIME_BUCKET_H__
#define __APP_UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOCAL_TIME_BUCKET_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct LocalTimePattern_LocalTimeBucket;

struct LocalTimePattern_LocalTimeBucket__uType : ::uClassType
{
};

LocalTimePattern_LocalTimeBucket__uType* LocalTimePattern_LocalTimeBucket__typeof();

void LocalTimePattern_LocalTimeBucket___ObjInit(LocalTimePattern_LocalTimeBucket* __this);
LocalTimePattern_LocalTimeBucket* LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this);

struct LocalTimePattern_LocalTimeBucket : ::uObject
{
    int Hour;
    int Minute;
    int Second;
    int Millisecond;

    void _ObjInit() { LocalTimePattern_LocalTimeBucket___ObjInit(this); }
};

}}}}


#endif
