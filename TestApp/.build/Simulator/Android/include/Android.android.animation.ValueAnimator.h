// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.animation.Animator.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace animation{struct ValueAnimator;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace animation{

// public extern class ValueAnimator :1331
// {
::g::Android::java::lang::Object_type* ValueAnimator_typeof();
void ValueAnimator__ctor_7_fn(ValueAnimator* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ValueAnimator___Init3_fn();
void ValueAnimator__setDuration_fn(ValueAnimator* __this, int64_t* arg0, ::g::Android::android::animation::Animator** __retval);
void ValueAnimator__setDuration_IMPL_46152_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_, uObject** __retval);
void ValueAnimator__toString_fn(ValueAnimator* __this, ::g::Android::java::lang::String** __retval);
void ValueAnimator__toString_IMPL_425_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct ValueAnimator : ::g::Android::android::animation::Animator
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID setDuration_46152_ID_;
    static jmethodID& setDuration_46152_ID() { return setDuration_46152_ID_; }
    static jmethodID toString_425_ID_;
    static jmethodID& toString_425_ID() { return toString_425_ID_; }

    void ctor_7(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::animation::Animator* setDuration(int64_t arg0);
    static void _Init3();
    static uObject* setDuration_IMPL_46152(bool arg0_, jobject arg1_, int64_t arg2_);
    static uObject* toString_IMPL_425(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::animation
