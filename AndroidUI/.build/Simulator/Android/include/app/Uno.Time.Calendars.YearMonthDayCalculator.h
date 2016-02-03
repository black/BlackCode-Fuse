// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Calendars\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDARS_YEAR_MONTH_DAY_CALCULATOR_H__
#define __APP_UNO_TIME_CALENDARS_YEAR_MONTH_DAY_CALCULATOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

struct YearMonthDayCalculator;

struct YearMonthDayCalculator__uType : ::uClassType
{
    int(*__fp_CalculateStartOfYearDays)(YearMonthDayCalculator*, int);
    int(*__fp_GetAbsoluteYear)(YearMonthDayCalculator*, int, int);
    int(*__fp_GetCenturyOfEra)(YearMonthDayCalculator*, ::app::Uno::Time::Instant);
    int(*__fp_GetDaysInMonth)(YearMonthDayCalculator*, int, int);
    int(*__fp_GetEra)(YearMonthDayCalculator*, ::app::Uno::Time::Instant);
    ::app::Uno::Time::Instant(*__fp_GetInstant)(YearMonthDayCalculator*, ::app::Uno::Time::Calendars::Era*, int, int, int);
    ::app::Uno::Time::Instant(*__fp_GetInstant_1)(YearMonthDayCalculator*, int, int, int);
    int(*__fp_GetMaxYearOfEra)(YearMonthDayCalculator*, int);
    int(*__fp_GetMonthOfYear_1)(YearMonthDayCalculator*, ::app::Uno::Time::Instant, int);
    ::uLong(*__fp_GetStartOfYearInTicks)(YearMonthDayCalculator*, int);
    ::uLong(*__fp_GetTicksFromStartOfYearToStartOfMonth)(YearMonthDayCalculator*, int, int);
    int(*__fp_GetYearOfCentury)(YearMonthDayCalculator*, ::app::Uno::Time::Instant);
    int(*__fp_GetYearOfEra)(YearMonthDayCalculator*, ::app::Uno::Time::Instant);
    bool(*__fp_IsLeapYear)(YearMonthDayCalculator*, int);
    ::app::Uno::Time::Instant(*__fp_SetYear)(YearMonthDayCalculator*, ::app::Uno::Time::Instant, int);
};

YearMonthDayCalculator__uType* YearMonthDayCalculator__typeof();

void YearMonthDayCalculator___ObjInit(YearMonthDayCalculator* __this, int minYear, int maxYear, int monthsInYear, ::uLong averageTicksPerYear, ::uLong ticksAtStartOfYear1, ::uArray* eras);
::app::Uno::Time::Instant YearMonthDayCalculator__AddMonths(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int months);
::uArray* YearMonthDayCalculator__get_Eras(YearMonthDayCalculator* __this);
int YearMonthDayCalculator__get_MaxYear(YearMonthDayCalculator* __this);
int YearMonthDayCalculator__get_MinYear(YearMonthDayCalculator* __this);
::uLong YearMonthDayCalculator__get_TicksAtStartOfYear1(YearMonthDayCalculator* __this);
int YearMonthDayCalculator__GetAbsoluteYear(YearMonthDayCalculator* __this, int yearOfEra, int eraIndex);
int YearMonthDayCalculator__GetCenturyOfEra(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
int YearMonthDayCalculator__GetDayOfMonth(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
int YearMonthDayCalculator__GetDayOfMonth_1(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year, int month);
int YearMonthDayCalculator__GetDayOfYear(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
int YearMonthDayCalculator__GetDayOfYear_1(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year);
int YearMonthDayCalculator__GetDaysInYear(YearMonthDayCalculator* __this, int year);
int YearMonthDayCalculator__GetEra(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
int YearMonthDayCalculator__GetEraIndex(YearMonthDayCalculator* __this, ::app::Uno::Time::Calendars::Era* era);
::app::Uno::Time::Instant YearMonthDayCalculator__GetInstant(YearMonthDayCalculator* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth);
::app::Uno::Time::Instant YearMonthDayCalculator__GetInstant_1(YearMonthDayCalculator* __this, int year, int monthOfYear, int dayOfMonth);
int YearMonthDayCalculator__GetMaxMonth(YearMonthDayCalculator* __this, int year);
int YearMonthDayCalculator__GetMaxYearOfEra(YearMonthDayCalculator* __this, int eraIndex);
int YearMonthDayCalculator__GetMinYearOfEra(YearMonthDayCalculator* __this, int eraIndex);
int YearMonthDayCalculator__GetMonthOfYear(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
::uLong YearMonthDayCalculator__GetStartOfYearInTicks(YearMonthDayCalculator* __this, int year);
::uLong YearMonthDayCalculator__GetTicksInYear(YearMonthDayCalculator* __this, int year);
int YearMonthDayCalculator__GetYear(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
::uLong YearMonthDayCalculator__GetYearMonthDayTicks(YearMonthDayCalculator* __this, int year, int month, int dayOfMonth);
::uLong YearMonthDayCalculator__GetYearMonthTicks(YearMonthDayCalculator* __this, int year, int month);
int YearMonthDayCalculator__GetYearOfCentury(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
int YearMonthDayCalculator__GetYearOfEra(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
int YearMonthDayCalculator__MonthsBetween(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant);

struct YearMonthDayCalculator : ::uObject
{
    int _minYear;
    int _maxYear;
    int _monthsInYear;
    ::uLong _averageTicksPerYear;
    ::uLong _ticksAtStartOfYear1;
    ::uStrong< ::uArray*> _eras;

    void _ObjInit(int minYear, int maxYear, int monthsInYear, ::uLong averageTicksPerYear, ::uLong ticksAtStartOfYear1, ::uArray* eras) { YearMonthDayCalculator___ObjInit(this, minYear, maxYear, monthsInYear, averageTicksPerYear, ticksAtStartOfYear1, eras); }
    ::app::Uno::Time::Instant AddMonths(::app::Uno::Time::Instant instant, int months);
    int CalculateStartOfYearDays(int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_CalculateStartOfYearDays)(this, year); }
    ::uArray* Eras() { return YearMonthDayCalculator__get_Eras(this); }
    int MaxYear() { return YearMonthDayCalculator__get_MaxYear(this); }
    int MinYear() { return YearMonthDayCalculator__get_MinYear(this); }
    ::uLong TicksAtStartOfYear1() { return YearMonthDayCalculator__get_TicksAtStartOfYear1(this); }
    int GetAbsoluteYear(int yearOfEra, int eraIndex) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetAbsoluteYear)(this, yearOfEra, eraIndex); }
    int GetCenturyOfEra(::app::Uno::Time::Instant instant);
    int GetDayOfMonth(::app::Uno::Time::Instant instant);
    int GetDayOfMonth_1(::app::Uno::Time::Instant instant, int year, int month);
    int GetDayOfYear(::app::Uno::Time::Instant instant);
    int GetDayOfYear_1(::app::Uno::Time::Instant instant, int year);
    int GetDaysInMonth(int year, int month) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetDaysInMonth)(this, year, month); }
    int GetDaysInYear(int year) { return YearMonthDayCalculator__GetDaysInYear(this, year); }
    int GetEra(::app::Uno::Time::Instant instant);
    int GetEraIndex(::app::Uno::Time::Calendars::Era* era) { return YearMonthDayCalculator__GetEraIndex(this, era); }
    ::app::Uno::Time::Instant GetInstant(::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth);
    ::app::Uno::Time::Instant GetInstant_1(int year, int monthOfYear, int dayOfMonth);
    int GetMaxMonth(int year) { return YearMonthDayCalculator__GetMaxMonth(this, year); }
    int GetMaxYearOfEra(int eraIndex) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetMaxYearOfEra)(this, eraIndex); }
    int GetMinYearOfEra(int eraIndex) { return YearMonthDayCalculator__GetMinYearOfEra(this, eraIndex); }
    int GetMonthOfYear(::app::Uno::Time::Instant instant);
    int GetMonthOfYear_1(::app::Uno::Time::Instant instant, int year);
    ::uLong GetStartOfYearInTicks(int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetStartOfYearInTicks)(this, year); }
    ::uLong GetTicksFromStartOfYearToStartOfMonth(int year, int month) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetTicksFromStartOfYearToStartOfMonth)(this, year, month); }
    ::uLong GetTicksInYear(int year) { return YearMonthDayCalculator__GetTicksInYear(this, year); }
    int GetYear(::app::Uno::Time::Instant instant);
    ::uLong GetYearMonthDayTicks(int year, int month, int dayOfMonth) { return YearMonthDayCalculator__GetYearMonthDayTicks(this, year, month, dayOfMonth); }
    ::uLong GetYearMonthTicks(int year, int month) { return YearMonthDayCalculator__GetYearMonthTicks(this, year, month); }
    int GetYearOfCentury(::app::Uno::Time::Instant instant);
    int GetYearOfEra(::app::Uno::Time::Instant instant);
    bool IsLeapYear(int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_IsLeapYear)(this, year); }
    int MonthsBetween(::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant);
    ::app::Uno::Time::Instant SetYear(::app::Uno::Time::Instant instant, int year);
};

}}}}

#include <app/Uno.Time.Instant.h>

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

inline ::app::Uno::Time::Instant YearMonthDayCalculator::AddMonths(::app::Uno::Time::Instant instant, int months) { return YearMonthDayCalculator__AddMonths(this, instant, months); }
inline int YearMonthDayCalculator::GetCenturyOfEra(::app::Uno::Time::Instant instant) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetCenturyOfEra)(this, instant); }
inline int YearMonthDayCalculator::GetDayOfMonth(::app::Uno::Time::Instant instant) { return YearMonthDayCalculator__GetDayOfMonth(this, instant); }
inline int YearMonthDayCalculator::GetDayOfMonth_1(::app::Uno::Time::Instant instant, int year, int month) { return YearMonthDayCalculator__GetDayOfMonth_1(this, instant, year, month); }
inline int YearMonthDayCalculator::GetDayOfYear(::app::Uno::Time::Instant instant) { return YearMonthDayCalculator__GetDayOfYear(this, instant); }
inline int YearMonthDayCalculator::GetDayOfYear_1(::app::Uno::Time::Instant instant, int year) { return YearMonthDayCalculator__GetDayOfYear_1(this, instant, year); }
inline int YearMonthDayCalculator::GetEra(::app::Uno::Time::Instant instant) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetEra)(this, instant); }
inline ::app::Uno::Time::Instant YearMonthDayCalculator::GetInstant(::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetInstant)(this, era, yearOfEra, monthOfYear, dayOfMonth); }
inline ::app::Uno::Time::Instant YearMonthDayCalculator::GetInstant_1(int year, int monthOfYear, int dayOfMonth) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetInstant_1)(this, year, monthOfYear, dayOfMonth); }
inline int YearMonthDayCalculator::GetMonthOfYear(::app::Uno::Time::Instant instant) { return YearMonthDayCalculator__GetMonthOfYear(this, instant); }
inline int YearMonthDayCalculator::GetMonthOfYear_1(::app::Uno::Time::Instant instant, int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetMonthOfYear_1)(this, instant, year); }
inline int YearMonthDayCalculator::GetYear(::app::Uno::Time::Instant instant) { return YearMonthDayCalculator__GetYear(this, instant); }
inline int YearMonthDayCalculator::GetYearOfCentury(::app::Uno::Time::Instant instant) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetYearOfCentury)(this, instant); }
inline int YearMonthDayCalculator::GetYearOfEra(::app::Uno::Time::Instant instant) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetYearOfEra)(this, instant); }
inline int YearMonthDayCalculator::MonthsBetween(::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant) { return YearMonthDayCalculator__MonthsBetween(this, minuendInstant, subtrahendInstant); }
inline ::app::Uno::Time::Instant YearMonthDayCalculator::SetYear(::app::Uno::Time::Instant instant, int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_SetYear)(this, instant, year); }

}}}}


#endif
