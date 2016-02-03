// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface TextureViewDLRSurfaceTextureListener :27130
// {
uInterfaceType* TextureViewDLRSurfaceTextureListener_typeof();

struct TextureViewDLRSurfaceTextureListener
{
    void(*fp_onSurfaceTextureAvailable)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, int*, int*);
    void(*fp_onSurfaceTextureDestroyed)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, bool*);
    void(*fp_onSurfaceTextureSizeChanged)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, int*, int*);
    void(*fp_onSurfaceTextureUpdated)(uObject*, ::g::Android::android::graphics::SurfaceTexture*);
    static void onSurfaceTextureAvailable(const uInterface& __this, ::g::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2) { __this.VTable<TextureViewDLRSurfaceTextureListener>()->fp_onSurfaceTextureAvailable(__this, arg0, &arg1, &arg2); }
    static bool onSurfaceTextureDestroyed(const uInterface& __this, ::g::Android::android::graphics::SurfaceTexture* arg0) { bool __retval; return __this.VTable<TextureViewDLRSurfaceTextureListener>()->fp_onSurfaceTextureDestroyed(__this, arg0, &__retval), __retval; }
    static void onSurfaceTextureSizeChanged(const uInterface& __this, ::g::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2) { __this.VTable<TextureViewDLRSurfaceTextureListener>()->fp_onSurfaceTextureSizeChanged(__this, arg0, &arg1, &arg2); }
    static void onSurfaceTextureUpdated(const uInterface& __this, ::g::Android::android::graphics::SurfaceTexture* arg0) { __this.VTable<TextureViewDLRSurfaceTextureListener>()->fp_onSurfaceTextureUpdated(__this, arg0); }
};
// }

}}}} // ::g::Android::android::view
