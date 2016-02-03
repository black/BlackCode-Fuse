// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_I_MIXER_HANDLE__SHORT_H__
#define __APP_FUSE_ANIMATIONS_I_MIXER_HANDLE__SHORT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* IMixerHandle__short__typeof();

struct IMixerHandle__short
{
    void(*__fp_Set)(void*, ::uShort, float);
    void(*__fp_Unregister)(void*);

    static void Set(::uObject* __this, ::uShort value, float strength) { ((IMixerHandle__short*)uGetInterfacePtr(__this, IMixerHandle__short__typeof()))->__fp_Set((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value, strength); }
    static void Unregister(::uObject* __this) { ((IMixerHandle__short*)uGetInterfacePtr(__this, IMixerHandle__short__typeof()))->__fp_Unregister((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
