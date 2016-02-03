// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_I_MIXER_HANDLE__INT4_H__
#define __APP_FUSE_ANIMATIONS_I_MIXER_HANDLE__INT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* IMixerHandle__int4__typeof();

struct IMixerHandle__int4
{
    void(*__fp_Set)(void*, ::app::Uno::Int4, float);
    void(*__fp_Unregister)(void*);

    static void Set(::uObject* __this, ::app::Uno::Int4 value, float strength);
    static void Unregister(::uObject* __this) { ((IMixerHandle__int4*)uGetInterfacePtr(__this, IMixerHandle__int4__typeof()))->__fp_Unregister((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}

#include <app/Uno.Int4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline void IMixerHandle__int4::Set(::uObject* __this, ::app::Uno::Int4 value, float strength) { ((IMixerHandle__int4*)uGetInterfacePtr(__this, IMixerHandle__int4__typeof()))->__fp_Set((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value, strength); }

}}}


#endif
