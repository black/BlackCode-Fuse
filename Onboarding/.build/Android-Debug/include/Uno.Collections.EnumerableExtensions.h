// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.20.1\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Collections{struct EnumerableExtensions;}}}

namespace g{
namespace Uno{
namespace Collections{

// public static class EnumerableExtensions :26
// {
uClassType* EnumerableExtensions_typeof();
void EnumerableExtensions__Count_fn(uType* __type, uObject* self, int* __retval);
void EnumerableExtensions__First_fn(uType* __type, uObject* self, uTRef __retval);
void EnumerableExtensions__FirstOrDefault1_fn(uType* __type, uObject* self, uDelegate* where, uTRef __retval);
void EnumerableExtensions__Select_fn(uType* __type, uObject* self, uDelegate* func, uObject** __retval);
void EnumerableExtensions__ToArray_fn(uType* __type, uObject* self, uArray** __retval);
void EnumerableExtensions__Union_fn(uType* __type, uObject* self, uObject* other, uObject** __retval);
void EnumerableExtensions__Where_fn(uType* __type, uObject* self, uDelegate* predicate, uObject** __retval);

struct EnumerableExtensions : uObject
{
    static int Count(uType* __type, uObject* self);
    template<class T>
    static T First(uType* __type, uObject* self) { T __retval; return EnumerableExtensions__First_fn(__type, self, &__retval), __retval; }
    template<class T>
    static T FirstOrDefault1(uType* __type, uObject* self, uDelegate* where) { T __retval; return EnumerableExtensions__FirstOrDefault1_fn(__type, self, where, &__retval), __retval; }
    static uObject* Select(uType* __type, uObject* self, uDelegate* func);
    static uArray* ToArray(uType* __type, uObject* self);
    static uObject* Union(uType* __type, uObject* self, uObject* other);
    static uObject* Where(uType* __type, uObject* self, uDelegate* predicate);
};
// }

}}} // ::g::Uno::Collections
