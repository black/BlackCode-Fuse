// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_TELL_OBJECT_H__
#define __APP_FUSE_REACTIVE_TELL_OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct TellObject;

struct TellObject__uType : ::uClassType
{
};

TellObject__uType* TellObject__typeof();

void TellObject___ObjInit(TellObject* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);
TellObject* TellObject__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);
void TellObject__Run(TellObject* __this);

struct TellObject : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::app::Fuse::Scripting::Object*> _object;
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Fuse::Reactive::Dispatcher*> _thread;
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback) { TellObject___ObjInit(this, worker, obj, key, thread, callback); }
    void Run() { TellObject__Run(this); }
};

}}}


#endif
