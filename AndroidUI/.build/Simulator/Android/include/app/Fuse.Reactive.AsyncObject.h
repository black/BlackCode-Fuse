// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_ASYNC_OBJECT_H__
#define __APP_FUSE_REACTIVE_ASYNC_OBJECT_H__

#include <app/Fuse.Reactive.IAsyncObject.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct AsyncObject;

struct AsyncObject__uType : ::uClassType
{
    ::app::Fuse::Reactive::IAsyncObject __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

AsyncObject__uType* AsyncObject__typeof();

void AsyncObject___ObjInit(AsyncObject* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj);
void AsyncObject__Dispose(AsyncObject* __this);
void AsyncObject__DoDispose(AsyncObject* __this);
bool AsyncObject__Equals(AsyncObject* __this, ::uObject* obj);
::app::Fuse::Scripting::Object* AsyncObject__get_Object(AsyncObject* __this);
int AsyncObject__GetHashCode(AsyncObject* __this);
AsyncObject* AsyncObject__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj);
void AsyncObject__Tell(AsyncObject* __this, ::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);

struct AsyncObject : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::app::Fuse::Scripting::Object*> _obj;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj) { AsyncObject___ObjInit(this, worker, obj); }
    void Dispose() { AsyncObject__Dispose(this); }
    void DoDispose() { AsyncObject__DoDispose(this); }
    ::app::Fuse::Scripting::Object* Object() { return AsyncObject__get_Object(this); }
    void Tell(::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback) { AsyncObject__Tell(this, key, thread, callback); }
};

}}}


#endif
