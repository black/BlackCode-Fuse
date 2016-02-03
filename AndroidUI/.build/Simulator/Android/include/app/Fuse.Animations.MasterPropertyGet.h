// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY_GET_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY_GET_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* MasterPropertyGet__typeof();

struct MasterPropertyGet
{
    ::uObject*(*__fp_GetPropertyObject)(void*);

    static ::uObject* GetPropertyObject(::uObject* __this) { return ((MasterPropertyGet*)uGetInterfacePtr(__this, MasterPropertyGet__typeof()))->__fp_GetPropertyObject((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
