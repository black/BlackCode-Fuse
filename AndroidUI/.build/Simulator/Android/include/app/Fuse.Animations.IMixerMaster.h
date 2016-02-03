// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_I_MIXER_MASTER_H__
#define __APP_FUSE_ANIMATIONS_I_MIXER_MASTER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* IMixerMaster__typeof();

struct IMixerMaster
{
    void(*__fp_Complete)(void*);

    static void Complete(::uObject* __this) { ((IMixerMaster*)uGetInterfacePtr(__this, IMixerMaster__typeof()))->__fp_Complete((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
