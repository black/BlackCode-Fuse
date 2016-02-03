// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_ANIMATION_ANIMATION_D_L_R_AN_50875199_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_ANIMATION_ANIMATION_D_L_R_AN_50875199_H__

#include <app/Android.android.view.animation.AnimationDLRAnimationListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { namespace animation { struct Animation; } } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_animation_AnimationDLRAnimationListener;

extern jmethodID Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_21045_ID;
extern jmethodID Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_21046_ID;
extern jmethodID Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_21044_ID;

struct Android_android_view_animation_AnimationDLRAnimationListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::animation::AnimationDLRAnimationListener __interface_2;
};

Android_android_view_animation_AnimationDLRAnimationListener__uType* Android_android_view_animation_AnimationDLRAnimationListener__typeof();

void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::app::Android::android::view::animation::Animation* arg0);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_IMPL_21045(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::app::Android::android::view::animation::Animation* arg0);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_IMPL_21046(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::app::Android::android::view::animation::Animation* arg0);
void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_IMPL_21044(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_animation_AnimationDLRAnimationListener : ::app::Android::java::lang::Object
{
    void onAnimationEnd(::app::Android::android::view::animation::Animation* arg0) { Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd(this, arg0); }
    void onAnimationRepeat(::app::Android::android::view::animation::Animation* arg0) { Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat(this, arg0); }
    void onAnimationStart(::app::Android::android::view::animation::Animation* arg0) { Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart(this, arg0); }
};

}}}


#endif
