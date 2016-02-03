// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRACK_PROVIDER_H__
#define __APP_FUSE_ANIMATIONS_TRACK_PROVIDER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct TrackAnimator; } } }

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* TrackProvider__typeof();

struct TrackProvider
{
    int(*__fp_GetAnimatorVariant)(void*, ::app::Fuse::Animations::TrackAnimator*);
    double(*__fp_GetDuration)(void*, ::app::Fuse::Animations::TrackAnimator*, int);

    static int GetAnimatorVariant(::uObject* __this, ::app::Fuse::Animations::TrackAnimator* tas) { return ((TrackProvider*)uGetInterfacePtr(__this, TrackProvider__typeof()))->__fp_GetAnimatorVariant((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), tas); }
    static double GetDuration(::uObject* __this, ::app::Fuse::Animations::TrackAnimator* tas, int variant) { return ((TrackProvider*)uGetInterfacePtr(__this, TrackProvider__typeof()))->__fp_GetDuration((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), tas, variant); }
};

}}}


#endif
