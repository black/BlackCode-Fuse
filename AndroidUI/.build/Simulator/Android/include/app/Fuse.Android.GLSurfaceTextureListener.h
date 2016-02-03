// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_G_L_SURFACE_TEXTURE_LISTENER_H__
#define __APP_FUSE_ANDROID_G_L_SURFACE_TEXTURE_LISTENER_H__

#include <app/Android.android.view.TextureViewDLRSurfaceTextureListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Source/Graphics/GLHelper.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct SurfaceTexture; } } } }
namespace app { namespace Fuse { namespace Android { struct TextureView; } } }

namespace app {
namespace Fuse {
namespace Android {

struct GLSurfaceTextureListener;

extern jclass GLSurfaceTextureListener___javaClass_2;

struct GLSurfaceTextureListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::TextureViewDLRSurfaceTextureListener __interface_2;
};

GLSurfaceTextureListener__uType* GLSurfaceTextureListener__typeof();

void GLSurfaceTextureListener___ObjInit_4(GLSurfaceTextureListener* __this, ::app::Fuse::Android::TextureView* tv);
GLSurfaceTextureListener* GLSurfaceTextureListener__New_5(::uStatic* __this, ::app::Fuse::Android::TextureView* tv);
void GLSurfaceTextureListener__onSurfaceTextureAvailable(GLSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* texture, int width, int height);
bool GLSurfaceTextureListener__onSurfaceTextureDestroyed(GLSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* surface);
void GLSurfaceTextureListener__onSurfaceTextureSizeChanged(GLSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* texture, int width, int height);
void GLSurfaceTextureListener__onSurfaceTextureUpdated(GLSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* surface);

struct GLSurfaceTextureListener : ::app::Android::java::lang::Object
{
    ::uStrong< ::app::Fuse::Android::TextureView*> _tv;

    void _ObjInit_4(::app::Fuse::Android::TextureView* tv) { GLSurfaceTextureListener___ObjInit_4(this, tv); }
    void onSurfaceTextureAvailable(::app::Android::android::graphics::SurfaceTexture* texture, int width, int height) { GLSurfaceTextureListener__onSurfaceTextureAvailable(this, texture, width, height); }
    bool onSurfaceTextureDestroyed(::app::Android::android::graphics::SurfaceTexture* surface) { return GLSurfaceTextureListener__onSurfaceTextureDestroyed(this, surface); }
    void onSurfaceTextureSizeChanged(::app::Android::android::graphics::SurfaceTexture* texture, int width, int height) { GLSurfaceTextureListener__onSurfaceTextureSizeChanged(this, texture, width, height); }
    void onSurfaceTextureUpdated(::app::Android::android::graphics::SurfaceTexture* surface) { GLSurfaceTextureListener__onSurfaceTextureUpdated(this, surface); }
};

}}}


#endif
