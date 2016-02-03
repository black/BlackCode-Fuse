// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_I_MEMORY_RESOURCE_H__
#define __APP_FUSE_RESOURCES_I_MEMORY_RESOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }

namespace app {
namespace Fuse {
namespace Resources {

::uInterfaceType* IMemoryResource__typeof();

struct IMemoryResource
{
    bool(*__fp_get_IsPinned)(void*);
    double(*__fp_get_LastUsed)(void*);
    ::app::Fuse::Resources::MemoryPolicy*(*__fp_get_MemoryPolicy)(void*);
    void(*__fp_SoftDispose)(void*);

    static bool IsPinned(::uObject* __this) { return ((IMemoryResource*)uGetInterfacePtr(__this, IMemoryResource__typeof()))->__fp_get_IsPinned((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static double LastUsed(::uObject* __this) { return ((IMemoryResource*)uGetInterfacePtr(__this, IMemoryResource__typeof()))->__fp_get_LastUsed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Fuse::Resources::MemoryPolicy* MemoryPolicy(::uObject* __this) { return ((IMemoryResource*)uGetInterfacePtr(__this, IMemoryResource__typeof()))->__fp_get_MemoryPolicy((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void SoftDispose(::uObject* __this) { ((IMemoryResource*)uGetInterfacePtr(__this, IMemoryResource__typeof()))->__fp_SoftDispose((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
