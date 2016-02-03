// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_LOCAL_TIME_H__
#define __APP_UNO_TIME_LOCAL_TIME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }

namespace app {
namespace Uno {
namespace Time {

struct LocalTime;

extern LocalTime LocalTime__Midnight;
extern LocalTime LocalTime__Noon;

struct LocalTime__uType : ::uStructType
{
};

LocalTime__uType* LocalTime__typeof();

void LocalTime___ObjInit_1(LocalTime* __this, int hour, int minute, int second);
void LocalTime___ObjInit_2(LocalTime* __this, int hour, int minute, int second, int millisecond);
void LocalTime___ObjInit_4(LocalTime* __this, ::uLong ticks);
void LocalTime___TypeInit(::uStatic* __this);
bool LocalTime__Equals(LocalTime* __this, ::uObject* obj);
int LocalTime__get_Hour(LocalTime* __this);
::app::Uno::Time::LocalDateTime* LocalTime__get_LocalDateTime(LocalTime* __this);
int LocalTime__get_Millisecond(LocalTime* __this);
int LocalTime__get_Minute(LocalTime* __this);
int LocalTime__get_Second(LocalTime* __this);
::uLong LocalTime__get_TickOfDay(LocalTime* __this);
int LocalTime__GetHashCode(LocalTime* __this);
LocalTime LocalTime__New_2(::uStatic* __this, int hour, int minute, int second);
LocalTime LocalTime__New_3(::uStatic* __this, int hour, int minute, int second, int millisecond);
LocalTime LocalTime__New_5(::uStatic* __this, ::uLong ticks);
bool LocalTime__op_Equality(::uStatic* __this, LocalTime lhs, LocalTime rhs);
::uString* LocalTime__ToString(LocalTime* __this);

struct LocalTime
{
    ::uLong _ticks;

    void _ObjInit_1(int hour, int minute, int second) { LocalTime___ObjInit_1(this, hour, minute, second); }
    void _ObjInit_2(int hour, int minute, int second, int millisecond) { LocalTime___ObjInit_2(this, hour, minute, second, millisecond); }
    void _ObjInit_4(::uLong ticks) { LocalTime___ObjInit_4(this, ticks); }
    bool Equals(::uObject* obj) { return LocalTime__Equals(this, obj); }
    int Hour() { return LocalTime__get_Hour(this); }
    ::app::Uno::Time::LocalDateTime* LocalDateTime() { return LocalTime__get_LocalDateTime(this); }
    int Millisecond() { return LocalTime__get_Millisecond(this); }
    int Minute() { return LocalTime__get_Minute(this); }
    int Second() { return LocalTime__get_Second(this); }
    ::uLong TickOfDay() { return LocalTime__get_TickOfDay(this); }
    int GetHashCode() { return LocalTime__GetHashCode(this); }
    ::uString* ToString() { return LocalTime__ToString(this); }
};

}}}


#endif
