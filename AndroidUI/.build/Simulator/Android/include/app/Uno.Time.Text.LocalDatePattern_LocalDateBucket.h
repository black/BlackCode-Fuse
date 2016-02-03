// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_LOCAL_DATE_PATTERN_LOCAL_DATE_BUCKET_H__
#define __APP_UNO_TIME_TEXT_LOCAL_DATE_PATTERN_LOCAL_DATE_BUCKET_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct LocalDatePattern_LocalDateBucket;

struct LocalDatePattern_LocalDateBucket__uType : ::uClassType
{
};

LocalDatePattern_LocalDateBucket__uType* LocalDatePattern_LocalDateBucket__typeof();

void LocalDatePattern_LocalDateBucket___ObjInit(LocalDatePattern_LocalDateBucket* __this);
LocalDatePattern_LocalDateBucket* LocalDatePattern_LocalDateBucket__New_1(::uStatic* __this);

struct LocalDatePattern_LocalDateBucket : ::uObject
{
    int Sign;
    int Year;
    int Month;
    int Day;

    void _ObjInit() { LocalDatePattern_LocalDateBucket___ObjInit(this); }
};

}}}}


#endif
