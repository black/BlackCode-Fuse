// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_ENUM_OBSERVABLE_H__
#define __APP_FUSE_REACTIVE_ENUM_OBSERVABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct EnumObservable;

struct EnumObservable__uType : ::uClassType
{
};

EnumObservable__uType* EnumObservable__typeof();

void EnumObservable___ObjInit(EnumObservable* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* observable, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);
EnumObservable* EnumObservable__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* observable, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);
void EnumObservable__Run(EnumObservable* __this);

struct EnumObservable : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::app::Fuse::Scripting::Object*> _observable;
    ::uStrong< ::app::Fuse::Reactive::Dispatcher*> _thread;
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* observable, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback) { EnumObservable___ObjInit(this, worker, observable, thread, callback); }
    void Run() { EnumObservable__Run(this); }
};

}}}


#endif
