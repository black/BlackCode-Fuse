// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_KEYFRAME_TRACK_H__
#define __APP_FUSE_ANIMATIONS_KEYFRAME_TRACK_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* KeyframeTrack__typeof();

struct KeyframeTrack
{
    int(*__fp_get_Interpolation)(void*);
    ::uObject*(*__fp_get_Keyframes)(void*);
    void(*__fp_set_Interpolation)(void*, int);

    static int Interpolation(::uObject* __this) { return ((KeyframeTrack*)uGetInterfacePtr(__this, KeyframeTrack__typeof()))->__fp_get_Interpolation((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* Keyframes(::uObject* __this) { return ((KeyframeTrack*)uGetInterfacePtr(__this, KeyframeTrack__typeof()))->__fp_get_Keyframes((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void Interpolation(::uObject* __this, int value) { ((KeyframeTrack*)uGetInterfacePtr(__this, KeyframeTrack__typeof()))->__fp_set_Interpolation((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}


#endif
