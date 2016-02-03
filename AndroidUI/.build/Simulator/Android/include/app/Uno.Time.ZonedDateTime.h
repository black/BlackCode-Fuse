// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_ZONED_DATE_TIME_H__
#define __APP_UNO_TIME_ZONED_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Offset.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct DateTimeZone; } } }
namespace app { namespace Uno { namespace Time { struct Duration; } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }
namespace app { namespace Uno { namespace Time { struct LocalDate; } } }
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }
namespace app { namespace Uno { namespace Time { struct LocalTime; } } }
namespace app { namespace Uno { namespace Time { struct OffsetDateTime; } } }

namespace app {
namespace Uno {
namespace Time {

struct ZonedDateTime;

struct ZonedDateTime__uType : ::uClassType
{
};

ZonedDateTime__uType* ZonedDateTime__typeof();

void ZonedDateTime___ObjInit(ZonedDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone);
void ZonedDateTime___ObjInit_1(ZonedDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar);
void ZonedDateTime___ObjInit_2(ZonedDateTime* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::DateTimeZone* zone);
void ZonedDateTime___ObjInit_3(ZonedDateTime* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset, ::app::Uno::Time::DateTimeZone* zone);
ZonedDateTime* ZonedDateTime__Add(::uStatic* __this, ZonedDateTime* zonedDateTime, ::app::Uno::Time::Duration duration);
bool ZonedDateTime__Equals(ZonedDateTime* __this, ::uObject* obj);
bool ZonedDateTime__Equals_2(ZonedDateTime* __this, ZonedDateTime* other);
::app::Uno::Time::CalendarSystem* ZonedDateTime__get_Calendar(ZonedDateTime* __this);
int ZonedDateTime__get_CenturyOfEra(ZonedDateTime* __this);
int ZonedDateTime__get_ClockHourOfHalfDay(ZonedDateTime* __this);
::app::Uno::Time::LocalDate* ZonedDateTime__get_Date(ZonedDateTime* __this);
int ZonedDateTime__get_Day(ZonedDateTime* __this);
int ZonedDateTime__get_DayOfWeek(ZonedDateTime* __this);
int ZonedDateTime__get_DayOfYear(ZonedDateTime* __this);
::app::Uno::Time::Calendars::Era* ZonedDateTime__get_Era(ZonedDateTime* __this);
int ZonedDateTime__get_Hour(ZonedDateTime* __this);
::app::Uno::Time::Instant ZonedDateTime__get_Instant(ZonedDateTime* __this);
int ZonedDateTime__get_IsoDayOfWeek(ZonedDateTime* __this);
::app::Uno::Time::LocalDateTime* ZonedDateTime__get_LocalDateTime(ZonedDateTime* __this);
int ZonedDateTime__get_Millisecond(ZonedDateTime* __this);
int ZonedDateTime__get_Minute(ZonedDateTime* __this);
int ZonedDateTime__get_Month(ZonedDateTime* __this);
ZonedDateTime* ZonedDateTime__get_Now(::uStatic* __this);
::app::Uno::Time::Offset ZonedDateTime__get_Offset(ZonedDateTime* __this);
int ZonedDateTime__get_Second(ZonedDateTime* __this);
::uLong ZonedDateTime__get_TickOfDay(ZonedDateTime* __this);
int ZonedDateTime__get_TickOfSecond(ZonedDateTime* __this);
::app::Uno::Time::LocalTime ZonedDateTime__get_TimeOfDay(ZonedDateTime* __this);
int ZonedDateTime__get_WeekOfWeekYear(ZonedDateTime* __this);
int ZonedDateTime__get_WeekYear(ZonedDateTime* __this);
int ZonedDateTime__get_Year(ZonedDateTime* __this);
int ZonedDateTime__get_YearOfCentury(ZonedDateTime* __this);
int ZonedDateTime__get_YearOfEra(ZonedDateTime* __this);
::app::Uno::Time::DateTimeZone* ZonedDateTime__get_Zone(ZonedDateTime* __this);
int ZonedDateTime__GetHashCode(ZonedDateTime* __this);
ZonedDateTime* ZonedDateTime__Minus(ZonedDateTime* __this, ::app::Uno::Time::Duration duration);
ZonedDateTime* ZonedDateTime__New_1(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone);
ZonedDateTime* ZonedDateTime__New_2(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar);
ZonedDateTime* ZonedDateTime__New_3(::uStatic* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::DateTimeZone* zone);
ZonedDateTime* ZonedDateTime__New_4(::uStatic* __this, ::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset, ::app::Uno::Time::DateTimeZone* zone);
ZonedDateTime* ZonedDateTime__op_Addition(::uStatic* __this, ZonedDateTime* zonedDateTime, ::app::Uno::Time::Duration duration);
bool ZonedDateTime__op_Equality(::uStatic* __this, ZonedDateTime* left, ZonedDateTime* right);
bool ZonedDateTime__op_GreaterThan(::uStatic* __this, ZonedDateTime* lhs, ZonedDateTime* rhs);
bool ZonedDateTime__op_GreaterThanOrEqual(::uStatic* __this, ZonedDateTime* lhs, ZonedDateTime* rhs);
bool ZonedDateTime__op_Inequality(::uStatic* __this, ZonedDateTime* left, ZonedDateTime* right);
bool ZonedDateTime__op_LessThan(::uStatic* __this, ZonedDateTime* lhs, ZonedDateTime* rhs);
bool ZonedDateTime__op_LessThanOrEqual(::uStatic* __this, ZonedDateTime* lhs, ZonedDateTime* rhs);
ZonedDateTime* ZonedDateTime__op_Subtraction(::uStatic* __this, ZonedDateTime* zonedDateTime, ::app::Uno::Time::Duration duration);
ZonedDateTime* ZonedDateTime__Plus(ZonedDateTime* __this, ::app::Uno::Time::Duration duration);
ZonedDateTime* ZonedDateTime__Subtract(::uStatic* __this, ZonedDateTime* zonedDateTime, ::app::Uno::Time::Duration duration);
::app::Uno::Time::Instant ZonedDateTime__ToInstant(ZonedDateTime* __this);
::app::Uno::Time::OffsetDateTime* ZonedDateTime__ToOffsetDateTime(ZonedDateTime* __this);
::uString* ZonedDateTime__ToString(ZonedDateTime* __this);
ZonedDateTime* ZonedDateTime__WithZone(ZonedDateTime* __this, ::app::Uno::Time::DateTimeZone* targetZone);

struct ZonedDateTime : ::uObject
{
    ::uStrong< ::app::Uno::Time::LocalDateTime*> _localDateTime;
    ::uStrong< ::app::Uno::Time::DateTimeZone*> _zone;
    ::app::Uno::Time::Offset _offset;

    void _ObjInit(::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone);
    void _ObjInit_1(::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar);
    void _ObjInit_2(::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::DateTimeZone* zone) { ZonedDateTime___ObjInit_2(this, localDateTime, zone); }
    void _ObjInit_3(::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset, ::app::Uno::Time::DateTimeZone* zone);
    bool Equals_2(ZonedDateTime* other) { return ZonedDateTime__Equals_2(this, other); }
    ::app::Uno::Time::CalendarSystem* Calendar() { return ZonedDateTime__get_Calendar(this); }
    int CenturyOfEra() { return ZonedDateTime__get_CenturyOfEra(this); }
    int ClockHourOfHalfDay() { return ZonedDateTime__get_ClockHourOfHalfDay(this); }
    ::app::Uno::Time::LocalDate* Date() { return ZonedDateTime__get_Date(this); }
    int Day() { return ZonedDateTime__get_Day(this); }
    int DayOfWeek() { return ZonedDateTime__get_DayOfWeek(this); }
    int DayOfYear() { return ZonedDateTime__get_DayOfYear(this); }
    ::app::Uno::Time::Calendars::Era* Era() { return ZonedDateTime__get_Era(this); }
    int Hour() { return ZonedDateTime__get_Hour(this); }
    ::app::Uno::Time::Instant Instant();
    int IsoDayOfWeek() { return ZonedDateTime__get_IsoDayOfWeek(this); }
    ::app::Uno::Time::LocalDateTime* LocalDateTime() { return ZonedDateTime__get_LocalDateTime(this); }
    int Millisecond() { return ZonedDateTime__get_Millisecond(this); }
    int Minute() { return ZonedDateTime__get_Minute(this); }
    int Month() { return ZonedDateTime__get_Month(this); }
    ::app::Uno::Time::Offset Offset();
    int Second() { return ZonedDateTime__get_Second(this); }
    ::uLong TickOfDay() { return ZonedDateTime__get_TickOfDay(this); }
    int TickOfSecond() { return ZonedDateTime__get_TickOfSecond(this); }
    ::app::Uno::Time::LocalTime TimeOfDay();
    int WeekOfWeekYear() { return ZonedDateTime__get_WeekOfWeekYear(this); }
    int WeekYear() { return ZonedDateTime__get_WeekYear(this); }
    int Year() { return ZonedDateTime__get_Year(this); }
    int YearOfCentury() { return ZonedDateTime__get_YearOfCentury(this); }
    int YearOfEra() { return ZonedDateTime__get_YearOfEra(this); }
    ::app::Uno::Time::DateTimeZone* Zone() { return ZonedDateTime__get_Zone(this); }
    ZonedDateTime* Minus(::app::Uno::Time::Duration duration);
    ZonedDateTime* Plus(::app::Uno::Time::Duration duration);
    ::app::Uno::Time::Instant ToInstant();
    ::app::Uno::Time::OffsetDateTime* ToOffsetDateTime() { return ZonedDateTime__ToOffsetDateTime(this); }
    ZonedDateTime* WithZone(::app::Uno::Time::DateTimeZone* targetZone) { return ZonedDateTime__WithZone(this, targetZone); }
};

}}}

#include <app/Uno.Time.Duration.h>
#include <app/Uno.Time.Instant.h>
#include <app/Uno.Time.LocalTime.h>

namespace app {
namespace Uno {
namespace Time {

inline void ZonedDateTime::_ObjInit(::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone) { ZonedDateTime___ObjInit(this, instant, zone); }
inline void ZonedDateTime::_ObjInit_1(::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar) { ZonedDateTime___ObjInit_1(this, instant, zone, calendar); }
inline void ZonedDateTime::_ObjInit_3(::app::Uno::Time::LocalDateTime* localDateTime, ::app::Uno::Time::Offset offset, ::app::Uno::Time::DateTimeZone* zone) { ZonedDateTime___ObjInit_3(this, localDateTime, offset, zone); }
inline ::app::Uno::Time::Instant ZonedDateTime::Instant() { return ZonedDateTime__get_Instant(this); }
inline ::app::Uno::Time::Offset ZonedDateTime::Offset() { return ZonedDateTime__get_Offset(this); }
inline ::app::Uno::Time::LocalTime ZonedDateTime::TimeOfDay() { return ZonedDateTime__get_TimeOfDay(this); }
inline ZonedDateTime* ZonedDateTime::Minus(::app::Uno::Time::Duration duration) { return ZonedDateTime__Minus(this, duration); }
inline ZonedDateTime* ZonedDateTime::Plus(::app::Uno::Time::Duration duration) { return ZonedDateTime__Plus(this, duration); }
inline ::app::Uno::Time::Instant ZonedDateTime::ToInstant() { return ZonedDateTime__ToInstant(this); }

}}}


#endif
