// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_ANIMATION_VALUE_ANIMATOR_H__
#define __APP_ANDROID_ANDROID_ANIMATION_VALUE_ANIMATOR_H__

#include <app/Android.android.animation.Animator.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace animation {

struct ValueAnimator;

extern jclass ValueAnimator___javaClass_3;
extern jmethodID ValueAnimator__setDuration_46152_ID;
extern jmethodID ValueAnimator__toString_425_ID;

struct ValueAnimator__uType : ::app::Android::android::animation::Animator__uType
{
};

ValueAnimator__uType* ValueAnimator__typeof();

void ValueAnimator___Init_3(::uStatic* __this);
void ValueAnimator___ObjInit_7(ValueAnimator* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
::app::Android::android::animation::Animator* ValueAnimator__setDuration(ValueAnimator* __this, ::uLong arg0);
::uObject* ValueAnimator__setDuration_IMPL_46152(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_);
::app::Android::java::lang::String* ValueAnimator__toString(ValueAnimator* __this);
::uObject* ValueAnimator__toString_IMPL_425(::uStatic* __this, bool arg0_, jobject arg1_);

struct ValueAnimator : ::app::Android::android::animation::Animator
{
    void _ObjInit_7(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ValueAnimator___ObjInit_7(this, obj, utype, hasFallbackClass, resolveType); }
    ::app::Android::android::animation::Animator* setDuration(::uLong arg0) { return ValueAnimator__setDuration(this, arg0); }
};

}}}}


#endif
