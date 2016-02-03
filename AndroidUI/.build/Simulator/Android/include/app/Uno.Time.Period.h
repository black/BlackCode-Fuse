// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_PERIOD_H__
#define __APP_UNO_TIME_PERIOD_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct Duration; } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }
namespace app { namespace Uno { namespace Time { struct LocalDate; } } }
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }
namespace app { namespace Uno { namespace Time { struct LocalTime; } } }

namespace app {
namespace Uno {
namespace Time {

struct Period;

extern ::uStaticStrong< Period*> Period__Zero;

struct Period__uType : ::uClassType
{
};

Period__uType* Period__typeof();

void Period___ObjInit(Period* __this, ::uArray* values);
void Period___ObjInit_1(Period* __this, ::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks);
void Period___TypeInit(::uStatic* __this);
::app::Uno::Time::Instant Period__Add(Period* __this, ::app::Uno::Time::Instant instant, ::uLong ticks);
::app::Uno::Time::Instant Period__AddTo(Period* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar, int scalar);
void Period__AddValuesTo(Period* __this, ::uArray* values);
Period* Period__Between(::uStatic* __this, ::app::Uno::Time::LocalDate* start, ::app::Uno::Time::LocalDate* end);
Period* Period__Between_1(::uStatic* __this, ::app::Uno::Time::LocalDateTime* start, ::app::Uno::Time::LocalDateTime* end);
Period* Period__Between_2(::uStatic* __this, ::app::Uno::Time::LocalTime start, ::app::Uno::Time::LocalTime end);
bool Period__Equals(Period* __this, ::uObject* other);
bool Period__Equals_2(Period* __this, Period* other);
Period* Period__FromDays(::uStatic* __this, ::uLong days);
Period* Period__FromHours(::uStatic* __this, ::uLong hours);
Period* Period__FromMilliseconds(::uStatic* __this, ::uLong milliseconds);
Period* Period__FromMinutes(::uStatic* __this, ::uLong minutes);
Period* Period__FromMonths(::uStatic* __this, ::uLong months);
Period* Period__FromSeconds(::uStatic* __this, ::uLong seconds);
Period* Period__FromTicks(::uStatic* __this, ::uLong ticks);
Period* Period__FromWeeks(::uStatic* __this, ::uLong weeks);
Period* Period__FromYears(::uStatic* __this, ::uLong years);
::uLong Period__get_Days(Period* __this);
bool Period__get_HasDateComponent(Period* __this);
bool Period__get_HasTimeComponent(Period* __this);
::uLong Period__get_Hours(Period* __this);
::uLong Period__get_Milliseconds(Period* __this);
::uLong Period__get_Minutes(Period* __this);
::uLong Period__get_Months(Period* __this);
::uLong Period__get_Seconds(Period* __this);
::uLong Period__get_Ticks(Period* __this);
::uLong Period__get_TotalStandardTicks(Period* __this);
::uLong Period__get_Weeks(Period* __this);
::uLong Period__get_Years(Period* __this);
int Period__GetHashCode(Period* __this);
Period* Period__New_1(::uStatic* __this, ::uArray* values);
Period* Period__New_2(::uStatic* __this, ::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks);
Period* Period__op_Addition(::uStatic* __this, Period* left, Period* right);
Period* Period__op_Subtraction(::uStatic* __this, Period* minuend, Period* subtrahend);
::uLong Period__Subtract(Period* __this, ::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant, ::uLong ticksPerUnit);
void Period__SubtractValuesFrom(Period* __this, ::uArray* values);
::uArray* Period__ToArray(Period* __this);
::app::Uno::Time::Duration Period__ToDuration(Period* __this);
::uString* Period__ToString(Period* __this);

struct Period : ::uObject
{
    ::uLong _ticks;
    ::uLong _milliseconds;
    ::uLong _seconds;
    ::uLong _minutes;
    ::uLong _hours;
    ::uLong _days;
    ::uLong _weeks;
    ::uLong _months;
    ::uLong _years;

    void _ObjInit(::uArray* values) { Period___ObjInit(this, values); }
    void _ObjInit_1(::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks) { Period___ObjInit_1(this, years, months, weeks, days, hours, minutes, seconds, milliseconds, ticks); }
    ::app::Uno::Time::Instant Add(::app::Uno::Time::Instant instant, ::uLong ticks);
    ::app::Uno::Time::Instant AddTo(::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar, int scalar);
    void AddValuesTo(::uArray* values) { Period__AddValuesTo(this, values); }
    bool Equals_2(Period* other) { return Period__Equals_2(this, other); }
    ::uLong Days() { return Period__get_Days(this); }
    bool HasDateComponent() { return Period__get_HasDateComponent(this); }
    bool HasTimeComponent() { return Period__get_HasTimeComponent(this); }
    ::uLong Hours() { return Period__get_Hours(this); }
    ::uLong Milliseconds() { return Period__get_Milliseconds(this); }
    ::uLong Minutes() { return Period__get_Minutes(this); }
    ::uLong Months() { return Period__get_Months(this); }
    ::uLong Seconds() { return Period__get_Seconds(this); }
    ::uLong Ticks() { return Period__get_Ticks(this); }
    ::uLong TotalStandardTicks() { return Period__get_TotalStandardTicks(this); }
    ::uLong Weeks() { return Period__get_Weeks(this); }
    ::uLong Years() { return Period__get_Years(this); }
    ::uLong Subtract(::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant, ::uLong ticksPerUnit);
    void SubtractValuesFrom(::uArray* values) { Period__SubtractValuesFrom(this, values); }
    ::uArray* ToArray() { return Period__ToArray(this); }
    ::app::Uno::Time::Duration ToDuration();
};

}}}

#include <app/Uno.Time.Duration.h>
#include <app/Uno.Time.Instant.h>

namespace app {
namespace Uno {
namespace Time {

inline ::app::Uno::Time::Instant Period::Add(::app::Uno::Time::Instant instant, ::uLong ticks) { return Period__Add(this, instant, ticks); }
inline ::app::Uno::Time::Instant Period::AddTo(::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar, int scalar) { return Period__AddTo(this, instant, calendar, scalar); }
inline ::uLong Period::Subtract(::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant, ::uLong ticksPerUnit) { return Period__Subtract(this, minuendInstant, subtrahendInstant, ticksPerUnit); }
inline ::app::Uno::Time::Duration Period::ToDuration() { return Period__ToDuration(this); }

}}}


#endif
