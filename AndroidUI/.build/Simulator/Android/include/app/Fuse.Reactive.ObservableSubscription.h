// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_OBSERVABLE_SUBSCRIPTION_H__
#define __APP_FUSE_REACTIVE_OBSERVABLE_SUBSCRIPTION_H__

#include <app/Fuse.Reactive.ISubscription.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct ObservableSubscription;

struct ObservableSubscription__uType : ::uClassType
{
    ::app::Fuse::Reactive::ISubscription __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

ObservableSubscription__uType* ObservableSubscription__typeof();

void ObservableSubscription___ObjInit(ObservableSubscription* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uObject* observer, ::app::Fuse::Reactive::Dispatcher* thread);
void ObservableSubscription__Dispose(ObservableSubscription* __this);
::app::Fuse::Scripting::Object* ObservableSubscription__get_Proxy(ObservableSubscription* __this);
ObservableSubscription* ObservableSubscription__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uObject* observer, ::app::Fuse::Reactive::Dispatcher* thread);
::uObject* ObservableSubscription__ObserveChange(ObservableSubscription* __this, ::uArray* args);
void ObservableSubscription__SetExclusive(ObservableSubscription* __this, ::uObject* newValue);
void ObservableSubscription__Subscribe(ObservableSubscription* __this);
void ObservableSubscription__Unsubscribe(ObservableSubscription* __this);

struct ObservableSubscription : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::app::Fuse::Scripting::Object*> _observable;
    ::uStrong< ::uObject*> _observer;
    ::uStrong< ::app::Fuse::Reactive::Dispatcher*> _thread;
    ::uStrong< ::app::Fuse::Scripting::Object*> _subscriberProxy;
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uObject* observer, ::app::Fuse::Reactive::Dispatcher* thread) { ObservableSubscription___ObjInit(this, worker, obj, observer, thread); }
    void Dispose() { ObservableSubscription__Dispose(this); }
    ::app::Fuse::Scripting::Object* Proxy() { return ObservableSubscription__get_Proxy(this); }
    ::uObject* ObserveChange(::uArray* args) { return ObservableSubscription__ObserveChange(this, args); }
    void SetExclusive(::uObject* newValue) { ObservableSubscription__SetExclusive(this, newValue); }
    void Subscribe() { ObservableSubscription__Subscribe(this); }
    void Unsubscribe() { ObservableSubscription__Unsubscribe(this); }
};

}}}


#endif
