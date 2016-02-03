// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_ANIMATION_TIME_ANIMATOR_D_L_R_TIME_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_ANIMATION_TIME_ANIMATOR_D_L_R_TIME_LISTENER_H__

#include <app/Android.android.animation.TimeAnimatorDLRTimeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace animation { struct TimeAnimator; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_animation_TimeAnimatorDLRTimeListener;

extern jmethodID Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_375_ID;

struct Android_android_animation_TimeAnimatorDLRTimeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::animation::TimeAnimatorDLRTimeListener __interface_2;
};

Android_android_animation_TimeAnimatorDLRTimeListener__uType* Android_android_animation_TimeAnimatorDLRTimeListener__typeof();

void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate(Android_android_animation_TimeAnimatorDLRTimeListener* __this, ::app::Android::android::animation::TimeAnimator* arg0, ::uLong arg1, ::uLong arg2);
void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_IMPL_375(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uLong arg3_, ::uLong arg4_);

struct Android_android_animation_TimeAnimatorDLRTimeListener : ::app::Android::java::lang::Object
{
    void onTimeUpdate(::app::Android::android::animation::TimeAnimator* arg0, ::uLong arg1, ::uLong arg2) { Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate(this, arg0, arg1, arg2); }
};

}}}


#endif
