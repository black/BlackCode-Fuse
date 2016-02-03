// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Long :2908
// {
uStructType* Long_typeof();
void Long__Equals_fn(int64_t* __this, uType* __type, uObject* o, bool* __retval);
void Long__GetHashCode_fn(int64_t* __this, uType* __type, int* __retval);
void Long__Parse_fn(uString* str_, int64_t* __retval);
void Long__ToString_fn(int64_t* __this, uType* __type, uString** __retval);
void Long__TryParse_fn(uString* str_, int64_t* res_, bool* __retval);

struct Long
{
    static bool Equals(int64_t __this, uType* __type, uObject* o) { bool __retval; return Long__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(int64_t __this, uType* __type) { int __retval; return Long__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(int64_t __this, uType* __type) { uString* __retval; return Long__ToString_fn(&__this, __type, &__retval), __retval; }
    static int64_t Parse(uString* str_);
    static bool TryParse(uString* str_, int64_t* res_);
};
// }

}} // ::g::Uno
