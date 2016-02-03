// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_ANIMATION_TIME_INTERPOLATOR_H__
#define __APP_ANDROID_ANDROID_ANIMATION_TIME_INTERPOLATOR_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace animation {

::uInterfaceType* TimeInterpolator__typeof();

struct TimeInterpolator
{
    float(*__fp_getInterpolation)(void*, float);

    static float getInterpolation(::uObject* __this, float arg0) { return ((TimeInterpolator*)uGetInterfacePtr(__this, TimeInterpolator__typeof()))->__fp_getInterpolation((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
