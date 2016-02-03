// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_ANIMATION_TIME_ANIMATOR_D_L_R_TIME_LISTENER_H__
#define __APP_ANDROID_ANDROID_ANIMATION_TIME_ANIMATOR_D_L_R_TIME_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace animation { struct TimeAnimator; } } } }

namespace app {
namespace Android {
namespace android {
namespace animation {

::uInterfaceType* TimeAnimatorDLRTimeListener__typeof();

struct TimeAnimatorDLRTimeListener
{
    void(*__fp_onTimeUpdate)(void*, ::app::Android::android::animation::TimeAnimator*, ::uLong, ::uLong);

    static void onTimeUpdate(::uObject* __this, ::app::Android::android::animation::TimeAnimator* arg0, ::uLong arg1, ::uLong arg2) { ((TimeAnimatorDLRTimeListener*)uGetInterfacePtr(__this, TimeAnimatorDLRTimeListener__typeof()))->__fp_onTimeUpdate((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
};

}}}}


#endif
