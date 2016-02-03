// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct IntPtr :2876
// {
uStructType* IntPtr_typeof();
void IntPtr__Equals_fn(void** __this, uType* __type, uObject* o, bool* __retval);
void IntPtr__GetHashCode_fn(void** __this, uType* __type, int* __retval);
void IntPtr__op_Equality_fn(void** left_, void** right_, bool* __retval);
void IntPtr__op_Inequality_fn(void** left_, void** right_, bool* __retval);
void IntPtr__ToString_fn(void** __this, uType* __type, uString** __retval);

struct IntPtr
{
    static void* Zero_;
    static void*& Zero() { return Zero_; }

    static bool Equals(void* __this, uType* __type, uObject* o) { bool __retval; return IntPtr__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(void* __this, uType* __type) { int __retval; return IntPtr__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(void* __this, uType* __type) { uString* __retval; return IntPtr__ToString_fn(&__this, __type, &__retval), __retval; }
    static bool op_Equality(void* left_, void* right_);
    static bool op_Inequality(void* left_, void* right_);
};
// }

}} // ::g::Uno
