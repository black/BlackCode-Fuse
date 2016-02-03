// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IAsyncArray.h>
#include <Fuse.Reactive.IObservable.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class Observable :2126
// {
struct Observable_type : uType
{
    ::g::Fuse::Reactive::IObservable interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Fuse::Reactive::IAsyncArray interface2;
};

Observable_type* Observable_typeof();
void Observable__ctor__fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::Dispatcher* thread);
void Observable__Dispose_fn(Observable* __this);
void Observable__Enum_fn(Observable* __this, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback);
void Observable__Equals_fn(Observable* __this, uObject* obj, bool* __retval);
void Observable__GetHashCode_fn(Observable* __this, int* __retval);
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::Dispatcher* thread, Observable** __retval);
void Observable__Subscribe_fn(Observable* __this, uObject* observer, uObject** __retval);

struct Observable : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> Object;
    uStrong< ::g::Fuse::Reactive::Dispatcher*> Thread;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> Worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::Dispatcher* thread);
    void Dispose();
    void Enum(::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback);
    uObject* Subscribe(uObject* observer);
    static Observable* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::Dispatcher* thread);
};
// }

}}} // ::g::Fuse::Reactive
