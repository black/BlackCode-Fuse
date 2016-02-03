// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_I_MIXER_HANDLE__FUSE_TRIGGERS_STATE_TRANSITION_H__
#define __APP_FUSE_ANIMATIONS_I_MIXER_HANDLE__FUSE_TRIGGERS_STATE_TRANSITION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* IMixerHandle__Fuse_Triggers_StateTransition__typeof();

struct IMixerHandle__Fuse_Triggers_StateTransition
{
    void(*__fp_Set)(void*, int, float);
    void(*__fp_Unregister)(void*);

    static void Set(::uObject* __this, int value, float strength) { ((IMixerHandle__Fuse_Triggers_StateTransition*)uGetInterfacePtr(__this, IMixerHandle__Fuse_Triggers_StateTransition__typeof()))->__fp_Set((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value, strength); }
    static void Unregister(::uObject* __this) { ((IMixerHandle__Fuse_Triggers_StateTransition*)uGetInterfacePtr(__this, IMixerHandle__Fuse_Triggers_StateTransition__typeof()))->__fp_Unregister((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
