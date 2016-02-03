// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Calendars\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDARS_WEEK_YEAR_CALCULATOR_H__
#define __APP_UNO_TIME_CALENDARS_WEEK_YEAR_CALCULATOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct YearMonthDayCalculator; } } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

struct WeekYearCalculator;

struct WeekYearCalculator__uType : ::uClassType
{
};

WeekYearCalculator__uType* WeekYearCalculator__typeof();

void WeekYearCalculator___ObjInit(WeekYearCalculator* __this, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
int WeekYearCalculator__GetDayOfWeek(::uStatic* __this, ::app::Uno::Time::Instant instant);
::app::Uno::Time::Instant WeekYearCalculator__GetInstant(WeekYearCalculator* __this, int weekYear, int weekOfWeekYear, int dayOfWeek);
int WeekYearCalculator__GetWeekOfWeekYear(WeekYearCalculator* __this, ::app::Uno::Time::Instant localInstant);
int WeekYearCalculator__GetWeeksInWeekYear(WeekYearCalculator* __this, int weekYear);
int WeekYearCalculator__GetWeekYear(WeekYearCalculator* __this, ::app::Uno::Time::Instant instant);
::uLong WeekYearCalculator__GetWeekYearTicks(WeekYearCalculator* __this, int weekYear);
WeekYearCalculator* WeekYearCalculator__New_1(::uStatic* __this, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);

struct WeekYearCalculator : ::uObject
{
    ::uStrong< ::app::Uno::Time::Calendars::YearMonthDayCalculator*> yearMonthDayCalculator;
    int minDaysInFirstWeek;

    void _ObjInit(::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek) { WeekYearCalculator___ObjInit(this, yearMonthDayCalculator, minDaysInFirstWeek); }
    ::app::Uno::Time::Instant GetInstant(int weekYear, int weekOfWeekYear, int dayOfWeek);
    int GetWeekOfWeekYear(::app::Uno::Time::Instant localInstant);
    int GetWeeksInWeekYear(int weekYear) { return WeekYearCalculator__GetWeeksInWeekYear(this, weekYear); }
    int GetWeekYear(::app::Uno::Time::Instant instant);
    ::uLong GetWeekYearTicks(int weekYear) { return WeekYearCalculator__GetWeekYearTicks(this, weekYear); }
};

}}}}

#include <app/Uno.Time.Instant.h>

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

inline ::app::Uno::Time::Instant WeekYearCalculator::GetInstant(int weekYear, int weekOfWeekYear, int dayOfWeek) { return WeekYearCalculator__GetInstant(this, weekYear, weekOfWeekYear, dayOfWeek); }
inline int WeekYearCalculator::GetWeekOfWeekYear(::app::Uno::Time::Instant localInstant) { return WeekYearCalculator__GetWeekOfWeekYear(this, localInstant); }
inline int WeekYearCalculator::GetWeekYear(::app::Uno::Time::Instant instant) { return WeekYearCalculator__GetWeekYear(this, instant); }

}}}}


#endif
