// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public sealed class Type :5851
// {
uType* Type_typeof();
void Type__Equals_fn(uType* __this, uObject* obj, bool* __retval);
void Type__get_FullName_fn(uType* __this, uString** __retval);
void Type__GetHashCode_fn(uType* __this, int* __retval);
void Type__op_Equality_fn(uType* a, uType* b, bool* __retval);
void Type__ToString_fn(uType* __this, uString** __retval);

struct Type
{
    static uSStrong<uArray*> EmptyTypes_;
    static uSStrong<uArray*>& EmptyTypes() { return Type_typeof()->Init(), EmptyTypes_; }

    static uString* FullName(uType* __this);
    static bool op_Equality(uType* a, uType* b);
};
// }

}} // ::g::Uno
