// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.Offset.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetDateTimePattern__OffsetDateTimeBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class OffsetDateTimePattern.OffsetDateTimeBucket :612
// {
uType* OffsetDateTimePattern__OffsetDateTimeBucket_typeof();
void OffsetDateTimePattern__OffsetDateTimeBucket__ctor__fn(OffsetDateTimePattern__OffsetDateTimeBucket* __this);
void OffsetDateTimePattern__OffsetDateTimeBucket__New1_fn(OffsetDateTimePattern__OffsetDateTimeBucket** __retval);

struct OffsetDateTimePattern__OffsetDateTimeBucket : uObject
{
    int Day;
    int Hour;
    int Millisecond;
    int Minute;
    int Month;
    ::g::Uno::Time::Offset Offset;
    int Second;
    int Sign;
    int Year;

    void ctor_();
    static OffsetDateTimePattern__OffsetDateTimeBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
