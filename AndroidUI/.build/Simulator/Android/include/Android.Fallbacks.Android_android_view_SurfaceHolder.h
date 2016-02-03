// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.SurfaceHolder.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace view{struct Surface;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_SurfaceHolder;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_SurfaceHolder :19907
// {
struct Android_android_view_SurfaceHolder_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::SurfaceHolder interface2;
};

Android_android_view_SurfaceHolder_type* Android_android_view_SurfaceHolder_typeof();
void Android_android_view_SurfaceHolder__addCallback_fn(Android_android_view_SurfaceHolder* __this, uObject* arg0);
void Android_android_view_SurfaceHolder__addCallback_IMPL_22610_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_SurfaceHolder__getSurface_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::view::Surface** __retval);
void Android_android_view_SurfaceHolder__getSurface_IMPL_22622_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_SurfaceHolder__getSurfaceFrame_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::graphics::Rect** __retval);
void Android_android_view_SurfaceHolder__getSurfaceFrame_IMPL_22621_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_SurfaceHolder__isCreating_fn(Android_android_view_SurfaceHolder* __this, bool* __retval);
void Android_android_view_SurfaceHolder__isCreating_IMPL_22612_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_SurfaceHolder__lockCanvas_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::graphics::Canvas** __retval);
void Android_android_view_SurfaceHolder__lockCanvas1_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::graphics::Rect* arg0, ::g::Android::android::graphics::Canvas** __retval);
void Android_android_view_SurfaceHolder__lockCanvas_IMPL_22618_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_SurfaceHolder__lockCanvas_IMPL_22619_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_SurfaceHolder__removeCallback_fn(Android_android_view_SurfaceHolder* __this, uObject* arg0);
void Android_android_view_SurfaceHolder__removeCallback_IMPL_22611_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_SurfaceHolder__setFixedSize_fn(Android_android_view_SurfaceHolder* __this, int* arg0, int* arg1);
void Android_android_view_SurfaceHolder__setFixedSize_IMPL_22614_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void Android_android_view_SurfaceHolder__setFormat_fn(Android_android_view_SurfaceHolder* __this, int* arg0);
void Android_android_view_SurfaceHolder__setFormat_IMPL_22616_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void Android_android_view_SurfaceHolder__setKeepScreenOn_fn(Android_android_view_SurfaceHolder* __this, bool* arg0);
void Android_android_view_SurfaceHolder__setKeepScreenOn_IMPL_22617_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void Android_android_view_SurfaceHolder__setSizeFromLayout_fn(Android_android_view_SurfaceHolder* __this);
void Android_android_view_SurfaceHolder__setSizeFromLayout_IMPL_22615_fn(bool* arg0_, jobject* arg1_);
void Android_android_view_SurfaceHolder__setType_fn(Android_android_view_SurfaceHolder* __this, int* arg0);
void Android_android_view_SurfaceHolder__setType_IMPL_22613_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void Android_android_view_SurfaceHolder__unlockCanvasAndPost_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::graphics::Canvas* arg0);
void Android_android_view_SurfaceHolder__unlockCanvasAndPost_IMPL_22620_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_view_SurfaceHolder : ::g::Android::java::lang::Object
{
    static jmethodID addCallback_22610_ID_;
    static jmethodID& addCallback_22610_ID() { return addCallback_22610_ID_; }
    static jmethodID getSurface_22622_ID_;
    static jmethodID& getSurface_22622_ID() { return getSurface_22622_ID_; }
    static jmethodID getSurfaceFrame_22621_ID_;
    static jmethodID& getSurfaceFrame_22621_ID() { return getSurfaceFrame_22621_ID_; }
    static jmethodID isCreating_22612_ID_;
    static jmethodID& isCreating_22612_ID() { return isCreating_22612_ID_; }
    static jmethodID lockCanvas_22618_ID_;
    static jmethodID& lockCanvas_22618_ID() { return lockCanvas_22618_ID_; }
    static jmethodID lockCanvas_22619_ID_;
    static jmethodID& lockCanvas_22619_ID() { return lockCanvas_22619_ID_; }
    static jmethodID removeCallback_22611_ID_;
    static jmethodID& removeCallback_22611_ID() { return removeCallback_22611_ID_; }
    static jmethodID setFixedSize_22614_ID_;
    static jmethodID& setFixedSize_22614_ID() { return setFixedSize_22614_ID_; }
    static jmethodID setFormat_22616_ID_;
    static jmethodID& setFormat_22616_ID() { return setFormat_22616_ID_; }
    static jmethodID setKeepScreenOn_22617_ID_;
    static jmethodID& setKeepScreenOn_22617_ID() { return setKeepScreenOn_22617_ID_; }
    static jmethodID setSizeFromLayout_22615_ID_;
    static jmethodID& setSizeFromLayout_22615_ID() { return setSizeFromLayout_22615_ID_; }
    static jmethodID setType_22613_ID_;
    static jmethodID& setType_22613_ID() { return setType_22613_ID_; }
    static jmethodID unlockCanvasAndPost_22620_ID_;
    static jmethodID& unlockCanvasAndPost_22620_ID() { return unlockCanvasAndPost_22620_ID_; }

    void addCallback(uObject* arg0);
    ::g::Android::android::view::Surface* getSurface();
    ::g::Android::android::graphics::Rect* getSurfaceFrame();
    bool isCreating();
    ::g::Android::android::graphics::Canvas* lockCanvas();
    ::g::Android::android::graphics::Canvas* lockCanvas1(::g::Android::android::graphics::Rect* arg0);
    void removeCallback(uObject* arg0);
    void setFixedSize(int arg0, int arg1);
    void setFormat(int arg0);
    void setKeepScreenOn(bool arg0);
    void setSizeFromLayout();
    void setType(int arg0);
    void unlockCanvasAndPost(::g::Android::android::graphics::Canvas* arg0);
    static void addCallback_IMPL_22610(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getSurface_IMPL_22622(bool arg0_, jobject arg1_);
    static uObject* getSurfaceFrame_IMPL_22621(bool arg0_, jobject arg1_);
    static bool isCreating_IMPL_22612(bool arg0_, jobject arg1_);
    static uObject* lockCanvas_IMPL_22618(bool arg0_, jobject arg1_);
    static uObject* lockCanvas_IMPL_22619(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeCallback_IMPL_22611(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setFixedSize_IMPL_22614(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void setFormat_IMPL_22616(bool arg0_, jobject arg1_, int arg2_);
    static void setKeepScreenOn_IMPL_22617(bool arg0_, jobject arg1_, bool arg2_);
    static void setSizeFromLayout_IMPL_22615(bool arg0_, jobject arg1_);
    static void setType_IMPL_22613(bool arg0_, jobject arg1_, int arg2_);
    static void unlockCanvasAndPost_IMPL_22620(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
