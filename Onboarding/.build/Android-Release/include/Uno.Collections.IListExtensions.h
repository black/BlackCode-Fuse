// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.20.1\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Collections{struct IListExtensions;}}}

namespace g{
namespace Uno{
namespace Collections{

// public static class IListExtensions :247
// {
uClassType* IListExtensions_typeof();
void IListExtensions__RemoveLast_fn(uType* __type, uObject* self, uTRef __retval);

struct IListExtensions : uObject
{
    template<class T>
    static T RemoveLast(uType* __type, uObject* self) { T __retval; return IListExtensions__RemoveLast_fn(__type, self, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Collections
