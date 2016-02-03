// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_ASYNC_FUNCTION_H__
#define __APP_FUSE_REACTIVE_ASYNC_FUNCTION_H__

#include <app/Fuse.Reactive.IAsyncFunction.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct ScriptEventArgs; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct AsyncFunction;

struct AsyncFunction__uType : ::uClassType
{
    ::app::Fuse::Reactive::IAsyncFunction __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

AsyncFunction__uType* AsyncFunction__typeof();

void AsyncFunction___ObjInit(AsyncFunction* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Function* func);
void AsyncFunction__Call(AsyncFunction* __this, ::uArray* args);
void AsyncFunction__Call_1(AsyncFunction* __this, ::app::Fuse::Reactive::ScriptEventArgs* args);
void AsyncFunction__Dispose(AsyncFunction* __this);
void AsyncFunction__DoDispose(AsyncFunction* __this);
bool AsyncFunction__Equals(AsyncFunction* __this, ::uObject* obj);
int AsyncFunction__GetHashCode(AsyncFunction* __this);
AsyncFunction* AsyncFunction__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Function* func);

struct AsyncFunction : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::app::Fuse::Scripting::Function*> _function;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Function* func) { AsyncFunction___ObjInit(this, worker, func); }
    void Call(::uArray* args) { AsyncFunction__Call(this, args); }
    void Call_1(::app::Fuse::Reactive::ScriptEventArgs* args) { AsyncFunction__Call_1(this, args); }
    void Dispose() { AsyncFunction__Dispose(this); }
    void DoDispose() { AsyncFunction__DoDispose(this); }
};

}}}


#endif
