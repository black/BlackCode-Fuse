// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct GenericEqualsImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class GenericEqualsImpl :310
// {
uClassType* GenericEqualsImpl_typeof();
void GenericEqualsImpl__Equals_fn(uType* __type, void* left_, void* right_, bool* __retval);

struct GenericEqualsImpl : uObject
{
    template<class T>
    static bool Equals(uType* __type, T left_, T right_) { bool __retval; return GenericEqualsImpl__Equals_fn(__type, uConstrain(__type->U(0), left_), uConstrain(__type->U(0), right_), &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Runtime::Implementation
