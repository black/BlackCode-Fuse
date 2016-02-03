// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_I_ASYNC_OBJECT_H__
#define __APP_FUSE_REACTIVE_I_ASYNC_OBJECT_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }

namespace app {
namespace Fuse {
namespace Reactive {

::uInterfaceType* IAsyncObject__typeof();

struct IAsyncObject
{
    void(*__fp_Tell)(void*, ::uString*, ::app::Fuse::Reactive::Dispatcher*, ::uDelegate*);

    static void Tell(::uObject* __this, ::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback) { ((IAsyncObject*)uGetInterfacePtr(__this, IAsyncObject__typeof()))->__fp_Tell((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key, thread, callback); }
};

}}}


#endif
