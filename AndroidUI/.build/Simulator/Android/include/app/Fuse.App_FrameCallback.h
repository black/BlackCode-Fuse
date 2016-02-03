// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_APP_FRAME_CALLBACK_H__
#define __APP_FUSE_APP_FRAME_CALLBACK_H__

#include <app/Android.android.view.ChoreographerDLRFrameCallback.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct Choreographer; } } } }
namespace app { namespace Fuse { struct App; } }

namespace app {
namespace Fuse {

struct App_FrameCallback;

extern jclass App_FrameCallback___javaClass_2;

struct App_FrameCallback__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ChoreographerDLRFrameCallback __interface_2;
};

App_FrameCallback__uType* App_FrameCallback__typeof();

void App_FrameCallback___ObjInit_4(App_FrameCallback* __this, ::app::Fuse::App* app);
void App_FrameCallback__doFrame(App_FrameCallback* __this, ::uLong frameTimeNanos);
App_FrameCallback* App_FrameCallback__New_5(::uStatic* __this, ::app::Fuse::App* app);

struct App_FrameCallback : ::app::Android::java::lang::Object
{
    ::uStrong< ::app::Fuse::App*> _app;
    ::uLong _prevTimeNanos;
    ::uStrong< ::app::Android::android::view::Choreographer*> _choreographer;

    void _ObjInit_4(::app::Fuse::App* app) { App_FrameCallback___ObjInit_4(this, app); }
    void doFrame(::uLong frameTimeNanos) { App_FrameCallback__doFrame(this, frameTimeNanos); }
};

}}


#endif
