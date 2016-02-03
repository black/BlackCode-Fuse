// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Timezones\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_FIXED_DATE_TIME_ZONE_H__
#define __APP_UNO_TIME_FIXED_DATE_TIME_ZONE_H__

#include <app/Uno.Time.DateTimeZone.h>
#include <app/Uno.Time.Offset.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }

namespace app {
namespace Uno {
namespace Time {

struct FixedDateTimeZone;

struct FixedDateTimeZone__uType : ::app::Uno::Time::DateTimeZone__uType
{
};

FixedDateTimeZone__uType* FixedDateTimeZone__typeof();

void FixedDateTimeZone___ObjInit_1(FixedDateTimeZone* __this, ::app::Uno::Time::Offset offset);
void FixedDateTimeZone___ObjInit_2(FixedDateTimeZone* __this, ::uString* id, ::app::Uno::Time::Offset offset);
bool FixedDateTimeZone__EqualsImpl(FixedDateTimeZone* __this, ::app::Uno::Time::DateTimeZone* other);
::app::Uno::Time::Offset FixedDateTimeZone__get_Offset(FixedDateTimeZone* __this);
int FixedDateTimeZone__GetHashCode(FixedDateTimeZone* __this);
::app::Uno::Time::Offset FixedDateTimeZone__GetUtcOffset(FixedDateTimeZone* __this, ::app::Uno::Time::LocalDateTime* dateTime);
FixedDateTimeZone* FixedDateTimeZone__New_1(::uStatic* __this, ::app::Uno::Time::Offset offset);
FixedDateTimeZone* FixedDateTimeZone__New_2(::uStatic* __this, ::uString* id, ::app::Uno::Time::Offset offset);
::uString* FixedDateTimeZone__ToString(FixedDateTimeZone* __this);

struct FixedDateTimeZone : ::app::Uno::Time::DateTimeZone
{
    ::app::Uno::Time::Offset offset;

    void _ObjInit_1(::app::Uno::Time::Offset offset) { FixedDateTimeZone___ObjInit_1(this, offset); }
    void _ObjInit_2(::uString* id, ::app::Uno::Time::Offset offset) { FixedDateTimeZone___ObjInit_2(this, id, offset); }
    ::app::Uno::Time::Offset Offset() { return FixedDateTimeZone__get_Offset(this); }
};

}}}


#endif
