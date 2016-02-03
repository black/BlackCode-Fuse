// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_SURFACE_CALLBACK_H__
#define __APP_FUSE_ANDROID_SURFACE_CALLBACK_H__

#include <app/Android.android.view.SurfaceHolderDLRCallback.h>
#include <app/Android.android.view.SurfaceHolderDLRCallback2.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Source/Graphics/GLHelper.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Android { struct SurfaceView; } } }

namespace app {
namespace Fuse {
namespace Android {

struct SurfaceCallback;

extern jclass SurfaceCallback___javaClass_2;

struct SurfaceCallback__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::SurfaceHolderDLRCallback2 __interface_2;
    ::app::Android::android::view::SurfaceHolderDLRCallback __interface_3;
};

SurfaceCallback__uType* SurfaceCallback__typeof();

void SurfaceCallback___ObjInit_4(SurfaceCallback* __this, ::app::Fuse::Android::SurfaceView* sv);
SurfaceCallback* SurfaceCallback__New_5(::uStatic* __this, ::app::Fuse::Android::SurfaceView* sv);
void SurfaceCallback__surfaceChanged(SurfaceCallback* __this, ::uObject* holder, int format, int width, int height);
void SurfaceCallback__surfaceCreated(SurfaceCallback* __this, ::uObject* holder);
void SurfaceCallback__surfaceDestroyed(SurfaceCallback* __this, ::uObject* holder);
void SurfaceCallback__surfaceRedrawNeeded(SurfaceCallback* __this, ::uObject* holder);

struct SurfaceCallback : ::app::Android::java::lang::Object
{
    ::uStrong< ::app::Fuse::Android::SurfaceView*> _sv;

    void _ObjInit_4(::app::Fuse::Android::SurfaceView* sv) { SurfaceCallback___ObjInit_4(this, sv); }
    void surfaceChanged(::uObject* holder, int format, int width, int height) { SurfaceCallback__surfaceChanged(this, holder, format, width, height); }
    void surfaceCreated(::uObject* holder) { SurfaceCallback__surfaceCreated(this, holder); }
    void surfaceDestroyed(::uObject* holder) { SurfaceCallback__surfaceDestroyed(this, holder); }
    void surfaceRedrawNeeded(::uObject* holder) { SurfaceCallback__surfaceRedrawNeeded(this, holder); }
};

}}}


#endif
