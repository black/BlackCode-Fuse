// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_TIMER_TIME_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_TIMER_TIME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer; } } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Timer_Time;

extern int Timer_Time___id;

struct Timer_Time__uType : ::uClassType
{
};

Timer_Time__uType* Timer_Time__typeof();

void Timer_Time___ObjInit(Timer_Time* __this, ::app::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, ::uDelegate* callback, bool repeat);
double Timer_Time__GetMilliseconds(Timer_Time* __this);
Timer_Time* Timer_Time__New_1(::uStatic* __this, ::app::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, ::uDelegate* callback, bool repeat);
void Timer_Time__Visit(Timer_Time* __this);

struct Timer_Time : ::uObject
{
    int ID;
    ::uStrong< ::app::Fuse::Reactive::FuseJS::Timer*> _timoutManager;
    double _timestamp;
    double _ms;
    ::uStrong< ::uDelegate*> _callback;
    bool _repeat;

    void _ObjInit(::app::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, ::uDelegate* callback, bool repeat) { Timer_Time___ObjInit(this, timoutManager, ms, callback, repeat); }
    double GetMilliseconds() { return Timer_Time__GetMilliseconds(this); }
    void Visit() { Timer_Time__Visit(this); }
};

}}}}


#endif
