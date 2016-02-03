// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct FrameAvailableEvent;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class FrameAvailableEvent :27
// {
struct FrameAvailableEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::graphics::SurfaceTextureDLROnFrameAvailableListener interface2;
};

FrameAvailableEvent_type* FrameAvailableEvent_typeof();
void FrameAvailableEvent__ctor_4_fn(FrameAvailableEvent* __this, ::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler);
void FrameAvailableEvent__AddHandler_fn(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler, uObject** __retval);
void FrameAvailableEvent__Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_onFrameAvailable_fn(FrameAvailableEvent* __this, ::g::Android::android::graphics::SurfaceTexture* arg0);
void FrameAvailableEvent__New5_fn(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler, FrameAvailableEvent** __retval);
void FrameAvailableEvent__Uno_IDisposable_Dispose1_fn(FrameAvailableEvent* __this);

struct FrameAvailableEvent : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::graphics::SurfaceTexture*> _surfaceTexture;

    void ctor_4(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler);
    static FrameAvailableEvent* New5(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
