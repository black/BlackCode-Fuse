// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_DURATION_H__
#define __APP_UNO_TIME_DURATION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {

struct Duration;

extern Duration Duration__Epsilon;
extern Duration Duration__OneHour;
extern Duration Duration__OneMillisecond;
extern Duration Duration__OneMinute;
extern Duration Duration__OneSecond;
extern Duration Duration__OneStandardDay;
extern Duration Duration__OneStandardWeek;
extern Duration Duration__Zero;

struct Duration__uType : ::uStructType
{
};

Duration__uType* Duration__typeof();

void Duration___ObjInit(Duration* __this, ::uLong ticks);
void Duration___TypeInit(::uStatic* __this);
bool Duration__Equals(Duration* __this, ::uObject* obj);
bool Duration__Equals_2(Duration* __this, Duration other);
Duration Duration__FromTicks(::uStatic* __this, ::uLong ticks);
::uLong Duration__get_Ticks(Duration* __this);
int Duration__GetHashCode(Duration* __this);
Duration Duration__New_1(::uStatic* __this, ::uLong ticks);

struct Duration
{
    ::uLong ticks;

    void _ObjInit(::uLong ticks) { Duration___ObjInit(this, ticks); }
    bool Equals(::uObject* obj) { return Duration__Equals(this, obj); }
    bool Equals_2(Duration other) { return Duration__Equals_2(this, other); }
    ::uLong Ticks() { return Duration__get_Ticks(this); }
    int GetHashCode() { return Duration__GetHashCode(this); }
};

}}}


#endif
