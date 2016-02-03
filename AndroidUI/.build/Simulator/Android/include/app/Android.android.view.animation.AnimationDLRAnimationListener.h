// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_ANIMATION_ANIMATION_D_L_R_ANIMATION_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_ANIMATION_ANIMATION_D_L_R_ANIMATION_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { namespace animation { struct Animation; } } } } }

namespace app {
namespace Android {
namespace android {
namespace view {
namespace animation {

::uInterfaceType* AnimationDLRAnimationListener__typeof();

struct AnimationDLRAnimationListener
{
    void(*__fp_onAnimationEnd)(void*, ::app::Android::android::view::animation::Animation*);
    void(*__fp_onAnimationRepeat)(void*, ::app::Android::android::view::animation::Animation*);
    void(*__fp_onAnimationStart)(void*, ::app::Android::android::view::animation::Animation*);

    static void onAnimationEnd(::uObject* __this, ::app::Android::android::view::animation::Animation* arg0) { ((AnimationDLRAnimationListener*)uGetInterfacePtr(__this, AnimationDLRAnimationListener__typeof()))->__fp_onAnimationEnd((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void onAnimationRepeat(::uObject* __this, ::app::Android::android::view::animation::Animation* arg0) { ((AnimationDLRAnimationListener*)uGetInterfacePtr(__this, AnimationDLRAnimationListener__typeof()))->__fp_onAnimationRepeat((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void onAnimationStart(::uObject* __this, ::app::Android::android::view::animation::Animation* arg0) { ((AnimationDLRAnimationListener*)uGetInterfacePtr(__this, AnimationDLRAnimationListener__typeof()))->__fp_onAnimationStart((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}}


#endif
