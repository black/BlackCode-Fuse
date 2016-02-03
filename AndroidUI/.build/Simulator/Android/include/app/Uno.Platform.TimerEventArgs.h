// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_TIMER_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_TIMER_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct TimerEventArgs;

struct TimerEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

TimerEventArgs__uType* TimerEventArgs__typeof();

void TimerEventArgs___ObjInit_1(TimerEventArgs* __this, double lastTickTimestamp, double tickDuration);
double TimerEventArgs__get_LastTickTimestamp(TimerEventArgs* __this);
double TimerEventArgs__get_TickDuration(TimerEventArgs* __this);
TimerEventArgs* TimerEventArgs__New_2(::uStatic* __this, double lastTickTimestamp, double tickDuration);
void TimerEventArgs__set_LastTickTimestamp(TimerEventArgs* __this, double value);
void TimerEventArgs__set_TickDuration(TimerEventArgs* __this, double value);

struct TimerEventArgs : ::app::Uno::EventArgs
{
    double _LastTickTimestamp;
    double _TickDuration;

    void _ObjInit_1(double lastTickTimestamp, double tickDuration) { TimerEventArgs___ObjInit_1(this, lastTickTimestamp, tickDuration); }
    double LastTickTimestamp() { return TimerEventArgs__get_LastTickTimestamp(this); }
    double TickDuration() { return TimerEventArgs__get_TickDuration(this); }
    void LastTickTimestamp(double value) { TimerEventArgs__set_LastTickTimestamp(this, value); }
    void TickDuration(double value) { TimerEventArgs__set_TickDuration(this, value); }
};

}}}


#endif
