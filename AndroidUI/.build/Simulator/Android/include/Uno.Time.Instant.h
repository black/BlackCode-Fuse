// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct Duration;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{namespace Time{struct Offset;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct Instant :582
// {
uStructType* Instant_typeof();
void Instant__ctor__fn(Instant* __this, int64_t* ticks);
void Instant__Equals_fn(Instant* __this, uType* __type, uObject* obj, bool* __retval);
void Instant__Equals2_fn(Instant* __this, Instant* other, bool* __retval);
void Instant__FromDuration_fn(::g::Uno::Time::Duration* duration, Instant* __retval);
void Instant__FromMillisecondsSinceUnixEpoch_fn(int64_t* milliseconds, Instant* __retval);
void Instant__GetHashCode_fn(Instant* __this, uType* __type, int* __retval);
void Instant__Minus2_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval);
void Instant__New1_fn(int64_t* ticks, Instant* __retval);
void Instant__op_Addition_fn(Instant* left, ::g::Uno::Time::Duration* right, Instant* __retval);
void Instant__op_Equality_fn(Instant* left, Instant* right, bool* __retval);
void Instant__op_GreaterThan_fn(Instant* left, Instant* right, bool* __retval);
void Instant__op_LessThan_fn(Instant* left, Instant* right, bool* __retval);
void Instant__op_Subtraction_fn(Instant* left, ::g::Uno::Time::Duration* right, Instant* __retval);
void Instant__Plus_fn(Instant* __this, ::g::Uno::Time::Duration* duration, Instant* __retval);
void Instant__Plus1_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval);
void Instant__PlusTicks_fn(Instant* __this, int64_t* ticksToAdd, Instant* __retval);
void Instant__get_Ticks_fn(Instant* __this, int64_t* __retval);
void Instant__ToString_fn(Instant* __this, uType* __type, uString** __retval);

struct Instant
{
    int64_t _ticks;

    void ctor_(int64_t ticks);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Instant__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(Instant other);
    int GetHashCode(uType* __type) { int __retval; return Instant__GetHashCode_fn(this, __type, &__retval), __retval; }
    Instant Minus2(::g::Uno::Time::Offset offset);
    Instant Plus(::g::Uno::Time::Duration duration);
    Instant Plus1(::g::Uno::Time::Offset offset);
    Instant PlusTicks(int64_t ticksToAdd);
    int64_t Ticks();
    uString* ToString(uType* __type) { uString* __retval; return Instant__ToString_fn(this, __type, &__retval), __retval; }
    static bool op_Equality(Instant left, Instant right);
    static bool op_GreaterThan(Instant left, Instant right);
    static bool op_LessThan(Instant left, Instant right);
};

Instant Instant__FromDuration(::g::Uno::Time::Duration duration);
Instant Instant__FromMillisecondsSinceUnixEpoch(int64_t milliseconds);
Instant Instant__New1(int64_t ticks);
Instant Instant__op_Addition(Instant left, ::g::Uno::Time::Duration right);
Instant Instant__op_Subtraction(Instant left, ::g::Uno::Time::Duration right);
// }

}}} // ::g::Uno::Time
