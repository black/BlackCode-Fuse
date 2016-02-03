// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.animation.TimeAnimatorDLRTimeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace animation{struct TimeAnimator;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_animation_TimeAnimatorDLRTimeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_animation_TimeAnimatorDLRTimeListener :22532
// {
struct Android_android_animation_TimeAnimatorDLRTimeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::animation::TimeAnimatorDLRTimeListener interface2;
};

Android_android_animation_TimeAnimatorDLRTimeListener_type* Android_android_animation_TimeAnimatorDLRTimeListener_typeof();
void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_fn(Android_android_animation_TimeAnimatorDLRTimeListener* __this, ::g::Android::android::animation::TimeAnimator* arg0, int64_t* arg1, int64_t* arg2);
void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_IMPL_375_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, int64_t* arg4_);

struct Android_android_animation_TimeAnimatorDLRTimeListener : ::g::Android::java::lang::Object
{
    static jmethodID onTimeUpdate_375_ID_;
    static jmethodID& onTimeUpdate_375_ID() { return onTimeUpdate_375_ID_; }

    void onTimeUpdate(::g::Android::android::animation::TimeAnimator* arg0, int64_t arg1, int64_t arg2);
    static void onTimeUpdate_IMPL_375(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_, int64_t arg4_);
};
// }

}}} // ::g::Android::Fallbacks
