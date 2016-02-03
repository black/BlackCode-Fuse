#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Calendars.Era.h>
#include <app/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <app/Uno.Time.Calendars.TimeOfDayCalculator.h>
#include <app/Uno.Time.Calendars.WeekYearCalculator.h>
#include <app/Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <app/Uno.Time.Converter.h>
#include <app/Uno.Time.Instant.h>
#include <app/Uno.Time.IsoDayOfWeek.h>
#include <app/Uno.Time.Preconditions.h>

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Calendars\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Era*> Era__AnnoHegirae;
::uStaticStrong< Era*> Era__AnnoMartyrum;
::uStaticStrong< Era*> Era__AnnoMundi;
::uStaticStrong< Era*> Era__AnnoPersico;
::uStaticStrong< Era*> Era__BeforeCommon;
::uStaticStrong< Era*> Era__Common;

Era__uType* Era__typeof()
{
    static ::uStaticStrong<Era__uType*> type;
    if (type != NULL) return type;

    type = (Era__uType*)::uAllocClassType(sizeof(Era__uType), "Uno.Time.Calendars.Era", false, 0, 1, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))Era__ToString;

    type->SetStrongRefs(
        "_name", offsetof(Era, _name));

    type->SetFields(7,
        ::uNewField("_name", NULL, offsetof(Era, _name), ::app::Uno::String__typeof()),
        ::uNewField("AnnoHegirae", &Era__AnnoHegirae, 0, Era__typeof()),
        ::uNewField("AnnoMartyrum", &Era__AnnoMartyrum, 0, Era__typeof()),
        ::uNewField("AnnoMundi", &Era__AnnoMundi, 0, Era__typeof()),
        ::uNewField("AnnoPersico", &Era__AnnoPersico, 0, Era__typeof()),
        ::uNewField("BeforeCommon", &Era__BeforeCommon, 0, Era__typeof()),
        ::uNewField("Common", &Era__Common, 0, Era__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Name", Era__get_Name, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Era___ObjInit(Era* __this, ::uString* name)
{
    __this->_name = name;
}

void Era___TypeInit(::uStatic* __this)
{
    Era__Common = Era__New_1(NULL, ::uGetConstString("CE"));
    Era__BeforeCommon = Era__New_1(NULL, ::uGetConstString("BCE"));
    Era__AnnoMartyrum = Era__New_1(NULL, ::uGetConstString("AM"));
    Era__AnnoHegirae = Era__New_1(NULL, ::uGetConstString("EH"));
    Era__AnnoMundi = Era__New_1(NULL, ::uGetConstString("AM"));
    Era__AnnoPersico = Era__New_1(NULL, ::uGetConstString("AP"));
}

::uString* Era__get_Name(Era* __this)
{
    return __this->_name;
}

Era* Era__New_1(::uStatic* __this, ::uString* name)
{
    Era* inst = (Era*)::uAllocObject(sizeof(Era), Era__typeof());
    inst->_ObjInit(name);
    return inst;
}

::uString* Era__ToString(Era* __this)
{
    return __this->_name;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Calendars\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MaxDaysPerMonth;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MaxTotalTicksByMonth;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MinDaysPerMonth;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MinTotalTicksByMonth;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MonthLengths;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MonthStartTicks;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__YearStartDays;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__YearStartTicks;

GregorianYearMonthDayCalculator__uType* GregorianYearMonthDayCalculator__typeof()
{
    static ::uStaticStrong<GregorianYearMonthDayCalculator__uType*> type;
    if (type != NULL) return type;

    type = (GregorianYearMonthDayCalculator__uType*)::uAllocClassType(sizeof(GregorianYearMonthDayCalculator__uType), "Uno.Time.Calendars.GregorianYearMonthDayCalculator", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Time::Calendars::YearMonthDayCalculator__typeof());
    type->__fp_CalculateStartOfYearDays = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int))GregorianYearMonthDayCalculator__CalculateStartOfYearDays;
    type->__fp_GetAbsoluteYear = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int, int))GregorianYearMonthDayCalculator__GetAbsoluteYear;
    type->__fp_GetCenturyOfEra = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, ::app::Uno::Time::Instant))GregorianYearMonthDayCalculator__GetCenturyOfEra;
    type->__fp_GetDaysInMonth = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int, int))GregorianYearMonthDayCalculator__GetDaysInMonth;
    type->__fp_GetEra = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, ::app::Uno::Time::Instant))GregorianYearMonthDayCalculator__GetEra;
    type->__fp_GetInstant = (::app::Uno::Time::Instant(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, ::app::Uno::Time::Calendars::Era*, int, int, int))GregorianYearMonthDayCalculator__GetInstant;
    type->__fp_GetInstant_1 = (::app::Uno::Time::Instant(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int, int, int))GregorianYearMonthDayCalculator__GetInstant_1;
    type->__fp_GetMaxYearOfEra = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int))GregorianYearMonthDayCalculator__GetMaxYearOfEra;
    type->__fp_GetMonthOfYear_1 = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, ::app::Uno::Time::Instant, int))GregorianYearMonthDayCalculator__GetMonthOfYear_1;
    type->__fp_GetStartOfYearInTicks = (::uLong(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int))GregorianYearMonthDayCalculator__GetStartOfYearInTicks;
    type->__fp_GetTicksFromStartOfYearToStartOfMonth = (::uLong(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int, int))GregorianYearMonthDayCalculator__GetTicksFromStartOfYearToStartOfMonth;
    type->__fp_GetYearOfCentury = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, ::app::Uno::Time::Instant))GregorianYearMonthDayCalculator__GetYearOfCentury;
    type->__fp_GetYearOfEra = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, ::app::Uno::Time::Instant))GregorianYearMonthDayCalculator__GetYearOfEra;
    type->__fp_IsLeapYear = (bool(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int))GregorianYearMonthDayCalculator__IsLeapYear;
    type->__fp_SetYear = (::app::Uno::Time::Instant(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, ::app::Uno::Time::Instant, int))GregorianYearMonthDayCalculator__SetYear;

    type->SetFields(8,
        ::uNewField("MaxDaysPerMonth", &GregorianYearMonthDayCalculator__MaxDaysPerMonth, 0, ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewField("MaxTotalTicksByMonth", &GregorianYearMonthDayCalculator__MaxTotalTicksByMonth, 0, ::uGetArrayType(::app::Uno::Long__typeof())),
        ::uNewField("MinDaysPerMonth", &GregorianYearMonthDayCalculator__MinDaysPerMonth, 0, ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewField("MinTotalTicksByMonth", &GregorianYearMonthDayCalculator__MinTotalTicksByMonth, 0, ::uGetArrayType(::app::Uno::Long__typeof())),
        ::uNewField("MonthLengths", &GregorianYearMonthDayCalculator__MonthLengths, 0, ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewField("MonthStartTicks", &GregorianYearMonthDayCalculator__MonthStartTicks, 0, ::uGetArrayType(::app::Uno::Long__typeof())),
        ::uNewField("YearStartDays", &GregorianYearMonthDayCalculator__YearStartDays, 0, ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewField("YearStartTicks", &GregorianYearMonthDayCalculator__YearStartTicks, 0, ::uGetArrayType(::app::Uno::Long__typeof())));

    ::uRegisterType(type);
    return type;
}

void GregorianYearMonthDayCalculator___ObjInit_1(GregorianYearMonthDayCalculator* __this)
{
    ::uArray* array_125;
    ::app::Uno::Time::Calendars::YearMonthDayCalculator___ObjInit(__this, -27255, 31195, 12, 315569520000000ll, -621355968000000000ll, (array_125 = ::uNewArray(::app::Uno::Time::Calendars::Era__typeof(), 2), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::app::Uno::Time::Calendars::Era*>(0) = ::app::Uno::Time::Calendars::Era__BeforeCommon, ::uPtr< ::uArray*>(array_125)->ItemStrong< ::app::Uno::Time::Calendars::Era*>(1) = ::app::Uno::Time::Calendars::Era__Common, array_125));
}

void GregorianYearMonthDayCalculator___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    GregorianYearMonthDayCalculator__MonthStartTicks = ::uNewArray(::app::Uno::Long__typeof(), 2413);
    GregorianYearMonthDayCalculator__MonthLengths = ::uNewArray(::app::Uno::Int__typeof(), 2413);
    GregorianYearMonthDayCalculator__YearStartTicks = ::uNewArray(::app::Uno::Long__typeof(), 201);
    GregorianYearMonthDayCalculator__YearStartDays = ::uNewArray(::app::Uno::Int__typeof(), 201);
    GregorianYearMonthDayCalculator__MinDaysPerMonth = (array_123 = ::uNewArray(::app::Uno::Int__typeof(), 12), ::uPtr< ::uArray*>(array_123)->Item< int>(0) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(1) = 28, ::uPtr< ::uArray*>(array_123)->Item< int>(2) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(3) = 30, ::uPtr< ::uArray*>(array_123)->Item< int>(4) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(5) = 30, ::uPtr< ::uArray*>(array_123)->Item< int>(6) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(7) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(8) = 30, ::uPtr< ::uArray*>(array_123)->Item< int>(9) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(10) = 30, ::uPtr< ::uArray*>(array_123)->Item< int>(11) = 31, array_123);
    GregorianYearMonthDayCalculator__MaxDaysPerMonth = (array_124 = ::uNewArray(::app::Uno::Int__typeof(), 12), ::uPtr< ::uArray*>(array_124)->Item< int>(0) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(1) = 29, ::uPtr< ::uArray*>(array_124)->Item< int>(2) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(3) = 30, ::uPtr< ::uArray*>(array_124)->Item< int>(4) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(5) = 30, ::uPtr< ::uArray*>(array_124)->Item< int>(6) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(7) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(8) = 30, ::uPtr< ::uArray*>(array_124)->Item< int>(9) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(10) = 30, ::uPtr< ::uArray*>(array_124)->Item< int>(11) = 31, array_124);
    GregorianYearMonthDayCalculator__MinTotalTicksByMonth = ::uNewArray(::app::Uno::Long__typeof(), 12);
    GregorianYearMonthDayCalculator__MaxTotalTicksByMonth = ::uNewArray(::app::Uno::Long__typeof(), 12);
    ::uLong minSum = 0ll;
    ::uLong maxSum = 0ll;

    for (int i = 0; i < 11; i++)
    {
        minSum = minSum + ((::uLong)::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MinDaysPerMonth)->Item< int>(i) * 864000000000ll);
        maxSum = maxSum + ((::uLong)::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MaxDaysPerMonth)->Item< int>(i) * 864000000000ll);
        ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MinTotalTicksByMonth)->Item< ::uLong>(i + 1) = minSum;
        ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MaxTotalTicksByMonth)->Item< ::uLong>(i + 1) = maxSum;
    }

    GregorianYearMonthDayCalculator* instance = GregorianYearMonthDayCalculator__New_1(NULL);

    for (int year = 1900; year <= 2100; year++)
    {
        ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__YearStartDays)->Item< int>(year - 1900) = ::uPtr< GregorianYearMonthDayCalculator*>(instance)->CalculateStartOfYearDays(year);
        ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__YearStartTicks)->Item< ::uLong>(year - 1900) = (::uLong)::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__YearStartDays)->Item< int>(year - 1900) * 864000000000ll;

        for (int month = 1; month <= 12; month++)
        {
            int yearMonthIndex = ((year - 1900) * 12) + month;
            ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MonthStartTicks)->Item< ::uLong>(yearMonthIndex) = ::uPtr< GregorianYearMonthDayCalculator*>(instance)->GetYearMonthTicks(year, month);
            ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MonthLengths)->Item< int>(yearMonthIndex) = instance->GetDaysInMonth(year, month);
        }
    }
}

int GregorianYearMonthDayCalculator__CalculateStartOfYearDays(GregorianYearMonthDayCalculator* __this, int year)
{
    int leapYears = year / 100;

    if (year < 0)
    {
        leapYears = ((((year + 3) >> 2) - leapYears) + ((leapYears + 3) >> 2)) - 1;
    }
    else
    {
        leapYears = ((year >> 2) - leapYears) + (leapYears >> 2);

        if (__this->IsLeapYear(year))
        {
            leapYears--;
        }
    }

    return (year * 365) + (leapYears - 719527);
}

int GregorianYearMonthDayCalculator__GetAbsoluteYear(GregorianYearMonthDayCalculator* __this, int yearOfEra, int eraIndex)
{
    return (eraIndex == 0) ? (1 - yearOfEra) : yearOfEra;
}

int GregorianYearMonthDayCalculator__GetCenturyOfEra(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Math__Abs_5(NULL, __this->GetYear(instant)) / 100;
}

int GregorianYearMonthDayCalculator__GetDaysInMonth(GregorianYearMonthDayCalculator* __this, int year, int month)
{
    return __this->IsLeapYear(year) ? ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MaxDaysPerMonth)->Item< int>(month - 1) : ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MinDaysPerMonth)->Item< int>(month - 1);
}

int GregorianYearMonthDayCalculator__GetEra(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    return (instant.Ticks() < __this->TicksAtStartOfYear1()) ? 0 : 1;
}

::app::Uno::Time::Instant GregorianYearMonthDayCalculator__GetInstant(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth)
{
    int eraIndex = __this->GetEraIndex(era);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("yearOfEra"), yearOfEra, 1, __this->GetMaxYearOfEra(eraIndex));
    return __this->GetInstant_1(__this->GetAbsoluteYear(yearOfEra, eraIndex), monthOfYear, dayOfMonth);
}

::app::Uno::Time::Instant GregorianYearMonthDayCalculator__GetInstant_1(GregorianYearMonthDayCalculator* __this, int year, int monthOfYear, int dayOfMonth)
{
    int yearMonthIndex = ((year - 1900) * 12) + monthOfYear;

    if ((((((year < 1900) || (year > 2099)) || (monthOfYear < 1)) || (monthOfYear > 12)) || (dayOfMonth < 1)) || (dayOfMonth > ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MonthLengths)->Item< int>(yearMonthIndex)))
    {
        return ::app::Uno::Time::Calendars::YearMonthDayCalculator__GetInstant_1(__this, year, monthOfYear, dayOfMonth);
    }

    return ::app::Uno::Time::Instant__New_1(NULL, ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MonthStartTicks)->Item< ::uLong>(yearMonthIndex) + ((::uLong)(dayOfMonth - 1) * 864000000000ll));
}

int GregorianYearMonthDayCalculator__GetMaxYearOfEra(GregorianYearMonthDayCalculator* __this, int eraIndex)
{
    return (eraIndex == 0) ? (1 - __this->MinYear()) : __this->MaxYear();
}

int GregorianYearMonthDayCalculator__GetMonthOfYear_1(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year)
{
    int i = (int)(((instant.Ticks() - __this->GetStartOfYearInTicks(year)) >> 10) / 10000ll);
    return __this->IsLeapYear(year) ? ((i < 15356250) ? ((i < 7678125) ? ((i < 2615625) ? 1 : ((i < 5062500) ? 2 : 3)) : ((i < 10209375) ? 4 : ((i < 12825000) ? 5 : 6))) : ((i < 23118750) ? ((i < 17971875) ? 7 : ((i < 20587500) ? 8 : 9)) : ((i < 25734375) ? 10 : ((i < 28265625) ? 11 : 12)))) : ((i < 15271875) ? ((i < 7593750) ? ((i < 2615625) ? 1 : ((i < 4978125) ? 2 : 3)) : ((i < 10125000) ? 4 : ((i < 12740625) ? 5 : 6))) : ((i < 23034375) ? ((i < 17887500) ? 7 : ((i < 20503125) ? 8 : 9)) : ((i < 25650000) ? 10 : ((i < 28181250) ? 11 : 12))));
}

::uLong GregorianYearMonthDayCalculator__GetStartOfYearInTicks(GregorianYearMonthDayCalculator* __this, int year)
{
    if ((year < 1900) || (year > 2100))
    {
        return ::app::Uno::Time::Calendars::YearMonthDayCalculator__GetStartOfYearInTicks(__this, year);
    }

    return ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__YearStartTicks)->Item< ::uLong>(year - 1900);
}

::uLong GregorianYearMonthDayCalculator__GetTicksFromStartOfYearToStartOfMonth(GregorianYearMonthDayCalculator* __this, int year, int month)
{
    return __this->IsLeapYear(year) ? ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MaxTotalTicksByMonth)->Item< ::uLong>(month - 1) : ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MinTotalTicksByMonth)->Item< ::uLong>(month - 1);
}

int GregorianYearMonthDayCalculator__GetYearOfCentury(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Math__Abs_5(NULL, __this->GetYear(instant)) % 100;
}

int GregorianYearMonthDayCalculator__GetYearOfEra(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    int year = __this->GetYear(instant);
    return (year <= 0) ? (-year + 1) : year;
}

bool GregorianYearMonthDayCalculator__IsLeapYear(GregorianYearMonthDayCalculator* __this, int year)
{
    return ((year & 3) == 0) && (((year % 100) != 0) || ((year % 400) == 0));
}

GregorianYearMonthDayCalculator* GregorianYearMonthDayCalculator__New_1(::uStatic* __this)
{
    GregorianYearMonthDayCalculator* inst = (GregorianYearMonthDayCalculator*)::uAllocObject(sizeof(GregorianYearMonthDayCalculator), GregorianYearMonthDayCalculator__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Time::Instant GregorianYearMonthDayCalculator__SetYear(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year)
{
    int thisYear = __this->GetYear(instant);
    int dayOfYear = __this->GetDayOfYear_1(instant, thisYear);
    ::uLong tickOfDay = ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTickOfDay(NULL, instant);

    if (dayOfYear > 59)
    {
        if (__this->IsLeapYear(thisYear))
        {
            if (!__this->IsLeapYear(year))
            {
                dayOfYear--;
            }
        }
        else
        {
            if (__this->IsLeapYear(year))
            {
                dayOfYear++;
            }
        }
    }

    ::uLong ticks = __this->GetYearMonthDayTicks(year, 1, dayOfYear);
    return ::app::Uno::Time::Instant__New_1(NULL, ticks + tickOfDay);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Calendars\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TimeOfDayCalculator__uType* TimeOfDayCalculator__typeof()
{
    static ::uStaticStrong<TimeOfDayCalculator__uType*> type;
    if (type != NULL) return type;

    type = (TimeOfDayCalculator__uType*)::uAllocClassType(sizeof(TimeOfDayCalculator__uType), "Uno.Time.Calendars.TimeOfDayCalculator");

    type->SetFunctions(20,
        ::uNewFunction("GetClockHourOfHalfDay", TimeOfDayCalculator__GetClockHourOfHalfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetHourOfDay", TimeOfDayCalculator__GetHourOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetHourOfDayFromTickOfDay", TimeOfDayCalculator__GetHourOfDayFromTickOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("GetHourOfHalfDay", TimeOfDayCalculator__GetHourOfHalfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMillisecondOfDay", TimeOfDayCalculator__GetMillisecondOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMillisecondOfSecond", TimeOfDayCalculator__GetMillisecondOfSecond, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMillisecondOfSecondFromTickOfDay", TimeOfDayCalculator__GetMillisecondOfSecondFromTickOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("GetMinuteOfDay", TimeOfDayCalculator__GetMinuteOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMinuteOfHour", TimeOfDayCalculator__GetMinuteOfHour, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMinuteOfHourFromTickOfDay", TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("GetSecondOfDay", TimeOfDayCalculator__GetSecondOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetSecondOfMinute", TimeOfDayCalculator__GetSecondOfMinute, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetSecondOfMinuteFromTickOfDay", TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("GetTickOfDay", TimeOfDayCalculator__GetTickOfDay, 0, true, ::app::Uno::Long__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetTickOfMillisecond", TimeOfDayCalculator__GetTickOfMillisecond, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetTickOfSecond", TimeOfDayCalculator__GetTickOfSecond, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetTickOfSecondFromTickOfDay", TimeOfDayCalculator__GetTickOfSecondFromTickOfDay, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("GetTicks", TimeOfDayCalculator__GetTicks, 0, true, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTicks", TimeOfDayCalculator__GetTicks_1, 0, true, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTicks", TimeOfDayCalculator__GetTicks_2, 0, true, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

int TimeOfDayCalculator__GetClockHourOfHalfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    int hourOfHalfDay = TimeOfDayCalculator__GetHourOfHalfDay(NULL, instant);
    return (hourOfHalfDay == 0) ? 12 : hourOfHalfDay;
}

int TimeOfDayCalculator__GetHourOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetHourOfDayFromTickOfDay(NULL, TimeOfDayCalculator__GetTickOfDay(NULL, instant));
}

int TimeOfDayCalculator__GetHourOfDayFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    return (int)(tickOfDay >> 11) / 17578125;
}

int TimeOfDayCalculator__GetHourOfHalfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetHourOfDay(NULL, instant) % 12;
}

int TimeOfDayCalculator__GetMillisecondOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return (int)(TimeOfDayCalculator__GetTickOfDay(NULL, instant) / 10000ll);
}

int TimeOfDayCalculator__GetMillisecondOfSecond(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetMillisecondOfSecondFromTickOfDay(NULL, TimeOfDayCalculator__GetTickOfDay(NULL, instant));
}

int TimeOfDayCalculator__GetMillisecondOfSecondFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    ::uLong milliSecondOfDay = tickOfDay / 10000ll;
    return (int)(milliSecondOfDay % 1000ll);
}

int TimeOfDayCalculator__GetMinuteOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return (int)(TimeOfDayCalculator__GetTickOfDay(NULL, instant) / 600000000ll);
}

int TimeOfDayCalculator__GetMinuteOfHour(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay(NULL, TimeOfDayCalculator__GetTickOfDay(NULL, instant));
}

int TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    int minuteOfDay = (int)(tickOfDay / 600000000ll);
    return minuteOfDay % 60;
}

int TimeOfDayCalculator__GetSecondOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return (int)(TimeOfDayCalculator__GetTickOfDay(NULL, instant) / 10000000ll);
}

int TimeOfDayCalculator__GetSecondOfMinute(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay(NULL, TimeOfDayCalculator__GetTickOfDay(NULL, instant));
}

int TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    int secondOfDay = (int)(tickOfDay / 10000000ll);
    return secondOfDay % 60;
}

::uLong TimeOfDayCalculator__GetTickOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    ::uLong ticks = instant.Ticks();

    if (ticks >= 0ll)
    {
        int days = ::app::Uno::Time::Converter__TicksToDays(NULL, instant.Ticks());
        return ticks - (((::uLong)days * 52734375ll) << 14);
    }
    else
    {
        return 863999999999ll + ((ticks + 1ll) % 864000000000ll);
    }
}

int TimeOfDayCalculator__GetTickOfMillisecond(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return (int)(TimeOfDayCalculator__GetTickOfDay(NULL, instant) % 10000ll);
}

int TimeOfDayCalculator__GetTickOfSecond(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetTickOfSecondFromTickOfDay(NULL, TimeOfDayCalculator__GetTickOfDay(NULL, instant));
}

int TimeOfDayCalculator__GetTickOfSecondFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    return (int)(tickOfDay % 10000000ll);
}

::uLong TimeOfDayCalculator__GetTicks(::uStatic* __this, int hourOfDay, int minuteOfHour)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("hourOfDay"), hourOfDay, 0, 23);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("minuteOfHour"), minuteOfHour, 0, 59);
    return ((::uLong)hourOfDay * 36000000000ll) + ((::uLong)minuteOfHour * 600000000ll);
}

::uLong TimeOfDayCalculator__GetTicks_1(::uStatic* __this, int hourOfDay, int minuteOfHour, int secondOfMinute)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("hourOfDay"), hourOfDay, 0, 23);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("minuteOfHour"), minuteOfHour, 0, 59);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("secondOfMinute"), secondOfMinute, 0, 59);
    return (((::uLong)hourOfDay * 36000000000ll) + ((::uLong)minuteOfHour * 600000000ll)) + ((::uLong)secondOfMinute * 10000000ll);
}

::uLong TimeOfDayCalculator__GetTicks_2(::uStatic* __this, int hourOfDay, int minuteOfHour, int secondOfMinute, int millisecondOfSecond, int tickOfMillisecond)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("hourOfDay"), hourOfDay, 0, 23);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("minuteOfHour"), minuteOfHour, 0, 59);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("secondOfMinute"), secondOfMinute, 0, 59);
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("millisecondOfSecond"), millisecondOfSecond, 0, 999);
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("tickOfMillisecond"), (::uLong)tickOfMillisecond, 0ll, 9999ll);
    return (((((::uLong)hourOfDay * 36000000000ll) + ((::uLong)minuteOfHour * 600000000ll)) + ((::uLong)secondOfMinute * 10000000ll)) + ((::uLong)millisecondOfSecond * 10000ll)) + (::uLong)tickOfMillisecond;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Calendars\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeekYearCalculator__uType* WeekYearCalculator__typeof()
{
    static ::uStaticStrong<WeekYearCalculator__uType*> type;
    if (type != NULL) return type;

    type = (WeekYearCalculator__uType*)::uAllocClassType(sizeof(WeekYearCalculator__uType), "Uno.Time.Calendars.WeekYearCalculator", false, 0, 1, 0);

    type->SetStrongRefs(
        "yearMonthDayCalculator", offsetof(WeekYearCalculator, yearMonthDayCalculator));

    type->SetFields(2,
        ::uNewField("minDaysInFirstWeek", NULL, offsetof(WeekYearCalculator, minDaysInFirstWeek), ::app::Uno::Int__typeof()),
        ::uNewField("yearMonthDayCalculator", NULL, offsetof(WeekYearCalculator, yearMonthDayCalculator), ::app::Uno::Time::Calendars::YearMonthDayCalculator__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("GetDayOfWeek", WeekYearCalculator__GetDayOfWeek, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetInstant", WeekYearCalculator__GetInstant, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Time::IsoDayOfWeek__typeof()),
        ::uNewFunction("GetWeekOfWeekYear", WeekYearCalculator__GetWeekOfWeekYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetWeeksInWeekYear", WeekYearCalculator__GetWeeksInWeekYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetWeekYear", WeekYearCalculator__GetWeekYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetWeekYearTicks", WeekYearCalculator__GetWeekYearTicks, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void WeekYearCalculator___ObjInit(WeekYearCalculator* __this, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    __this->yearMonthDayCalculator = yearMonthDayCalculator;
    __this->minDaysInFirstWeek = minDaysInFirstWeek;
}

int WeekYearCalculator__GetDayOfWeek(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    ::uLong daysSince19700101 = ::uLong();
    ::uLong ticks = instant.Ticks();

    if (ticks >= 0ll)
    {
        daysSince19700101 = (::uLong)::app::Uno::Time::Converter__TicksToDays(NULL, ticks);
    }
    else
    {
        daysSince19700101 = ((ticks >> 14) - 52734374ll) / 52734375ll;

        if (daysSince19700101 < -3ll)
        {
            return 7 + (int)((daysSince19700101 + 4ll) % 7ll);
        }
    }

    return 1 + (int)((daysSince19700101 + 3ll) % 7ll);
}

::app::Uno::Time::Instant WeekYearCalculator__GetInstant(WeekYearCalculator* __this, int weekYear, int weekOfWeekYear, int dayOfWeek)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("weekYear"), weekYear, ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->yearMonthDayCalculator)->MinYear(), ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->yearMonthDayCalculator)->MaxYear());
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("weekOfWeekYear"), weekOfWeekYear, 1, __this->GetWeeksInWeekYear(weekYear));
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("dayOfWeek"), dayOfWeek, 1, 7);
    ::uLong ticks = (__this->GetWeekYearTicks(weekYear) + ((::uLong)(weekOfWeekYear - 1) * 6048000000000ll)) + ((::uLong)(dayOfWeek - 1) * 864000000000ll);
    return ::app::Uno::Time::Instant__New_1(NULL, ticks);
}

int WeekYearCalculator__GetWeekOfWeekYear(WeekYearCalculator* __this, ::app::Uno::Time::Instant localInstant)
{
    int weekYear = __this->GetWeekYear(localInstant);
    ::uLong startOfWeekYear = __this->GetWeekYearTicks(weekYear);
    ::uLong ticksIntoYear = localInstant.Ticks() - startOfWeekYear;
    int zeroBasedWeek = (int)(ticksIntoYear / 6048000000000ll);
    return zeroBasedWeek + 1;
}

int WeekYearCalculator__GetWeeksInWeekYear(WeekYearCalculator* __this, int weekYear)
{
    ::uLong startOfWeekYear = __this->GetWeekYearTicks(weekYear);
    ::uLong startOfCalendarYear = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->yearMonthDayCalculator)->GetStartOfYearInTicks(weekYear);
    int extraDays = (int)((startOfCalendarYear - startOfWeekYear) / 864000000000ll);
    int daysInThisYear = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->yearMonthDayCalculator)->GetDaysInYear(weekYear);
    return ((daysInThisYear + extraDays) + (__this->minDaysInFirstWeek - 1)) / 7;
}

int WeekYearCalculator__GetWeekYear(WeekYearCalculator* __this, ::app::Uno::Time::Instant instant)
{
    int calendarYear = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->yearMonthDayCalculator)->GetYear(instant);
    ::uLong startOfWeekYear = __this->GetWeekYearTicks(calendarYear);

    if (instant.Ticks() < startOfWeekYear)
    {
        return calendarYear - 1;
    }

    int weeksInWeekYear = __this->GetWeeksInWeekYear(calendarYear);
    ::uLong startOfNextCalendarYear = startOfWeekYear + ((::uLong)weeksInWeekYear * 6048000000000ll);
    return (instant.Ticks() < startOfNextCalendarYear) ? calendarYear : (calendarYear + 1);
}

::uLong WeekYearCalculator__GetWeekYearTicks(WeekYearCalculator* __this, int weekYear)
{
    ::uLong jan1Millis = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->yearMonthDayCalculator)->GetStartOfYearInTicks(weekYear);
    int jan1DayOfWeek = WeekYearCalculator__GetDayOfWeek(NULL, ::app::Uno::Time::Instant__New_1(NULL, jan1Millis));

    if (jan1DayOfWeek > (8 - __this->minDaysInFirstWeek))
    {
        return jan1Millis + ((::uLong)(8 - jan1DayOfWeek) * 864000000000ll);
    }
    else
    {
        return jan1Millis - ((::uLong)(jan1DayOfWeek - 1) * 864000000000ll);
    }
}

WeekYearCalculator* WeekYearCalculator__New_1(::uStatic* __this, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    WeekYearCalculator* inst = (WeekYearCalculator*)::uAllocObject(sizeof(WeekYearCalculator), WeekYearCalculator__typeof());
    inst->_ObjInit(yearMonthDayCalculator, minDaysInFirstWeek);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Calendars\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

YearMonthDayCalculator__uType* YearMonthDayCalculator__typeof()
{
    static ::uStaticStrong<YearMonthDayCalculator__uType*> type;
    if (type != NULL) return type;

    type = (YearMonthDayCalculator__uType*)::uAllocClassType(sizeof(YearMonthDayCalculator__uType), "Uno.Time.Calendars.YearMonthDayCalculator", false, 0, 1, 0);

    type->__fp_GetAbsoluteYear = YearMonthDayCalculator__GetAbsoluteYear;
    type->__fp_GetCenturyOfEra = YearMonthDayCalculator__GetCenturyOfEra;
    type->__fp_GetEra = YearMonthDayCalculator__GetEra;
    type->__fp_GetInstant = YearMonthDayCalculator__GetInstant;
    type->__fp_GetInstant_1 = YearMonthDayCalculator__GetInstant_1;
    type->__fp_GetMaxYearOfEra = YearMonthDayCalculator__GetMaxYearOfEra;
    type->__fp_GetStartOfYearInTicks = YearMonthDayCalculator__GetStartOfYearInTicks;
    type->__fp_GetYearOfCentury = YearMonthDayCalculator__GetYearOfCentury;
    type->__fp_GetYearOfEra = YearMonthDayCalculator__GetYearOfEra;

    type->SetStrongRefs(
        "_eras", offsetof(YearMonthDayCalculator, _eras));

    type->SetFields(6,
        ::uNewField("_averageTicksPerYear", NULL, offsetof(YearMonthDayCalculator, _averageTicksPerYear), ::app::Uno::Long__typeof()),
        ::uNewField("_eras", NULL, offsetof(YearMonthDayCalculator, _eras), ::uGetArrayType(::app::Uno::Time::Calendars::Era__typeof())),
        ::uNewField("_maxYear", NULL, offsetof(YearMonthDayCalculator, _maxYear), ::app::Uno::Int__typeof()),
        ::uNewField("_minYear", NULL, offsetof(YearMonthDayCalculator, _minYear), ::app::Uno::Int__typeof()),
        ::uNewField("_monthsInYear", NULL, offsetof(YearMonthDayCalculator, _monthsInYear), ::app::Uno::Int__typeof()),
        ::uNewField("_ticksAtStartOfYear1", NULL, offsetof(YearMonthDayCalculator, _ticksAtStartOfYear1), ::app::Uno::Long__typeof()));

    type->SetFunctions(34,
        ::uNewFunction("AddMonths", YearMonthDayCalculator__AddMonths, 0, false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("CalculateStartOfYearDays", type->__fp_CalculateStartOfYearDays, offsetof(YearMonthDayCalculator__uType, __fp_CalculateStartOfYearDays), false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Eras", YearMonthDayCalculator__get_Eras, 0, false, ::uGetArrayType(::app::Uno::Time::Calendars::Era__typeof())),
        ::uNewFunction("get_MaxYear", YearMonthDayCalculator__get_MaxYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_MinYear", YearMonthDayCalculator__get_MinYear, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TicksAtStartOfYear1", YearMonthDayCalculator__get_TicksAtStartOfYear1, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("GetAbsoluteYear", type->__fp_GetAbsoluteYear, offsetof(YearMonthDayCalculator__uType, __fp_GetAbsoluteYear), false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetCenturyOfEra", type->__fp_GetCenturyOfEra, offsetof(YearMonthDayCalculator__uType, __fp_GetCenturyOfEra), false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetDayOfMonth", YearMonthDayCalculator__GetDayOfMonth, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetDayOfMonth", YearMonthDayCalculator__GetDayOfMonth_1, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetDayOfYear", YearMonthDayCalculator__GetDayOfYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetDayOfYear", YearMonthDayCalculator__GetDayOfYear_1, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetDaysInMonth", type->__fp_GetDaysInMonth, offsetof(YearMonthDayCalculator__uType, __fp_GetDaysInMonth), false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetDaysInYear", YearMonthDayCalculator__GetDaysInYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEra", type->__fp_GetEra, offsetof(YearMonthDayCalculator__uType, __fp_GetEra), false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetEraIndex", YearMonthDayCalculator__GetEraIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Calendars::Era__typeof()),
        ::uNewFunction("GetInstant", type->__fp_GetInstant, offsetof(YearMonthDayCalculator__uType, __fp_GetInstant), false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Calendars::Era__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetInstant", type->__fp_GetInstant_1, offsetof(YearMonthDayCalculator__uType, __fp_GetInstant_1), false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMaxMonth", YearMonthDayCalculator__GetMaxMonth, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMaxYearOfEra", type->__fp_GetMaxYearOfEra, offsetof(YearMonthDayCalculator__uType, __fp_GetMaxYearOfEra), false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMinYearOfEra", YearMonthDayCalculator__GetMinYearOfEra, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMonthOfYear", YearMonthDayCalculator__GetMonthOfYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetMonthOfYear", type->__fp_GetMonthOfYear_1, offsetof(YearMonthDayCalculator__uType, __fp_GetMonthOfYear_1), false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetStartOfYearInTicks", type->__fp_GetStartOfYearInTicks, offsetof(YearMonthDayCalculator__uType, __fp_GetStartOfYearInTicks), false, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTicksFromStartOfYearToStartOfMonth", type->__fp_GetTicksFromStartOfYearToStartOfMonth, offsetof(YearMonthDayCalculator__uType, __fp_GetTicksFromStartOfYearToStartOfMonth), false, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTicksInYear", YearMonthDayCalculator__GetTicksInYear, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetYear", YearMonthDayCalculator__GetYear, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetYearMonthDayTicks", YearMonthDayCalculator__GetYearMonthDayTicks, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetYearMonthTicks", YearMonthDayCalculator__GetYearMonthTicks, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetYearOfCentury", type->__fp_GetYearOfCentury, offsetof(YearMonthDayCalculator__uType, __fp_GetYearOfCentury), false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("GetYearOfEra", type->__fp_GetYearOfEra, offsetof(YearMonthDayCalculator__uType, __fp_GetYearOfEra), false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("IsLeapYear", type->__fp_IsLeapYear, offsetof(YearMonthDayCalculator__uType, __fp_IsLeapYear), false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("MonthsBetween", YearMonthDayCalculator__MonthsBetween, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof()),
        ::uNewFunction("SetYear", type->__fp_SetYear, offsetof(YearMonthDayCalculator__uType, __fp_SetYear), false, ::app::Uno::Time::Instant__typeof(), ::app::Uno::Time::Instant__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void YearMonthDayCalculator___ObjInit(YearMonthDayCalculator* __this, int minYear, int maxYear, int monthsInYear, ::uLong averageTicksPerYear, ::uLong ticksAtStartOfYear1, ::uArray* eras)
{
    __this->_minYear = minYear;
    __this->_maxYear = maxYear;
    __this->_monthsInYear = monthsInYear;
    __this->_eras = ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Calendars_Era__(NULL, eras, ::uGetConstString("eras"));
    __this->_averageTicksPerYear = averageTicksPerYear;
    __this->_ticksAtStartOfYear1 = ticksAtStartOfYear1;
}

::app::Uno::Time::Instant YearMonthDayCalculator__AddMonths(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int months)
{
    if (months == 0)
    {
        return instant;
    }

    ::uLong timePart = ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTickOfDay(NULL, instant);
    int thisYear = __this->GetYear(instant);
    int thisMonth = __this->GetMonthOfYear_1(instant, thisYear);
    int yearToUse = int();
    int monthToUse = (thisMonth - 1) + months;

    if (monthToUse >= 0)
    {
        yearToUse = thisYear + (monthToUse / __this->_monthsInYear);
        monthToUse = (monthToUse % __this->_monthsInYear) + 1;
    }
    else
    {
        yearToUse = (thisYear + (monthToUse / __this->_monthsInYear)) - 1;
        monthToUse = ::app::Uno::Math__Abs_5(NULL, monthToUse);
        int remMonthToUse = monthToUse % __this->_monthsInYear;

        if (remMonthToUse == 0)
        {
            remMonthToUse = __this->_monthsInYear;
        }

        monthToUse = (__this->_monthsInYear - remMonthToUse) + 1;

        if (monthToUse == 1)
        {
            yearToUse++;
        }
    }

    int dayToUse = __this->GetDayOfMonth_1(instant, thisYear, thisMonth);
    int maxDay = __this->GetDaysInMonth(yearToUse, monthToUse);
    dayToUse = ::app::Uno::Math__Min_8(NULL, dayToUse, maxDay);
    ::uLong datePart = __this->GetYearMonthDayTicks(yearToUse, monthToUse, dayToUse);
    return ::app::Uno::Time::Instant__New_1(NULL, datePart + timePart);
}

::uArray* YearMonthDayCalculator__get_Eras(YearMonthDayCalculator* __this)
{
    return __this->_eras;
}

int YearMonthDayCalculator__get_MaxYear(YearMonthDayCalculator* __this)
{
    return __this->_maxYear;
}

int YearMonthDayCalculator__get_MinYear(YearMonthDayCalculator* __this)
{
    return __this->_minYear;
}

::uLong YearMonthDayCalculator__get_TicksAtStartOfYear1(YearMonthDayCalculator* __this)
{
    return __this->_ticksAtStartOfYear1;
}

int YearMonthDayCalculator__GetAbsoluteYear(YearMonthDayCalculator* __this, int yearOfEra, int eraIndex)
{
    if ((yearOfEra < 1) || (yearOfEra > __this->MaxYear()))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("yearOfEra")));
    }

    return yearOfEra;
}

int YearMonthDayCalculator__GetCenturyOfEra(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    int yearOfEra = __this->GetYearOfEra(instant);
    int zeroBasedRemainder = yearOfEra % 100;
    int zeroBasedResult = yearOfEra / 100;
    return (zeroBasedRemainder == 0) ? zeroBasedResult : (zeroBasedResult + 1);
}

int YearMonthDayCalculator__GetDayOfMonth(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    int year = __this->GetYear(instant);
    int month = __this->GetMonthOfYear_1(instant, year);
    return __this->GetDayOfMonth_1(instant, year, month);
}

int YearMonthDayCalculator__GetDayOfMonth_1(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year, int month)
{
    ::uLong dateTicks = __this->GetYearMonthTicks(year, month);
    ::uLong ticksWithinMonth = instant.Ticks() - dateTicks;
    return ::app::Uno::Time::Converter__TicksToDays(NULL, ticksWithinMonth) + 1;
}

int YearMonthDayCalculator__GetDayOfYear(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    return __this->GetDayOfYear_1(instant, __this->GetYear(instant));
}

int YearMonthDayCalculator__GetDayOfYear_1(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year)
{
    ::uLong yearStart = __this->GetStartOfYearInTicks(year);
    ::uLong ticksWithinYear = instant.Ticks() - yearStart;
    return ::app::Uno::Time::Converter__TicksToDays(NULL, ticksWithinYear) + 1;
}

int YearMonthDayCalculator__GetDaysInYear(YearMonthDayCalculator* __this, int year)
{
    return __this->IsLeapYear(year) ? 366 : 365;
}

int YearMonthDayCalculator__GetEra(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    return 0;
}

int YearMonthDayCalculator__GetEraIndex(YearMonthDayCalculator* __this, ::app::Uno::Time::Calendars::Era* era)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Calendars_Era(NULL, era, ::uGetConstString("era"));
    int index = -1;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->Eras())->Length(); i++)
    {
        if (::uPtr< ::uArray*>(__this->Eras())->Item< ::app::Uno::Time::Calendars::Era*>(i) == era)
        {
            index = i;
        }
    }

    ::app::Uno::Time::Preconditions__CheckArgument(NULL, index != -1, ::uGetConstString("era"), ::uGetConstString("Era is not used in this calendar"));
    return index;
}

::app::Uno::Time::Instant YearMonthDayCalculator__GetInstant(YearMonthDayCalculator* __this, ::app::Uno::Time::Calendars::Era* era, int yearOfEra, int monthOfYear, int dayOfMonth)
{
    __this->GetEraIndex(era);
    return __this->GetInstant_1(yearOfEra, monthOfYear, dayOfMonth);
}

::app::Uno::Time::Instant YearMonthDayCalculator__GetInstant_1(YearMonthDayCalculator* __this, int year, int monthOfYear, int dayOfMonth)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("year"), year, __this->MinYear(), __this->MaxYear());
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("monthOfYear"), monthOfYear, 1, __this->GetMaxMonth(year));
    ::app::Uno::Time::Preconditions__CheckArgumentRange(NULL, ::uGetConstString("dayOfMonth"), dayOfMonth, 1, __this->GetDaysInMonth(year, monthOfYear));
    return ::app::Uno::Time::Instant__New_1(NULL, __this->GetYearMonthDayTicks(year, monthOfYear, dayOfMonth));
}

int YearMonthDayCalculator__GetMaxMonth(YearMonthDayCalculator* __this, int year)
{
    return __this->_monthsInYear;
}

int YearMonthDayCalculator__GetMaxYearOfEra(YearMonthDayCalculator* __this, int eraIndex)
{
    return __this->MaxYear();
}

int YearMonthDayCalculator__GetMinYearOfEra(YearMonthDayCalculator* __this, int eraIndex)
{
    return 1;
}

int YearMonthDayCalculator__GetMonthOfYear(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    return __this->GetMonthOfYear_1(instant, __this->GetYear(instant));
}

::uLong YearMonthDayCalculator__GetStartOfYearInTicks(YearMonthDayCalculator* __this, int year)
{
    return (::uLong)__this->CalculateStartOfYearDays(year) * 864000000000ll;
}

::uLong YearMonthDayCalculator__GetTicksInYear(YearMonthDayCalculator* __this, int year)
{
    return __this->IsLeapYear(year) ? 316224000000000ll : 315360000000000ll;
}

int YearMonthDayCalculator__GetYear(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    ::uLong targetTicks = instant.Ticks();
    ::uLong halfTicksPerYear = __this->_averageTicksPerYear >> 1;
    ::uLong halfTicksSinceStartOfYear1 = (targetTicks >> 1) - (__this->_ticksAtStartOfYear1 >> 1);

    if (halfTicksSinceStartOfYear1 < 0ll)
    {
        halfTicksSinceStartOfYear1 = halfTicksSinceStartOfYear1 + (1ll - halfTicksPerYear);
    }

    int candidate = (int)(halfTicksSinceStartOfYear1 / halfTicksPerYear) + 1;
    ::uLong candidateStart = __this->GetStartOfYearInTicks(candidate);
    ::uLong ticksFromCandidateStartToTarget = targetTicks - candidateStart;

    if (ticksFromCandidateStartToTarget < 0ll)
    {
        do
        {
            candidate--;
            ticksFromCandidateStartToTarget = ticksFromCandidateStartToTarget + __this->GetTicksInYear(candidate);
        }
        while (ticksFromCandidateStartToTarget < 0ll);

        return candidate;
    }

    ::uLong candidateLength = __this->GetTicksInYear(candidate);

    while (ticksFromCandidateStartToTarget >= candidateLength)
    {
        candidate++;
        ticksFromCandidateStartToTarget = ticksFromCandidateStartToTarget - candidateLength;
        candidateLength = __this->GetTicksInYear(candidate);
    }

    return candidate;
}

::uLong YearMonthDayCalculator__GetYearMonthDayTicks(YearMonthDayCalculator* __this, int year, int month, int dayOfMonth)
{
    ::uLong ticks = __this->GetYearMonthTicks(year, month);
    return ticks + ((::uLong)(dayOfMonth - 1) * 864000000000ll);
}

::uLong YearMonthDayCalculator__GetYearMonthTicks(YearMonthDayCalculator* __this, int year, int month)
{
    ::uLong ticks = __this->GetStartOfYearInTicks(year);
    return ticks + __this->GetTicksFromStartOfYearToStartOfMonth(year, month);
}

int YearMonthDayCalculator__GetYearOfCentury(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    int yearOfEra = __this->GetYearOfEra(instant);
    int zeroBased = yearOfEra % 100;
    return (zeroBased == 0) ? 100 : zeroBased;
}

int YearMonthDayCalculator__GetYearOfEra(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    return __this->GetYear(instant);
}

int YearMonthDayCalculator__MonthsBetween(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant minuendInstant, ::app::Uno::Time::Instant subtrahendInstant)
{
    int minuendYear = __this->GetYear(minuendInstant);
    int subtrahendYear = __this->GetYear(subtrahendInstant);
    int minuendMonth = __this->GetMonthOfYear(minuendInstant);
    int subtrahendMonth = __this->GetMonthOfYear(subtrahendInstant);
    int diff = (((minuendYear - subtrahendYear) * __this->_monthsInYear) + minuendMonth) - subtrahendMonth;
    ::app::Uno::Time::Instant simpleAddition = __this->AddMonths(subtrahendInstant, diff);

    if (::app::Uno::Time::Instant__op_LessThanOrEqual(NULL, subtrahendInstant, minuendInstant))
    {
        return ::app::Uno::Time::Instant__op_LessThanOrEqual(NULL, simpleAddition, minuendInstant) ? diff : (diff - 1);
    }
    else
    {
        return ::app::Uno::Time::Instant__op_GreaterThanOrEqual(NULL, simpleAddition, minuendInstant) ? diff : (diff + 1);
    }
}

}}}}
