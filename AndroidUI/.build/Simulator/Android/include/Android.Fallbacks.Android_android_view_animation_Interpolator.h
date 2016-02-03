// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.animation.TimeInterpolator.h>
#include <Android.android.view.animation.Interpolator.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_animation_Interpolator;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_animation_Interpolator :46556
// {
struct Android_android_view_animation_Interpolator_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::animation::Interpolator interface2;
    ::g::Android::android::animation::TimeInterpolator interface3;
};

Android_android_view_animation_Interpolator_type* Android_android_view_animation_Interpolator_typeof();
void Android_android_view_animation_Interpolator__getInterpolation_fn(Android_android_view_animation_Interpolator* __this, float* arg0, float* __retval);
void Android_android_view_animation_Interpolator__getInterpolation_IMPL_379_fn(bool* arg0_, jobject* arg1_, float* arg2_, float* __retval);

struct Android_android_view_animation_Interpolator : ::g::Android::java::lang::Object
{
    static jmethodID getInterpolation_379_ID_;
    static jmethodID& getInterpolation_379_ID() { return getInterpolation_379_ID_; }

    float getInterpolation(float arg0);
    static float getInterpolation_IMPL_379(bool arg0_, jobject arg1_, float arg2_);
};
// }

}}} // ::g::Android::Fallbacks
