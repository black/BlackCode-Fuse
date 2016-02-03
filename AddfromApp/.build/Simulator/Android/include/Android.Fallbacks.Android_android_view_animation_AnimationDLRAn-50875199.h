// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.animation.AnimationDLRAnimationListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{namespace animation{struct Animation;}}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_animation_AnimationDLRAnimationListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_animation_AnimationDLRAnimationListener :46515
// {
struct Android_android_view_animation_AnimationDLRAnimationListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::animation::AnimationDLRAnimationListener interface2;
};

Android_android_view_animation_AnimationDLRAnimationListener_type* Android_android_view_animation_AnimationDLRAnimationListener_typeof();
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_fn(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::g::Android::android::view::animation::Animation* arg0);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_IMPL_21045_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_fn(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::g::Android::android::view::animation::Animation* arg0);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_IMPL_21046_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_fn(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::g::Android::android::view::animation::Animation* arg0);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_IMPL_21044_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_view_animation_AnimationDLRAnimationListener : ::g::Android::java::lang::Object
{
    static jmethodID onAnimationEnd_21045_ID_;
    static jmethodID& onAnimationEnd_21045_ID() { return onAnimationEnd_21045_ID_; }
    static jmethodID onAnimationRepeat_21046_ID_;
    static jmethodID& onAnimationRepeat_21046_ID() { return onAnimationRepeat_21046_ID_; }
    static jmethodID onAnimationStart_21044_ID_;
    static jmethodID& onAnimationStart_21044_ID() { return onAnimationStart_21044_ID_; }

    void onAnimationEnd(::g::Android::android::view::animation::Animation* arg0);
    void onAnimationRepeat(::g::Android::android::view::animation::Animation* arg0);
    void onAnimationStart(::g::Android::android::view::animation::Animation* arg0);
    static void onAnimationEnd_IMPL_21045(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onAnimationRepeat_IMPL_21046(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onAnimationStart_IMPL_21044(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
