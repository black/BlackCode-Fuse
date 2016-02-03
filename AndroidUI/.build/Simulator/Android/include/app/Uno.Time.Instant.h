// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_INSTANT_H__
#define __APP_UNO_TIME_INSTANT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct Duration; } } }
namespace app { namespace Uno { namespace Time { struct Offset; } } }

namespace app {
namespace Uno {
namespace Time {

struct Instant;

struct Instant__uType : ::uStructType
{
};

Instant__uType* Instant__typeof();

void Instant___ObjInit(Instant* __this, ::uLong ticks);
bool Instant__Equals(Instant* __this, ::uObject* obj);
bool Instant__Equals_2(Instant* __this, Instant other);
Instant Instant__FromUtc(::uStatic* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour);
::uLong Instant__get_Ticks(Instant* __this);
int Instant__GetHashCode(Instant* __this);
Instant Instant__Minus_2(Instant* __this, ::app::Uno::Time::Offset offset);
Instant Instant__New_1(::uStatic* __this, ::uLong ticks);
Instant Instant__op_Addition(::uStatic* __this, Instant left, ::app::Uno::Time::Duration right);
bool Instant__op_Equality(::uStatic* __this, Instant left, Instant right);
bool Instant__op_GreaterThan(::uStatic* __this, Instant left, Instant right);
bool Instant__op_GreaterThanOrEqual(::uStatic* __this, Instant left, Instant right);
bool Instant__op_LessThan(::uStatic* __this, Instant left, Instant right);
bool Instant__op_LessThanOrEqual(::uStatic* __this, Instant left, Instant right);
Instant Instant__op_Subtraction(::uStatic* __this, Instant left, ::app::Uno::Time::Duration right);
Instant Instant__Plus_1(Instant* __this, ::app::Uno::Time::Offset offset);
Instant Instant__PlusTicks(Instant* __this, ::uLong ticksToAdd);
::uString* Instant__ToString(Instant* __this);

struct Instant
{
    ::uLong _ticks;

    void _ObjInit(::uLong ticks) { Instant___ObjInit(this, ticks); }
    bool Equals(::uObject* obj) { return Instant__Equals(this, obj); }
    bool Equals_2(Instant other);
    ::uLong Ticks() { return Instant__get_Ticks(this); }
    int GetHashCode() { return Instant__GetHashCode(this); }
    Instant Minus_2(::app::Uno::Time::Offset offset);
    Instant Plus_1(::app::Uno::Time::Offset offset);
    Instant PlusTicks(::uLong ticksToAdd);
    ::uString* ToString() { return Instant__ToString(this); }
};

}}}

#include <app/Uno.Time.Offset.h>

namespace app {
namespace Uno {
namespace Time {

inline bool Instant::Equals_2(Instant other) { return Instant__Equals_2(this, other); }
inline Instant Instant::Minus_2(::app::Uno::Time::Offset offset) { return Instant__Minus_2(this, offset); }
inline Instant Instant::Plus_1(::app::Uno::Time::Offset offset) { return Instant__Plus_1(this, offset); }
inline Instant Instant::PlusTicks(::uLong ticksToAdd) { return Instant__PlusTicks(this, ticksToAdd); }

}}}


#endif
