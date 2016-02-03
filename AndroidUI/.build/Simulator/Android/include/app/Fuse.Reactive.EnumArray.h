// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_ENUM_ARRAY_H__
#define __APP_FUSE_REACTIVE_ENUM_ARRAY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Array; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct EnumArray;

struct EnumArray__uType : ::uClassType
{
};

EnumArray__uType* EnumArray__typeof();

void EnumArray___ObjInit(EnumArray* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* array, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);
EnumArray* EnumArray__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* array, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback);
void EnumArray__Run(EnumArray* __this);

struct EnumArray : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::app::Fuse::Scripting::Array*> _array;
    ::uStrong< ::app::Fuse::Reactive::Dispatcher*> _thread;
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* array, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback) { EnumArray___ObjInit(this, worker, array, thread, callback); }
    void Run() { EnumArray__Run(this); }
};

}}}


#endif
