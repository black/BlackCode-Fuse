// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_APP_TIME_LISTENER_H__
#define __APP_FUSE_APP_TIME_LISTENER_H__

#include <app/Android.android.animation.TimeAnimatorDLRTimeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace animation { struct TimeAnimator; } } } }
namespace app { namespace Fuse { struct App; } }

namespace app {
namespace Fuse {

struct App_TimeListener;

extern jclass App_TimeListener___javaClass_2;

struct App_TimeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::animation::TimeAnimatorDLRTimeListener __interface_2;
};

App_TimeListener__uType* App_TimeListener__typeof();

void App_TimeListener___ObjInit_4(App_TimeListener* __this, ::app::Fuse::App* app);
App_TimeListener* App_TimeListener__New_5(::uStatic* __this, ::app::Fuse::App* app);
void App_TimeListener__onTimeUpdate(App_TimeListener* __this, ::app::Android::android::animation::TimeAnimator* animation, ::uLong totalTime, ::uLong deltaTime);

struct App_TimeListener : ::app::Android::java::lang::Object
{
    ::uStrong< ::app::Fuse::App*> _app;

    void _ObjInit_4(::app::Fuse::App* app) { App_TimeListener___ObjInit_4(this, app); }
    void onTimeUpdate(::app::Android::android::animation::TimeAnimator* animation, ::uLong totalTime, ::uLong deltaTime) { App_TimeListener__onTimeUpdate(this, animation, totalTime, deltaTime); }
};

}}


#endif
