// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_I_SOFT_DISPOSABLE_H__
#define __APP_FUSE_RESOURCES_I_SOFT_DISPOSABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Resources {

::uInterfaceType* ISoftDisposable__typeof();

struct ISoftDisposable
{
    void(*__fp_SoftDispose)(void*);

    static void SoftDispose(::uObject* __this) { ((ISoftDisposable*)uGetInterfacePtr(__this, ISoftDisposable__typeof()))->__fp_SoftDispose((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
