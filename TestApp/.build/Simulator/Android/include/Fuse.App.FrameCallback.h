// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ChoreographerDLRFrameCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct Choreographer;}}}}
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct App__FrameCallback;}}

namespace g{
namespace Fuse{

// private sealed class App.FrameCallback :73
// {
struct App__FrameCallback_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ChoreographerDLRFrameCallback interface2;
};

App__FrameCallback_type* App__FrameCallback_typeof();
void App__FrameCallback__ctor_4_fn(App__FrameCallback* __this, ::g::Fuse::App* app);
void App__FrameCallback__doFrame_fn(App__FrameCallback* __this, int64_t* frameTimeNanos);
void App__FrameCallback__New5_fn(::g::Fuse::App* app, App__FrameCallback** __retval);

struct App__FrameCallback : ::g::Android::java::lang::Object
{
    uStrong< ::g::Fuse::App*> _app;
    uStrong< ::g::Android::android::view::Choreographer*> _choreographer;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    int64_t _prevTimeNanos;

    void ctor_4(::g::Fuse::App* app);
    void doFrame(int64_t frameTimeNanos);
    static App__FrameCallback* New5(::g::Fuse::App* app);
};
// }

}} // ::g::Fuse
