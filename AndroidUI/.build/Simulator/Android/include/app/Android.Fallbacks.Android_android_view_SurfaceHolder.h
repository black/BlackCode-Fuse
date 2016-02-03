// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_H__

#include <app/Android.android.view.SurfaceHolder.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace view { struct Surface; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_SurfaceHolder;

extern jmethodID Android_android_view_SurfaceHolder__addCallback_22610_ID;
extern jmethodID Android_android_view_SurfaceHolder__getSurface_22622_ID;
extern jmethodID Android_android_view_SurfaceHolder__getSurfaceFrame_22621_ID;
extern jmethodID Android_android_view_SurfaceHolder__isCreating_22612_ID;
extern jmethodID Android_android_view_SurfaceHolder__lockCanvas_22618_ID;
extern jmethodID Android_android_view_SurfaceHolder__lockCanvas_22619_ID;
extern jmethodID Android_android_view_SurfaceHolder__removeCallback_22611_ID;
extern jmethodID Android_android_view_SurfaceHolder__setFixedSize_22614_ID;
extern jmethodID Android_android_view_SurfaceHolder__setFormat_22616_ID;
extern jmethodID Android_android_view_SurfaceHolder__setKeepScreenOn_22617_ID;
extern jmethodID Android_android_view_SurfaceHolder__setSizeFromLayout_22615_ID;
extern jmethodID Android_android_view_SurfaceHolder__setType_22613_ID;
extern jmethodID Android_android_view_SurfaceHolder__unlockCanvasAndPost_22620_ID;

struct Android_android_view_SurfaceHolder__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::SurfaceHolder __interface_2;
};

Android_android_view_SurfaceHolder__uType* Android_android_view_SurfaceHolder__typeof();

void Android_android_view_SurfaceHolder__addCallback(Android_android_view_SurfaceHolder* __this, ::uObject* arg0);
void Android_android_view_SurfaceHolder__addCallback_IMPL_22610(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::Surface* Android_android_view_SurfaceHolder__getSurface(Android_android_view_SurfaceHolder* __this);
::uObject* Android_android_view_SurfaceHolder__getSurface_IMPL_22622(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::Rect* Android_android_view_SurfaceHolder__getSurfaceFrame(Android_android_view_SurfaceHolder* __this);
::uObject* Android_android_view_SurfaceHolder__getSurfaceFrame_IMPL_22621(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_SurfaceHolder__isCreating(Android_android_view_SurfaceHolder* __this);
bool Android_android_view_SurfaceHolder__isCreating_IMPL_22612(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::Canvas* Android_android_view_SurfaceHolder__lockCanvas(Android_android_view_SurfaceHolder* __this);
::app::Android::android::graphics::Canvas* Android_android_view_SurfaceHolder__lockCanvas_1(Android_android_view_SurfaceHolder* __this, ::app::Android::android::graphics::Rect* arg0);
::uObject* Android_android_view_SurfaceHolder__lockCanvas_IMPL_22618(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_SurfaceHolder__lockCanvas_IMPL_22619(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_SurfaceHolder__removeCallback(Android_android_view_SurfaceHolder* __this, ::uObject* arg0);
void Android_android_view_SurfaceHolder__removeCallback_IMPL_22611(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_SurfaceHolder__setFixedSize(Android_android_view_SurfaceHolder* __this, int arg0, int arg1);
void Android_android_view_SurfaceHolder__setFixedSize_IMPL_22614(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void Android_android_view_SurfaceHolder__setFormat(Android_android_view_SurfaceHolder* __this, int arg0);
void Android_android_view_SurfaceHolder__setFormat_IMPL_22616(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Android_android_view_SurfaceHolder__setKeepScreenOn(Android_android_view_SurfaceHolder* __this, bool arg0);
void Android_android_view_SurfaceHolder__setKeepScreenOn_IMPL_22617(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void Android_android_view_SurfaceHolder__setSizeFromLayout(Android_android_view_SurfaceHolder* __this);
void Android_android_view_SurfaceHolder__setSizeFromLayout_IMPL_22615(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_view_SurfaceHolder__setType(Android_android_view_SurfaceHolder* __this, int arg0);
void Android_android_view_SurfaceHolder__setType_IMPL_22613(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Android_android_view_SurfaceHolder__unlockCanvasAndPost(Android_android_view_SurfaceHolder* __this, ::app::Android::android::graphics::Canvas* arg0);
void Android_android_view_SurfaceHolder__unlockCanvasAndPost_IMPL_22620(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_SurfaceHolder : ::app::Android::java::lang::Object
{
    void addCallback(::uObject* arg0) { Android_android_view_SurfaceHolder__addCallback(this, arg0); }
    ::app::Android::android::view::Surface* getSurface() { return Android_android_view_SurfaceHolder__getSurface(this); }
    ::app::Android::android::graphics::Rect* getSurfaceFrame() { return Android_android_view_SurfaceHolder__getSurfaceFrame(this); }
    bool isCreating() { return Android_android_view_SurfaceHolder__isCreating(this); }
    ::app::Android::android::graphics::Canvas* lockCanvas() { return Android_android_view_SurfaceHolder__lockCanvas(this); }
    ::app::Android::android::graphics::Canvas* lockCanvas_1(::app::Android::android::graphics::Rect* arg0) { return Android_android_view_SurfaceHolder__lockCanvas_1(this, arg0); }
    void removeCallback(::uObject* arg0) { Android_android_view_SurfaceHolder__removeCallback(this, arg0); }
    void setFixedSize(int arg0, int arg1) { Android_android_view_SurfaceHolder__setFixedSize(this, arg0, arg1); }
    void setFormat(int arg0) { Android_android_view_SurfaceHolder__setFormat(this, arg0); }
    void setKeepScreenOn(bool arg0) { Android_android_view_SurfaceHolder__setKeepScreenOn(this, arg0); }
    void setSizeFromLayout() { Android_android_view_SurfaceHolder__setSizeFromLayout(this); }
    void setType(int arg0) { Android_android_view_SurfaceHolder__setType(this, arg0); }
    void unlockCanvasAndPost(::app::Android::android::graphics::Canvas* arg0) { Android_android_view_SurfaceHolder__unlockCanvasAndPost(this, arg0); }
};

}}}


#endif
