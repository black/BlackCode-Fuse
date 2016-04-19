// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace animation{struct TimeAnimator;}}}}

namespace g{
namespace Android{
namespace android{
namespace animation{

// public abstract extern interface TimeAnimatorDLRTimeListener :2368
// {
uInterfaceType* TimeAnimatorDLRTimeListener_typeof();

struct TimeAnimatorDLRTimeListener
{
    void(*fp_onTimeUpdate)(uObject*, ::g::Android::android::animation::TimeAnimator*, int64_t*, int64_t*);
    static void onTimeUpdate(const uInterface& __this, ::g::Android::android::animation::TimeAnimator* arg0, int64_t arg1, int64_t arg2) { __this.VTable<TimeAnimatorDLRTimeListener>()->fp_onTimeUpdate(__this, arg0, &arg1, &arg2); }
};
// }

}}}} // ::g::Android::android::animation
