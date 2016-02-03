// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Dispatcher.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher__UIThreadDispatcher;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Dispatcher.UIThreadDispatcher :874
// {
::g::Fuse::Reactive::Dispatcher_type* Dispatcher__UIThreadDispatcher_typeof();
void Dispatcher__UIThreadDispatcher__ctor_1_fn(Dispatcher__UIThreadDispatcher* __this);
void Dispatcher__UIThreadDispatcher__Dispatch_fn(Dispatcher__UIThreadDispatcher* __this, uDelegate* action);
void Dispatcher__UIThreadDispatcher__New1_fn(Dispatcher__UIThreadDispatcher** __retval);
void Dispatcher__UIThreadDispatcher__Run_fn(Dispatcher__UIThreadDispatcher* __this);

struct Dispatcher__UIThreadDispatcher : ::g::Fuse::Reactive::Dispatcher
{
    uStrong< ::g::Uno::Collections::List*> _actions;
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;

    void ctor_1();
    void Run();
    static Dispatcher__UIThreadDispatcher* New1();
};
// }

}}} // ::g::Fuse::Reactive
