// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_LOCAL_DATE_H__
#define __APP_UNO_TIME_LOCAL_DATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }
namespace app { namespace Uno { namespace Time { struct LocalTime; } } }
namespace app { namespace Uno { namespace Time { struct Period; } } }

namespace app {
namespace Uno {
namespace Time {

struct LocalDate;

struct LocalDate__uType : ::uClassType
{
};

LocalDate__uType* LocalDate__typeof();

void LocalDate___ObjInit(LocalDate* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day);
void LocalDate___ObjInit_1(LocalDate* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day, ::app::Uno::Time::CalendarSystem* calendar);
void LocalDate___ObjInit_2(LocalDate* __this, int year, int month, int day);
void LocalDate___ObjInit_3(LocalDate* __this, int year, int month, int day, ::app::Uno::Time::CalendarSystem* calendar);
void LocalDate___ObjInit_4(LocalDate* __this, ::app::Uno::Time::LocalDateTime* localTime);
LocalDate* LocalDate__Add(::uStatic* __this, LocalDate* date, ::app::Uno::Time::Period* period);
::app::Uno::Time::LocalDateTime* LocalDate__At(LocalDate* __this, ::app::Uno::Time::LocalTime time);
::app::Uno::Time::LocalDateTime* LocalDate__AtMidnight(LocalDate* __this);
bool LocalDate__Equals(LocalDate* __this, ::uObject* obj);
bool LocalDate__Equals_2(LocalDate* __this, LocalDate* other);
LocalDate* LocalDate__FromWeekYearWeekAndDay(::uStatic* __this, int weekYear, int weekOfWeekYear, int dayOfWeek);
::app::Uno::Time::CalendarSystem* LocalDate__get_Calendar(LocalDate* __this);
int LocalDate__get_Day(LocalDate* __this);
int LocalDate__get_DayOfWeek(LocalDate* __this);
int LocalDate__get_DayOfYear(LocalDate* __this);
::app::Uno::Time::Calendars::Era* LocalDate__get_Era(LocalDate* __this);
int LocalDate__get_IsoDayOfWeek(LocalDate* __this);
int LocalDate__get_Month(LocalDate* __this);
int LocalDate__get_WeekOfWeekYear(LocalDate* __this);
int LocalDate__get_WeekYear(LocalDate* __this);
int LocalDate__get_Year(LocalDate* __this);
int LocalDate__get_YearOfCentury(LocalDate* __this);
int LocalDate__get_YearOfEra(LocalDate* __this);
int LocalDate__GetHashCode(LocalDate* __this);
LocalDate* LocalDate__Minus(LocalDate* __this, ::app::Uno::Time::Period* period);
LocalDate* LocalDate__New_1(::uStatic* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day);
LocalDate* LocalDate__New_2(::uStatic* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day, ::app::Uno::Time::CalendarSystem* calendar);
LocalDate* LocalDate__New_3(::uStatic* __this, int year, int month, int day);
LocalDate* LocalDate__New_4(::uStatic* __this, int year, int month, int day, ::app::Uno::Time::CalendarSystem* calendar);
LocalDate* LocalDate__New_5(::uStatic* __this, ::app::Uno::Time::LocalDateTime* localTime);
LocalDate* LocalDate__Next(LocalDate* __this, int targetDayOfWeek);
::app::Uno::Time::LocalDateTime* LocalDate__op_Addition(::uStatic* __this, LocalDate* date, ::app::Uno::Time::LocalTime time);
LocalDate* LocalDate__op_Addition_1(::uStatic* __this, LocalDate* date, ::app::Uno::Time::Period* period);
bool LocalDate__op_Equality(::uStatic* __this, LocalDate* lhs, LocalDate* rhs);
bool LocalDate__op_GreaterThan(::uStatic* __this, LocalDate* lhs, LocalDate* rhs);
bool LocalDate__op_GreaterThanOrEqual(::uStatic* __this, LocalDate* lhs, LocalDate* rhs);
bool LocalDate__op_Inequality(::uStatic* __this, LocalDate* lhs, LocalDate* rhs);
bool LocalDate__op_LessThan(::uStatic* __this, LocalDate* lhs, LocalDate* rhs);
bool LocalDate__op_LessThanOrEqual(::uStatic* __this, LocalDate* lhs, LocalDate* rhs);
LocalDate* LocalDate__op_Subtraction(::uStatic* __this, LocalDate* date, ::app::Uno::Time::Period* period);
LocalDate* LocalDate__Plus(LocalDate* __this, ::app::Uno::Time::Period* period);
LocalDate* LocalDate__PlusDays(LocalDate* __this, int days);
LocalDate* LocalDate__PlusMonths(LocalDate* __this, int months);
LocalDate* LocalDate__PlusWeeks(LocalDate* __this, int weeks);
LocalDate* LocalDate__PlusYears(LocalDate* __this, int years);
LocalDate* LocalDate__Previous(LocalDate* __this, int targetDayOfWeek);
LocalDate* LocalDate__Subtract(::uStatic* __this, LocalDate* date, ::app::Uno::Time::Period* period);
::uString* LocalDate__ToString(LocalDate* __this);
LocalDate* LocalDate__WithCalendar(LocalDate* __this, ::app::Uno::Time::CalendarSystem* calendarSystem);

struct LocalDate : ::uObject
{
    ::uStrong< ::app::Uno::Time::LocalDateTime*> _localTime;

    void _ObjInit(::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day) { LocalDate___ObjInit(this, era, yearOfEra, month, day); }
    void _ObjInit_1(::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day, ::app::Uno::Time::CalendarSystem* calendar) { LocalDate___ObjInit_1(this, era, yearOfEra, month, day, calendar); }
    void _ObjInit_2(int year, int month, int day) { LocalDate___ObjInit_2(this, year, month, day); }
    void _ObjInit_3(int year, int month, int day, ::app::Uno::Time::CalendarSystem* calendar) { LocalDate___ObjInit_3(this, year, month, day, calendar); }
    void _ObjInit_4(::app::Uno::Time::LocalDateTime* localTime) { LocalDate___ObjInit_4(this, localTime); }
    ::app::Uno::Time::LocalDateTime* At(::app::Uno::Time::LocalTime time);
    ::app::Uno::Time::LocalDateTime* AtMidnight() { return LocalDate__AtMidnight(this); }
    bool Equals_2(LocalDate* other) { return LocalDate__Equals_2(this, other); }
    ::app::Uno::Time::CalendarSystem* Calendar() { return LocalDate__get_Calendar(this); }
    int Day() { return LocalDate__get_Day(this); }
    int DayOfWeek() { return LocalDate__get_DayOfWeek(this); }
    int DayOfYear() { return LocalDate__get_DayOfYear(this); }
    ::app::Uno::Time::Calendars::Era* Era() { return LocalDate__get_Era(this); }
    int IsoDayOfWeek() { return LocalDate__get_IsoDayOfWeek(this); }
    int Month() { return LocalDate__get_Month(this); }
    int WeekOfWeekYear() { return LocalDate__get_WeekOfWeekYear(this); }
    int WeekYear() { return LocalDate__get_WeekYear(this); }
    int Year() { return LocalDate__get_Year(this); }
    int YearOfCentury() { return LocalDate__get_YearOfCentury(this); }
    int YearOfEra() { return LocalDate__get_YearOfEra(this); }
    LocalDate* Minus(::app::Uno::Time::Period* period) { return LocalDate__Minus(this, period); }
    LocalDate* Next(int targetDayOfWeek) { return LocalDate__Next(this, targetDayOfWeek); }
    LocalDate* Plus(::app::Uno::Time::Period* period) { return LocalDate__Plus(this, period); }
    LocalDate* PlusDays(int days) { return LocalDate__PlusDays(this, days); }
    LocalDate* PlusMonths(int months) { return LocalDate__PlusMonths(this, months); }
    LocalDate* PlusWeeks(int weeks) { return LocalDate__PlusWeeks(this, weeks); }
    LocalDate* PlusYears(int years) { return LocalDate__PlusYears(this, years); }
    LocalDate* Previous(int targetDayOfWeek) { return LocalDate__Previous(this, targetDayOfWeek); }
    LocalDate* WithCalendar(::app::Uno::Time::CalendarSystem* calendarSystem) { return LocalDate__WithCalendar(this, calendarSystem); }
};

}}}

#include <app/Uno.Time.LocalTime.h>

namespace app {
namespace Uno {
namespace Time {

inline ::app::Uno::Time::LocalDateTime* LocalDate::At(::app::Uno::Time::LocalTime time) { return LocalDate__At(this, time); }

}}}


#endif
