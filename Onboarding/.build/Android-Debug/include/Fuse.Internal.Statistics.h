// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct Statistics;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public static class Statistics :537
// {
uClassType* Statistics_typeof();
void Statistics__ContinuousFilterAlpha_fn(float* elapsed, float* period, float* __retval);

struct Statistics : uObject
{
    static float ContinuousFilterAlpha(float elapsed, float period);
};
// }

}}} // ::g::Fuse::Internal
