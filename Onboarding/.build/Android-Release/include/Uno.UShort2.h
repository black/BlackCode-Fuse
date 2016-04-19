// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct UShort2;}}

namespace g{
namespace Uno{

// public intrinsic struct UShort2 :6420
// {
uStructType* UShort2_typeof();
void UShort2__Equals_fn(UShort2* __this, uType* __type, uObject* o, bool* __retval);
void UShort2__GetHashCode_fn(UShort2* __this, uType* __type, int* __retval);
void UShort2__ToString_fn(UShort2* __this, uType* __type, uString** __retval);

struct UShort2
{
    uint16_t X;
    uint16_t Y;

    bool Equals(uType* __type, uObject* o) { bool __retval; return UShort2__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return UShort2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return UShort2__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
