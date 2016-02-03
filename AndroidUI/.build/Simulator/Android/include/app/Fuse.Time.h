// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TIME_H__
#define __APP_FUSE_TIME_H__

#include <Uno.h>

namespace app {
namespace Fuse {

extern double Time___delta;
extern double Time___elapsed;

struct Time__uType : ::uClassType
{
};

Time__uType* Time__typeof();

double Time__get_FrameInterval(::uStatic* __this);
float Time__get_FrameIntervalFloat(::uStatic* __this);
double Time__get_FrameTime(::uStatic* __this);
void Time__Set(::uStatic* __this, double elapsed, double delta);

}}


#endif
