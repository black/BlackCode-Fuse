// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_TIMER_CLOSURE_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_TIMER_CLOSURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Timer_Closure;

struct Timer_Closure__uType : ::uClassType
{
};

Timer_Closure__uType* Timer_Closure__typeof();

void Timer_Closure___ObjInit(Timer_Closure* __this, ::app::Fuse::Scripting::Function* func, ::uArray* args);
void Timer_Closure__Callback(Timer_Closure* __this);
Timer_Closure* Timer_Closure__New_1(::uStatic* __this, ::app::Fuse::Scripting::Function* func, ::uArray* args);

struct Timer_Closure : ::uObject
{
    ::uStrong< ::app::Fuse::Scripting::Function*> _func;
    ::uStrong< ::uArray*> _args;

    void _ObjInit(::app::Fuse::Scripting::Function* func, ::uArray* args) { Timer_Closure___ObjInit(this, func, args); }
    void Callback() { Timer_Closure__Callback(this); }
};

}}}}


#endif
