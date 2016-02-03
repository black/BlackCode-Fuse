// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_I_OBSERVABLE_H__
#define __APP_FUSE_REACTIVE_I_OBSERVABLE_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

::uInterfaceType* IObservable__typeof();

struct IObservable
{
    ::uObject*(*__fp_Subscribe)(void*, ::uObject*);

    static ::uObject* Subscribe(::uObject* __this, ::uObject* observer) { return ((IObservable*)uGetInterfacePtr(__this, IObservable__typeof()))->__fp_Subscribe((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), observer); }
};

}}}


#endif
