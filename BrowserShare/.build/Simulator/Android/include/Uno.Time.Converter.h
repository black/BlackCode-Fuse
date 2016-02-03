// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Converter;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class Converter :52
// {
uClassType* Converter_typeof();
void Converter__TicksToDays_fn(int64_t* ticks, int* __retval);

struct Converter : uObject
{
    static int TicksToDays(int64_t ticks);
};
// }

}}} // ::g::Uno::Time
