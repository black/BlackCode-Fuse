// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Clock;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Clock :28
// {
uClassType* Clock_typeof();
void Clock__GetSeconds_fn(double* __retval);
void Clock__GetTicks_fn(int64_t* __retval);
void Clock__GetTimezoneOffset_fn(int* year, int* month, int* day, int* __retval);

struct Clock : uObject
{
    static double GetSeconds();
    static int64_t GetTicks();
    static int GetTimezoneOffset(int year, int month, int day);
};
// }

}}} // ::g::Uno::Diagnostics
