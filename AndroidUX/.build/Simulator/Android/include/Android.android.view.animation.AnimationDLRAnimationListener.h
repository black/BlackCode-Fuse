// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{namespace animation{struct Animation;}}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace animation{

// public abstract extern interface AnimationDLRAnimationListener :3105
// {
uInterfaceType* AnimationDLRAnimationListener_typeof();

struct AnimationDLRAnimationListener
{
    void(*fp_onAnimationEnd)(uObject*, ::g::Android::android::view::animation::Animation*);
    void(*fp_onAnimationRepeat)(uObject*, ::g::Android::android::view::animation::Animation*);
    void(*fp_onAnimationStart)(uObject*, ::g::Android::android::view::animation::Animation*);
    static void onAnimationEnd(const uInterface& __this, ::g::Android::android::view::animation::Animation* arg0) { __this.VTable<AnimationDLRAnimationListener>()->fp_onAnimationEnd(__this, arg0); }
    static void onAnimationRepeat(const uInterface& __this, ::g::Android::android::view::animation::Animation* arg0) { __this.VTable<AnimationDLRAnimationListener>()->fp_onAnimationRepeat(__this, arg0); }
    static void onAnimationStart(const uInterface& __this, ::g::Android::android::view::animation::Animation* arg0) { __this.VTable<AnimationDLRAnimationListener>()->fp_onAnimationStart(__this, arg0); }
};
// }

}}}}} // ::g::Android::android::view::animation
