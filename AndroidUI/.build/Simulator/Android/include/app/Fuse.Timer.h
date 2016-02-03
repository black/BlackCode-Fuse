// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TIMER_H__
#define __APP_FUSE_TIMER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct Timer;

struct Timer__uType : ::uClassType
{
};

Timer__uType* Timer__typeof();

void Timer___ObjInit(Timer* __this, double interval, ::uDelegate* callback);
Timer* Timer__New_1(::uStatic* __this, double interval, ::uDelegate* callback);
void Timer__Start(Timer* __this);
void Timer__Stop(Timer* __this);
void Timer__Update(Timer* __this);
void Timer__Wait(::uStatic* __this, double duration, ::uDelegate* callback);

struct Timer : ::uObject
{
    ::uStrong< ::uDelegate*> _callback;
    double _startTime;
    double _interval;
    bool _running;
    bool _once;

    void _ObjInit(double interval, ::uDelegate* callback) { Timer___ObjInit(this, interval, callback); }
    void Start() { Timer__Start(this); }
    void Stop() { Timer__Stop(this); }
    void Update() { Timer__Update(this); }
};

}}


#endif
