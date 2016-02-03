// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDAR_SYSTEM_H__
#define __APP_UNO_TIME_CALENDAR_SYSTEM_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct WeekYearCalculator; } } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct YearMonthDayCalculator; } } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }

namespace app {
namespace Uno {
namespace Time {

struct CalendarSystem;

extern ::uStaticStrong< CalendarSystem*> CalendarSystem___gregorianCalendarSystem;

struct CalendarSystem__uType : ::uClassType
{
};

CalendarSystem__uType* CalendarSystem__typeof();

void CalendarSystem___ObjInit(CalendarSystem* __this, ::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
void CalendarSystem___ObjInit_1(CalendarSystem* __this, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
::app::Uno::Time::Instant CalendarSystem__AddMonths(CalendarSystem* __this, ::app::Uno::Time::Instant instant, ::uLong value);
::app::Uno::Time::Instant CalendarSystem__AddYears(CalendarSystem* __this, ::app::Uno::Time::Instant instant, ::uLong value);
::uArray* CalendarSystem__get_Eras(CalendarSystem* __this);
::uString* CalendarSystem__get_Id(CalendarSystem* __this);
CalendarSystem* CalendarSystem__get_Iso(::uStatic* __this);
::uLong CalendarSystem__get_MaxTicks(CalendarSystem* __this);
int CalendarSystem__get_MaxYear(CalendarSystem* __this);
::uLong CalendarSystem__get_MinTicks(CalendarSystem* __this);
int CalendarSystem__get_MinYear(CalendarSystem* __this);
::uString* CalendarSystem__get_Name(CalendarSystem* __this);
bool CalendarSystem__get_UsesIsoDayOfWeek(CalendarSystem* __this);
int CalendarSystem__GetAbsoluteYear(CalendarSystem* __this, int yearOfEra, int eraIndex);
int CalendarSystem__GetCenturyOfEra(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetClockHourOfHalfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetDayOfMonth(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetDayOfWeek(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetDayOfYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetDaysInMonth(CalendarSystem* __this, int year, int month);
int CalendarSystem__GetEra(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetHourOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetHourOfHalfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
::app::Uno::Time::Instant CalendarSystem__GetInstant(CalendarSystem* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth);
::app::Uno::Time::Instant CalendarSystem__GetInstant_1(CalendarSystem* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour);
::app::Uno::Time::Instant CalendarSystem__GetInstant_2(CalendarSystem* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute);
::app::Uno::Time::Instant CalendarSystem__GetInstant_3(CalendarSystem* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute, int millisecondOfSecond, int tickOfMillisecond);
::app::Uno::Time::Instant CalendarSystem__GetInstantFromWeekYearWeekAndDayOfWeek(CalendarSystem* __this, int weekYear, int weekOfWeekYear, int dayOfWeek);
int CalendarSystem__GetIsoDayOfWeek(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetMaxMonth(CalendarSystem* __this, int year);
int CalendarSystem__GetMaxYearOfEra(CalendarSystem* __this, int eraIndex);
int CalendarSystem__GetMillisecondOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetMillisecondOfSecond(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetMinuteOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetMinuteOfHour(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetMinYearOfEra(CalendarSystem* __this, int eraIndex);
int CalendarSystem__GetMonthOfYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetSecondOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetSecondOfMinute(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
::uLong CalendarSystem__GetTickOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetTickOfMillisecond(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetTickOfSecond(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetWeekOfWeekYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetWeekYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetYearOfCentury(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetYearOfEra(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
bool CalendarSystem__IsLeapYear(CalendarSystem* __this, int year);
::uLong CalendarSystem__MonthDifference(CalendarSystem* __this, ::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant);
CalendarSystem* CalendarSystem__New_1(::uStatic* __this, ::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
CalendarSystem* CalendarSystem__New_2(::uStatic* __this, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
::uString* CalendarSystem__ToString(CalendarSystem* __this);
::uLong CalendarSystem__YearDifference(CalendarSystem* __this, ::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant);

struct CalendarSystem : ::uObject
{
    ::uStrong< ::app::Uno::Time::Calendars::YearMonthDayCalculator*> _yearMonthDayCalculator;
    ::uStrong< ::app::Uno::Time::Calendars::WeekYearCalculator*> _weekYearCalculator;
    ::uStrong< ::uString*> _id;
    ::uStrong< ::uString*> _name;
    ::uStrong< ::uArray*> _eras;
    int _minYear;
    int _maxYear;
    ::uLong _minTicks;
    ::uLong _maxTicks;

    void _ObjInit(::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek) { CalendarSystem___ObjInit(this, id, name, yearMonthDayCalculator, minDaysInFirstWeek); }
    void _ObjInit_1(::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek) { CalendarSystem___ObjInit_1(this, name, yearMonthDayCalculator, minDaysInFirstWeek); }
    ::app::Uno::Time::Instant AddMonths(::app::Uno::Time::Instant instant, ::uLong value);
    ::app::Uno::Time::Instant AddYears(::app::Uno::Time::Instant instant, ::uLong value);
    ::uArray* Eras() { return CalendarSystem__get_Eras(this); }
    ::uString* Id() { return CalendarSystem__get_Id(this); }
    ::uLong MaxTicks() { return CalendarSystem__get_MaxTicks(this); }
    int MaxYear() { return CalendarSystem__get_MaxYear(this); }
    ::uLong MinTicks() { return CalendarSystem__get_MinTicks(this); }
    int MinYear() { return CalendarSystem__get_MinYear(this); }
    ::uString* Name() { return CalendarSystem__get_Name(this); }
    bool UsesIsoDayOfWeek() { return CalendarSystem__get_UsesIsoDayOfWeek(this); }
    int GetAbsoluteYear(int yearOfEra, int eraIndex) { return CalendarSystem__GetAbsoluteYear(this, yearOfEra, eraIndex); }
    int GetCenturyOfEra(::app::Uno::Time::Instant instant);
    int GetClockHourOfHalfDay(::app::Uno::Time::Instant instant);
    int GetDayOfMonth(::app::Uno::Time::Instant instant);
    int GetDayOfWeek(::app::Uno::Time::Instant instant);
    int GetDayOfYear(::app::Uno::Time::Instant instant);
    int GetDaysInMonth(int year, int month) { return CalendarSystem__GetDaysInMonth(this, year, month); }
    int GetEra(::app::Uno::Time::Instant instant);
    int GetHourOfDay(::app::Uno::Time::Instant instant);
    int GetHourOfHalfDay(::app::Uno::Time::Instant instant);
    ::app::Uno::Time::Instant GetInstant(::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth);
    ::app::Uno::Time::Instant GetInstant_1(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour);
    ::app::Uno::Time::Instant GetInstant_2(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute);
    ::app::Uno::Time::Instant GetInstant_3(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute, int millisecondOfSecond, int tickOfMillisecond);
    ::app::Uno::Time::Instant GetInstantFromWeekYearWeekAndDayOfWeek(int weekYear, int weekOfWeekYear, int dayOfWeek);
    int GetIsoDayOfWeek(::app::Uno::Time::Instant instant);
    int GetMaxMonth(int year) { return CalendarSystem__GetMaxMonth(this, year); }
    int GetMaxYearOfEra(int eraIndex) { return CalendarSystem__GetMaxYearOfEra(this, eraIndex); }
    int GetMillisecondOfDay(::app::Uno::Time::Instant instant);
    int GetMillisecondOfSecond(::app::Uno::Time::Instant instant);
    int GetMinuteOfDay(::app::Uno::Time::Instant instant);
    int GetMinuteOfHour(::app::Uno::Time::Instant instant);
    int GetMinYearOfEra(int eraIndex) { return CalendarSystem__GetMinYearOfEra(this, eraIndex); }
    int GetMonthOfYear(::app::Uno::Time::Instant instant);
    int GetSecondOfDay(::app::Uno::Time::Instant instant);
    int GetSecondOfMinute(::app::Uno::Time::Instant instant);
    ::uLong GetTickOfDay(::app::Uno::Time::Instant instant);
    int GetTickOfMillisecond(::app::Uno::Time::Instant instant);
    int GetTickOfSecond(::app::Uno::Time::Instant instant);
    int GetWeekOfWeekYear(::app::Uno::Time::Instant instant);
    int GetWeekYear(::app::Uno::Time::Instant instant);
    int GetYear(::app::Uno::Time::Instant instant);
    int GetYearOfCentury(::app::Uno::Time::Instant instant);
    int GetYearOfEra(::app::Uno::Time::Instant instant);
    bool IsLeapYear(int year) { return CalendarSystem__IsLeapYear(this, year); }
    ::uLong MonthDifference(::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant);
    ::uLong YearDifference(::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant);
};

}}}

#include <app/Uno.Time.Instant.h>

namespace app {
namespace Uno {
namespace Time {

inline ::app::Uno::Time::Instant CalendarSystem::AddMonths(::app::Uno::Time::Instant instant, ::uLong value) { return CalendarSystem__AddMonths(this, instant, value); }
inline ::app::Uno::Time::Instant CalendarSystem::AddYears(::app::Uno::Time::Instant instant, ::uLong value) { return CalendarSystem__AddYears(this, instant, value); }
inline int CalendarSystem::GetCenturyOfEra(::app::Uno::Time::Instant instant) { return CalendarSystem__GetCenturyOfEra(this, instant); }
inline int CalendarSystem::GetClockHourOfHalfDay(::app::Uno::Time::Instant instant) { return CalendarSystem__GetClockHourOfHalfDay(this, instant); }
inline int CalendarSystem::GetDayOfMonth(::app::Uno::Time::Instant instant) { return CalendarSystem__GetDayOfMonth(this, instant); }
inline int CalendarSystem::GetDayOfWeek(::app::Uno::Time::Instant instant) { return CalendarSystem__GetDayOfWeek(this, instant); }
inline int CalendarSystem::GetDayOfYear(::app::Uno::Time::Instant instant) { return CalendarSystem__GetDayOfYear(this, instant); }
inline int CalendarSystem::GetEra(::app::Uno::Time::Instant instant) { return CalendarSystem__GetEra(this, instant); }
inline int CalendarSystem::GetHourOfDay(::app::Uno::Time::Instant instant) { return CalendarSystem__GetHourOfDay(this, instant); }
inline int CalendarSystem::GetHourOfHalfDay(::app::Uno::Time::Instant instant) { return CalendarSystem__GetHourOfHalfDay(this, instant); }
inline ::app::Uno::Time::Instant CalendarSystem::GetInstant(::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth) { return CalendarSystem__GetInstant(this, era, yearOfEra, monthOfYear, dayOfMonth); }
inline ::app::Uno::Time::Instant CalendarSystem::GetInstant_1(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour) { return CalendarSystem__GetInstant_1(this, year, monthOfYear, dayOfMonth, hourOfDay, minuteOfHour); }
inline ::app::Uno::Time::Instant CalendarSystem::GetInstant_2(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute) { return CalendarSystem__GetInstant_2(this, year, monthOfYear, dayOfMonth, hourOfDay, minuteOfHour, secondOfMinute); }
inline ::app::Uno::Time::Instant CalendarSystem::GetInstant_3(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute, int millisecondOfSecond, int tickOfMillisecond) { return CalendarSystem__GetInstant_3(this, year, monthOfYear, dayOfMonth, hourOfDay, minuteOfHour, secondOfMinute, millisecondOfSecond, tickOfMillisecond); }
inline ::app::Uno::Time::Instant CalendarSystem::GetInstantFromWeekYearWeekAndDayOfWeek(int weekYear, int weekOfWeekYear, int dayOfWeek) { return CalendarSystem__GetInstantFromWeekYearWeekAndDayOfWeek(this, weekYear, weekOfWeekYear, dayOfWeek); }
inline int CalendarSystem::GetIsoDayOfWeek(::app::Uno::Time::Instant instant) { return CalendarSystem__GetIsoDayOfWeek(this, instant); }
inline int CalendarSystem::GetMillisecondOfDay(::app::Uno::Time::Instant instant) { return CalendarSystem__GetMillisecondOfDay(this, instant); }
inline int CalendarSystem::GetMillisecondOfSecond(::app::Uno::Time::Instant instant) { return CalendarSystem__GetMillisecondOfSecond(this, instant); }
inline int CalendarSystem::GetMinuteOfDay(::app::Uno::Time::Instant instant) { return CalendarSystem__GetMinuteOfDay(this, instant); }
inline int CalendarSystem::GetMinuteOfHour(::app::Uno::Time::Instant instant) { return CalendarSystem__GetMinuteOfHour(this, instant); }
inline int CalendarSystem::GetMonthOfYear(::app::Uno::Time::Instant instant) { return CalendarSystem__GetMonthOfYear(this, instant); }
inline int CalendarSystem::GetSecondOfDay(::app::Uno::Time::Instant instant) { return CalendarSystem__GetSecondOfDay(this, instant); }
inline int CalendarSystem::GetSecondOfMinute(::app::Uno::Time::Instant instant) { return CalendarSystem__GetSecondOfMinute(this, instant); }
inline ::uLong CalendarSystem::GetTickOfDay(::app::Uno::Time::Instant instant) { return CalendarSystem__GetTickOfDay(this, instant); }
inline int CalendarSystem::GetTickOfMillisecond(::app::Uno::Time::Instant instant) { return CalendarSystem__GetTickOfMillisecond(this, instant); }
inline int CalendarSystem::GetTickOfSecond(::app::Uno::Time::Instant instant) { return CalendarSystem__GetTickOfSecond(this, instant); }
inline int CalendarSystem::GetWeekOfWeekYear(::app::Uno::Time::Instant instant) { return CalendarSystem__GetWeekOfWeekYear(this, instant); }
inline int CalendarSystem::GetWeekYear(::app::Uno::Time::Instant instant) { return CalendarSystem__GetWeekYear(this, instant); }
inline int CalendarSystem::GetYear(::app::Uno::Time::Instant instant) { return CalendarSystem__GetYear(this, instant); }
inline int CalendarSystem::GetYearOfCentury(::app::Uno::Time::Instant instant) { return CalendarSystem__GetYearOfCentury(this, instant); }
inline int CalendarSystem::GetYearOfEra(::app::Uno::Time::Instant instant) { return CalendarSystem__GetYearOfEra(this, instant); }
inline ::uLong CalendarSystem::MonthDifference(::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant) { return CalendarSystem__MonthDifference(this, minuendInstant, subtrahendInstant); }
inline ::uLong CalendarSystem::YearDifference(::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant) { return CalendarSystem__YearDifference(this, minuendInstant, subtrahendInstant); }

}}}


#endif
