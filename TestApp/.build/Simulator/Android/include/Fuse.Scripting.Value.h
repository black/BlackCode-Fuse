// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct Value;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class Value :668
// {
uClassType* Value_typeof();
void Value__ToNumber_fn(uObject* obj, double* __retval);

struct Value : uObject
{
    static double ToNumber(uObject* obj);
};
// }

}}} // ::g::Fuse::Scripting
