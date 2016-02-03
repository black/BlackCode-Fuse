// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DISPATCHER_U_I_THREAD_DISPATCHER_H__
#define __APP_FUSE_REACTIVE_DISPATCHER_U_I_THREAD_DISPATCHER_H__

#include <app/Fuse.Reactive.Dispatcher.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Dispatcher_UIThreadDispatcher;

struct Dispatcher_UIThreadDispatcher__uType : ::app::Fuse::Reactive::Dispatcher__uType
{
};

Dispatcher_UIThreadDispatcher__uType* Dispatcher_UIThreadDispatcher__typeof();

void Dispatcher_UIThreadDispatcher___ObjInit_1(Dispatcher_UIThreadDispatcher* __this);
void Dispatcher_UIThreadDispatcher__Dispatch(Dispatcher_UIThreadDispatcher* __this, ::uDelegate* action);
Dispatcher_UIThreadDispatcher* Dispatcher_UIThreadDispatcher__New_1(::uStatic* __this);
void Dispatcher_UIThreadDispatcher__Run(Dispatcher_UIThreadDispatcher* __this);

struct Dispatcher_UIThreadDispatcher : ::app::Fuse::Reactive::Dispatcher
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Action*> _actions;
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;

    void _ObjInit_1() { Dispatcher_UIThreadDispatcher___ObjInit_1(this); }
    void Run() { Dispatcher_UIThreadDispatcher__Run(this); }
};

}}}


#endif
