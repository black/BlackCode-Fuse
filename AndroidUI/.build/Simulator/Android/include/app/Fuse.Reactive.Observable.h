// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_OBSERVABLE_H__
#define __APP_FUSE_REACTIVE_OBSERVABLE_H__

#include <app/Fuse.Reactive.IAsyncArray.h>
#include <app/Fuse.Reactive.IObservable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Observable;

struct Observable__uType : ::uClassType
{
    ::app::Fuse::Reactive::IObservable __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Fuse::Reactive::IAsyncArray __interface_2;
};

Observable__uType* Observable__typeof();

void Observable___ObjInit(Observable* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::Dispatcher* thread);
void Observable__Dispose(Observable* __this);
void Observable__Enum(Observable* __this, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);
bool Observable__Equals(Observable* __this, ::uObject* obj);
int Observable__GetHashCode(Observable* __this);
Observable* Observable__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::Dispatcher* thread);
::uObject* Observable__Subscribe(Observable* __this, ::uObject* observer);

struct Observable : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> Worker;
    ::uStrong< ::app::Fuse::Scripting::Object*> Object;
    ::uStrong< ::app::Fuse::Reactive::Dispatcher*> Thread;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::Dispatcher* thread) { Observable___ObjInit(this, worker, obj, thread); }
    void Dispose() { Observable__Dispose(this); }
    void Enum(::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback) { Observable__Enum(this, thread, callback); }
    ::uObject* Subscribe(::uObject* observer) { return Observable__Subscribe(this, observer); }
};

}}}


#endif
