// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct UInt :6124
// {
uStructType* UInt_typeof();
void UInt__Equals_fn(uint32_t* __this, uType* __type, uObject* o, bool* __retval);
void UInt__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval);
void UInt__Parse_fn(uString* str, uint32_t* __retval);
void UInt__ToString_fn(uint32_t* __this, uType* __type, uString** __retval);
void UInt__TryParse_fn(uString* str, uint32_t* res, bool* __retval);

struct UInt
{
    static bool Equals(uint32_t __this, uType* __type, uObject* o) { bool __retval; return UInt__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(uint32_t __this, uType* __type) { int __retval; return UInt__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uint32_t __this, uType* __type) { uString* __retval; return UInt__ToString_fn(&__this, __type, &__retval), __retval; }
    static uint32_t Parse(uString* str);
    static bool TryParse(uString* str, uint32_t* res);
};
// }

}} // ::g::Uno
