// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_I_MIXER_HANDLE__FLOAT3_H__
#define __APP_FUSE_ANIMATIONS_I_MIXER_HANDLE__FLOAT3_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* IMixerHandle__float3__typeof();

struct IMixerHandle__float3
{
    void(*__fp_Set)(void*, ::app::Uno::Float3, float);
    void(*__fp_Unregister)(void*);

    static void Set(::uObject* __this, ::app::Uno::Float3 value, float strength);
    static void Unregister(::uObject* __this) { ((IMixerHandle__float3*)uGetInterfacePtr(__this, IMixerHandle__float3__typeof()))->__fp_Unregister((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Animations {

inline void IMixerHandle__float3::Set(::uObject* __this, ::app::Uno::Float3 value, float strength) { ((IMixerHandle__float3*)uGetInterfacePtr(__this, IMixerHandle__float3__typeof()))->__fp_Set((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value, strength); }

}}}


#endif
