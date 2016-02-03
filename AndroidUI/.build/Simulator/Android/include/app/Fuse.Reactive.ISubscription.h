// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_I_SUBSCRIPTION_H__
#define __APP_FUSE_REACTIVE_I_SUBSCRIPTION_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

::uInterfaceType* ISubscription__typeof();

struct ISubscription
{
    void(*__fp_SetExclusive)(void*, ::uObject*);

    static void SetExclusive(::uObject* __this, ::uObject* newValue) { ((ISubscription*)uGetInterfacePtr(__this, ISubscription__typeof()))->__fp_SetExclusive((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), newValue); }
};

}}}


#endif
