// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_TIMER_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_TIMER_H__

#include <app/Fuse.Scripting.IModule.h>
#include <app/Fuse.Scripting.NativeModule.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Reactive_FuseJS_Timer_Time; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Timer;

struct Timer__uType : ::app::Fuse::Scripting::NativeModule__uType
{
};

Timer__uType* Timer__typeof();

void Timer___ObjInit_1(Timer* __this);
int Timer__AddTimer(Timer* __this, double ms, ::uDelegate* callback, bool repeat);
::uObject* Timer__Create(Timer* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
::uObject* Timer__Delete(Timer* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
Timer* Timer__New_2(::uStatic* __this);
void Timer__Process(Timer* __this);
bool Timer__RemoveTimer(Timer* __this, int id);

struct Timer : ::app::Fuse::Scripting::NativeModule
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time*> _timers;

    void _ObjInit_1() { Timer___ObjInit_1(this); }
    int AddTimer(double ms, ::uDelegate* callback, bool repeat) { return Timer__AddTimer(this, ms, callback, repeat); }
    ::uObject* Create(::app::Fuse::Scripting::Context* context, ::uArray* args) { return Timer__Create(this, context, args); }
    ::uObject* Delete(::app::Fuse::Scripting::Context* context, ::uArray* args) { return Timer__Delete(this, context, args); }
    void Process() { Timer__Process(this); }
    bool RemoveTimer(int id) { return Timer__RemoveTimer(this, id); }
};

}}}}


#endif
