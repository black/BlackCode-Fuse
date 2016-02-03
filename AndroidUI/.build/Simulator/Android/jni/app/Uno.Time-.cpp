#include <app/Uno.ArgumentException.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.OverflowException.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Time.Calendars.Era.h>
#include <app/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <app/Uno.Time.Calendars.TimeOfDayCalculator.h>
#include <app/Uno.Time.Calendars.WeekYearCalculator.h>
#include <app/Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <app/Uno.Time.CalendarSystem.h>
#include <app/Uno.Time.Constants.h>
#include <app/Uno.Time.Converter.h>
#include <app/Uno.Time.DateTimeZone.h>
#include <app/Uno.Time.DeviceTimeZone.h>
#include <app/Uno.Time.Duration.h>
#include <app/Uno.Time.FixedDateTimeZone.h>
#include <app/Uno.Time.HashCodeHelper.h>
#include <app/Uno.Time.Instant.h>
#include <app/Uno.Time.IsoDayOfWeek.h>
#include <app/Uno.Time.LocalDate.h>
#include <app/Uno.Time.LocalDateTime.h>
#include <app/Uno.Time.LocalTime.h>
#include <app/Uno.Time.Offset.h>
#include <app/Uno.Time.OffsetDateTime.h>
#include <app/Uno.Time.Period.h>
#include <app/Uno.Time.Preconditions.h>
#include <app/Uno.Time.Text.LocalDatePattern.h>
#include <app/Uno.Time.Text.LocalDateTimePattern.h>
#include <app/Uno.Time.Text.LocalTimePattern.h>
#include <app/Uno.Time.Text.OffsetDateTimePattern.h>
#include <app/Uno.Time.Text.OffsetPattern.h>
#include <app/Uno.Time.ZonedDateTime.h>
#include <app/Uno.Type.h>

namespace app {
namespace Uno {
namespace Time {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< CalendarSystem*> CalendarSystem___gregorianCalendarSystem;

CalendarSystem__uType* CalendarSystem__typeof()
{
    static ::uStaticStrong<CalendarSystem__uType*> type;
    if (type != NULL) return type;

    type = (CalendarSystem__uType*)::uAllocClassType(sizeof(CalendarSystem__uType), "Uno.Time.CalendarSystem", false, 0, 5, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))CalendarSystem__ToString;

    type->SetStrongRefs(
        "_eras", offsetof(CalendarSystem, _eras),
        "_id", offsetof(CalendarSystem, _id),
        "_name", offsetof(CalendarSystem, _name),
        "_weekYearCalculator", offsetof(CalendarSystem, _weekYearCalculator),
        "_yearMonthDayCalculator", offsetof(CalendarSystem, _yearMonthDayCalculator));

    type->SetFields(10,
        ::uNewField("_eras", NULL, offsetof(CalendarSystem, _eras), ::uGetArrayType(::app::Uno::Time::Calendars::Era__typeof())),
        ::uNewField("_gregorianCalendarSystem", &CalendarSystem___gregorianCalendarSystem, 0, CalendarSystem__typeof()),
        ::uNewField("_id", NULL, offsetof(CalendarSystem, _id), ::app::Uno::String__typeof()),
        ::uNewField("_maxTicks", NULL, offsetof(CalendarSystem, _maxTicks), ::app::Uno::Long__typeof()),
        ::uNewField("_maxYear", NULL, offsetof(CalendarSystem, _maxYear), ::app::Uno::Int__typeof()),
        ::uNewField("_minTicks", NULL, offsetof(CalendarSystem, _minTicks), ::app::Uno::Long__typeof()),
        ::uNewField("_minYear", NULL, offsetof(CalendarSystem, _minYear), ::app::Uno::Int__typeof()),
        ::uNewField("_name", NULL, offsetof(CalendarSystem, _name), ::app::Uno::String__typeof()),
        ::uNewField("_weekYearCalculator", NULL, offsetof(CalendarSystem, _weekYearCalculator), ::app::Uno::Time::Calendars::WeekYearCalculator__typeof()),
        ::uNewField("_yearMonthDayCalculator", NULL, offsetof(CalendarSystem, _yearMonthDayCalculator), ::app::Uno::Time::Calendars::YearMonthDayCalculator__typeof()));

    type->SetFunctions(48,
        ::uNewFunction("AddMonths", CalendarSystem__AddMonths, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("AddYears", CalendarSystem__AddYears, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Eras", CalendarSystem__get_Eras, 0, false, ::uGetArrayType(::app::Uno::Time::Calendars::Era__typeof())),
        ::uNewFunction("get_Id", CalendarSystem__get_Id, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Iso", CalendarSystem__get_Iso, 0, true, CalendarSystem__typeof()),
        ::uNewFunction("get_MaxTicks", CalendarSystem__get_MaxTicks, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_MaxYear", CalendarSystem__get_MaxYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_MinTicks", CalendarSystem__get_MinTicks, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_MinYear", CalendarSystem__get_MinYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Name", CalendarSystem__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_UsesIsoDayOfWeek", CalendarSystem__get_UsesIsoDayOfWeek, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetAbsoluteYear", CalendarSystem__GetAbsoluteYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetCenturyOfEra", CalendarSystem__GetCenturyOfEra, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetClockHourOfHalfDay", CalendarSystem__GetClockHourOfHalfDay, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetDayOfMonth", CalendarSystem__GetDayOfMonth, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetDayOfWeek", CalendarSystem__GetDayOfWeek, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetDayOfYear", CalendarSystem__GetDayOfYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetDaysInMonth", CalendarSystem__GetDaysInMonth, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEra", CalendarSystem__GetEra, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetHourOfDay", CalendarSystem__GetHourOfDay, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetHourOfHalfDay", CalendarSystem__GetHourOfHalfDay, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetInstant", CalendarSystem__GetInstant, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Calendars::Era__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetInstant", CalendarSystem__GetInstant_1, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetInstant", CalendarSystem__GetInstant_2, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetInstant", CalendarSystem__GetInstant_3, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetInstantFromWeekYearWeekAndDayOfWeek", CalendarSystem__GetInstantFromWeekYearWeekAndDayOfWeek, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("GetIsoDayOfWeek", CalendarSystem__GetIsoDayOfWeek, 0, false, ::app::Uno::Time::IsoDayOfWeek__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMaxMonth", CalendarSystem__GetMaxMonth, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMaxYearOfEra", CalendarSystem__GetMaxYearOfEra, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMillisecondOfDay", CalendarSystem__GetMillisecondOfDay, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMillisecondOfSecond", CalendarSystem__GetMillisecondOfSecond, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMinuteOfDay", CalendarSystem__GetMinuteOfDay, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMinuteOfHour", CalendarSystem__GetMinuteOfHour, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMinYearOfEra", CalendarSystem__GetMinYearOfEra, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMonthOfYear", CalendarSystem__GetMonthOfYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetSecondOfDay", CalendarSystem__GetSecondOfDay, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetSecondOfMinute", CalendarSystem__GetSecondOfMinute, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetTickOfDay", CalendarSystem__GetTickOfDay, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetTickOfMillisecond", CalendarSystem__GetTickOfMillisecond, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetTickOfSecond", CalendarSystem__GetTickOfSecond, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetWeekOfWeekYear", CalendarSystem__GetWeekOfWeekYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetWeekYear", CalendarSystem__GetWeekYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetYear", CalendarSystem__GetYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetYearOfCentury", CalendarSystem__GetYearOfCentury, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetYearOfEra", CalendarSystem__GetYearOfEra, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("IsLeapYear", CalendarSystem__IsLeapYear, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("MonthDifference", CalendarSystem__MonthDifference, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("YearDifference", CalendarSystem__YearDifference, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof()));

    ::uRegisterType(type);
    return type;
}

void CalendarSystem___ObjInit(CalendarSystem* __this, ::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    __this->_id = id;
    __this->_name = name;
    __this->_yearMonthDayCalculator = yearMonthDayCalculator;
    __this->_weekYearCalculator = ::app::Uno::Time::Calendars::WeekYearCalculator__New_1(NULL, yearMonthDayCalculator, minDaysInFirstWeek);
    __this->_eras = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->Eras();
    __this->_minYear = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(yearMonthDayCalculator)->MinYear();
    __this->_maxYear = yearMonthDayCalculator->MaxYear();
    __this->_minTicks = yearMonthDayCalculator->GetStartOfYearInTicks(__this->_minYear);
    __this->_maxTicks = yearMonthDayCalculator->GetStartOfYearInTicks(__this->_maxYear + 1) - 1ll;
}

void CalendarSystem___ObjInit_1(CalendarSystem* __this, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    __this->_ObjInit(::app::Uno::String__op_Addition_1(NULL, name, ::uBox< int>(::app::Uno::Int__typeof(), minDaysInFirstWeek)), name, yearMonthDayCalculator, minDaysInFirstWeek);
}

::app::Uno::Time::Instant CalendarSystem__AddMonths(CalendarSystem* __this, ::app::Uno::Time::Instant instant, ::uLong value)
{
    if ((value < -2147483648ll) || (value > 2147483647ll))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("value")));
    }

    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->AddMonths(instant, (int)value);
}

::app::Uno::Time::Instant CalendarSystem__AddYears(CalendarSystem* __this, ::app::Uno::Time::Instant instant, ::uLong value)
{
    int currentYear = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetYear(instant);
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("value"), value, (::uLong)(::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->MinYear() - currentYear), (::uLong)(::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->MaxYear() - currentYear));
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->SetYear(instant, (int)value + currentYear);
}

::uArray* CalendarSystem__get_Eras(CalendarSystem* __this)
{
    return __this->_eras;
}

::uString* CalendarSystem__get_Id(CalendarSystem* __this)
{
    return __this->_id;
}

CalendarSystem* CalendarSystem__get_Iso(::uStatic* __this)
{
    if (CalendarSystem___gregorianCalendarSystem == NULL)
    {
        CalendarSystem___gregorianCalendarSystem = CalendarSystem__New_1(NULL, ::uGetConstString("ISO"), ::uGetConstString("ISO"), (::app::Uno::Time::Calendars::YearMonthDayCalculator*)::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__New_1(NULL), 4);
    }

    return CalendarSystem___gregorianCalendarSystem;
}

::uLong CalendarSystem__get_MaxTicks(CalendarSystem* __this)
{
    return __this->_maxTicks;
}

int CalendarSystem__get_MaxYear(CalendarSystem* __this)
{
    return __this->_maxYear;
}

::uLong CalendarSystem__get_MinTicks(CalendarSystem* __this)
{
    return __this->_minTicks;
}

int CalendarSystem__get_MinYear(CalendarSystem* __this)
{
    return __this->_minYear;
}

::uString* CalendarSystem__get_Name(CalendarSystem* __this)
{
    return __this->_name;
}

bool CalendarSystem__get_UsesIsoDayOfWeek(CalendarSystem* __this)
{
    return true;
}

int CalendarSystem__GetAbsoluteYear(CalendarSystem* __this, int yearOfEra, int eraIndex)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetAbsoluteYear(yearOfEra, eraIndex);
}

int CalendarSystem__GetCenturyOfEra(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetCenturyOfEra(instant);
}

int CalendarSystem__GetClockHourOfHalfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetClockHourOfHalfDay(NULL, instant);
}

int CalendarSystem__GetDayOfMonth(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetDayOfMonth(instant);
}

int CalendarSystem__GetDayOfWeek(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::WeekYearCalculator__GetDayOfWeek(NULL, instant);
}

int CalendarSystem__GetDayOfYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetDayOfYear(instant);
}

int CalendarSystem__GetDaysInMonth(CalendarSystem* __this, int year, int month)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetDaysInMonth(year, month);
}

int CalendarSystem__GetEra(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetEra(instant);
}

int CalendarSystem__GetHourOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetHourOfDay(NULL, instant);
}

int CalendarSystem__GetHourOfHalfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetHourOfHalfDay(NULL, instant);
}

::app::Uno::Time::Instant CalendarSystem__GetInstant(CalendarSystem* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetInstant(era, yearOfEra, monthOfYear, dayOfMonth);
}

::app::Uno::Time::Instant CalendarSystem__GetInstant_1(CalendarSystem* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour)
{
    ::app::Uno::Time::Instant date = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetInstant_1(year, monthOfYear, dayOfMonth);
    ::uLong timeTicks = ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTicks(NULL, hourOfDay, minuteOfHour);
    return date.PlusTicks(timeTicks);
}

::app::Uno::Time::Instant CalendarSystem__GetInstant_2(CalendarSystem* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute)
{
    ::app::Uno::Time::Instant date = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetInstant_1(year, monthOfYear, dayOfMonth);
    ::uLong timeTicks = ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTicks_1(NULL, hourOfDay, minuteOfHour, secondOfMinute);
    return date.PlusTicks(timeTicks);
}

::app::Uno::Time::Instant CalendarSystem__GetInstant_3(CalendarSystem* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute, int millisecondOfSecond, int tickOfMillisecond)
{
    ::app::Uno::Time::Instant date = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetInstant_1(year, monthOfYear, dayOfMonth);
    ::uLong timeTicks = ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTicks_2(NULL, hourOfDay, minuteOfHour, secondOfMinute, millisecondOfSecond, tickOfMillisecond);
    return date.PlusTicks(timeTicks);
}

::app::Uno::Time::Instant CalendarSystem__GetInstantFromWeekYearWeekAndDayOfWeek(CalendarSystem* __this, int weekYear, int weekOfWeekYear, int dayOfWeek)
{
    return ::uPtr< ::app::Uno::Time::Calendars::WeekYearCalculator*>(__this->_weekYearCalculator)->GetInstant(weekYear, weekOfWeekYear, dayOfWeek);
}

int CalendarSystem__GetIsoDayOfWeek(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    if (!__this->UsesIsoDayOfWeek())
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Calendar "), __this->_id), ::uGetConstString(" does not use ISO days of the week"))));
    }

    return __this->GetDayOfWeek(instant);
}

int CalendarSystem__GetMaxMonth(CalendarSystem* __this, int year)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetMaxMonth(year);
}

int CalendarSystem__GetMaxYearOfEra(CalendarSystem* __this, int eraIndex)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetMaxYearOfEra(eraIndex);
}

int CalendarSystem__GetMillisecondOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMillisecondOfDay(NULL, instant);
}

int CalendarSystem__GetMillisecondOfSecond(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMillisecondOfSecond(NULL, instant);
}

int CalendarSystem__GetMinuteOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMinuteOfDay(NULL, instant);
}

int CalendarSystem__GetMinuteOfHour(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMinuteOfHour(NULL, instant);
}

int CalendarSystem__GetMinYearOfEra(CalendarSystem* __this, int eraIndex)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetMinYearOfEra(eraIndex);
}

int CalendarSystem__GetMonthOfYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetMonthOfYear(instant);
}

int CalendarSystem__GetSecondOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetSecondOfDay(NULL, instant);
}

int CalendarSystem__GetSecondOfMinute(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetSecondOfMinute(NULL, instant);
}

::uLong CalendarSystem__GetTickOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTickOfDay(NULL, instant);
}

int CalendarSystem__GetTickOfMillisecond(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTickOfMillisecond(NULL, instant);
}

int CalendarSystem__GetTickOfSecond(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTickOfSecond(NULL, instant);
}

int CalendarSystem__GetWeekOfWeekYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::WeekYearCalculator*>(__this->_weekYearCalculator)->GetWeekOfWeekYear(instant);
}

int CalendarSystem__GetWeekYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::WeekYearCalculator*>(__this->_weekYearCalculator)->GetWeekYear(instant);
}

int CalendarSystem__GetYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetYear(instant);
}

int CalendarSystem__GetYearOfCentury(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetYearOfCentury(instant);
}

int CalendarSystem__GetYearOfEra(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetYearOfEra(instant);
}

bool CalendarSystem__IsLeapYear(CalendarSystem* __this, int year)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->IsLeapYear(year);
}

::uLong CalendarSystem__MonthDifference(CalendarSystem* __this, ::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant)
{
    return (::uLong)::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->MonthsBetween(minuendInstant, subtrahendInstant);
}

CalendarSystem* CalendarSystem__New_1(::uStatic* __this, ::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    CalendarSystem* inst = (CalendarSystem*)::uAllocObject(sizeof(CalendarSystem), CalendarSystem__typeof());
    inst->_ObjInit(id, name, yearMonthDayCalculator, minDaysInFirstWeek);
    return inst;
}

CalendarSystem* CalendarSystem__New_2(::uStatic* __this, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    CalendarSystem* inst = (CalendarSystem*)::uAllocObject(sizeof(CalendarSystem), CalendarSystem__typeof());
    inst->_ObjInit_1(name, yearMonthDayCalculator, minDaysInFirstWeek);
    return inst;
}

::uString* CalendarSystem__ToString(CalendarSystem* __this)
{
    return __this->_id;
}

::uLong CalendarSystem__YearDifference(CalendarSystem* __this, ::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant)
{
    int minuendYear = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetYear(minuendInstant);
    int subtrahendYear = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetYear(subtrahendInstant);
    int diff = minuendYear - subtrahendYear;
    ::app::Uno::Time::Instant simpleAddition = __this->AddYears(subtrahendInstant, (::uLong)diff);

    if (::app::Uno::Time::Instant__op_LessThanOrEqual(NULL, subtrahendInstant, minuendInstant))
    {
        return (::uLong)(::app::Uno::Time::Instant__op_LessThanOrEqual(NULL, simpleAddition, minuendInstant) ? diff : (diff - 1));
    }
    else
    {
        return (::uLong)(::app::Uno::Time::Instant__op_GreaterThanOrEqual(NULL, simpleAddition, minuendInstant) ? diff : (diff + 1));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Time::Instant Constants__BclEpoch;
::app::Uno::Time::Instant Constants__UnixEpoch;

Constants__uType* Constants__typeof()
{
    static ::uStaticStrong<Constants__uType*> type;
    if (type != NULL) return type;

    type = (Constants__uType*)::uAllocClassType(sizeof(Constants__uType), "Uno.Time.Constants");

    type->SetFields(2,
        ::uNewField("BclEpoch", &Constants__BclEpoch, 0, ::app::Uno::Time::Instant__typeof()),
        ::uNewField("UnixEpoch", &Constants__UnixEpoch, 0, ::app::Uno::Time::Instant__typeof()));

    ::uRegisterType(type);
    return type;
}

void Constants___TypeInit(::uStatic* __this)
{
    Constants__UnixEpoch = ::uDefault< ::app::Uno::Time::Instant>();
    Constants__BclEpoch = ::app::Uno::Time::Instant__FromUtc(NULL, 1, 1, 1, 0, 0);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__uType* Converter__typeof()
{
    static ::uStaticStrong<Converter__uType*> type;
    if (type != NULL) return type;

    type = (Converter__uType*)::uAllocClassType(sizeof(Converter__uType), "Uno.Time.Converter");

    type->SetFunctions(1,
        ::uNewFunction("TicksToDays", Converter__TicksToDays, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

int Converter__TicksToDays(::uStatic* __this, ::uLong ticks)
{
    if (ticks >= 0ll)
    {
        return (int)((ticks >> 14) / 52734375ll);
    }
    else
    {
        return (int)((ticks - 863999999999ll) / 864000000000ll);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< DateTimeZone*> DateTimeZone__UtcZone;

DateTimeZone__uType* DateTimeZone__typeof()
{
    static ::uStaticStrong<DateTimeZone__uType*> type;
    if (type != NULL) return type;

    type = (DateTimeZone__uType*)::uAllocClassType(sizeof(DateTimeZone__uType), "Uno.Time.DateTimeZone", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))DateTimeZone__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))DateTimeZone__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))DateTimeZone__ToString;

    type->SetStrongRefs(
        "id", offsetof(DateTimeZone, id));

    type->SetFields(5,
        ::uNewField("id", NULL, offsetof(DateTimeZone, id), ::app::Uno::String__typeof()),
        ::uNewField("isFixed", NULL, offsetof(DateTimeZone, isFixed), ::app::Uno::Bool__typeof()),
        ::uNewField("maxOffsetTicks", NULL, offsetof(DateTimeZone, maxOffsetTicks), ::app::Uno::Long__typeof()),
        ::uNewField("minOffsetTicks", NULL, offsetof(DateTimeZone, minOffsetTicks), ::app::Uno::Long__typeof()),
        ::uNewField("UtcZone", &DateTimeZone__UtcZone, 0, DateTimeZone__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("AtStrictly", DateTimeZone__AtStrictly, 0, false, ::app::Uno::Time::ZonedDateTime__typeof(), ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewFunction("Equals", DateTimeZone__Equals_2, 0, false, ::app::Uno::Bool__typeof(), DateTimeZone__typeof()),
        ::uNewFunction("EqualsImpl", type->__fp_EqualsImpl, offsetof(DateTimeZone__uType, __fp_EqualsImpl), false, ::app::Uno::Bool__typeof(), DateTimeZone__typeof()),
        ::uNewFunction("ForOffset", DateTimeZone__ForOffset, 0, true, DateTimeZone__typeof(), ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("get_Id", DateTimeZone__get_Id, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_IsFixed", DateTimeZone__get_IsFixed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MaxOffset", DateTimeZone__get_MaxOffset, 0, false, ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("get_MinOffset", DateTimeZone__get_MinOffset, 0, false, ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("get_Utc", DateTimeZone__get_Utc, 0, true, DateTimeZone__typeof()),
        ::uNewFunction("GetUtcOffset", type->__fp_GetUtcOffset, offsetof(DateTimeZone__uType, __fp_GetUtcOffset), false, ::app::Uno::Time::Offset__typeof(), ::app::Uno::Time::LocalDateTime__typeof()));

    ::uRegisterType(type);
    return type;
}

void DateTimeZone___ObjInit(DateTimeZone* __this, ::uString* id, bool isFixed, ::app::Uno::Time::Offset minOffset, ::app::Uno::Time::Offset maxOffset)
{
    __this->id = id;
    __this->isFixed = isFixed;
    __this->minOffsetTicks = minOffset.Ticks();
    __this->maxOffsetTicks = maxOffset.Ticks();
}

void DateTimeZone___TypeInit(::uStatic* __this)
{
    DateTimeZone__UtcZone = (DateTimeZone*)::app::Uno::Time::FixedDateTimeZone__New_1(NULL, ::app::Uno::Time::Offset__Zero);
}

::app::Uno::Time::ZonedDateTime* DateTimeZone__AtStrictly(DateTimeZone* __this, ::app::Uno::Time::LocalDateTime* localDateTime)
{
    return ::app::Uno::Time::ZonedDateTime__New_3(NULL, localDateTime, __this);
}

bool DateTimeZone__Equals(DateTimeZone* __this, ::uObject* obj)
{
    return __this->Equals_2(::uAs< DateTimeZone*>(obj, DateTimeZone__typeof()));
}

bool DateTimeZone__Equals_2(DateTimeZone* __this, DateTimeZone* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, (::uObject*)obj))
    {
        return true;
    }

    return (!::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)obj, NULL) && (::app::Uno::Object::GetType(::uPtr< DateTimeZone*>(obj)) == ::app::Uno::Object::GetType(__this))) && __this->EqualsImpl(obj);
}

DateTimeZone* DateTimeZone__ForOffset(::uStatic* __this, ::app::Uno::Time::Offset offset)
{
    return (DateTimeZone*)::app::Uno::Time::FixedDateTimeZone__New_1(NULL, offset);
}

::uString* DateTimeZone__get_Id(DateTimeZone* __this)
{
    return __this->id;
}

bool DateTimeZone__get_IsFixed(DateTimeZone* __this)
{
    return __this->isFixed;
}

::app::Uno::Time::Offset DateTimeZone__get_MaxOffset(DateTimeZone* __this)
{
    return ::app::Uno::Time::Offset__FromTicks(NULL, __this->maxOffsetTicks);
}

::app::Uno::Time::Offset DateTimeZone__get_MinOffset(DateTimeZone* __this)
{
    return ::app::Uno::Time::Offset__FromTicks(NULL, __this->minOffsetTicks);
}

DateTimeZone* DateTimeZone__get_Utc(::uStatic* __this)
{
    return DateTimeZone__UtcZone;
}

int DateTimeZone__GetHashCode(DateTimeZone* __this)
{
    return ::app::Uno::Object__GetHashCode(__this);
}

::uString* DateTimeZone__ToString(DateTimeZone* __this)
{
    return __this->Id();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Timezones\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DeviceTimeZone__uType* DeviceTimeZone__typeof()
{
    static ::uStaticStrong<DeviceTimeZone__uType*> type;
    if (type != NULL) return type;

    type = (DeviceTimeZone__uType*)::uAllocClassType(sizeof(DeviceTimeZone__uType), "Uno.Time.DeviceTimeZone", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Time::DateTimeZone__typeof());
    type->__fp_EqualsImpl = (bool(*)(::app::Uno::Time::DateTimeZone*, ::app::Uno::Time::DateTimeZone*))DeviceTimeZone__EqualsImpl;
    type->__fp_GetHashCode = (int(*)(::uObject*))DeviceTimeZone__GetHashCode;
    type->__fp_GetUtcOffset = (::app::Uno::Time::Offset(*)(::app::Uno::Time::DateTimeZone*, ::app::Uno::Time::LocalDateTime*))DeviceTimeZone__GetUtcOffset;
    type->__fp_ToString = (::uString*(*)(::uObject*))DeviceTimeZone__ToString;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DeviceTimeZone__New_1, 0, true, DeviceTimeZone__typeof()));

    ::uRegisterType(type);
    return type;
}

void DeviceTimeZone___ObjInit_1(DeviceTimeZone* __this)
{
    __this->_ObjInit_2(::uGetConstString("UTC"));
}

void DeviceTimeZone___ObjInit_2(DeviceTimeZone* __this, ::uString* id)
{
    ::app::Uno::Time::DateTimeZone___ObjInit(__this, id, false, ::app::Uno::Time::Offset__FromHours(NULL, -12), ::app::Uno::Time::Offset__FromHours(NULL, 12));
}

bool DeviceTimeZone__EqualsImpl(DeviceTimeZone* __this, ::app::Uno::Time::DateTimeZone* other)
{
    return ::uIs(other, DeviceTimeZone__typeof());
}

int DeviceTimeZone__GetHashCode(DeviceTimeZone* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__string(NULL, hash, __this->Id());
    return hash;
}

::app::Uno::Time::Offset DeviceTimeZone__GetUtcOffset(DeviceTimeZone* __this, ::app::Uno::Time::LocalDateTime* dateTime)
{
    int offsetMinutes = ::app::Uno::Diagnostics::Clock__GetTimezoneOffset(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(dateTime)->Year(), ::uPtr< ::app::Uno::Time::LocalDateTime*>(dateTime)->Month(), ::uPtr< ::app::Uno::Time::LocalDateTime*>(dateTime)->Day());
    return ::app::Uno::Time::Offset__FromHoursAndMinutes(NULL, offsetMinutes / 60, offsetMinutes % 60);
}

DeviceTimeZone* DeviceTimeZone__New_1(::uStatic* __this)
{
    DeviceTimeZone* inst = (DeviceTimeZone*)::uAllocObject(sizeof(DeviceTimeZone), DeviceTimeZone__typeof());
    inst->_ObjInit_1();
    return inst;
}

DeviceTimeZone* DeviceTimeZone__New_2(::uStatic* __this, ::uString* id)
{
    DeviceTimeZone* inst = (DeviceTimeZone*)::uAllocObject(sizeof(DeviceTimeZone), DeviceTimeZone__typeof());
    inst->_ObjInit_2(id);
    return inst;
}

::uString* DeviceTimeZone__ToString(DeviceTimeZone* __this)
{
    return __this->Id();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Duration Duration__Epsilon;
Duration Duration__OneHour;
Duration Duration__OneMillisecond;
Duration Duration__OneMinute;
Duration Duration__OneSecond;
Duration Duration__OneStandardDay;
Duration Duration__OneStandardWeek;
Duration Duration__Zero;

Duration__uType* Duration__typeof()
{
    static ::uStaticStrong<Duration__uType*> type;
    if (type != NULL) return type;

    type = (Duration__uType*)::uAllocStructType(sizeof(Duration__uType), "Uno.Time.Duration", sizeof(Duration), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Duration__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Duration__GetHashCode;

    type->SetFields(9,
        ::uNewField("Epsilon", &Duration__Epsilon, 0, Duration__typeof()),
        ::uNewField("OneHour", &Duration__OneHour, 0, Duration__typeof()),
        ::uNewField("OneMillisecond", &Duration__OneMillisecond, 0, Duration__typeof()),
        ::uNewField("OneMinute", &Duration__OneMinute, 0, Duration__typeof()),
        ::uNewField("OneSecond", &Duration__OneSecond, 0, Duration__typeof()),
        ::uNewField("OneStandardDay", &Duration__OneStandardDay, 0, Duration__typeof()),
        ::uNewField("OneStandardWeek", &Duration__OneStandardWeek, 0, Duration__typeof()),
        ::uNewField("ticks", NULL, offsetof(Duration, ticks), ::app::Uno::Long__typeof()),
        ::uNewField("Zero", &Duration__Zero, 0, Duration__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Equals", Duration__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Duration__typeof()),
        ::uNewFunction("FromTicks", Duration__FromTicks, 0, true, Duration__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Ticks", Duration__get_Ticks, 0, false, ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Duration___ObjInit(Duration* __this, ::uLong ticks)
{
    __this->ticks = ticks;
}

void Duration___TypeInit(::uStatic* __this)
{
    Duration__Zero = Duration__New_1(NULL, 0ll);
    Duration__Epsilon = Duration__New_1(NULL, 1ll);
    Duration__OneStandardWeek = Duration__New_1(NULL, 6048000000000ll);
    Duration__OneStandardDay = Duration__New_1(NULL, 864000000000ll);
    Duration__OneHour = Duration__New_1(NULL, 36000000000ll);
    Duration__OneMinute = Duration__New_1(NULL, 600000000ll);
    Duration__OneSecond = Duration__New_1(NULL, 10000000ll);
    Duration__OneMillisecond = Duration__New_1(NULL, 10000ll);
}

bool Duration__Equals(Duration* __this, ::uObject* obj)
{
    if (::uIs(obj, Duration__typeof()))
    {
        return __this->Equals_2(::uUnbox< Duration>(Duration__typeof(), obj));
    }

    return false;
}

bool Duration__Equals_2(Duration* __this, Duration other)
{
    return __this->Ticks() == other.Ticks();
}

Duration Duration__FromTicks(::uStatic* __this, ::uLong ticks)
{
    return Duration__New_1(NULL, ticks);
}

::uLong Duration__get_Ticks(Duration* __this)
{
    return __this->ticks;
}

int Duration__GetHashCode(Duration* __this)
{
    return ::app::Uno::Long::GetHashCode(__this->Ticks());
}

Duration Duration__New_1(::uStatic* __this, ::uLong ticks)
{
    Duration inst = ::uDefault< Duration>();
    inst._ObjInit(ticks);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Timezones\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedDateTimeZone__uType* FixedDateTimeZone__typeof()
{
    static ::uStaticStrong<FixedDateTimeZone__uType*> type;
    if (type != NULL) return type;

    type = (FixedDateTimeZone__uType*)::uAllocClassType(sizeof(FixedDateTimeZone__uType), "Uno.Time.FixedDateTimeZone", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Time::DateTimeZone__typeof());
    type->__fp_EqualsImpl = (bool(*)(::app::Uno::Time::DateTimeZone*, ::app::Uno::Time::DateTimeZone*))FixedDateTimeZone__EqualsImpl;
    type->__fp_GetHashCode = (int(*)(::uObject*))FixedDateTimeZone__GetHashCode;
    type->__fp_GetUtcOffset = (::app::Uno::Time::Offset(*)(::app::Uno::Time::DateTimeZone*, ::app::Uno::Time::LocalDateTime*))FixedDateTimeZone__GetUtcOffset;
    type->__fp_ToString = (::uString*(*)(::uObject*))FixedDateTimeZone__ToString;

    type->SetFields(1,
        ::uNewField("offset", NULL, offsetof(FixedDateTimeZone, offset), ::app::Uno::Time::Offset__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Offset", FixedDateTimeZone__get_Offset, 0, false, ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction(".ctor", FixedDateTimeZone__New_1, 0, true, FixedDateTimeZone__typeof(), ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction(".ctor", FixedDateTimeZone__New_2, 0, true, FixedDateTimeZone__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Time::Offset__typeof()));

    ::uRegisterType(type);
    return type;
}

void FixedDateTimeZone___ObjInit_1(FixedDateTimeZone* __this, ::app::Uno::Time::Offset offset)
{
    __this->_ObjInit_2(::uGetConstString("UTC"), offset);
}

void FixedDateTimeZone___ObjInit_2(FixedDateTimeZone* __this, ::uString* id, ::app::Uno::Time::Offset offset)
{
    ::app::Uno::Time::DateTimeZone___ObjInit(__this, id, true, offset, offset);
    __this->offset = offset;
}

bool FixedDateTimeZone__EqualsImpl(FixedDateTimeZone* __this, ::app::Uno::Time::DateTimeZone* other)
{
    FixedDateTimeZone* otherZone = ::uCast< FixedDateTimeZone*>(other, FixedDateTimeZone__typeof());
    return ::app::Uno::Time::Offset__op_Equality(NULL, __this->offset, ::uPtr< FixedDateTimeZone*>(otherZone)->offset) && ::app::Uno::String__op_Equality(NULL, __this->Id(), ::uPtr< ::app::Uno::Time::DateTimeZone*>(other)->Id());
}

::app::Uno::Time::Offset FixedDateTimeZone__get_Offset(FixedDateTimeZone* __this)
{
    return __this->offset;
}

int FixedDateTimeZone__GetHashCode(FixedDateTimeZone* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_Offset(NULL, hash, __this->offset);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__string(NULL, hash, __this->Id());
    return hash;
}

::app::Uno::Time::Offset FixedDateTimeZone__GetUtcOffset(FixedDateTimeZone* __this, ::app::Uno::Time::LocalDateTime* dateTime)
{
    return __this->offset;
}

FixedDateTimeZone* FixedDateTimeZone__New_1(::uStatic* __this, ::app::Uno::Time::Offset offset)
{
    FixedDateTimeZone* inst = (FixedDateTimeZone*)::uAllocObject(sizeof(FixedDateTimeZone), FixedDateTimeZone__typeof());
    inst->_ObjInit_1(offset);
    return inst;
}

FixedDateTimeZone* FixedDateTimeZone__New_2(::uStatic* __this, ::uString* id, ::app::Uno::Time::Offset offset)
{
    FixedDateTimeZone* inst = (FixedDateTimeZone*)::uAllocObject(sizeof(FixedDateTimeZone), FixedDateTimeZone__typeof());
    inst->_ObjInit_2(id, offset);
    return inst;
}

::uString* FixedDateTimeZone__ToString(FixedDateTimeZone* __this)
{
    return __this->Id();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashCodeHelper__uType* HashCodeHelper__typeof()
{
    static ::uStaticStrong<HashCodeHelper__uType*> type;
    if (type != NULL) return type;

    type = (HashCodeHelper__uType*)::uAllocClassType(sizeof(HashCodeHelper__uType), "Uno.Time.HashCodeHelper");

    type->SetFunctions(2,
        ::uNewFunction("Initialize", HashCodeHelper__Initialize, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("MakeHash", HashCodeHelper__MakeHash, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

int HashCodeHelper__Hash__long(::uStatic* __this, int code, ::uLong value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uBox< ::uLong>(::app::Uno::Long__typeof(), value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uBox< ::uLong>(::app::Uno::Long__typeof(), value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__string(::uStatic* __this, int code, ::uString* value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uPtr< ::uString*>(value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_CalendarSystem(::uStatic* __this, int code, ::app::Uno::Time::CalendarSystem* value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::CalendarSystem*>(value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Time::CalendarSystem*>(value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_DateTimeZone(::uStatic* __this, int code, ::app::Uno::Time::DateTimeZone* value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::DateTimeZone*>(value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Time::DateTimeZone*>(value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_Instant(::uStatic* __this, int code, ::app::Uno::Time::Instant value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uBox(::app::Uno::Time::Instant__typeof(), value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uBox(::app::Uno::Time::Instant__typeof(), value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_LocalDateTime(::uStatic* __this, int code, ::app::Uno::Time::LocalDateTime* value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::LocalDateTime*>(value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Time::LocalDateTime*>(value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_Offset(::uStatic* __this, int code, ::app::Uno::Time::Offset value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uBox(::app::Uno::Time::Offset__typeof(), value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uBox(::app::Uno::Time::Offset__typeof(), value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Initialize(::uStatic* __this)
{
    return 17;
}

int HashCodeHelper__MakeHash(::uStatic* __this, int code, int value)
{
    return (code * 37) + value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Instant__uType* Instant__typeof()
{
    static ::uStaticStrong<Instant__uType*> type;
    if (type != NULL) return type;

    type = (Instant__uType*)::uAllocStructType(sizeof(Instant__uType), "Uno.Time.Instant", sizeof(Instant), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Instant__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Instant__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Instant__ToString;

    type->SetFields(1,
        ::uNewField("_ticks", NULL, offsetof(Instant, _ticks), ::app::Uno::Long__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("Equals", Instant__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Instant__typeof()),
        ::uNewFunction("FromUtc", Instant__FromUtc, 0, true, Instant__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Ticks", Instant__get_Ticks, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("Minus", Instant__Minus_2, 0, false, Instant__typeof(), ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction(".ctor", Instant__New_1, 0, true, Instant__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("Plus", Instant__Plus_1, 0, false, Instant__typeof(), ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("PlusTicks", Instant__PlusTicks, 0, false, Instant__typeof(), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Instant___ObjInit(Instant* __this, ::uLong ticks)
{
    __this->_ticks = ticks;
}

bool Instant__Equals(Instant* __this, ::uObject* obj)
{
    if (::uIs(obj, Instant__typeof()))
    {
        return __this->Equals_2(::uUnbox< Instant>(Instant__typeof(), obj));
    }

    return false;
}

bool Instant__Equals_2(Instant* __this, Instant other)
{
    return __this->Ticks() == other.Ticks();
}

Instant Instant__FromUtc(::uStatic* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(::app::Uno::Time::CalendarSystem__get_Iso(NULL))->GetInstant_1(year, monthOfYear, dayOfMonth, hourOfDay, minuteOfHour);
}

::uLong Instant__get_Ticks(Instant* __this)
{
    return __this->_ticks;
}

int Instant__GetHashCode(Instant* __this)
{
    return ::app::Uno::Long::GetHashCode(__this->Ticks());
}

Instant Instant__Minus_2(Instant* __this, ::app::Uno::Time::Offset offset)
{
    return Instant__New_1(NULL, __this->_ticks - offset.Ticks());
}

Instant Instant__New_1(::uStatic* __this, ::uLong ticks)
{
    Instant inst = ::uDefault< Instant>();
    inst._ObjInit(ticks);
    return inst;
}

Instant Instant__op_Addition(::uStatic* __this, Instant left, ::app::Uno::Time::Duration right)
{
    return Instant__New_1(NULL, left.Ticks() + right.Ticks());
}

bool Instant__op_Equality(::uStatic* __this, Instant left, Instant right)
{
    return left.Equals_2(right);
}

bool Instant__op_GreaterThan(::uStatic* __this, Instant left, Instant right)
{
    return left.Ticks() > right.Ticks();
}

bool Instant__op_GreaterThanOrEqual(::uStatic* __this, Instant left, Instant right)
{
    return left.Ticks() >= right.Ticks();
}

bool Instant__op_LessThan(::uStatic* __this, Instant left, Instant right)
{
    return left.Ticks() < right.Ticks();
}

bool Instant__op_LessThanOrEqual(::uStatic* __this, Instant left, Instant right)
{
    return left.Ticks() <= right.Ticks();
}

Instant Instant__op_Subtraction(::uStatic* __this, Instant left, ::app::Uno::Time::Duration right)
{
    return Instant__New_1(NULL, left.Ticks() - right.Ticks());
}

Instant Instant__Plus_1(Instant* __this, ::app::Uno::Time::Offset offset)
{
    return Instant__New_1(NULL, __this->Ticks() + offset.Ticks());
}

Instant Instant__PlusTicks(Instant* __this, ::uLong ticksToAdd)
{
    return Instant__New_1(NULL, __this->_ticks + ticksToAdd);
}

::uString* Instant__ToString(Instant* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern*>(::app::Uno::Time::Text::LocalDateTimePattern__get_GeneralIsoPattern(NULL))->Format(::app::Uno::Time::LocalDateTime__New_1(NULL, *__this));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* IsoDayOfWeek__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Time.IsoDayOfWeek", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "None", 0LL,
        "Monday", 1LL,
        "Tuesday", 2LL,
        "Wednesday", 3LL,
        "Thursday", 4LL,
        "Friday", 5LL,
        "Saturday", 6LL,
        "Sunday", 7LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LocalDate__uType* LocalDate__typeof()
{
    static ::uStaticStrong<LocalDate__uType*> type;
    if (type != NULL) return type;

    type = (LocalDate__uType*)::uAllocClassType(sizeof(LocalDate__uType), "Uno.Time.LocalDate", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))LocalDate__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))LocalDate__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))LocalDate__ToString;

    type->SetStrongRefs(
        "_localTime", offsetof(LocalDate, _localTime));

    type->SetFields(1,
        ::uNewField("_localTime", NULL, offsetof(LocalDate, _localTime), ::app::Uno::Time::LocalDateTime__typeof()));

    type->SetFunctions(31,
        ::uNewFunction("Add", LocalDate__Add, 0, true, LocalDate__typeof(), LocalDate__typeof(), ::app::Uno::Time::Period__typeof()),
        ::uNewFunction("At", LocalDate__At, 0, false, ::app::Uno::Time::LocalDateTime__typeof(), ::app::Uno::Time::LocalTime__typeof()),
        ::uNewFunction("AtMidnight", LocalDate__AtMidnight, 0, false, ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewFunction("Equals", LocalDate__Equals_2, 0, false, ::app::Uno::Bool__typeof(), LocalDate__typeof()),
        ::uNewFunction("FromWeekYearWeekAndDay", LocalDate__FromWeekYearWeekAndDay, 0, true, LocalDate__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("get_Calendar", LocalDate__get_Calendar, 0, false, ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction("get_Day", LocalDate__get_Day, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_DayOfWeek", LocalDate__get_DayOfWeek, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_DayOfYear", LocalDate__get_DayOfYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Era", LocalDate__get_Era, 0, false, ::app::Uno::Time::Calendars::Era__typeof()),
        ::uNewFunction("get_IsoDayOfWeek", LocalDate__get_IsoDayOfWeek, 0, false, ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("get_Month", LocalDate__get_Month, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_WeekOfWeekYear", LocalDate__get_WeekOfWeekYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_WeekYear", LocalDate__get_WeekYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Year", LocalDate__get_Year, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_YearOfCentury", LocalDate__get_YearOfCentury, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_YearOfEra", LocalDate__get_YearOfEra, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Minus", LocalDate__Minus, 0, false, LocalDate__typeof(), ::app::Uno::Time::Period__typeof()),
        ::uNewFunction(".ctor", LocalDate__New_1, 0, true, LocalDate__typeof(), ::app::Uno::Time::Calendars::Era__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", LocalDate__New_2, 0, true, LocalDate__typeof(), ::app::Uno::Time::Calendars::Era__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction(".ctor", LocalDate__New_3, 0, true, LocalDate__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", LocalDate__New_4, 0, true, LocalDate__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction("Next", LocalDate__Next, 0, false, LocalDate__typeof(), ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("Plus", LocalDate__Plus, 0, false, LocalDate__typeof(), ::app::Uno::Time::Period__typeof()),
        ::uNewFunction("PlusDays", LocalDate__PlusDays, 0, false, LocalDate__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("PlusMonths", LocalDate__PlusMonths, 0, false, LocalDate__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("PlusWeeks", LocalDate__PlusWeeks, 0, false, LocalDate__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("PlusYears", LocalDate__PlusYears, 0, false, LocalDate__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Previous", LocalDate__Previous, 0, false, LocalDate__typeof(), ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("Subtract", LocalDate__Subtract, 0, true, LocalDate__typeof(), LocalDate__typeof(), ::app::Uno::Time::Period__typeof()),
        ::uNewFunction("WithCalendar", LocalDate__WithCalendar, 0, false, LocalDate__typeof(), ::app::Uno::Time::CalendarSystem__typeof()));

    ::uRegisterType(type);
    return type;
}

void LocalDate___ObjInit(LocalDate* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day)
{
    __this->_ObjInit_1(era, yearOfEra, month, day, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

void LocalDate___ObjInit_1(LocalDate* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day, ::app::Uno::Time::CalendarSystem* calendar)
{
    __this->_ObjInit_4(::app::Uno::Time::LocalDateTime__New_2(NULL, ::uPtr< ::app::Uno::Time::CalendarSystem*>(::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar")))->GetInstant(era, yearOfEra, month, day), calendar));
}

void LocalDate___ObjInit_2(LocalDate* __this, int year, int month, int day)
{
    __this->_ObjInit_3(year, month, day, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

void LocalDate___ObjInit_3(LocalDate* __this, int year, int month, int day, ::app::Uno::Time::CalendarSystem* calendar)
{
    __this->_ObjInit_4(::app::Uno::Time::LocalDateTime__New_4(NULL, year, month, day, 0, 0, calendar));
}

void LocalDate___ObjInit_4(LocalDate* __this, ::app::Uno::Time::LocalDateTime* localTime)
{
    __this->_localTime = localTime;
}

LocalDate* LocalDate__Add(::uStatic* __this, LocalDate* date, ::app::Uno::Time::Period* period)
{
    return LocalDate__op_Addition_1(NULL, date, period);
}

::app::Uno::Time::LocalDateTime* LocalDate__At(LocalDate* __this, ::app::Uno::Time::LocalTime time)
{
    return LocalDate__op_Addition(NULL, __this, time);
}

::app::Uno::Time::LocalDateTime* LocalDate__AtMidnight(LocalDate* __this)
{
    return __this->_localTime;
}

bool LocalDate__Equals(LocalDate* __this, ::uObject* obj)
{
    if (::uIs(obj, LocalDate__typeof()))
    {
        return LocalDate__op_Equality(NULL, __this, ::uCast< LocalDate*>(obj, LocalDate__typeof()));
    }

    return false;
}

bool LocalDate__Equals_2(LocalDate* __this, LocalDate* other)
{
    return LocalDate__op_Equality(NULL, __this, other);
}

LocalDate* LocalDate__FromWeekYearWeekAndDay(::uStatic* __this, int weekYear, int weekOfWeekYear, int dayOfWeek)
{
    ::app::Uno::Time::Instant instant = ::uPtr< ::app::Uno::Time::CalendarSystem*>(::app::Uno::Time::CalendarSystem__get_Iso(NULL))->GetInstantFromWeekYearWeekAndDayOfWeek(weekYear, weekOfWeekYear, dayOfWeek);
    return LocalDate__New_5(NULL, ::app::Uno::Time::LocalDateTime__New_1(NULL, instant));
}

::app::Uno::Time::CalendarSystem* LocalDate__get_Calendar(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->Calendar();
}

int LocalDate__get_Day(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->Day();
}

int LocalDate__get_DayOfWeek(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->DayOfWeek();
}

int LocalDate__get_DayOfYear(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->DayOfYear();
}

::app::Uno::Time::Calendars::Era* LocalDate__get_Era(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->Era();
}

int LocalDate__get_IsoDayOfWeek(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->IsoDayOfWeek();
}

int LocalDate__get_Month(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->Month();
}

int LocalDate__get_WeekOfWeekYear(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->WeekOfWeekYear();
}

int LocalDate__get_WeekYear(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->WeekYear();
}

int LocalDate__get_Year(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->Year();
}

int LocalDate__get_YearOfCentury(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->YearOfCentury();
}

int LocalDate__get_YearOfEra(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->YearOfEra();
}

int LocalDate__GetHashCode(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->GetHashCode();
}

LocalDate* LocalDate__Minus(LocalDate* __this, ::app::Uno::Time::Period* period)
{
    return LocalDate__op_Subtraction(NULL, __this, period);
}

LocalDate* LocalDate__New_1(::uStatic* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day)
{
    LocalDate* inst = (LocalDate*)::uAllocObject(sizeof(LocalDate), LocalDate__typeof());
    inst->_ObjInit(era, yearOfEra, month, day);
    return inst;
}

LocalDate* LocalDate__New_2(::uStatic* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int month, int day, ::app::Uno::Time::CalendarSystem* calendar)
{
    LocalDate* inst = (LocalDate*)::uAllocObject(sizeof(LocalDate), LocalDate__typeof());
    inst->_ObjInit_1(era, yearOfEra, month, day, calendar);
    return inst;
}

LocalDate* LocalDate__New_3(::uStatic* __this, int year, int month, int day)
{
    LocalDate* inst = (LocalDate*)::uAllocObject(sizeof(LocalDate), LocalDate__typeof());
    inst->_ObjInit_2(year, month, day);
    return inst;
}

LocalDate* LocalDate__New_4(::uStatic* __this, int year, int month, int day, ::app::Uno::Time::CalendarSystem* calendar)
{
    LocalDate* inst = (LocalDate*)::uAllocObject(sizeof(LocalDate), LocalDate__typeof());
    inst->_ObjInit_3(year, month, day, calendar);
    return inst;
}

LocalDate* LocalDate__New_5(::uStatic* __this, ::app::Uno::Time::LocalDateTime* localTime)
{
    LocalDate* inst = (LocalDate*)::uAllocObject(sizeof(LocalDate), LocalDate__typeof());
    inst->_ObjInit_4(localTime);
    return inst;
}

LocalDate* LocalDate__Next(LocalDate* __this, int targetDayOfWeek)
{
    return LocalDate__New_5(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->Next(targetDayOfWeek));
}

::app::Uno::Time::LocalDateTime* LocalDate__op_Addition(::uStatic* __this, LocalDate* date, ::app::Uno::Time::LocalTime time)
{
    ::app::Uno::Time::Instant localDateInstant = ::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< LocalDate*>(date)->_localTime)->Instant();
    ::app::Uno::Time::Instant localInstant = ::app::Uno::Time::Instant__New_1(NULL, localDateInstant.Ticks() + time.TickOfDay());
    return ::app::Uno::Time::LocalDateTime__New_2(NULL, localInstant, ::uPtr< ::app::Uno::Time::LocalDateTime*>(date->_localTime)->Calendar());
}

LocalDate* LocalDate__op_Addition_1(::uStatic* __this, LocalDate* date, ::app::Uno::Time::Period* period)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Period(NULL, period, ::uGetConstString("period"));
    ::app::Uno::Time::Preconditions__CheckArgument(NULL, !::uPtr< ::app::Uno::Time::Period*>(period)->HasTimeComponent(), ::uGetConstString("period"), ::uGetConstString("Cannot add a period with a time component to a date"));
    return LocalDate__New_5(NULL, ::app::Uno::Time::LocalDateTime__op_Addition(NULL, ::uPtr< LocalDate*>(date)->_localTime, period));
}

bool LocalDate__op_Equality(::uStatic* __this, LocalDate* lhs, LocalDate* rhs)
{
    return ::app::Uno::Time::LocalDateTime__op_Equality(NULL, ::uPtr< LocalDate*>(lhs)->_localTime, ::uPtr< LocalDate*>(rhs)->_localTime);
}

bool LocalDate__op_GreaterThan(::uStatic* __this, LocalDate* lhs, LocalDate* rhs)
{
    return ::app::Uno::Time::LocalDateTime__op_GreaterThan(NULL, ::uPtr< LocalDate*>(lhs)->_localTime, ::uPtr< LocalDate*>(rhs)->_localTime);
}

bool LocalDate__op_GreaterThanOrEqual(::uStatic* __this, LocalDate* lhs, LocalDate* rhs)
{
    return ::app::Uno::Time::LocalDateTime__op_GreaterThanOrEqual(NULL, ::uPtr< LocalDate*>(lhs)->_localTime, ::uPtr< LocalDate*>(rhs)->_localTime);
}

bool LocalDate__op_Inequality(::uStatic* __this, LocalDate* lhs, LocalDate* rhs)
{
    return ::app::Uno::Time::LocalDateTime__op_Inequality(NULL, ::uPtr< LocalDate*>(lhs)->_localTime, ::uPtr< LocalDate*>(rhs)->_localTime);
}

bool LocalDate__op_LessThan(::uStatic* __this, LocalDate* lhs, LocalDate* rhs)
{
    return ::app::Uno::Time::LocalDateTime__op_LessThan(NULL, ::uPtr< LocalDate*>(lhs)->_localTime, ::uPtr< LocalDate*>(rhs)->_localTime);
}

bool LocalDate__op_LessThanOrEqual(::uStatic* __this, LocalDate* lhs, LocalDate* rhs)
{
    return ::app::Uno::Time::LocalDateTime__op_LessThanOrEqual(NULL, ::uPtr< LocalDate*>(lhs)->_localTime, ::uPtr< LocalDate*>(rhs)->_localTime);
}

LocalDate* LocalDate__op_Subtraction(::uStatic* __this, LocalDate* date, ::app::Uno::Time::Period* period)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Period(NULL, period, ::uGetConstString("period"));
    ::app::Uno::Time::Preconditions__CheckArgument(NULL, !::uPtr< ::app::Uno::Time::Period*>(period)->HasTimeComponent(), ::uGetConstString("period"), ::uGetConstString("Cannot subtract a period with a time component from a date"));
    return LocalDate__New_5(NULL, ::app::Uno::Time::LocalDateTime__op_Subtraction(NULL, ::uPtr< LocalDate*>(date)->_localTime, period));
}

LocalDate* LocalDate__Plus(LocalDate* __this, ::app::Uno::Time::Period* period)
{
    return LocalDate__op_Addition_1(NULL, __this, period);
}

LocalDate* LocalDate__PlusDays(LocalDate* __this, int days)
{
    return LocalDate__New_5(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->PlusDays(days));
}

LocalDate* LocalDate__PlusMonths(LocalDate* __this, int months)
{
    return LocalDate__New_5(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->PlusMonths(months));
}

LocalDate* LocalDate__PlusWeeks(LocalDate* __this, int weeks)
{
    return LocalDate__New_5(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->PlusWeeks(weeks));
}

LocalDate* LocalDate__PlusYears(LocalDate* __this, int years)
{
    return LocalDate__New_5(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->PlusYears(years));
}

LocalDate* LocalDate__Previous(LocalDate* __this, int targetDayOfWeek)
{
    return LocalDate__New_5(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->Previous(targetDayOfWeek));
}

LocalDate* LocalDate__Subtract(::uStatic* __this, LocalDate* date, ::app::Uno::Time::Period* period)
{
    return LocalDate__op_Subtraction(NULL, date, period);
}

::uString* LocalDate__ToString(LocalDate* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDatePattern*>(::app::Uno::Time::Text::LocalDatePattern__get_GeneralIsoPattern(NULL))->Format(__this);
}

LocalDate* LocalDate__WithCalendar(LocalDate* __this, ::app::Uno::Time::CalendarSystem* calendarSystem)
{
    return LocalDate__New_5(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localTime)->WithCalendar(calendarSystem));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LocalDateTime__uType* LocalDateTime__typeof()
{
    static ::uStaticStrong<LocalDateTime__uType*> type;
    if (type != NULL) return type;

    type = (LocalDateTime__uType*)::uAllocClassType(sizeof(LocalDateTime__uType), "Uno.Time.LocalDateTime", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))LocalDateTime__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))LocalDateTime__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))LocalDateTime__ToString;

    type->SetStrongRefs(
        "_calendar", offsetof(LocalDateTime, _calendar));

    type->SetFields(2,
        ::uNewField("_calendar", NULL, offsetof(LocalDateTime, _calendar), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewField("_instant", NULL, offsetof(LocalDateTime, _instant), ::app::Uno::Time::Instant__typeof()));

    type->SetFunctions(52,
        ::uNewFunction("Add", LocalDateTime__Add, 0, true, LocalDateTime__typeof(), LocalDateTime__typeof(), ::app::Uno::Time::Period__typeof()),
        ::uNewFunction("Equals", LocalDateTime__Equals_2, 0, false, ::app::Uno::Bool__typeof(), LocalDateTime__typeof()),
        ::uNewFunction("get_Calendar", LocalDateTime__get_Calendar, 0, false, ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction("get_CenturyOfEra", LocalDateTime__get_CenturyOfEra, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ClockHourOfHalfDay", LocalDateTime__get_ClockHourOfHalfDay, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Date", LocalDateTime__get_Date, 0, false, ::app::Uno::Time::LocalDate__typeof()),
        ::uNewFunction("get_Day", LocalDateTime__get_Day, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_DayOfWeek", LocalDateTime__get_DayOfWeek, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_DayOfYear", LocalDateTime__get_DayOfYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Era", LocalDateTime__get_Era, 0, false, ::app::Uno::Time::Calendars::Era__typeof()),
        ::uNewFunction("get_Hour", LocalDateTime__get_Hour, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Instant", LocalDateTime__get_Instant, 0, false, ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("get_IsoDayOfWeek", LocalDateTime__get_IsoDayOfWeek, 0, false, ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("get_Millisecond", LocalDateTime__get_Millisecond, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Minute", LocalDateTime__get_Minute, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Month", LocalDateTime__get_Month, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Second", LocalDateTime__get_Second, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TickOfDay", LocalDateTime__get_TickOfDay, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_TickOfSecond", LocalDateTime__get_TickOfSecond, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TimeOfDay", LocalDateTime__get_TimeOfDay, 0, false, ::app::Uno::Time::LocalTime__typeof()),
        ::uNewFunction("get_WeekOfWeekYear", LocalDateTime__get_WeekOfWeekYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_WeekYear", LocalDateTime__get_WeekYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Year", LocalDateTime__get_Year, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_YearOfCentury", LocalDateTime__get_YearOfCentury, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_YearOfEra", LocalDateTime__get_YearOfEra, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("InUtc", LocalDateTime__InUtc, 0, false, ::app::Uno::Time::ZonedDateTime__typeof()),
        ::uNewFunction("InZoneStrictly", LocalDateTime__InZoneStrictly, 0, false, ::app::Uno::Time::ZonedDateTime__typeof(), ::app::Uno::Time::DateTimeZone__typeof()),
        ::uNewFunction("Minus", LocalDateTime__Minus, 0, false, LocalDateTime__typeof(), ::app::Uno::Time::Period__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_10, 0, true, LocalDateTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_2, 0, true, LocalDateTime__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_3, 0, true, LocalDateTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_4, 0, true, LocalDateTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_5, 0, true, LocalDateTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_6, 0, true, LocalDateTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_7, 0, true, LocalDateTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_8, 0, true, LocalDateTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction(".ctor", LocalDateTime__New_9, 0, true, LocalDateTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Next", LocalDateTime__Next, 0, false, LocalDateTime__typeof(), ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("Plus", LocalDateTime__Plus, 0, false, LocalDateTime__typeof(), ::app::Uno::Time::Period__typeof()),
        ::uNewFunction("PlusDays", LocalDateTime__PlusDays, 0, false, LocalDateTime__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("PlusHours", LocalDateTime__PlusHours, 0, false, LocalDateTime__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("PlusMilliseconds", LocalDateTime__PlusMilliseconds, 0, false, LocalDateTime__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("PlusMinutes", LocalDateTime__PlusMinutes, 0, false, LocalDateTime__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("PlusMonths", LocalDateTime__PlusMonths, 0, false, LocalDateTime__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("PlusSeconds", LocalDateTime__PlusSeconds, 0, false, LocalDateTime__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("PlusTicks", LocalDateTime__PlusTicks, 0, false, LocalDateTime__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("PlusWeeks", LocalDateTime__PlusWeeks, 0, false, LocalDateTime__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("PlusYears", LocalDateTime__PlusYears, 0, false, LocalDateTime__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Previous", LocalDateTime__Previous, 0, false, LocalDateTime__typeof(), ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("Subtract", LocalDateTime__Subtract, 0, true, LocalDateTime__typeof(), LocalDateTime__typeof(), ::app::Uno::Time::Period__typeof()),
        ::uNewFunction("WithCalendar", LocalDateTime__WithCalendar, 0, false, LocalDateTime__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction("WithOffset", LocalDateTime__WithOffset, 0, false, ::app::Uno::Time::OffsetDateTime__typeof(), ::app::Uno::Time::Offset__typeof()));

    ::uRegisterType(type);
    return type;
}

void LocalDateTime___ObjInit(LocalDateTime* __this, ::app::Uno::Time::Instant instant)
{
    __this->_ObjInit_1(instant, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

void LocalDateTime___ObjInit_1(LocalDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar"));
    __this->_instant = instant;
    __this->_calendar = calendar;
}

void LocalDateTime___ObjInit_2(LocalDateTime* __this, int year, int month, int day, int hour, int minute)
{
    __this->_ObjInit_3(year, month, day, hour, minute, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

void LocalDateTime___ObjInit_3(LocalDateTime* __this, int year, int month, int day, int hour, int minute, ::app::Uno::Time::CalendarSystem* calendar)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar"));
    __this->_instant = ::uPtr< ::app::Uno::Time::CalendarSystem*>(calendar)->GetInstant_1(year, month, day, hour, minute);
    __this->_calendar = calendar;
}

void LocalDateTime___ObjInit_4(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second)
{
    __this->_ObjInit_5(year, month, day, hour, minute, second, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

void LocalDateTime___ObjInit_5(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, ::app::Uno::Time::CalendarSystem* calendar)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar"));
    __this->_instant = ::uPtr< ::app::Uno::Time::CalendarSystem*>(calendar)->GetInstant_2(year, month, day, hour, minute, second);
    __this->_calendar = calendar;
}

void LocalDateTime___ObjInit_6(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond)
{
    __this->_ObjInit_9(year, month, day, hour, minute, second, millisecond, 0, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

void LocalDateTime___ObjInit_7(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, ::app::Uno::Time::CalendarSystem* calendar)
{
    __this->_ObjInit_9(year, month, day, hour, minute, second, millisecond, 0, calendar);
}

void LocalDateTime___ObjInit_8(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond)
{
    __this->_ObjInit_9(year, month, day, hour, minute, second, millisecond, tickWithinMillisecond, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

void LocalDateTime___ObjInit_9(LocalDateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, ::app::Uno::Time::CalendarSystem* calendar)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar"));
    __this->_instant = ::uPtr< ::app::Uno::Time::CalendarSystem*>(calendar)->GetInstant_3(year, month, day, hour, minute, second, millisecond, tickWithinMillisecond);
    __this->_calendar = calendar;
}

LocalDateTime* LocalDateTime__Add(::uStatic* __this, LocalDateTime* localDateTime, ::app::Uno::Time::Period* period)
{
    return ::uPtr< LocalDateTime*>(localDateTime)->Plus(period);
}

bool LocalDateTime__Equals(LocalDateTime* __this, ::uObject* obj)
{
    if (::uIs(obj, LocalDateTime__typeof()))
    {
        return __this->Equals_2(::uCast< LocalDateTime*>(obj, LocalDateTime__typeof()));
    }

    return false;
}

bool LocalDateTime__Equals_2(LocalDateTime* __this, LocalDateTime* other)
{
    return ::app::Uno::Time::Instant__op_Equality(NULL, __this->_instant, ::uPtr< LocalDateTime*>(other)->_instant) && ::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar()), (::uObject*)::uPtr< LocalDateTime*>(other)->Calendar());
}

::app::Uno::Time::CalendarSystem* LocalDateTime__get_Calendar(LocalDateTime* __this)
{
    ::app::Uno::Time::CalendarSystem* ind_132 = __this->_calendar;
    return (ind_132 != NULL) ? ind_132 : ::app::Uno::Time::CalendarSystem__get_Iso(NULL);
}

int LocalDateTime__get_CenturyOfEra(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetCenturyOfEra(__this->_instant);
}

int LocalDateTime__get_ClockHourOfHalfDay(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetClockHourOfHalfDay(__this->_instant);
}

::app::Uno::Time::LocalDate* LocalDateTime__get_Date(LocalDateTime* __this)
{
    ::app::Uno::Time::Instant ind_123 = ::app::Uno::Time::Instant();
    ::app::Uno::Time::Instant ind_124 = ::app::Uno::Time::Instant();
    ::uLong dayTicks = (ind_123 = __this->_instant, (&ind_123))->Ticks() % 864000000000ll;

    if (dayTicks < 0ll)
    {
        dayTicks = dayTicks + 864000000000ll;
    }

    return ::app::Uno::Time::LocalDate__New_5(NULL, LocalDateTime__New_2(NULL, ::app::Uno::Time::Instant__New_1(NULL, (ind_124 = __this->_instant, (&ind_124))->Ticks() - dayTicks), __this->Calendar()));
}

int LocalDateTime__get_Day(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetDayOfMonth(__this->_instant);
}

int LocalDateTime__get_DayOfWeek(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetDayOfWeek(__this->_instant);
}

int LocalDateTime__get_DayOfYear(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetDayOfYear(__this->_instant);
}

::app::Uno::Time::Calendars::Era* LocalDateTime__get_Era(LocalDateTime* __this)
{
    return ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->Eras())->Item< ::app::Uno::Time::Calendars::Era*>(::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetEra(__this->_instant));
}

int LocalDateTime__get_Hour(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetHourOfDay(__this->_instant);
}

::app::Uno::Time::Instant LocalDateTime__get_Instant(LocalDateTime* __this)
{
    return __this->_instant;
}

int LocalDateTime__get_IsoDayOfWeek(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetIsoDayOfWeek(__this->_instant);
}

int LocalDateTime__get_Millisecond(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetMillisecondOfSecond(__this->_instant);
}

int LocalDateTime__get_Minute(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetMinuteOfHour(__this->_instant);
}

int LocalDateTime__get_Month(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetMonthOfYear(__this->_instant);
}

int LocalDateTime__get_Second(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetSecondOfMinute(__this->_instant);
}

::uLong LocalDateTime__get_TickOfDay(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetTickOfDay(__this->_instant);
}

int LocalDateTime__get_TickOfSecond(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetTickOfSecond(__this->_instant);
}

::app::Uno::Time::LocalTime LocalDateTime__get_TimeOfDay(LocalDateTime* __this)
{
    return ::app::Uno::Time::LocalTime__New_5(NULL, __this->TickOfDay());
}

int LocalDateTime__get_WeekOfWeekYear(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetWeekOfWeekYear(__this->_instant);
}

int LocalDateTime__get_WeekYear(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetWeekYear(__this->_instant);
}

int LocalDateTime__get_Year(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetYear(__this->_instant);
}

int LocalDateTime__get_YearOfCentury(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetYearOfCentury(__this->_instant);
}

int LocalDateTime__get_YearOfEra(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetYearOfEra(__this->_instant);
}

int LocalDateTime__GetHashCode(LocalDateTime* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_Instant(NULL, hash, __this->Instant());
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_CalendarSystem(NULL, hash, __this->Calendar());
    return hash;
}

::app::Uno::Time::ZonedDateTime* LocalDateTime__InUtc(LocalDateTime* __this)
{
    return ::app::Uno::Time::ZonedDateTime__New_4(NULL, __this, ::app::Uno::Time::Offset__Zero, ::app::Uno::Time::DateTimeZone__get_Utc(NULL));
}

::app::Uno::Time::ZonedDateTime* LocalDateTime__InZoneStrictly(LocalDateTime* __this, ::app::Uno::Time::DateTimeZone* zone)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_DateTimeZone(NULL, zone, ::uGetConstString("zone"));
    return ::uPtr< ::app::Uno::Time::DateTimeZone*>(zone)->AtStrictly(__this);
}

LocalDateTime* LocalDateTime__Minus(LocalDateTime* __this, ::app::Uno::Time::Period* period)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Period(NULL, period, ::uGetConstString("period"));
    return LocalDateTime__New_2(NULL, __this->_instant, __this->Calendar());
}

LocalDateTime* LocalDateTime__New_1(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit(instant);
    return inst;
}

LocalDateTime* LocalDateTime__New_10(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, ::app::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_9(year, month, day, hour, minute, second, millisecond, tickWithinMillisecond, calendar);
    return inst;
}

LocalDateTime* LocalDateTime__New_2(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_1(instant, calendar);
    return inst;
}

LocalDateTime* LocalDateTime__New_3(::uStatic* __this, int year, int month, int day, int hour, int minute)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_2(year, month, day, hour, minute);
    return inst;
}

LocalDateTime* LocalDateTime__New_4(::uStatic* __this, int year, int month, int day, int hour, int minute, ::app::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_3(year, month, day, hour, minute, calendar);
    return inst;
}

LocalDateTime* LocalDateTime__New_5(::uStatic* __this, int year, int month, int day, int hour, int minute, int second)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_4(year, month, day, hour, minute, second);
    return inst;
}

LocalDateTime* LocalDateTime__New_6(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, ::app::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_5(year, month, day, hour, minute, second, calendar);
    return inst;
}

LocalDateTime* LocalDateTime__New_7(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_6(year, month, day, hour, minute, second, millisecond);
    return inst;
}

LocalDateTime* LocalDateTime__New_8(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, ::app::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_7(year, month, day, hour, minute, second, millisecond, calendar);
    return inst;
}

LocalDateTime* LocalDateTime__New_9(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_8(year, month, day, hour, minute, second, millisecond, tickWithinMillisecond);
    return inst;
}

LocalDateTime* LocalDateTime__Next(LocalDateTime* __this, int targetDayOfWeek)
{
    if (targetDayOfWeek == 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("targetDayOfWeek")));
    }

    int thisDay = __this->IsoDayOfWeek();
    int difference = targetDayOfWeek - thisDay;

    if (difference <= 0)
    {
        difference = difference + 7;
    }

    return __this->PlusDays(difference);
}

LocalDateTime* LocalDateTime__op_Addition(::uStatic* __this, LocalDateTime* localDateTime, ::app::Uno::Time::Period* period)
{
    return ::uPtr< LocalDateTime*>(localDateTime)->Plus(period);
}

bool LocalDateTime__op_Equality(::uStatic* __this, LocalDateTime* left, LocalDateTime* right)
{
    return ::uPtr< LocalDateTime*>(left)->Equals_2(right);
}

bool LocalDateTime__op_GreaterThan(::uStatic* __this, LocalDateTime* lhs, LocalDateTime* rhs)
{
    return ::app::Uno::Time::Instant__op_GreaterThan(NULL, ::uPtr< LocalDateTime*>(lhs)->Instant(), ::uPtr< LocalDateTime*>(rhs)->Instant()) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< LocalDateTime*>(lhs)->Calendar(), (::uObject*)::uPtr< LocalDateTime*>(rhs)->Calendar());
}

bool LocalDateTime__op_GreaterThanOrEqual(::uStatic* __this, LocalDateTime* lhs, LocalDateTime* rhs)
{
    return ::app::Uno::Time::Instant__op_GreaterThanOrEqual(NULL, ::uPtr< LocalDateTime*>(lhs)->Instant(), ::uPtr< LocalDateTime*>(rhs)->Instant()) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< LocalDateTime*>(lhs)->Calendar(), (::uObject*)::uPtr< LocalDateTime*>(rhs)->Calendar());
}

bool LocalDateTime__op_Inequality(::uStatic* __this, LocalDateTime* left, LocalDateTime* right)
{
    return !LocalDateTime__op_Equality(NULL, left, right);
}

bool LocalDateTime__op_LessThan(::uStatic* __this, LocalDateTime* lhs, LocalDateTime* rhs)
{
    return ::app::Uno::Time::Instant__op_LessThan(NULL, ::uPtr< LocalDateTime*>(lhs)->Instant(), ::uPtr< LocalDateTime*>(rhs)->Instant()) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< LocalDateTime*>(lhs)->Calendar(), (::uObject*)::uPtr< LocalDateTime*>(rhs)->Calendar());
}

bool LocalDateTime__op_LessThanOrEqual(::uStatic* __this, LocalDateTime* lhs, LocalDateTime* rhs)
{
    return ::app::Uno::Time::Instant__op_LessThanOrEqual(NULL, ::uPtr< LocalDateTime*>(lhs)->Instant(), ::uPtr< LocalDateTime*>(rhs)->Instant()) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< LocalDateTime*>(lhs)->Calendar(), (::uObject*)::uPtr< LocalDateTime*>(rhs)->Calendar());
}

LocalDateTime* LocalDateTime__op_Subtraction(::uStatic* __this, LocalDateTime* localDateTime, ::app::Uno::Time::Period* period)
{
    return ::uPtr< LocalDateTime*>(localDateTime)->Minus(period);
}

LocalDateTime* LocalDateTime__Plus(LocalDateTime* __this, ::app::Uno::Time::Period* period)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Period(NULL, period, ::uGetConstString("period"));
    return LocalDateTime__New_2(NULL, ::uPtr< ::app::Uno::Time::Period*>(period)->AddTo(__this->_instant, __this->Calendar(), 1), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusDays(LocalDateTime* __this, int days)
{
    ::app::Uno::Time::Instant ind_125 = ::app::Uno::Time::Instant();
    return LocalDateTime__New_2(NULL, (ind_125 = __this->_instant, (&ind_125))->PlusTicks((::uLong)days * 864000000000ll), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusHours(LocalDateTime* __this, ::uLong hours)
{
    ::app::Uno::Time::Instant ind_127 = ::app::Uno::Time::Instant();
    return LocalDateTime__New_2(NULL, (ind_127 = __this->_instant, (&ind_127))->PlusTicks(hours * 36000000000ll), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusMilliseconds(LocalDateTime* __this, ::uLong milliseconds)
{
    ::app::Uno::Time::Instant ind_130 = ::app::Uno::Time::Instant();
    return LocalDateTime__New_2(NULL, (ind_130 = __this->_instant, (&ind_130))->PlusTicks(milliseconds * 10000ll), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusMinutes(LocalDateTime* __this, ::uLong minutes)
{
    ::app::Uno::Time::Instant ind_128 = ::app::Uno::Time::Instant();
    return LocalDateTime__New_2(NULL, (ind_128 = __this->_instant, (&ind_128))->PlusTicks(minutes * 600000000ll), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusMonths(LocalDateTime* __this, int months)
{
    return LocalDateTime__New_2(NULL, ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->_calendar)->AddMonths(__this->_instant, (::uLong)months), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusSeconds(LocalDateTime* __this, ::uLong seconds)
{
    ::app::Uno::Time::Instant ind_129 = ::app::Uno::Time::Instant();
    return LocalDateTime__New_2(NULL, (ind_129 = __this->_instant, (&ind_129))->PlusTicks(seconds * 10000000ll), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusTicks(LocalDateTime* __this, ::uLong ticks)
{
    ::app::Uno::Time::Instant ind_131 = ::app::Uno::Time::Instant();
    return LocalDateTime__New_2(NULL, (ind_131 = __this->_instant, (&ind_131))->PlusTicks(ticks), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusWeeks(LocalDateTime* __this, int weeks)
{
    ::app::Uno::Time::Instant ind_126 = ::app::Uno::Time::Instant();
    return LocalDateTime__New_2(NULL, (ind_126 = __this->_instant, (&ind_126))->PlusTicks((::uLong)weeks * 6048000000000ll), __this->Calendar());
}

LocalDateTime* LocalDateTime__PlusYears(LocalDateTime* __this, int years)
{
    return LocalDateTime__New_2(NULL, ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->_calendar)->AddYears(__this->_instant, (::uLong)years), __this->Calendar());
}

LocalDateTime* LocalDateTime__Previous(LocalDateTime* __this, int targetDayOfWeek)
{
    if (targetDayOfWeek == 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("targetDayOfWeek")));
    }

    int thisDay = __this->IsoDayOfWeek();
    int difference = targetDayOfWeek - thisDay;

    if (difference >= 0)
    {
        difference = difference - 7;
    }

    return __this->PlusDays(difference);
}

LocalDateTime* LocalDateTime__Subtract(::uStatic* __this, LocalDateTime* localDateTime, ::app::Uno::Time::Period* period)
{
    return ::uPtr< LocalDateTime*>(localDateTime)->Minus(period);
}

::uString* LocalDateTime__ToString(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern*>(::app::Uno::Time::Text::LocalDateTimePattern__get_GeneralIsoPattern(NULL))->Format(__this);
}

LocalDateTime* LocalDateTime__WithCalendar(LocalDateTime* __this, ::app::Uno::Time::CalendarSystem* calendarSystem)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendarSystem, ::uGetConstString("calendarSystem"));
    return LocalDateTime__New_2(NULL, __this->_instant, calendarSystem);
}

::app::Uno::Time::OffsetDateTime* LocalDateTime__WithOffset(LocalDateTime* __this, ::app::Uno::Time::Offset offset)
{
    return ::app::Uno::Time::OffsetDateTime__New_1(NULL, __this, offset);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LocalTime LocalTime__Midnight;
LocalTime LocalTime__Noon;

LocalTime__uType* LocalTime__typeof()
{
    static ::uStaticStrong<LocalTime__uType*> type;
    if (type != NULL) return type;

    type = (LocalTime__uType*)::uAllocStructType(sizeof(LocalTime__uType), "Uno.Time.LocalTime", sizeof(LocalTime), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))LocalTime__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))LocalTime__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))LocalTime__ToString;

    type->SetFields(3,
        ::uNewField("_ticks", NULL, offsetof(LocalTime, _ticks), ::app::Uno::Long__typeof()),
        ::uNewField("Midnight", &LocalTime__Midnight, 0, LocalTime__typeof()),
        ::uNewField("Noon", &LocalTime__Noon, 0, LocalTime__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_Hour", LocalTime__get_Hour, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_LocalDateTime", LocalTime__get_LocalDateTime, 0, false, ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewFunction("get_Millisecond", LocalTime__get_Millisecond, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Minute", LocalTime__get_Minute, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Second", LocalTime__get_Second, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TickOfDay", LocalTime__get_TickOfDay, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction(".ctor", LocalTime__New_2, 0, true, LocalTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", LocalTime__New_3, 0, true, LocalTime__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void LocalTime___ObjInit_1(LocalTime* __this, int hour, int minute, int second)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("hour"), hour, 0, 23);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("minute"), minute, 0, 59);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("second"), second, 0, 59);
    __this->_ticks = (((::uLong)hour * 36000000000ll) + ((::uLong)minute * 600000000ll)) + ((::uLong)second * 10000000ll);
}

void LocalTime___ObjInit_2(LocalTime* __this, int hour, int minute, int second, int millisecond)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("hour"), hour, 0, 23);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("minute"), minute, 0, 59);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("second"), second, 0, 59);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("millisecond"), millisecond, 0, 999);
    __this->_ticks = ((((::uLong)hour * 36000000000ll) + ((::uLong)minute * 600000000ll)) + ((::uLong)second * 10000000ll)) + ((::uLong)millisecond * 10000ll);
}

void LocalTime___ObjInit_4(LocalTime* __this, ::uLong ticks)
{
    __this->_ticks = ticks;
}

void LocalTime___TypeInit(::uStatic* __this)
{
    LocalTime__Midnight = LocalTime__New_2(NULL, 0, 0, 0);
    LocalTime__Noon = LocalTime__New_2(NULL, 12, 0, 0);
}

bool LocalTime__Equals(LocalTime* __this, ::uObject* obj)
{
    if (::uIs(obj, LocalTime__typeof()))
    {
        return LocalTime__op_Equality(NULL, *__this, ::uUnbox< LocalTime>(LocalTime__typeof(), obj));
    }

    return false;
}

int LocalTime__get_Hour(LocalTime* __this)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetHourOfDayFromTickOfDay(NULL, __this->_ticks);
}

::app::Uno::Time::LocalDateTime* LocalTime__get_LocalDateTime(LocalTime* __this)
{
    return ::app::Uno::Time::LocalDateTime__New_1(NULL, ::app::Uno::Time::Instant__New_1(NULL, __this->_ticks));
}

int LocalTime__get_Millisecond(LocalTime* __this)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMillisecondOfSecondFromTickOfDay(NULL, __this->_ticks);
}

int LocalTime__get_Minute(LocalTime* __this)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay(NULL, __this->_ticks);
}

int LocalTime__get_Second(LocalTime* __this)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay(NULL, __this->_ticks);
}

::uLong LocalTime__get_TickOfDay(LocalTime* __this)
{
    return __this->_ticks;
}

int LocalTime__GetHashCode(LocalTime* __this)
{
    ::uLong ticks = __this->_ticks;
    return ::app::Uno::Long::GetHashCode(ticks);
}

LocalTime LocalTime__New_2(::uStatic* __this, int hour, int minute, int second)
{
    LocalTime inst = ::uDefault< LocalTime>();
    inst._ObjInit_1(hour, minute, second);
    return inst;
}

LocalTime LocalTime__New_3(::uStatic* __this, int hour, int minute, int second, int millisecond)
{
    LocalTime inst = ::uDefault< LocalTime>();
    inst._ObjInit_2(hour, minute, second, millisecond);
    return inst;
}

LocalTime LocalTime__New_5(::uStatic* __this, ::uLong ticks)
{
    LocalTime inst = ::uDefault< LocalTime>();
    inst._ObjInit_4(ticks);
    return inst;
}

bool LocalTime__op_Equality(::uStatic* __this, LocalTime lhs, LocalTime rhs)
{
    return lhs._ticks == rhs._ticks;
}

::uString* LocalTime__ToString(LocalTime* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalTimePattern*>(::app::Uno::Time::Text::LocalTimePattern__get_GeneralIsoPattern(NULL))->Format(*__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Offset Offset__MaxValue;
Offset Offset__MinValue;
Offset Offset__Zero;

Offset__uType* Offset__typeof()
{
    static ::uStaticStrong<Offset__uType*> type;
    if (type != NULL) return type;

    type = (Offset__uType*)::uAllocStructType(sizeof(Offset__uType), "Uno.Time.Offset", sizeof(Offset), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Offset__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Offset__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Offset__ToString;

    type->SetFields(4,
        ::uNewField("_milliseconds", NULL, offsetof(Offset, _milliseconds), ::app::Uno::Int__typeof()),
        ::uNewField("MaxValue", &Offset__MaxValue, 0, Offset__typeof()),
        ::uNewField("MinValue", &Offset__MinValue, 0, Offset__typeof()),
        ::uNewField("Zero", &Offset__Zero, 0, Offset__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("Equals", Offset__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Offset__typeof()),
        ::uNewFunction("FromHours", Offset__FromHours, 0, true, Offset__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("FromHoursAndMinutes", Offset__FromHoursAndMinutes, 0, true, Offset__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("FromMilliseconds", Offset__FromMilliseconds, 0, true, Offset__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("FromTicks", Offset__FromTicks, 0, true, Offset__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Milliseconds", Offset__get_Milliseconds, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Ticks", Offset__get_Ticks, 0, false, ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Offset___ObjInit(Offset* __this, int milliseconds)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("milliseconds"), milliseconds, -86399999, 86399999);
    __this->_milliseconds = milliseconds;
}

void Offset___TypeInit(::uStatic* __this)
{
    Offset__Zero = Offset__FromMilliseconds(NULL, 0);
    Offset__MinValue = Offset__FromMilliseconds(NULL, -86399999);
    Offset__MaxValue = Offset__FromMilliseconds(NULL, 86399999);
}

bool Offset__Equals(Offset* __this, ::uObject* obj)
{
    if (::uIs(obj, Offset__typeof()))
    {
        return __this->Equals_2(::uUnbox< Offset>(Offset__typeof(), obj));
    }

    return false;
}

bool Offset__Equals_2(Offset* __this, Offset other)
{
    return __this->Milliseconds() == other.Milliseconds();
}

Offset Offset__FromHours(::uStatic* __this, int hours)
{
    return Offset__New_1(NULL, hours * 3600000);
}

Offset Offset__FromHoursAndMinutes(::uStatic* __this, int hours, int minutes)
{
    return Offset__New_1(NULL, (hours * 3600000) + (minutes * 60000));
}

Offset Offset__FromMilliseconds(::uStatic* __this, int milliseconds)
{
    return Offset__New_1(NULL, milliseconds);
}

Offset Offset__FromTicks(::uStatic* __this, ::uLong ticks)
{
    return Offset__New_1(NULL, (int)(ticks / 10000ll));
}

int Offset__get_Milliseconds(Offset* __this)
{
    return __this->_milliseconds;
}

::uLong Offset__get_Ticks(Offset* __this)
{
    return (::uLong)__this->Milliseconds() * 10000ll;
}

int Offset__GetHashCode(Offset* __this)
{
    return ::app::Uno::Int::GetHashCode(__this->Milliseconds());
}

Offset Offset__New_1(::uStatic* __this, int milliseconds)
{
    Offset inst = ::uDefault< Offset>();
    inst._ObjInit(milliseconds);
    return inst;
}

bool Offset__op_Equality(::uStatic* __this, Offset left, Offset right)
{
    return ::app::Uno::Int::Equals(left.Milliseconds(), ::uBox< int>(::app::Uno::Int__typeof(), right.Milliseconds()));
}

::uString* Offset__ToString(Offset* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::OffsetPattern*>(::app::Uno::Time::Text::OffsetPattern__get_GeneralIsoPattern(NULL))->Format(*__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OffsetDateTime__uType* OffsetDateTime__typeof()
{
    static ::uStaticStrong<OffsetDateTime__uType*> type;
    if (type != NULL) return type;

    type = (OffsetDateTime__uType*)::uAllocClassType(sizeof(OffsetDateTime__uType), "Uno.Time.OffsetDateTime", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))OffsetDateTime__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))OffsetDateTime__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))OffsetDateTime__ToString;

    type->SetStrongRefs(
        "_localDateTime", offsetof(OffsetDateTime, _localDateTime));

    type->SetFields(2,
        ::uNewField("_localDateTime", NULL, offsetof(OffsetDateTime, _localDateTime), ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewField("_offset", NULL, offsetof(OffsetDateTime, _offset), ::app::Uno::Time::Offset__typeof()));

    type->SetFunctions(28,
        ::uNewFunction("Equals", OffsetDateTime__Equals_2, 0, false, ::app::Uno::Bool__typeof(), OffsetDateTime__typeof()),
        ::uNewFunction("get_Calendar", OffsetDateTime__get_Calendar, 0, false, ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction("get_ClockHourOfHalfDay", OffsetDateTime__get_ClockHourOfHalfDay, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Date", OffsetDateTime__get_Date, 0, false, ::app::Uno::Time::LocalDate__typeof()),
        ::uNewFunction("get_Day", OffsetDateTime__get_Day, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_DayOfWeek", OffsetDateTime__get_DayOfWeek, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_DayOfYear", OffsetDateTime__get_DayOfYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Era", OffsetDateTime__get_Era, 0, false, ::app::Uno::Time::Calendars::Era__typeof()),
        ::uNewFunction("get_Hour", OffsetDateTime__get_Hour, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_IsoDayOfWeek", OffsetDateTime__get_IsoDayOfWeek, 0, false, ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("get_LocalDateTime", OffsetDateTime__get_LocalDateTime, 0, false, ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewFunction("get_Millisecond", OffsetDateTime__get_Millisecond, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Minute", OffsetDateTime__get_Minute, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Month", OffsetDateTime__get_Month, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Offset", OffsetDateTime__get_Offset, 0, false, ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("get_Second", OffsetDateTime__get_Second, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TickOfDay", OffsetDateTime__get_TickOfDay, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_TickOfSecond", OffsetDateTime__get_TickOfSecond, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TimeOfDay", OffsetDateTime__get_TimeOfDay, 0, false, ::app::Uno::Time::LocalTime__typeof()),
        ::uNewFunction("get_WeekOfWeekYear", OffsetDateTime__get_WeekOfWeekYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_WeekYear", OffsetDateTime__get_WeekYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Year", OffsetDateTime__get_Year, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_YearOfCentury", OffsetDateTime__get_YearOfCentury, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_YearOfEra", OffsetDateTime__get_YearOfEra, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("InFixedZone", OffsetDateTime__InFixedZone, 0, false, ::app::Uno::Time::ZonedDateTime__typeof()),
        ::uNewFunction(".ctor", OffsetDateTime__New_1, 0, true, OffsetDateTime__typeof(), ::app::Uno::Time::LocalDateTime__typeof(), ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("ToInstant", OffsetDateTime__ToInstant, 0, false, ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("WithOffset", OffsetDateTime__WithOffset, 0, false, OffsetDateTime__typeof(), ::app::Uno::Time::Offset__typeof()));

    ::uRegisterType(type);
    return type;
}

void OffsetDateTime___ObjInit(OffsetDateTime* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset)
{
    __this->_localDateTime = localDateTime;
    __this->_offset = offset;
}

bool OffsetDateTime__Equals(OffsetDateTime* __this, ::uObject* obj)
{
    if (::uIs(obj, OffsetDateTime__typeof()))
    {
        return OffsetDateTime__op_Equality(NULL, __this, ::uCast< OffsetDateTime*>(obj, OffsetDateTime__typeof()));
    }

    return false;
}

bool OffsetDateTime__Equals_2(OffsetDateTime* __this, OffsetDateTime* other)
{
    return ::app::Uno::Time::LocalDateTime__op_Equality(NULL, __this->_localDateTime, ::uPtr< OffsetDateTime*>(other)->_localDateTime) && ::app::Uno::Time::Offset__op_Equality(NULL, __this->_offset, ::uPtr< OffsetDateTime*>(other)->_offset);
}

::app::Uno::Time::CalendarSystem* OffsetDateTime__get_Calendar(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Calendar();
}

int OffsetDateTime__get_ClockHourOfHalfDay(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->ClockHourOfHalfDay();
}

::app::Uno::Time::LocalDate* OffsetDateTime__get_Date(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Date();
}

int OffsetDateTime__get_Day(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Day();
}

int OffsetDateTime__get_DayOfWeek(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->DayOfWeek();
}

int OffsetDateTime__get_DayOfYear(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->DayOfYear();
}

::app::Uno::Time::Calendars::Era* OffsetDateTime__get_Era(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Era();
}

int OffsetDateTime__get_Hour(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Hour();
}

int OffsetDateTime__get_IsoDayOfWeek(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->IsoDayOfWeek();
}

::app::Uno::Time::LocalDateTime* OffsetDateTime__get_LocalDateTime(OffsetDateTime* __this)
{
    return __this->_localDateTime;
}

int OffsetDateTime__get_Millisecond(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Millisecond();
}

int OffsetDateTime__get_Minute(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Minute();
}

int OffsetDateTime__get_Month(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Month();
}

::app::Uno::Time::Offset OffsetDateTime__get_Offset(OffsetDateTime* __this)
{
    return __this->_offset;
}

int OffsetDateTime__get_Second(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Second();
}

::uLong OffsetDateTime__get_TickOfDay(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->TickOfDay();
}

int OffsetDateTime__get_TickOfSecond(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->TickOfSecond();
}

::app::Uno::Time::LocalTime OffsetDateTime__get_TimeOfDay(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->TimeOfDay();
}

int OffsetDateTime__get_WeekOfWeekYear(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->WeekOfWeekYear();
}

int OffsetDateTime__get_WeekYear(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->WeekYear();
}

int OffsetDateTime__get_Year(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Year();
}

int OffsetDateTime__get_YearOfCentury(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->YearOfCentury();
}

int OffsetDateTime__get_YearOfEra(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->YearOfEra();
}

int OffsetDateTime__GetHashCode(OffsetDateTime* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_LocalDateTime(NULL, hash, __this->_localDateTime);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_Offset(NULL, hash, __this->_offset);
    return hash;
}

::app::Uno::Time::ZonedDateTime* OffsetDateTime__InFixedZone(OffsetDateTime* __this)
{
    return ::app::Uno::Time::ZonedDateTime__New_4(NULL, __this->_localDateTime, __this->_offset, ::app::Uno::Time::DateTimeZone__ForOffset(NULL, __this->_offset));
}

OffsetDateTime* OffsetDateTime__New_1(::uStatic* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset)
{
    OffsetDateTime* inst = (OffsetDateTime*)::uAllocObject(sizeof(OffsetDateTime), OffsetDateTime__typeof());
    inst->_ObjInit(localDateTime, offset);
    return inst;
}

bool OffsetDateTime__op_Equality(::uStatic* __this, OffsetDateTime* left, OffsetDateTime* right)
{
    return ::uPtr< OffsetDateTime*>(left)->Equals_2(right);
}

bool OffsetDateTime__op_Inequality(::uStatic* __this, OffsetDateTime* left, OffsetDateTime* right)
{
    return !OffsetDateTime__op_Equality(NULL, left, right);
}

::app::Uno::Time::Instant OffsetDateTime__ToInstant(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Instant().Minus_2(__this->_offset);
}

::uString* OffsetDateTime__ToString(OffsetDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::OffsetDateTimePattern*>(::app::Uno::Time::Text::OffsetDateTimePattern__get_GeneralIsoPattern(NULL))->Format(__this);
}

OffsetDateTime* OffsetDateTime__WithOffset(OffsetDateTime* __this, ::app::Uno::Time::Offset offset)
{
    ::app::Uno::Time::LocalDateTime* newLocalDateTime = ::app::Uno::Time::LocalDateTime__New_2(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->LocalDateTime())->Instant().Minus_2(__this->Offset()).Plus_1(offset), __this->Calendar());
    return OffsetDateTime__New_1(NULL, newLocalDateTime, offset);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Period*> Period__Zero;

Period__uType* Period__typeof()
{
    static ::uStaticStrong<Period__uType*> type;
    if (type != NULL) return type;

    type = (Period__uType*)::uAllocClassType(sizeof(Period__uType), "Uno.Time.Period", false, 0, 0, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Period__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))Period__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))Period__ToString;

    type->SetFields(10,
        ::uNewField("_days", NULL, offsetof(Period, _days), ::app::Uno::Long__typeof()),
        ::uNewField("_hours", NULL, offsetof(Period, _hours), ::app::Uno::Long__typeof()),
        ::uNewField("_milliseconds", NULL, offsetof(Period, _milliseconds), ::app::Uno::Long__typeof()),
        ::uNewField("_minutes", NULL, offsetof(Period, _minutes), ::app::Uno::Long__typeof()),
        ::uNewField("_months", NULL, offsetof(Period, _months), ::app::Uno::Long__typeof()),
        ::uNewField("_seconds", NULL, offsetof(Period, _seconds), ::app::Uno::Long__typeof()),
        ::uNewField("_ticks", NULL, offsetof(Period, _ticks), ::app::Uno::Long__typeof()),
        ::uNewField("_weeks", NULL, offsetof(Period, _weeks), ::app::Uno::Long__typeof()),
        ::uNewField("_years", NULL, offsetof(Period, _years), ::app::Uno::Long__typeof()),
        ::uNewField("Zero", &Period__Zero, 0, Period__typeof()));

    type->SetFunctions(32,
        ::uNewFunction("Add", Period__Add, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("AddTo", Period__AddTo, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::CalendarSystem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("AddValuesTo", Period__AddValuesTo, 0, false, ::uGetArrayType(::app::Uno::Long__typeof())),
        ::uNewFunction("Between", Period__Between, 0, true, Period__typeof(), ::app::Uno::Time::LocalDate__typeof(), ::app::Uno::Time::LocalDate__typeof()),
        ::uNewFunction("Between", Period__Between_1, 0, true, Period__typeof(), ::app::Uno::Time::LocalDateTime__typeof(), ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewFunction("Between", Period__Between_2, 0, true, Period__typeof(), ::app::Uno::Time::LocalTime__typeof(), ::app::Uno::Time::LocalTime__typeof()),
        ::uNewFunction("Equals", Period__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Period__typeof()),
        ::uNewFunction("FromDays", Period__FromDays, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FromHours", Period__FromHours, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FromMilliseconds", Period__FromMilliseconds, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FromMinutes", Period__FromMinutes, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FromMonths", Period__FromMonths, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FromSeconds", Period__FromSeconds, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FromTicks", Period__FromTicks, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FromWeeks", Period__FromWeeks, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FromYears", Period__FromYears, 0, true, Period__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Days", Period__get_Days, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_HasDateComponent", Period__get_HasDateComponent, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HasTimeComponent", Period__get_HasTimeComponent, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Hours", Period__get_Hours, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Milliseconds", Period__get_Milliseconds, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Minutes", Period__get_Minutes, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Months", Period__get_Months, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Seconds", Period__get_Seconds, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Ticks", Period__get_Ticks, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_TotalStandardTicks", Period__get_TotalStandardTicks, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Weeks", Period__get_Weeks, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Years", Period__get_Years, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("Subtract", Period__Subtract, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("SubtractValuesFrom", Period__SubtractValuesFrom, 0, false, ::uGetArrayType(::app::Uno::Long__typeof())),
        ::uNewFunction("ToArray", Period__ToArray, 0, false, ::uGetArrayType(::app::Uno::Long__typeof())),
        ::uNewFunction("ToDuration", Period__ToDuration, 0, false, ::app::Uno::Time::Duration__typeof()));

    ::uRegisterType(type);
    return type;
}

void Period___ObjInit(Period* __this, ::uArray* values)
{
    __this->_years = ::uPtr< ::uArray*>(values)->Item< ::uLong>(0);
    __this->_months = values->Item< ::uLong>(1);
    __this->_weeks = values->Item< ::uLong>(2);
    __this->_days = values->Item< ::uLong>(3);
    __this->_hours = values->Item< ::uLong>(4);
    __this->_minutes = values->Item< ::uLong>(5);
    __this->_seconds = values->Item< ::uLong>(6);
    __this->_milliseconds = values->Item< ::uLong>(7);
    __this->_ticks = values->Item< ::uLong>(8);
}

void Period___ObjInit_1(Period* __this, ::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks)
{
    __this->_years = years;
    __this->_months = months;
    __this->_weeks = weeks;
    __this->_days = days;
    __this->_hours = hours;
    __this->_minutes = minutes;
    __this->_seconds = seconds;
    __this->_milliseconds = milliseconds;
    __this->_ticks = ticks;
}

void Period___TypeInit(::uStatic* __this)
{
    Period__Zero = Period__New_2(NULL, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll);
}

::app::Uno::Time::Instant Period__Add(Period* __this, ::app::Uno::Time::Instant instant, ::uLong ticks)
{
    ::uLong newTicks = instant.Ticks() + ticks;

    if (newTicks < instant.Ticks())
    {
        U_THROW(::app::Uno::OverflowException__New_3(NULL, ::uGetConstString("Period addition overflowed.")));
    }

    return ::app::Uno::Time::Instant__New_1(NULL, newTicks);
}

::app::Uno::Time::Instant Period__AddTo(Period* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar, int scalar)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar"));
    ::app::Uno::Time::Instant result = instant;

    if (__this->_years != 0ll)
    {
        result = ::uPtr< ::app::Uno::Time::CalendarSystem*>(calendar)->AddYears(instant, __this->_years * (::uLong)scalar);
    }

    if (__this->_months != 0ll)
    {
        result = calendar->AddMonths(result, __this->_months * (::uLong)scalar);
    }

    if (__this->_weeks != 0ll)
    {
        result = result.PlusTicks((__this->_weeks * (::uLong)scalar) * 6048000000000ll);
    }

    if (__this->_days != 0ll)
    {
        result = result.PlusTicks((__this->_days * (::uLong)scalar) * 864000000000ll);
    }

    if (__this->_hours != 0ll)
    {
        result = result.PlusTicks((__this->_hours * (::uLong)scalar) * 36000000000ll);
    }

    if (__this->_minutes != 0ll)
    {
        result = result.PlusTicks((__this->_minutes * (::uLong)scalar) * 600000000ll);
    }

    if (__this->_seconds != 0ll)
    {
        result = result.PlusTicks((__this->_seconds * (::uLong)scalar) * 10000000ll);
    }

    if (__this->_milliseconds != 0ll)
    {
        result = result.PlusTicks((__this->_milliseconds * (::uLong)scalar) * 10000ll);
    }

    if (__this->_ticks != 0ll)
    {
        result = result.PlusTicks(__this->_ticks * (::uLong)scalar);
    }

    return result;
}

void Period__AddValuesTo(Period* __this, ::uArray* values)
{
    ::uPtr< ::uArray*>(values)->Item< ::uLong>(0) = ::uPtr< ::uArray*>(values)->Item< ::uLong>(0) + __this->_years;
    values->Item< ::uLong>(1) = values->Item< ::uLong>(1) + __this->_months;
    values->Item< ::uLong>(2) = values->Item< ::uLong>(2) + __this->_weeks;
    values->Item< ::uLong>(3) = values->Item< ::uLong>(3) + __this->_days;
    values->Item< ::uLong>(4) = values->Item< ::uLong>(4) + __this->_hours;
    values->Item< ::uLong>(5) = values->Item< ::uLong>(5) + __this->_minutes;
    values->Item< ::uLong>(6) = values->Item< ::uLong>(6) + __this->_seconds;
    values->Item< ::uLong>(7) = values->Item< ::uLong>(7) + __this->_milliseconds;
    values->Item< ::uLong>(8) = values->Item< ::uLong>(8) + __this->_ticks;
}

Period* Period__Between(::uStatic* __this, ::app::Uno::Time::LocalDate* start, ::app::Uno::Time::LocalDate* end)
{
    return Period__Between_1(NULL, ::uPtr< ::app::Uno::Time::LocalDate*>(start)->AtMidnight(), ::uPtr< ::app::Uno::Time::LocalDate*>(end)->AtMidnight());
}

Period* Period__Between_1(::uStatic* __this, ::app::Uno::Time::LocalDateTime* start, ::app::Uno::Time::LocalDateTime* end)
{
    ::app::Uno::Time::CalendarSystem* calendar = ::uPtr< ::app::Uno::Time::LocalDateTime*>(start)->Calendar();
    ::app::Uno::Time::Preconditions__CheckArgument(NULL, ::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::CalendarSystem*>(calendar), (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(end)->Calendar()), ::uGetConstString("end"), ::uGetConstString("start and end must use the same calendar system"));
    ::app::Uno::Time::Instant startInstant = start->Instant();
    ::app::Uno::Time::Instant endInstant = end->Instant();

    if (::app::Uno::Time::Instant__op_Equality(NULL, startInstant, endInstant))
    {
        return Period__Zero;
    }

    ::app::Uno::Time::Instant remaining = startInstant;
    ::uLong years = calendar->YearDifference(endInstant, remaining);
    remaining = calendar->AddYears(remaining, years);
    ::uLong months = calendar->MonthDifference(endInstant, remaining);
    remaining = calendar->AddMonths(remaining, months);
    ::uLong remainingTicks = endInstant.Ticks() - remaining.Ticks();
    ::uLong days = remainingTicks / 864000000000ll;
    remainingTicks = remainingTicks % 864000000000ll;
    ::uLong hours = remainingTicks / 36000000000ll;
    remainingTicks = remainingTicks % 36000000000ll;
    ::uLong minutes = remainingTicks / 600000000ll;
    remainingTicks = remainingTicks % 600000000ll;
    ::uLong seconds = remainingTicks / 10000000ll;
    remainingTicks = remainingTicks % 10000000ll;
    ::uLong milliseconds = remainingTicks / 10000ll;
    remainingTicks = remainingTicks % 10000ll;
    return Period__New_2(NULL, years, months, 0ll, days, hours, minutes, seconds, milliseconds, remainingTicks);
}

Period* Period__Between_2(::uStatic* __this, ::app::Uno::Time::LocalTime start, ::app::Uno::Time::LocalTime end)
{
    return Period__Between_1(NULL, start.LocalDateTime(), end.LocalDateTime());
}

bool Period__Equals(Period* __this, ::uObject* other)
{
    return __this->Equals_2(::uAs< Period*>(other, Period__typeof()));
}

bool Period__Equals_2(Period* __this, Period* other)
{
    if (other == NULL)
    {
        return false;
    }

    return ((((((((__this->_years == ::uPtr< Period*>(other)->_years) && (__this->_months == ::uPtr< Period*>(other)->_months)) && (__this->_weeks == ::uPtr< Period*>(other)->_weeks)) && (__this->_days == ::uPtr< Period*>(other)->_days)) && (__this->_hours == ::uPtr< Period*>(other)->_hours)) && (__this->_minutes == ::uPtr< Period*>(other)->_minutes)) && (__this->_seconds == ::uPtr< Period*>(other)->_seconds)) && (__this->_milliseconds == ::uPtr< Period*>(other)->_milliseconds)) && (__this->_ticks == ::uPtr< Period*>(other)->_ticks);
}

Period* Period__FromDays(::uStatic* __this, ::uLong days)
{
    return Period__New_2(NULL, 0ll, 0ll, 0ll, days, 0ll, 0ll, 0ll, 0ll, 0ll);
}

Period* Period__FromHours(::uStatic* __this, ::uLong hours)
{
    return Period__New_2(NULL, 0ll, 0ll, 0ll, 0ll, hours, 0ll, 0ll, 0ll, 0ll);
}

Period* Period__FromMilliseconds(::uStatic* __this, ::uLong milliseconds)
{
    return Period__New_2(NULL, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, milliseconds, 0ll);
}

Period* Period__FromMinutes(::uStatic* __this, ::uLong minutes)
{
    return Period__New_2(NULL, 0ll, 0ll, 0ll, 0ll, 0ll, minutes, 0ll, 0ll, 0ll);
}

Period* Period__FromMonths(::uStatic* __this, ::uLong months)
{
    return Period__New_2(NULL, 0ll, months, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll);
}

Period* Period__FromSeconds(::uStatic* __this, ::uLong seconds)
{
    return Period__New_2(NULL, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, seconds, 0ll, 0ll);
}

Period* Period__FromTicks(::uStatic* __this, ::uLong ticks)
{
    return Period__New_2(NULL, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, ticks);
}

Period* Period__FromWeeks(::uStatic* __this, ::uLong weeks)
{
    return Period__New_2(NULL, 0ll, 0ll, weeks, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll);
}

Period* Period__FromYears(::uStatic* __this, ::uLong years)
{
    return Period__New_2(NULL, years, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll);
}

::uLong Period__get_Days(Period* __this)
{
    return __this->_days;
}

bool Period__get_HasDateComponent(Period* __this)
{
    return (((__this->_years != 0ll) || (__this->_months != 0ll)) || (__this->_weeks != 0ll)) || (__this->_days != 0ll);
}

bool Period__get_HasTimeComponent(Period* __this)
{
    return ((((__this->_hours != 0ll) || (__this->_minutes != 0ll)) || (__this->_seconds != 0ll)) || (__this->_milliseconds != 0ll)) || (__this->_ticks != 0ll);
}

::uLong Period__get_Hours(Period* __this)
{
    return __this->_hours;
}

::uLong Period__get_Milliseconds(Period* __this)
{
    return __this->_milliseconds;
}

::uLong Period__get_Minutes(Period* __this)
{
    return __this->_minutes;
}

::uLong Period__get_Months(Period* __this)
{
    return __this->_months;
}

::uLong Period__get_Seconds(Period* __this)
{
    return __this->_seconds;
}

::uLong Period__get_Ticks(Period* __this)
{
    return __this->_ticks;
}

::uLong Period__get_TotalStandardTicks(Period* __this)
{
    return (((((__this->_ticks + (__this->_milliseconds * 10000ll)) + (__this->_seconds * 10000000ll)) + (__this->_minutes * 600000000ll)) + (__this->_hours * 36000000000ll)) + (__this->_days * 864000000000ll)) + (__this->_weeks * 6048000000000ll);
}

::uLong Period__get_Weeks(Period* __this)
{
    return __this->_weeks;
}

::uLong Period__get_Years(Period* __this)
{
    return __this->_years;
}

int Period__GetHashCode(Period* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_years);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_months);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_weeks);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_days);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_hours);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_minutes);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_seconds);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_milliseconds);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_ticks);
    return hash;
}

Period* Period__New_1(::uStatic* __this, ::uArray* values)
{
    Period* inst = (Period*)::uAllocObject(sizeof(Period), Period__typeof());
    inst->_ObjInit(values);
    return inst;
}

Period* Period__New_2(::uStatic* __this, ::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks)
{
    Period* inst = (Period*)::uAllocObject(sizeof(Period), Period__typeof());
    inst->_ObjInit_1(years, months, weeks, days, hours, minutes, seconds, milliseconds, ticks);
    return inst;
}

Period* Period__op_Addition(::uStatic* __this, Period* left, Period* right)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Period(NULL, left, ::uGetConstString("left"));
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Period(NULL, right, ::uGetConstString("right"));
    ::uArray* sum = ::uPtr< Period*>(left)->ToArray();
    ::uPtr< Period*>(right)->AddValuesTo(sum);
    return Period__New_1(NULL, sum);
}

Period* Period__op_Subtraction(::uStatic* __this, Period* minuend, Period* subtrahend)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Period(NULL, minuend, ::uGetConstString("minuend"));
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Period(NULL, subtrahend, ::uGetConstString("subtrahend"));
    ::uArray* sum = ::uPtr< Period*>(minuend)->ToArray();
    ::uPtr< Period*>(subtrahend)->SubtractValuesFrom(sum);
    return Period__New_1(NULL, sum);
}

::uLong Period__Subtract(Period* __this, ::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant, ::uLong ticksPerUnit)
{
    return (minuendInstant.Ticks() - subtrahendInstant.Ticks()) / ticksPerUnit;
}

void Period__SubtractValuesFrom(Period* __this, ::uArray* values)
{
    ::uPtr< ::uArray*>(values)->Item< ::uLong>(0) = ::uPtr< ::uArray*>(values)->Item< ::uLong>(0) - __this->_years;
    values->Item< ::uLong>(1) = values->Item< ::uLong>(1) - __this->_months;
    values->Item< ::uLong>(2) = values->Item< ::uLong>(2) - __this->_weeks;
    values->Item< ::uLong>(3) = values->Item< ::uLong>(3) - __this->_days;
    values->Item< ::uLong>(4) = values->Item< ::uLong>(4) - __this->_hours;
    values->Item< ::uLong>(5) = values->Item< ::uLong>(5) - __this->_minutes;
    values->Item< ::uLong>(6) = values->Item< ::uLong>(6) - __this->_seconds;
    values->Item< ::uLong>(7) = values->Item< ::uLong>(7) - __this->_milliseconds;
    values->Item< ::uLong>(8) = values->Item< ::uLong>(8) - __this->_ticks;
}

::uArray* Period__ToArray(Period* __this)
{
    ::uArray* values = ::uNewArray(::app::Uno::Long__typeof(), 9);
    values->Item< ::uLong>(0) = __this->_years;
    values->Item< ::uLong>(1) = __this->_months;
    values->Item< ::uLong>(2) = __this->_weeks;
    values->Item< ::uLong>(3) = __this->_days;
    values->Item< ::uLong>(4) = __this->_hours;
    values->Item< ::uLong>(5) = __this->_minutes;
    values->Item< ::uLong>(6) = __this->_seconds;
    values->Item< ::uLong>(7) = __this->_milliseconds;
    values->Item< ::uLong>(8) = __this->_ticks;
    return values;
}

::app::Uno::Time::Duration Period__ToDuration(Period* __this)
{
    if ((__this->Months() != 0ll) || (__this->Years() != 0ll))
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Cannot construct duration of period with non-zero months or years.")));
    }

    return ::app::Uno::Time::Duration__FromTicks(NULL, __this->TotalStandardTicks());
}

::uString* Period__ToString(Period* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    ::uArray* array_125;
    ::uArray* array_126;
    ::uArray* array_127;
    ::uArray* array_128;
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::uGetConstString("P"));

    if (__this->_years != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}Y"), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_years), array_123)));
    }

    if (__this->_months != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}M"), (array_124 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_months), array_124)));
    }

    if (__this->_weeks != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}W"), (array_125 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_weeks), array_125)));
    }

    if (__this->_days != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}D"), (array_126 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_days), array_126)));
    }

    if (__this->HasTimeComponent())
    {
        sb->Append_1(::uGetConstString("T"));
    }

    if (__this->_hours != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}H"), (array_127 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_hours), array_127)));
    }

    if (__this->_minutes != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}M"), (array_128 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_minutes), array_128)));
    }

    if (__this->_seconds != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}S"), (array_129 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_seconds), array_129)));
    }

    if (__this->_milliseconds != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}s"), (array_130 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_milliseconds), array_130)));
    }

    if (__this->_ticks != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}t"), (array_131 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_ticks), array_131)));
    }

    return sb->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Preconditions__uType* Preconditions__typeof()
{
    static ::uStaticStrong<Preconditions__uType*> type;
    if (type != NULL) return type;

    type = (Preconditions__uType*)::uAllocClassType(sizeof(Preconditions__uType), "Uno.Time.Preconditions");

    type->SetFunctions(4,
        ::uNewFunctionVoid("CheckArgument", Preconditions__CheckArgument, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("CheckArgument", Preconditions__CheckArgument_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunctionVoid("CheckArgumentRange", Preconditions__CheckArgumentRange, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("CheckArgumentRange", Preconditions__CheckArgumentRange_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Preconditions__CheckArgument(::uStatic* __this, bool expression, ::uString* parameter, ::uString* message)
{
    if (!expression)
    {
        U_THROW(::app::Uno::ArgumentException__New_4(NULL, message, parameter));
    }
}

void Preconditions__CheckArgument_1(::uStatic* __this, bool expression, ::uString* parameter, ::uString* messageFormat, ::uArray* messageArgs)
{
    if (!expression)
    {
        ::uString* message = ::app::Uno::String__Format(NULL, messageFormat, messageArgs);
        U_THROW(::app::Uno::ArgumentException__New_4(NULL, message, parameter));
    }
}

void Preconditions__CheckArgumentRange(::uStatic* __this, ::uString* paramName, int value, int minInclusive, int maxInclusive)
{
    if ((value < minInclusive) || (value > maxInclusive))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, paramName, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Value should be in range ["), ::uBox< int>(::app::Uno::Int__typeof(), minInclusive)), ::uGetConstString("-")), ::uBox< int>(::app::Uno::Int__typeof(), maxInclusive)), ::uGetConstString("]"))));
    }
}

void Preconditions__CheckArgumentRange_1(::uStatic* __this, ::uString* paramName, ::uLong value, ::uLong minInclusive, ::uLong maxInclusive)
{
    if ((value < minInclusive) || (value > maxInclusive))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, paramName, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Value should be in range ["), ::uBox< ::uLong>(::app::Uno::Long__typeof(), minInclusive)), ::uGetConstString("-")), ::uBox< ::uLong>(::app::Uno::Long__typeof(), maxInclusive)), ::uGetConstString("]"))));
    }
}

::app::Uno::Time::Calendars::Era* Preconditions__CheckNotNull__Uno_Time_Calendars_Era(::uStatic* __this, ::app::Uno::Time::Calendars::Era* argument, ::uString* paramName)
{
    if (argument == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, paramName));
    }

    return argument;
}

::uArray* Preconditions__CheckNotNull__Uno_Time_Calendars_Era__(::uStatic* __this, ::uArray* argument, ::uString* paramName)
{
    if (argument == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, paramName));
    }

    return argument;
}

::app::Uno::Time::CalendarSystem* Preconditions__CheckNotNull__Uno_Time_CalendarSystem(::uStatic* __this, ::app::Uno::Time::CalendarSystem* argument, ::uString* paramName)
{
    if (argument == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, paramName));
    }

    return argument;
}

::app::Uno::Time::DateTimeZone* Preconditions__CheckNotNull__Uno_Time_DateTimeZone(::uStatic* __this, ::app::Uno::Time::DateTimeZone* argument, ::uString* paramName)
{
    if (argument == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, paramName));
    }

    return argument;
}

::app::Uno::Time::Period* Preconditions__CheckNotNull__Uno_Time_Period(::uStatic* __this, ::app::Uno::Time::Period* argument, ::uString* paramName)
{
    if (argument == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, paramName));
    }

    return argument;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ZonedDateTime__uType* ZonedDateTime__typeof()
{
    static ::uStaticStrong<ZonedDateTime__uType*> type;
    if (type != NULL) return type;

    type = (ZonedDateTime__uType*)::uAllocClassType(sizeof(ZonedDateTime__uType), "Uno.Time.ZonedDateTime", false, 0, 2, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))ZonedDateTime__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))ZonedDateTime__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))ZonedDateTime__ToString;

    type->SetStrongRefs(
        "_localDateTime", offsetof(ZonedDateTime, _localDateTime),
        "_zone", offsetof(ZonedDateTime, _zone));

    type->SetFields(3,
        ::uNewField("_localDateTime", NULL, offsetof(ZonedDateTime, _localDateTime), ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewField("_offset", NULL, offsetof(ZonedDateTime, _offset), ::app::Uno::Time::Offset__typeof()),
        ::uNewField("_zone", NULL, offsetof(ZonedDateTime, _zone), ::app::Uno::Time::DateTimeZone__typeof()));

    type->SetFunctions(38,
        ::uNewFunction("Add", ZonedDateTime__Add, 0, true, ZonedDateTime__typeof(), ZonedDateTime__typeof(), ::app::Uno::Time::Duration__typeof()),
        ::uNewFunction("Equals", ZonedDateTime__Equals_2, 0, false, ::app::Uno::Bool__typeof(), ZonedDateTime__typeof()),
        ::uNewFunction("get_Calendar", ZonedDateTime__get_Calendar, 0, false, ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction("get_CenturyOfEra", ZonedDateTime__get_CenturyOfEra, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ClockHourOfHalfDay", ZonedDateTime__get_ClockHourOfHalfDay, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Date", ZonedDateTime__get_Date, 0, false, ::app::Uno::Time::LocalDate__typeof()),
        ::uNewFunction("get_Day", ZonedDateTime__get_Day, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_DayOfWeek", ZonedDateTime__get_DayOfWeek, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_DayOfYear", ZonedDateTime__get_DayOfYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Era", ZonedDateTime__get_Era, 0, false, ::app::Uno::Time::Calendars::Era__typeof()),
        ::uNewFunction("get_Hour", ZonedDateTime__get_Hour, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Instant", ZonedDateTime__get_Instant, 0, false, ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("get_IsoDayOfWeek", ZonedDateTime__get_IsoDayOfWeek, 0, false, ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("get_LocalDateTime", ZonedDateTime__get_LocalDateTime, 0, false, ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewFunction("get_Millisecond", ZonedDateTime__get_Millisecond, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Minute", ZonedDateTime__get_Minute, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Month", ZonedDateTime__get_Month, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Now", ZonedDateTime__get_Now, 0, true, ZonedDateTime__typeof()),
        ::uNewFunction("get_Offset", ZonedDateTime__get_Offset, 0, false, ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("get_Second", ZonedDateTime__get_Second, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TickOfDay", ZonedDateTime__get_TickOfDay, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_TickOfSecond", ZonedDateTime__get_TickOfSecond, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TimeOfDay", ZonedDateTime__get_TimeOfDay, 0, false, ::app::Uno::Time::LocalTime__typeof()),
        ::uNewFunction("get_WeekOfWeekYear", ZonedDateTime__get_WeekOfWeekYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_WeekYear", ZonedDateTime__get_WeekYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Year", ZonedDateTime__get_Year, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_YearOfCentury", ZonedDateTime__get_YearOfCentury, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_YearOfEra", ZonedDateTime__get_YearOfEra, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Zone", ZonedDateTime__get_Zone, 0, false, ::app::Uno::Time::DateTimeZone__typeof()),
        ::uNewFunction("Minus", ZonedDateTime__Minus, 0, false, ZonedDateTime__typeof(), ::app::Uno::Time::Duration__typeof()),
        ::uNewFunction(".ctor", ZonedDateTime__New_1, 0, true, ZonedDateTime__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::DateTimeZone__typeof()),
        ::uNewFunction(".ctor", ZonedDateTime__New_2, 0, true, ZonedDateTime__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::DateTimeZone__typeof(), ::app::Uno::Time::CalendarSystem__typeof()),
        ::uNewFunction(".ctor", ZonedDateTime__New_3, 0, true, ZonedDateTime__typeof(), ::app::Uno::Time::LocalDateTime__typeof(), ::app::Uno::Time::DateTimeZone__typeof()),
        ::uNewFunction("Plus", ZonedDateTime__Plus, 0, false, ZonedDateTime__typeof(), ::app::Uno::Time::Duration__typeof()),
        ::uNewFunction("Subtract", ZonedDateTime__Subtract, 0, true, ZonedDateTime__typeof(), ZonedDateTime__typeof(), ::app::Uno::Time::Duration__typeof()),
        ::uNewFunction("ToInstant", ZonedDateTime__ToInstant, 0, false, ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("ToOffsetDateTime", ZonedDateTime__ToOffsetDateTime, 0, false, ::app::Uno::Time::OffsetDateTime__typeof()),
        ::uNewFunction("WithZone", ZonedDateTime__WithZone, 0, false, ZonedDateTime__typeof(), ::app::Uno::Time::DateTimeZone__typeof()));

    ::uRegisterType(type);
    return type;
}

void ZonedDateTime___ObjInit(ZonedDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone)
{
    __this->_ObjInit_1(instant, zone, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

void ZonedDateTime___ObjInit_1(ZonedDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_DateTimeZone(NULL, zone, ::uGetConstString("zone"));
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar"));
    __this->_offset = ::uPtr< ::app::Uno::Time::DateTimeZone*>(zone)->GetUtcOffset(::app::Uno::Time::LocalDateTime__New_2(NULL, instant, calendar));
    __this->_localDateTime = ::app::Uno::Time::LocalDateTime__New_2(NULL, instant.Plus_1(__this->_offset), calendar);
    __this->_zone = zone;
}

void ZonedDateTime___ObjInit_2(ZonedDateTime* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::DateTimeZone* zone)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_DateTimeZone(NULL, zone, ::uGetConstString("zone"));
    __this->_offset = ::uPtr< ::app::Uno::Time::DateTimeZone*>(zone)->GetUtcOffset(localDateTime);
    __this->_localDateTime = localDateTime;
    __this->_zone = zone;
}

void ZonedDateTime___ObjInit_3(ZonedDateTime* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset, ::app::Uno::Time::DateTimeZone* zone)
{
    __this->_localDateTime = localDateTime;
    __this->_offset = offset;
    __this->_zone = zone;
}

ZonedDateTime* ZonedDateTime__Add(::uStatic* __this, ZonedDateTime* zonedDateTime, ::app::Uno::Time::Duration duration)
{
    return ZonedDateTime__op_Addition(NULL, zonedDateTime, duration);
}

bool ZonedDateTime__Equals(ZonedDateTime* __this, ::uObject* obj)
{
    if (::uIs(obj, ZonedDateTime__typeof()))
    {
        return __this->Equals_2(::uCast< ZonedDateTime*>(obj, ZonedDateTime__typeof()));
    }

    return false;
}

bool ZonedDateTime__Equals_2(ZonedDateTime* __this, ZonedDateTime* other)
{
    return (::app::Uno::Time::LocalDateTime__op_Equality(NULL, __this->LocalDateTime(), ::uPtr< ZonedDateTime*>(other)->LocalDateTime()) && ::app::Uno::Time::Offset__op_Equality(NULL, __this->Offset(), ::uPtr< ZonedDateTime*>(other)->Offset())) && ::uPtr< ::app::Uno::Time::DateTimeZone*>(__this->Zone())->Equals_2(::uPtr< ZonedDateTime*>(other)->Zone());
}

::app::Uno::Time::CalendarSystem* ZonedDateTime__get_Calendar(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Calendar();
}

int ZonedDateTime__get_CenturyOfEra(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->CenturyOfEra();
}

int ZonedDateTime__get_ClockHourOfHalfDay(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->ClockHourOfHalfDay();
}

::app::Uno::Time::LocalDate* ZonedDateTime__get_Date(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Date();
}

int ZonedDateTime__get_Day(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Day();
}

int ZonedDateTime__get_DayOfWeek(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->DayOfWeek();
}

int ZonedDateTime__get_DayOfYear(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->DayOfYear();
}

::app::Uno::Time::Calendars::Era* ZonedDateTime__get_Era(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Era();
}

int ZonedDateTime__get_Hour(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Hour();
}

::app::Uno::Time::Instant ZonedDateTime__get_Instant(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Instant();
}

int ZonedDateTime__get_IsoDayOfWeek(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->IsoDayOfWeek();
}

::app::Uno::Time::LocalDateTime* ZonedDateTime__get_LocalDateTime(ZonedDateTime* __this)
{
    return __this->_localDateTime;
}

int ZonedDateTime__get_Millisecond(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Millisecond();
}

int ZonedDateTime__get_Minute(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Minute();
}

int ZonedDateTime__get_Month(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Month();
}

ZonedDateTime* ZonedDateTime__get_Now(::uStatic* __this)
{
    ::uLong ticks = ::app::Uno::Diagnostics::Clock__GetTicks(NULL);
    return ZonedDateTime__New_1(NULL, ::app::Uno::Time::Instant__New_1(NULL, ticks), (::app::Uno::Time::DateTimeZone*)::app::Uno::Time::DeviceTimeZone__New_1(NULL));
}

::app::Uno::Time::Offset ZonedDateTime__get_Offset(ZonedDateTime* __this)
{
    return __this->_offset;
}

int ZonedDateTime__get_Second(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Second();
}

::uLong ZonedDateTime__get_TickOfDay(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->TickOfDay();
}

int ZonedDateTime__get_TickOfSecond(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->TickOfSecond();
}

::app::Uno::Time::LocalTime ZonedDateTime__get_TimeOfDay(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->TimeOfDay();
}

int ZonedDateTime__get_WeekOfWeekYear(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->WeekOfWeekYear();
}

int ZonedDateTime__get_WeekYear(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->WeekYear();
}

int ZonedDateTime__get_Year(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Year();
}

int ZonedDateTime__get_YearOfCentury(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->YearOfCentury();
}

int ZonedDateTime__get_YearOfEra(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->YearOfEra();
}

::app::Uno::Time::DateTimeZone* ZonedDateTime__get_Zone(ZonedDateTime* __this)
{
    ::app::Uno::Time::DateTimeZone* ind_124 = __this->_zone;
    return (ind_124 != NULL) ? ind_124 : ::app::Uno::Time::DateTimeZone__get_Utc(NULL);
}

int ZonedDateTime__GetHashCode(ZonedDateTime* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_LocalDateTime(NULL, hash, __this->_localDateTime);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_Offset(NULL, hash, __this->_offset);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_DateTimeZone(NULL, hash, __this->_zone);
    return hash;
}

ZonedDateTime* ZonedDateTime__Minus(ZonedDateTime* __this, ::app::Uno::Time::Duration duration)
{
    return ZonedDateTime__op_Subtraction(NULL, __this, duration);
}

ZonedDateTime* ZonedDateTime__New_1(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* inst = (ZonedDateTime*)::uAllocObject(sizeof(ZonedDateTime), ZonedDateTime__typeof());
    inst->_ObjInit(instant, zone);
    return inst;
}

ZonedDateTime* ZonedDateTime__New_2(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar)
{
    ZonedDateTime* inst = (ZonedDateTime*)::uAllocObject(sizeof(ZonedDateTime), ZonedDateTime__typeof());
    inst->_ObjInit_1(instant, zone, calendar);
    return inst;
}

ZonedDateTime* ZonedDateTime__New_3(::uStatic* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* inst = (ZonedDateTime*)::uAllocObject(sizeof(ZonedDateTime), ZonedDateTime__typeof());
    inst->_ObjInit_2(localDateTime, zone);
    return inst;
}

ZonedDateTime* ZonedDateTime__New_4(::uStatic* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset, ::app::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* inst = (ZonedDateTime*)::uAllocObject(sizeof(ZonedDateTime), ZonedDateTime__typeof());
    inst->_ObjInit_3(localDateTime, offset, zone);
    return inst;
}

ZonedDateTime* ZonedDateTime__op_Addition(::uStatic* __this, ZonedDateTime* zonedDateTime, ::app::Uno::Time::Duration duration)
{
    return ZonedDateTime__New_2(NULL, ::app::Uno::Time::Instant__op_Addition(NULL, ::uPtr< ZonedDateTime*>(zonedDateTime)->ToInstant(), duration), ::uPtr< ZonedDateTime*>(zonedDateTime)->Zone(), ::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(zonedDateTime)->LocalDateTime())->Calendar());
}

bool ZonedDateTime__op_Equality(::uStatic* __this, ZonedDateTime* left, ZonedDateTime* right)
{
    return ::uPtr< ZonedDateTime*>(left)->Equals_2(right);
}

bool ZonedDateTime__op_GreaterThan(::uStatic* __this, ZonedDateTime* lhs, ZonedDateTime* rhs)
{
    return (::app::Uno::Time::Instant__op_GreaterThan(NULL, ::uPtr< ZonedDateTime*>(lhs)->ToInstant(), ::uPtr< ZonedDateTime*>(rhs)->ToInstant()) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(lhs)->LocalDateTime())->Calendar(), (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(rhs)->LocalDateTime())->Calendar())) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ZonedDateTime*>(lhs)->Zone(), (::uObject*)::uPtr< ZonedDateTime*>(rhs)->Zone());
}

bool ZonedDateTime__op_GreaterThanOrEqual(::uStatic* __this, ZonedDateTime* lhs, ZonedDateTime* rhs)
{
    return (::app::Uno::Time::Instant__op_GreaterThanOrEqual(NULL, ::uPtr< ZonedDateTime*>(lhs)->ToInstant(), ::uPtr< ZonedDateTime*>(rhs)->ToInstant()) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(lhs)->LocalDateTime())->Calendar(), (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(rhs)->LocalDateTime())->Calendar())) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ZonedDateTime*>(lhs)->Zone(), (::uObject*)::uPtr< ZonedDateTime*>(rhs)->Zone());
}

bool ZonedDateTime__op_Inequality(::uStatic* __this, ZonedDateTime* left, ZonedDateTime* right)
{
    return !ZonedDateTime__op_Equality(NULL, left, right);
}

bool ZonedDateTime__op_LessThan(::uStatic* __this, ZonedDateTime* lhs, ZonedDateTime* rhs)
{
    return (::app::Uno::Time::Instant__op_LessThan(NULL, ::uPtr< ZonedDateTime*>(lhs)->ToInstant(), ::uPtr< ZonedDateTime*>(rhs)->ToInstant()) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(lhs)->LocalDateTime())->Calendar(), (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(rhs)->LocalDateTime())->Calendar())) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ZonedDateTime*>(lhs)->Zone(), (::uObject*)::uPtr< ZonedDateTime*>(rhs)->Zone());
}

bool ZonedDateTime__op_LessThanOrEqual(::uStatic* __this, ZonedDateTime* lhs, ZonedDateTime* rhs)
{
    return (::app::Uno::Time::Instant__op_LessThanOrEqual(NULL, ::uPtr< ZonedDateTime*>(lhs)->ToInstant(), ::uPtr< ZonedDateTime*>(rhs)->ToInstant()) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(lhs)->LocalDateTime())->Calendar(), (::uObject*)::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(rhs)->LocalDateTime())->Calendar())) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ZonedDateTime*>(lhs)->Zone(), (::uObject*)::uPtr< ZonedDateTime*>(rhs)->Zone());
}

ZonedDateTime* ZonedDateTime__op_Subtraction(::uStatic* __this, ZonedDateTime* zonedDateTime, ::app::Uno::Time::Duration duration)
{
    return ZonedDateTime__New_2(NULL, ::app::Uno::Time::Instant__op_Subtraction(NULL, ::uPtr< ZonedDateTime*>(zonedDateTime)->ToInstant(), duration), ::uPtr< ZonedDateTime*>(zonedDateTime)->Zone(), ::uPtr< ::app::Uno::Time::LocalDateTime*>(::uPtr< ZonedDateTime*>(zonedDateTime)->LocalDateTime())->Calendar());
}

ZonedDateTime* ZonedDateTime__Plus(ZonedDateTime* __this, ::app::Uno::Time::Duration duration)
{
    return ZonedDateTime__op_Addition(NULL, __this, duration);
}

ZonedDateTime* ZonedDateTime__Subtract(::uStatic* __this, ZonedDateTime* zonedDateTime, ::app::Uno::Time::Duration duration)
{
    return ZonedDateTime__op_Subtraction(NULL, zonedDateTime, duration);
}

::app::Uno::Time::Instant ZonedDateTime__ToInstant(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Instant().Minus_2(__this->_offset);
}

::app::Uno::Time::OffsetDateTime* ZonedDateTime__ToOffsetDateTime(ZonedDateTime* __this)
{
    return ::app::Uno::Time::OffsetDateTime__New_1(NULL, __this->_localDateTime, __this->_offset);
}

::uString* ZonedDateTime__ToString(ZonedDateTime* __this)
{
    ::app::Uno::Time::Offset ind_123 = ::app::Uno::Time::Offset();
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->ToString(), ::uPtr< ::app::Uno::Time::DateTimeZone*>(__this->_zone)->ToString()), (ind_123 = __this->_offset, (&ind_123))->ToString());
}

ZonedDateTime* ZonedDateTime__WithZone(ZonedDateTime* __this, ::app::Uno::Time::DateTimeZone* targetZone)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_DateTimeZone(NULL, targetZone, ::uGetConstString("targetZone"));
    return ZonedDateTime__New_2(NULL, __this->ToInstant(), targetZone, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Calendar());
}

}}}
