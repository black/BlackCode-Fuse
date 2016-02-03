// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_OFFSET_DATE_TIME_H__
#define __APP_UNO_TIME_OFFSET_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Offset.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }
namespace app { namespace Uno { namespace Time { struct LocalDate; } } }
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }
namespace app { namespace Uno { namespace Time { struct LocalTime; } } }
namespace app { namespace Uno { namespace Time { struct ZonedDateTime; } } }

namespace app {
namespace Uno {
namespace Time {

struct OffsetDateTime;

struct OffsetDateTime__uType : ::uClassType
{
};

OffsetDateTime__uType* OffsetDateTime__typeof();

void OffsetDateTime___ObjInit(OffsetDateTime* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset);
bool OffsetDateTime__Equals(OffsetDateTime* __this, ::uObject* obj);
bool OffsetDateTime__Equals_2(OffsetDateTime* __this, OffsetDateTime* other);
::app::Uno::Time::CalendarSystem* OffsetDateTime__get_Calendar(OffsetDateTime* __this);
int OffsetDateTime__get_ClockHourOfHalfDay(OffsetDateTime* __this);
::app::Uno::Time::LocalDate* OffsetDateTime__get_Date(OffsetDateTime* __this);
int OffsetDateTime__get_Day(OffsetDateTime* __this);
int OffsetDateTime__get_DayOfWeek(OffsetDateTime* __this);
int OffsetDateTime__get_DayOfYear(OffsetDateTime* __this);
::app::Uno::Time::Calendars::Era* OffsetDateTime__get_Era(OffsetDateTime* __this);
int OffsetDateTime__get_Hour(OffsetDateTime* __this);
int OffsetDateTime__get_IsoDayOfWeek(OffsetDateTime* __this);
::app::Uno::Time::LocalDateTime* OffsetDateTime__get_LocalDateTime(OffsetDateTime* __this);
int OffsetDateTime__get_Millisecond(OffsetDateTime* __this);
int OffsetDateTime__get_Minute(OffsetDateTime* __this);
int OffsetDateTime__get_Month(OffsetDateTime* __this);
::app::Uno::Time::Offset OffsetDateTime__get_Offset(OffsetDateTime* __this);
int OffsetDateTime__get_Second(OffsetDateTime* __this);
::uLong OffsetDateTime__get_TickOfDay(OffsetDateTime* __this);
int OffsetDateTime__get_TickOfSecond(OffsetDateTime* __this);
::app::Uno::Time::LocalTime OffsetDateTime__get_TimeOfDay(OffsetDateTime* __this);
int OffsetDateTime__get_WeekOfWeekYear(OffsetDateTime* __this);
int OffsetDateTime__get_WeekYear(OffsetDateTime* __this);
int OffsetDateTime__get_Year(OffsetDateTime* __this);
int OffsetDateTime__get_YearOfCentury(OffsetDateTime* __this);
int OffsetDateTime__get_YearOfEra(OffsetDateTime* __this);
int OffsetDateTime__GetHashCode(OffsetDateTime* __this);
::app::Uno::Time::ZonedDateTime* OffsetDateTime__InFixedZone(OffsetDateTime* __this);
OffsetDateTime* OffsetDateTime__New_1(::uStatic* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset);
bool OffsetDateTime__op_Equality(::uStatic* __this, OffsetDateTime* left, OffsetDateTime* right);
bool OffsetDateTime__op_Inequality(::uStatic* __this, OffsetDateTime* left, OffsetDateTime* right);
::app::Uno::Time::Instant OffsetDateTime__ToInstant(OffsetDateTime* __this);
::uString* OffsetDateTime__ToString(OffsetDateTime* __this);
OffsetDateTime* OffsetDateTime__WithOffset(OffsetDateTime* __this, ::app::Uno::Time::Offset offset);

struct OffsetDateTime : ::uObject
{
    ::uStrong< ::app::Uno::Time::LocalDateTime*> _localDateTime;
    ::app::Uno::Time::Offset _offset;

    void _ObjInit(::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset);
    bool Equals_2(OffsetDateTime* other) { return OffsetDateTime__Equals_2(this, other); }
    ::app::Uno::Time::CalendarSystem* Calendar() { return OffsetDateTime__get_Calendar(this); }
    int ClockHourOfHalfDay() { return OffsetDateTime__get_ClockHourOfHalfDay(this); }
    ::app::Uno::Time::LocalDate* Date() { return OffsetDateTime__get_Date(this); }
    int Day() { return OffsetDateTime__get_Day(this); }
    int DayOfWeek() { return OffsetDateTime__get_DayOfWeek(this); }
    int DayOfYear() { return OffsetDateTime__get_DayOfYear(this); }
    ::app::Uno::Time::Calendars::Era* Era() { return OffsetDateTime__get_Era(this); }
    int Hour() { return OffsetDateTime__get_Hour(this); }
    int IsoDayOfWeek() { return OffsetDateTime__get_IsoDayOfWeek(this); }
    ::app::Uno::Time::LocalDateTime* LocalDateTime() { return OffsetDateTime__get_LocalDateTime(this); }
    int Millisecond() { return OffsetDateTime__get_Millisecond(this); }
    int Minute() { return OffsetDateTime__get_Minute(this); }
    int Month() { return OffsetDateTime__get_Month(this); }
    ::app::Uno::Time::Offset Offset();
    int Second() { return OffsetDateTime__get_Second(this); }
    ::uLong TickOfDay() { return OffsetDateTime__get_TickOfDay(this); }
    int TickOfSecond() { return OffsetDateTime__get_TickOfSecond(this); }
    ::app::Uno::Time::LocalTime TimeOfDay();
    int WeekOfWeekYear() { return OffsetDateTime__get_WeekOfWeekYear(this); }
    int WeekYear() { return OffsetDateTime__get_WeekYear(this); }
    int Year() { return OffsetDateTime__get_Year(this); }
    int YearOfCentury() { return OffsetDateTime__get_YearOfCentury(this); }
    int YearOfEra() { return OffsetDateTime__get_YearOfEra(this); }
    ::app::Uno::Time::ZonedDateTime* InFixedZone() { return OffsetDateTime__InFixedZone(this); }
    ::app::Uno::Time::Instant ToInstant();
    OffsetDateTime* WithOffset(::app::Uno::Time::Offset offset);
};

}}}

#include <app/Uno.Time.Instant.h>
#include <app/Uno.Time.LocalTime.h>

namespace app {
namespace Uno {
namespace Time {

inline void OffsetDateTime::_ObjInit(::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset) { OffsetDateTime___ObjInit(this, localDateTime, offset); }
inline ::app::Uno::Time::Offset OffsetDateTime::Offset() { return OffsetDateTime__get_Offset(this); }
inline ::app::Uno::Time::LocalTime OffsetDateTime::TimeOfDay() { return OffsetDateTime__get_TimeOfDay(this); }
inline ::app::Uno::Time::Instant OffsetDateTime::ToInstant() { return OffsetDateTime__ToInstant(this); }
inline OffsetDateTime* OffsetDateTime::WithOffset(::app::Uno::Time::Offset offset) { return OffsetDateTime__WithOffset(this, offset); }

}}}


#endif
