// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.SurfaceHolderDLRCallback.h>
#include <Android.android.view.SurfaceHolderDLRCallback2.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Source/Graphics/GLHelper.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct SurfaceCallback;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct SurfaceView;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class SurfaceCallback :934
// {
struct SurfaceCallback_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::SurfaceHolderDLRCallback2 interface2;
    ::g::Android::android::view::SurfaceHolderDLRCallback interface3;
};

SurfaceCallback_type* SurfaceCallback_typeof();
void SurfaceCallback__ctor_4_fn(SurfaceCallback* __this, ::g::Fuse::Android::NativeViews::SurfaceView* sv);
void SurfaceCallback__New5_fn(::g::Fuse::Android::NativeViews::SurfaceView* sv, SurfaceCallback** __retval);
void SurfaceCallback__surfaceChanged_fn(SurfaceCallback* __this, uObject* holder, int* format, int* width, int* height);
void SurfaceCallback__surfaceCreated_fn(SurfaceCallback* __this, uObject* holder);
void SurfaceCallback__surfaceDestroyed_fn(SurfaceCallback* __this, uObject* holder);
void SurfaceCallback__surfaceRedrawNeeded_fn(SurfaceCallback* __this, uObject* holder);

struct SurfaceCallback : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Fuse::Android::NativeViews::SurfaceView*> _sv;

    void ctor_4(::g::Fuse::Android::NativeViews::SurfaceView* sv);
    void surfaceChanged(uObject* holder, int format, int width, int height);
    void surfaceCreated(uObject* holder);
    void surfaceDestroyed(uObject* holder);
    void surfaceRedrawNeeded(uObject* holder);
    static SurfaceCallback* New5(::g::Fuse::Android::NativeViews::SurfaceView* sv);
};
// }

}}}} // ::g::Fuse::Android::NativeViews
