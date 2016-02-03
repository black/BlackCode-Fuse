// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct ClockImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class ClockImpl :214
// {
uClassType* ClockImpl_typeof();
void ClockImpl__GetSeconds_fn(double* __retval);
void ClockImpl__GetTicks_fn(int64_t* __retval);
void ClockImpl__GetTimezoneOffset_fn(int* year_, int* month_, int* day_, int* __retval);

struct ClockImpl : uObject
{
    static double GetSeconds();
    static int64_t GetTicks();
    static int GetTimezoneOffset(int year_, int month_, int day_);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
