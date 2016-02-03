// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.animation.TimeAnimatorDLRTimeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace animation{struct TimeAnimator;}}}}
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct App__TimeListener;}}

namespace g{
namespace Fuse{

// private sealed class App.TimeListener :41
// {
struct App__TimeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::animation::TimeAnimatorDLRTimeListener interface2;
};

App__TimeListener_type* App__TimeListener_typeof();
void App__TimeListener__ctor_4_fn(App__TimeListener* __this, ::g::Fuse::App* app);
void App__TimeListener__New5_fn(::g::Fuse::App* app, App__TimeListener** __retval);
void App__TimeListener__onTimeUpdate_fn(App__TimeListener* __this, ::g::Android::android::animation::TimeAnimator* animation, int64_t* totalTime, int64_t* deltaTime);

struct App__TimeListener : ::g::Android::java::lang::Object
{
    uStrong< ::g::Fuse::App*> _app;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }

    void ctor_4(::g::Fuse::App* app);
    void onTimeUpdate(::g::Android::android::animation::TimeAnimator* animation, int64_t totalTime, int64_t deltaTime);
    static App__TimeListener* New5(::g::Fuse::App* app);
};
// }

}} // ::g::Fuse
