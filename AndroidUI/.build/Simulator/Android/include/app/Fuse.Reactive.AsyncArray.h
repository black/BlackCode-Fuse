// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_ASYNC_ARRAY_H__
#define __APP_FUSE_REACTIVE_ASYNC_ARRAY_H__

#include <app/Fuse.Reactive.IAsyncArray.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Array; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct AsyncArray;

struct AsyncArray__uType : ::uClassType
{
    ::app::Fuse::Reactive::IAsyncArray __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

AsyncArray__uType* AsyncArray__typeof();

void AsyncArray___ObjInit(AsyncArray* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* arr);
void AsyncArray__Dispose(AsyncArray* __this);
void AsyncArray__DoDispose(AsyncArray* __this);
void AsyncArray__Enum(AsyncArray* __this, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);
bool AsyncArray__Equals(AsyncArray* __this, ::uObject* obj);
::app::Fuse::Scripting::Array* AsyncArray__get_Array(AsyncArray* __this);
int AsyncArray__GetHashCode(AsyncArray* __this);
AsyncArray* AsyncArray__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* arr);

struct AsyncArray : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::app::Fuse::Scripting::Array*> _arr;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* arr) { AsyncArray___ObjInit(this, worker, arr); }
    void Dispose() { AsyncArray__Dispose(this); }
    void DoDispose() { AsyncArray__DoDispose(this); }
    void Enum(::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback) { AsyncArray__Enum(this, thread, callback); }
    ::app::Fuse::Scripting::Array* Array() { return AsyncArray__get_Array(this); }
};

}}}


#endif
