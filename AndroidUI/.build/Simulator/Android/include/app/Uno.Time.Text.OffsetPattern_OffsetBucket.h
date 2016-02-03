// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__
#define __APP_UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct OffsetPattern_OffsetBucket;

struct OffsetPattern_OffsetBucket__uType : ::uClassType
{
};

OffsetPattern_OffsetBucket__uType* OffsetPattern_OffsetBucket__typeof();

void OffsetPattern_OffsetBucket___ObjInit(OffsetPattern_OffsetBucket* __this);
OffsetPattern_OffsetBucket* OffsetPattern_OffsetBucket__New_1(::uStatic* __this);

struct OffsetPattern_OffsetBucket : ::uObject
{
    int Sign;
    int Hour;
    int Minute;
    int Second;

    void _ObjInit() { OffsetPattern_OffsetBucket___ObjInit(this); }
};

}}}}


#endif
