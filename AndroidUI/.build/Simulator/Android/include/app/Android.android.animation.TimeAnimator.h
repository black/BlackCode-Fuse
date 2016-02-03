// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_ANIMATION_TIME_ANIMATOR_H__
#define __APP_ANDROID_ANDROID_ANIMATION_TIME_ANIMATOR_H__

#include <app/Android.android.animation.ValueAnimator.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace animation {

struct TimeAnimator;

extern jclass TimeAnimator___javaClass_4;
extern jmethodID TimeAnimator__setTimeListener_378_ID;
extern jmethodID TimeAnimator__start_377_ID;
extern jmethodID TimeAnimator__TimeAnimator_376_ID_c;

struct TimeAnimator__uType : ::app::Android::android::animation::ValueAnimator__uType
{
};

TimeAnimator__uType* TimeAnimator__typeof();

void TimeAnimator___Init_4(::uStatic* __this);
void TimeAnimator___ObjInit_8(TimeAnimator* __this);
TimeAnimator* TimeAnimator__New_7(::uStatic* __this);
void TimeAnimator__setTimeListener(TimeAnimator* __this, ::uObject* arg0);
void TimeAnimator__setTimeListener_IMPL_378(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TimeAnimator__start(TimeAnimator* __this);
void TimeAnimator__start_IMPL_377(::uStatic* __this, bool arg0_, jobject arg1_);

struct TimeAnimator : ::app::Android::android::animation::ValueAnimator
{
    void _ObjInit_8() { TimeAnimator___ObjInit_8(this); }
    void setTimeListener(::uObject* arg0) { TimeAnimator__setTimeListener(this, arg0); }
    void start() { TimeAnimator__start(this); }
};

}}}}


#endif
