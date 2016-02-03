// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_DATE_TIME_ZONE_H__
#define __APP_UNO_TIME_DATE_TIME_ZONE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }
namespace app { namespace Uno { namespace Time { struct Offset; } } }
namespace app { namespace Uno { namespace Time { struct ZonedDateTime; } } }

namespace app {
namespace Uno {
namespace Time {

struct DateTimeZone;

extern ::uStaticStrong< DateTimeZone*> DateTimeZone__UtcZone;

struct DateTimeZone__uType : ::uClassType
{
    bool(*__fp_EqualsImpl)(DateTimeZone*, DateTimeZone*);
    ::app::Uno::Time::Offset(*__fp_GetUtcOffset)(DateTimeZone*, ::app::Uno::Time::LocalDateTime*);
};

DateTimeZone__uType* DateTimeZone__typeof();

void DateTimeZone___ObjInit(DateTimeZone* __this, ::uString* id, bool isFixed, ::app::Uno::Time::Offset minOffset, ::app::Uno::Time::Offset maxOffset);
void DateTimeZone___TypeInit(::uStatic* __this);
::app::Uno::Time::ZonedDateTime* DateTimeZone__AtStrictly(DateTimeZone* __this, ::app::Uno::Time::LocalDateTime* localDateTime);
bool DateTimeZone__Equals(DateTimeZone* __this, ::uObject* obj);
bool DateTimeZone__Equals_2(DateTimeZone* __this, DateTimeZone* obj);
DateTimeZone* DateTimeZone__ForOffset(::uStatic* __this, ::app::Uno::Time::Offset offset);
::uString* DateTimeZone__get_Id(DateTimeZone* __this);
bool DateTimeZone__get_IsFixed(DateTimeZone* __this);
::app::Uno::Time::Offset DateTimeZone__get_MaxOffset(DateTimeZone* __this);
::app::Uno::Time::Offset DateTimeZone__get_MinOffset(DateTimeZone* __this);
DateTimeZone* DateTimeZone__get_Utc(::uStatic* __this);
int DateTimeZone__GetHashCode(DateTimeZone* __this);
::uString* DateTimeZone__ToString(DateTimeZone* __this);

struct DateTimeZone : ::uObject
{
    ::uStrong< ::uString*> id;
    bool isFixed;
    ::uLong minOffsetTicks;
    ::uLong maxOffsetTicks;

    void _ObjInit(::uString* id, bool isFixed, ::app::Uno::Time::Offset minOffset, ::app::Uno::Time::Offset maxOffset);
    ::app::Uno::Time::ZonedDateTime* AtStrictly(::app::Uno::Time::LocalDateTime* localDateTime) { return DateTimeZone__AtStrictly(this, localDateTime); }
    bool Equals_2(DateTimeZone* obj) { return DateTimeZone__Equals_2(this, obj); }
    bool EqualsImpl(DateTimeZone* zone) { return (((DateTimeZone__uType*)this->__obj_type)->__fp_EqualsImpl)(this, zone); }
    ::uString* Id() { return DateTimeZone__get_Id(this); }
    bool IsFixed() { return DateTimeZone__get_IsFixed(this); }
    ::app::Uno::Time::Offset MaxOffset();
    ::app::Uno::Time::Offset MinOffset();
    ::app::Uno::Time::Offset GetUtcOffset(::app::Uno::Time::LocalDateTime* dateTime);
};

}}}

#include <app/Uno.Time.Offset.h>

namespace app {
namespace Uno {
namespace Time {

inline void DateTimeZone::_ObjInit(::uString* id, bool isFixed, ::app::Uno::Time::Offset minOffset, ::app::Uno::Time::Offset maxOffset) { DateTimeZone___ObjInit(this, id, isFixed, minOffset, maxOffset); }
inline ::app::Uno::Time::Offset DateTimeZone::MaxOffset() { return DateTimeZone__get_MaxOffset(this); }
inline ::app::Uno::Time::Offset DateTimeZone::MinOffset() { return DateTimeZone__get_MinOffset(this); }
inline ::app::Uno::Time::Offset DateTimeZone::GetUtcOffset(::app::Uno::Time::LocalDateTime* dateTime) { return (((DateTimeZone__uType*)this->__obj_type)->__fp_GetUtcOffset)(this, dateTime); }

}}}


#endif
