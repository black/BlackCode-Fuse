// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ISubscription.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ObservableSubscription :2184
// {
struct ObservableSubscription_type : uType
{
    ::g::Fuse::Reactive::ISubscription interface0;
    ::g::Uno::IDisposable interface1;
};

ObservableSubscription_type* ObservableSubscription_typeof();
void ObservableSubscription__ctor__fn(ObservableSubscription* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, ::g::Fuse::Reactive::Dispatcher* thread);
void ObservableSubscription__Dispose_fn(ObservableSubscription* __this);
void ObservableSubscription__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, ::g::Fuse::Reactive::Dispatcher* thread, ObservableSubscription** __retval);
void ObservableSubscription__ObserveChange_fn(ObservableSubscription* __this, uArray* args, uObject** __retval);
void ObservableSubscription__get_Proxy_fn(ObservableSubscription* __this, ::g::Fuse::Scripting::Object** __retval);
void ObservableSubscription__SetExclusive_fn(ObservableSubscription* __this, uObject* newValue);
void ObservableSubscription__Subscribe_fn(ObservableSubscription* __this);
void ObservableSubscription__Unsubscribe_fn(ObservableSubscription* __this);

struct ObservableSubscription : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::Object*> _observable;
    uStrong<uObject*> _observer;
    uStrong< ::g::Fuse::Scripting::Object*> _subscriberProxy;
    uStrong< ::g::Fuse::Reactive::Dispatcher*> _thread;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, ::g::Fuse::Reactive::Dispatcher* thread);
    void Dispose();
    uObject* ObserveChange(uArray* args);
    ::g::Fuse::Scripting::Object* Proxy();
    void SetExclusive(uObject* newValue);
    void Subscribe();
    void Unsubscribe();
    static ObservableSubscription* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, ::g::Fuse::Reactive::Dispatcher* thread);
};
// }

}}} // ::g::Fuse::Reactive
