// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_ANIMATION_TIME_INTERPOLATOR_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_ANIMATION_TIME_INTERPOLATOR_H__

#include <app/Android.android.animation.TimeInterpolator.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_animation_TimeInterpolator;

extern jmethodID Android_android_animation_TimeInterpolator__getInterpolation_379_ID;

struct Android_android_animation_TimeInterpolator__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::animation::TimeInterpolator __interface_2;
};

Android_android_animation_TimeInterpolator__uType* Android_android_animation_TimeInterpolator__typeof();

float Android_android_animation_TimeInterpolator__getInterpolation(Android_android_animation_TimeInterpolator* __this, float arg0);
float Android_android_animation_TimeInterpolator__getInterpolation_IMPL_379(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);

struct Android_android_animation_TimeInterpolator : ::app::Android::java::lang::Object
{
    float getInterpolation(float arg0) { return Android_android_animation_TimeInterpolator__getInterpolation(this, arg0); }
};

}}}


#endif
