// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_STATISTICS_H__
#define __APP_FUSE_INTERNAL_STATISTICS_H__

#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Statistics__uType : ::uClassType
{
};

Statistics__uType* Statistics__typeof();

float Statistics__ContinuousFilterAlpha(::uStatic* __this, float elapsed, float period);
float Statistics__ExponentialMovingAverage(::uStatic* __this, float current, float sample, float elapsed, float period);

}}}


#endif
