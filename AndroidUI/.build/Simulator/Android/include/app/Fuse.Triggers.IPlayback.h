// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_I_PLAYBACK_H__
#define __APP_FUSE_TRIGGERS_I_PLAYBACK_H__

#include <app/Fuse.Triggers.IProgress.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

::uInterfaceType* IPlayback__typeof();

struct IPlayback
{
    bool(*__fp_get_CanPause)(void*);
    bool(*__fp_get_CanPlayTo)(void*);
    bool(*__fp_get_CanResume)(void*);
    bool(*__fp_get_CanStop)(void*);
    void(*__fp_Pause)(void*);
    void(*__fp_PlayTo)(void*, double);
    void(*__fp_Resume)(void*);
    void(*__fp_Stop)(void*);

    static bool CanPause(::uObject* __this) { return ((IPlayback*)uGetInterfacePtr(__this, IPlayback__typeof()))->__fp_get_CanPause((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool CanPlayTo(::uObject* __this) { return ((IPlayback*)uGetInterfacePtr(__this, IPlayback__typeof()))->__fp_get_CanPlayTo((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool CanResume(::uObject* __this) { return ((IPlayback*)uGetInterfacePtr(__this, IPlayback__typeof()))->__fp_get_CanResume((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool CanStop(::uObject* __this) { return ((IPlayback*)uGetInterfacePtr(__this, IPlayback__typeof()))->__fp_get_CanStop((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void Pause(::uObject* __this) { ((IPlayback*)uGetInterfacePtr(__this, IPlayback__typeof()))->__fp_Pause((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void PlayTo(::uObject* __this, double progress) { ((IPlayback*)uGetInterfacePtr(__this, IPlayback__typeof()))->__fp_PlayTo((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), progress); }
    static void Resume(::uObject* __this) { ((IPlayback*)uGetInterfacePtr(__this, IPlayback__typeof()))->__fp_Resume((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void Stop(::uObject* __this) { ((IPlayback*)uGetInterfacePtr(__this, IPlayback__typeof()))->__fp_Stop((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
