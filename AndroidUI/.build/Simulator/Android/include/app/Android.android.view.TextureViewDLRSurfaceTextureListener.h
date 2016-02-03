// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_TEXTURE_VIEW_D_L_R_SURFACE_TEXTURE_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_TEXTURE_VIEW_D_L_R_SURFACE_TEXTURE_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct SurfaceTexture; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* TextureViewDLRSurfaceTextureListener__typeof();

struct TextureViewDLRSurfaceTextureListener
{
    void(*__fp_onSurfaceTextureAvailable)(void*, ::app::Android::android::graphics::SurfaceTexture*, int, int);
    bool(*__fp_onSurfaceTextureDestroyed)(void*, ::app::Android::android::graphics::SurfaceTexture*);
    void(*__fp_onSurfaceTextureSizeChanged)(void*, ::app::Android::android::graphics::SurfaceTexture*, int, int);
    void(*__fp_onSurfaceTextureUpdated)(void*, ::app::Android::android::graphics::SurfaceTexture*);

    static void onSurfaceTextureAvailable(::uObject* __this, ::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2) { ((TextureViewDLRSurfaceTextureListener*)uGetInterfacePtr(__this, TextureViewDLRSurfaceTextureListener__typeof()))->__fp_onSurfaceTextureAvailable((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static bool onSurfaceTextureDestroyed(::uObject* __this, ::app::Android::android::graphics::SurfaceTexture* arg0) { return ((TextureViewDLRSurfaceTextureListener*)uGetInterfacePtr(__this, TextureViewDLRSurfaceTextureListener__typeof()))->__fp_onSurfaceTextureDestroyed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void onSurfaceTextureSizeChanged(::uObject* __this, ::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2) { ((TextureViewDLRSurfaceTextureListener*)uGetInterfacePtr(__this, TextureViewDLRSurfaceTextureListener__typeof()))->__fp_onSurfaceTextureSizeChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static void onSurfaceTextureUpdated(::uObject* __this, ::app::Android::android::graphics::SurfaceTexture* arg0) { ((TextureViewDLRSurfaceTextureListener*)uGetInterfacePtr(__this, TextureViewDLRSurfaceTextureListener__typeof()))->__fp_onSurfaceTextureUpdated((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
