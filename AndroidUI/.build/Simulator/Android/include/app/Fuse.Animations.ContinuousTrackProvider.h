// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_PROVIDER_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_PROVIDER_H__

#include <app/Fuse.Animations.TrackProvider.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct TrackAnimatorState; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* ContinuousTrackProvider__typeof();

struct ContinuousTrackProvider
{
    bool(*__fp_GetSeekProgress)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::app::Uno::Float4*, double*);
    bool(*__fp_GetSeekTime)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::app::Uno::Float4*, double*);

    static bool GetSeekProgress(::uObject* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::app::Uno::Float4* value, double* strength) { return ((ContinuousTrackProvider*)uGetInterfacePtr(__this, ContinuousTrackProvider__typeof()))->__fp_GetSeekProgress((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), tas, progress, interval, dir, value, strength); }
    static bool GetSeekTime(::uObject* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::app::Uno::Float4* value, double* strength) { return ((ContinuousTrackProvider*)uGetInterfacePtr(__this, ContinuousTrackProvider__typeof()))->__fp_GetSeekTime((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), tas, elapsed, interval, dir, value, strength); }
};

}}}


#endif
