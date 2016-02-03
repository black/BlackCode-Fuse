// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_LOCAL_DATE_TIME_H__
#define __APP_UNO_TIME_LOCAL_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Instant.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct DateTimeZone; } } }
namespace app { namespace Uno { namespace Time { struct LocalDate; } } }
namespace app { namespace Uno { namespace Time { struct LocalTime; } } }
namespace app { namespace Uno { namespace Time { struct Offset; } } }
namespace app { namespace Uno { namespace Time { struct OffsetDateTime; } } }
namespace app { namespace Uno { namespace Time { struct Period; } } }
namespace app { namespace Uno { namespace Time { struct ZonedDateTime; } } }

namespace app {
namespace Uno {
namespace Time {

struct LocalDateTime;

struct LocalDateTime__uType : ::uClassType
{
};

LocalDateTime__uType* LocalDateTime__typeof();

void LocalDateTime___ObjInit(LocalDateTime* __this, ::app::Uno::Time::Instant instant);
void LocalDateTime___ObjInit_1(LocalDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar);
void LocalDateTime___ObjInit_2(LocalDateTime* __this, int year, int month, int day, int hour, int minute);
void LocalDateTime___ObjInit_3(LocalDateTime* __this, int year, int month, int day, int hour, int minute, ::app::Uno::Time::CalendarSystem* calendar);
void LocalDateTime___ObjInit_4(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second);
void LocalDateTime___ObjInit_5(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, ::app::Uno::Time::CalendarSystem* calendar);
void LocalDateTime___ObjInit_6(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond);
void LocalDateTime___ObjInit_7(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, ::app::Uno::Time::CalendarSystem* calendar);
void LocalDateTime___ObjInit_8(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond);
void LocalDateTime___ObjInit_9(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, ::app::Uno::Time::CalendarSystem* calendar);
LocalDateTime* LocalDateTime__Add(::uStatic* __this, LocalDateTime* localDateTime, ::app::Uno::Time::Period* period);
bool LocalDateTime__Equals(LocalDateTime* __this, ::uObject* obj);
bool LocalDateTime__Equals_2(LocalDateTime* __this, LocalDateTime* other);
::app::Uno::Time::CalendarSystem* LocalDateTime__get_Calendar(LocalDateTime* __this);
int LocalDateTime__get_CenturyOfEra(LocalDateTime* __this);
int LocalDateTime__get_ClockHourOfHalfDay(LocalDateTime* __this);
::app::Uno::Time::LocalDate* LocalDateTime__get_Date(LocalDateTime* __this);
int LocalDateTime__get_Day(LocalDateTime* __this);
int LocalDateTime__get_DayOfWeek(LocalDateTime* __this);
int LocalDateTime__get_DayOfYear(LocalDateTime* __this);
::app::Uno::Time::Calendars::Era* LocalDateTime__get_Era(LocalDateTime* __this);
int LocalDateTime__get_Hour(LocalDateTime* __this);
::app::Uno::Time::Instant LocalDateTime__get_Instant(LocalDateTime* __this);
int LocalDateTime__get_IsoDayOfWeek(LocalDateTime* __this);
int LocalDateTime__get_Millisecond(LocalDateTime* __this);
int LocalDateTime__get_Minute(LocalDateTime* __this);
int LocalDateTime__get_Month(LocalDateTime* __this);
int LocalDateTime__get_Second(LocalDateTime* __this);
::uLong LocalDateTime__get_TickOfDay(LocalDateTime* __this);
int LocalDateTime__get_TickOfSecond(LocalDateTime* __this);
::app::Uno::Time::LocalTime LocalDateTime__get_TimeOfDay(LocalDateTime* __this);
int LocalDateTime__get_WeekOfWeekYear(LocalDateTime* __this);
int LocalDateTime__get_WeekYear(LocalDateTime* __this);
int LocalDateTime__get_Year(LocalDateTime* __this);
int LocalDateTime__get_YearOfCentury(LocalDateTime* __this);
int LocalDateTime__get_YearOfEra(LocalDateTime* __this);
int LocalDateTime__GetHashCode(LocalDateTime* __this);
::app::Uno::Time::ZonedDateTime* LocalDateTime__InUtc(LocalDateTime* __this);
::app::Uno::Time::ZonedDateTime* LocalDateTime__InZoneStrictly(LocalDateTime* __this, ::app::Uno::Time::DateTimeZone* zone);
LocalDateTime* LocalDateTime__Minus(LocalDateTime* __this, ::app::Uno::Time::Period* period);
LocalDateTime* LocalDateTime__New_1(::uStatic* __this, ::app::Uno::Time::Instant instant);
LocalDateTime* LocalDateTime__New_10(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, ::app::Uno::Time::CalendarSystem* calendar);
LocalDateTime* LocalDateTime__New_2(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar);
LocalDateTime* LocalDateTime__New_3(::uStatic* __this, int year, int month, int day, int hour, int minute);
LocalDateTime* LocalDateTime__New_4(::uStatic* __this, int year, int month, int day, int hour, int minute, ::app::Uno::Time::CalendarSystem* calendar);
LocalDateTime* LocalDateTime__New_5(::uStatic* __this, int year, int month, int day, int hour, int minute, int second);
LocalDateTime* LocalDateTime__New_6(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, ::app::Uno::Time::CalendarSystem* calendar);
LocalDateTime* LocalDateTime__New_7(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond);
LocalDateTime* LocalDateTime__New_8(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, ::app::Uno::Time::CalendarSystem* calendar);
LocalDateTime* LocalDateTime__New_9(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond);
LocalDateTime* LocalDateTime__Next(LocalDateTime* __this, int targetDayOfWeek);
LocalDateTime* LocalDateTime__op_Addition(::uStatic* __this, LocalDateTime* localDateTime, ::app::Uno::Time::Period* period);
bool LocalDateTime__op_Equality(::uStatic* __this, LocalDateTime* left, LocalDateTime* right);
bool LocalDateTime__op_GreaterThan(::uStatic* __this, LocalDateTime* lhs, LocalDateTime* rhs);
bool LocalDateTime__op_GreaterThanOrEqual(::uStatic* __this, LocalDateTime* lhs, LocalDateTime* rhs);
bool LocalDateTime__op_Inequality(::uStatic* __this, LocalDateTime* left, LocalDateTime* right);
bool LocalDateTime__op_LessThan(::uStatic* __this, LocalDateTime* lhs, LocalDateTime* rhs);
bool LocalDateTime__op_LessThanOrEqual(::uStatic* __this, LocalDateTime* lhs, LocalDateTime* rhs);
LocalDateTime* LocalDateTime__op_Subtraction(::uStatic* __this, LocalDateTime* localDateTime, ::app::Uno::Time::Period* period);
LocalDateTime* LocalDateTime__Plus(LocalDateTime* __this, ::app::Uno::Time::Period* period);
LocalDateTime* LocalDateTime__PlusDays(LocalDateTime* __this, int days);
LocalDateTime* LocalDateTime__PlusHours(LocalDateTime* __this, ::uLong hours);
LocalDateTime* LocalDateTime__PlusMilliseconds(LocalDateTime* __this, ::uLong milliseconds);
LocalDateTime* LocalDateTime__PlusMinutes(LocalDateTime* __this, ::uLong minutes);
LocalDateTime* LocalDateTime__PlusMonths(LocalDateTime* __this, int months);
LocalDateTime* LocalDateTime__PlusSeconds(LocalDateTime* __this, ::uLong seconds);
LocalDateTime* LocalDateTime__PlusTicks(LocalDateTime* __this, ::uLong ticks);
LocalDateTime* LocalDateTime__PlusWeeks(LocalDateTime* __this, int weeks);
LocalDateTime* LocalDateTime__PlusYears(LocalDateTime* __this, int years);
LocalDateTime* LocalDateTime__Previous(LocalDateTime* __this, int targetDayOfWeek);
LocalDateTime* LocalDateTime__Subtract(::uStatic* __this, LocalDateTime* localDateTime, ::app::Uno::Time::Period* period);
::uString* LocalDateTime__ToString(LocalDateTime* __this);
LocalDateTime* LocalDateTime__WithCalendar(LocalDateTime* __this, ::app::Uno::Time::CalendarSystem* calendarSystem);
::app::Uno::Time::OffsetDateTime* LocalDateTime__WithOffset(LocalDateTime* __this, ::app::Uno::Time::Offset offset);

struct LocalDateTime : ::uObject
{
    ::uStrong< ::app::Uno::Time::CalendarSystem*> _calendar;
    ::app::Uno::Time::Instant _instant;

    void _ObjInit(::app::Uno::Time::Instant instant);
    void _ObjInit_1(::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar);
    void _ObjInit_2(int year, int month, int day, int hour, int minute) { LocalDateTime___ObjInit_2(this, year, month, day, hour, minute); }
    void _ObjInit_3(int year, int month, int day, int hour, int minute, ::app::Uno::Time::CalendarSystem* calendar) { LocalDateTime___ObjInit_3(this, year, month, day, hour, minute, calendar); }
    void _ObjInit_4(int year, int month, int day, int hour, int minute, int second) { LocalDateTime___ObjInit_4(this, year, month, day, hour, minute, second); }
    void _ObjInit_5(int year, int month, int day, int hour, int minute, int second, ::app::Uno::Time::CalendarSystem* calendar) { LocalDateTime___ObjInit_5(this, year, month, day, hour, minute, second, calendar); }
    void _ObjInit_6(int year, int month, int day, int hour, int minute, int second, int millisecond) { LocalDateTime___ObjInit_6(this, year, month, day, hour, minute, second, millisecond); }
    void _ObjInit_7(int year, int month, int day, int hour, int minute, int second, int millisecond, ::app::Uno::Time::CalendarSystem* calendar) { LocalDateTime___ObjInit_7(this, year, month, day, hour, minute, second, millisecond, calendar); }
    void _ObjInit_8(int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond) { LocalDateTime___ObjInit_8(this, year, month, day, hour, minute, second, millisecond, tickWithinMillisecond); }
    void _ObjInit_9(int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, ::app::Uno::Time::CalendarSystem* calendar) { LocalDateTime___ObjInit_9(this, year, month, day, hour, minute, second, millisecond, tickWithinMillisecond, calendar); }
    bool Equals_2(LocalDateTime* other) { return LocalDateTime__Equals_2(this, other); }
    ::app::Uno::Time::CalendarSystem* Calendar() { return LocalDateTime__get_Calendar(this); }
    int CenturyOfEra() { return LocalDateTime__get_CenturyOfEra(this); }
    int ClockHourOfHalfDay() { return LocalDateTime__get_ClockHourOfHalfDay(this); }
    ::app::Uno::Time::LocalDate* Date() { return LocalDateTime__get_Date(this); }
    int Day() { return LocalDateTime__get_Day(this); }
    int DayOfWeek() { return LocalDateTime__get_DayOfWeek(this); }
    int DayOfYear() { return LocalDateTime__get_DayOfYear(this); }
    ::app::Uno::Time::Calendars::Era* Era() { return LocalDateTime__get_Era(this); }
    int Hour() { return LocalDateTime__get_Hour(this); }
    ::app::Uno::Time::Instant Instant();
    int IsoDayOfWeek() { return LocalDateTime__get_IsoDayOfWeek(this); }
    int Millisecond() { return LocalDateTime__get_Millisecond(this); }
    int Minute() { return LocalDateTime__get_Minute(this); }
    int Month() { return LocalDateTime__get_Month(this); }
    int Second() { return LocalDateTime__get_Second(this); }
    ::uLong TickOfDay() { return LocalDateTime__get_TickOfDay(this); }
    int TickOfSecond() { return LocalDateTime__get_TickOfSecond(this); }
    ::app::Uno::Time::LocalTime TimeOfDay();
    int WeekOfWeekYear() { return LocalDateTime__get_WeekOfWeekYear(this); }
    int WeekYear() { return LocalDateTime__get_WeekYear(this); }
    int Year() { return LocalDateTime__get_Year(this); }
    int YearOfCentury() { return LocalDateTime__get_YearOfCentury(this); }
    int YearOfEra() { return LocalDateTime__get_YearOfEra(this); }
    ::app::Uno::Time::ZonedDateTime* InUtc() { return LocalDateTime__InUtc(this); }
    ::app::Uno::Time::ZonedDateTime* InZoneStrictly(::app::Uno::Time::DateTimeZone* zone) { return LocalDateTime__InZoneStrictly(this, zone); }
    LocalDateTime* Minus(::app::Uno::Time::Period* period) { return LocalDateTime__Minus(this, period); }
    LocalDateTime* Next(int targetDayOfWeek) { return LocalDateTime__Next(this, targetDayOfWeek); }
    LocalDateTime* Plus(::app::Uno::Time::Period* period) { return LocalDateTime__Plus(this, period); }
    LocalDateTime* PlusDays(int days) { return LocalDateTime__PlusDays(this, days); }
    LocalDateTime* PlusHours(::uLong hours) { return LocalDateTime__PlusHours(this, hours); }
    LocalDateTime* PlusMilliseconds(::uLong milliseconds) { return LocalDateTime__PlusMilliseconds(this, milliseconds); }
    LocalDateTime* PlusMinutes(::uLong minutes) { return LocalDateTime__PlusMinutes(this, minutes); }
    LocalDateTime* PlusMonths(int months) { return LocalDateTime__PlusMonths(this, months); }
    LocalDateTime* PlusSeconds(::uLong seconds) { return LocalDateTime__PlusSeconds(this, seconds); }
    LocalDateTime* PlusTicks(::uLong ticks) { return LocalDateTime__PlusTicks(this, ticks); }
    LocalDateTime* PlusWeeks(int weeks) { return LocalDateTime__PlusWeeks(this, weeks); }
    LocalDateTime* PlusYears(int years) { return LocalDateTime__PlusYears(this, years); }
    LocalDateTime* Previous(int targetDayOfWeek) { return LocalDateTime__Previous(this, targetDayOfWeek); }
    LocalDateTime* WithCalendar(::app::Uno::Time::CalendarSystem* calendarSystem) { return LocalDateTime__WithCalendar(this, calendarSystem); }
    ::app::Uno::Time::OffsetDateTime* WithOffset(::app::Uno::Time::Offset offset);
};

}}}

#include <app/Uno.Time.LocalTime.h>
#include <app/Uno.Time.Offset.h>

namespace app {
namespace Uno {
namespace Time {

inline void LocalDateTime::_ObjInit(::app::Uno::Time::Instant instant) { LocalDateTime___ObjInit(this, instant); }
inline void LocalDateTime::_ObjInit_1(::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar) { LocalDateTime___ObjInit_1(this, instant, calendar); }
inline ::app::Uno::Time::Instant LocalDateTime::Instant() { return LocalDateTime__get_Instant(this); }
inline ::app::Uno::Time::LocalTime LocalDateTime::TimeOfDay() { return LocalDateTime__get_TimeOfDay(this); }
inline ::app::Uno::Time::OffsetDateTime* LocalDateTime::WithOffset(::app::Uno::Time::Offset offset) { return LocalDateTime__WithOffset(this, offset); }

}}}


#endif
