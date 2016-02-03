// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_I_ASYNC_FUNCTION_H__
#define __APP_FUSE_REACTIVE_I_ASYNC_FUNCTION_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct ScriptEventArgs; } } }

namespace app {
namespace Fuse {
namespace Reactive {

::uInterfaceType* IAsyncFunction__typeof();

struct IAsyncFunction
{
    void(*__fp_Call_1)(void*, ::app::Fuse::Reactive::ScriptEventArgs*);

    static void Call_1(::uObject* __this, ::app::Fuse::Reactive::ScriptEventArgs* ev) { ((IAsyncFunction*)uGetInterfacePtr(__this, IAsyncFunction__typeof()))->__fp_Call_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), ev); }
};

}}}


#endif
