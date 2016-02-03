// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Timer;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Timer__Time;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Timer.Time :482
// {
uType* Timer__Time_typeof();
void Timer__Time__ctor__fn(Timer__Time* __this, ::g::Fuse::Reactive::FuseJS::Timer* timoutManager, double* ms, uDelegate* callback, bool* repeat);
void Timer__Time__GetMilliseconds_fn(Timer__Time* __this, double* __retval);
void Timer__Time__New1_fn(::g::Fuse::Reactive::FuseJS::Timer* timoutManager, double* ms, uDelegate* callback, bool* repeat, Timer__Time** __retval);
void Timer__Time__Visit_fn(Timer__Time* __this);

struct Timer__Time : uObject
{
    uStrong<uDelegate*> _callback;
    static int _id_;
    static int& _id() { return _id_; }
    double _ms;
    bool _repeat;
    double _timestamp;
    uStrong< ::g::Fuse::Reactive::FuseJS::Timer*> _timoutManager;
    int ID;

    void ctor_(::g::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, uDelegate* callback, bool repeat);
    double GetMilliseconds();
    void Visit();
    static Timer__Time* New1(::g::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, uDelegate* callback, bool repeat);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
