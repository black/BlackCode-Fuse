// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.animation.ValueAnimator.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace animation{struct TimeAnimator;}}}}

namespace g{
namespace Android{
namespace android{
namespace animation{

// public sealed extern class TimeAnimator :2257
// {
::g::Android::java::lang::Object_type* TimeAnimator_typeof();
void TimeAnimator__ctor_8_fn(TimeAnimator* __this);
void TimeAnimator___Init4_fn();
void TimeAnimator__New7_fn(TimeAnimator** __retval);
void TimeAnimator__setTimeListener_fn(TimeAnimator* __this, uObject* arg0);
void TimeAnimator__setTimeListener_IMPL_378_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TimeAnimator__start_fn(TimeAnimator* __this);
void TimeAnimator__start_IMPL_377_fn(bool* arg0_, jobject* arg1_);

struct TimeAnimator : ::g::Android::android::animation::ValueAnimator
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID setTimeListener_378_ID_;
    static jmethodID& setTimeListener_378_ID() { return setTimeListener_378_ID_; }
    static jmethodID start_377_ID_;
    static jmethodID& start_377_ID() { return start_377_ID_; }
    static jmethodID TimeAnimator_376_ID_c_;
    static jmethodID& TimeAnimator_376_ID_c() { return TimeAnimator_376_ID_c_; }

    void ctor_8();
    void setTimeListener(uObject* arg0);
    void start();
    static void _Init4();
    static TimeAnimator* New7();
    static void setTimeListener_IMPL_378(bool arg0_, jobject arg1_, uObject* arg2_);
    static void start_IMPL_377(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::animation
