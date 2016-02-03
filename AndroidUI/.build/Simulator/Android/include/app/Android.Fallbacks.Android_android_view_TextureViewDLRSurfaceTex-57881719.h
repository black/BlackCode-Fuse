// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_TEXTURE_VIEW_D_L_R_SURFACE_TEX_57881719_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_TEXTURE_VIEW_D_L_R_SURFACE_TEX_57881719_H__

#include <app/Android.android.view.TextureViewDLRSurfaceTextureListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct SurfaceTexture; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_TextureViewDLRSurfaceTextureListener;

extern jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_22642_ID;
extern jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_22644_ID;
extern jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_22643_ID;
extern jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_22645_ID;

struct Android_android_view_TextureViewDLRSurfaceTextureListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::TextureViewDLRSurfaceTextureListener __interface_2;
};

Android_android_view_TextureViewDLRSurfaceTextureListener__uType* Android_android_view_TextureViewDLRSurfaceTextureListener__typeof();

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_IMPL_22642(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
bool Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0);
bool Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_IMPL_22644(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_IMPL_22643(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_IMPL_22645(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_TextureViewDLRSurfaceTextureListener : ::app::Android::java::lang::Object
{
    void onSurfaceTextureAvailable(::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2) { Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable(this, arg0, arg1, arg2); }
    bool onSurfaceTextureDestroyed(::app::Android::android::graphics::SurfaceTexture* arg0) { return Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed(this, arg0); }
    void onSurfaceTextureSizeChanged(::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2) { Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged(this, arg0, arg1, arg2); }
    void onSurfaceTextureUpdated(::app::Android::android::graphics::SurfaceTexture* arg0) { Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated(this, arg0); }
};

}}}


#endif
