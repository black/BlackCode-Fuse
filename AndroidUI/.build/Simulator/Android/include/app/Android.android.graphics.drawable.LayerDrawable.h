// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\drawable\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_LAYER_DRAWABLE_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_LAYER_DRAWABLE_H__

#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_graphics_drawable_Drawable; } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {
namespace drawable {

struct LayerDrawable;

extern jclass LayerDrawable___javaClass_3;
extern jmethodID LayerDrawable__getDrawable_6241_ID;
extern jmethodID LayerDrawable__getNumberOfLayers_6240_ID;
extern jmethodID LayerDrawable__LayerDrawable_6236_ID_c;

struct LayerDrawable__uType : ::app::Android::android::graphics::drawable::Drawable__uType
{
};

LayerDrawable__uType* LayerDrawable__typeof();

void LayerDrawable___Init_3(::uStatic* __this);
void LayerDrawable___ObjInit_6(LayerDrawable* __this, ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable* arg0);
::app::Android::android::graphics::drawable::Drawable* LayerDrawable__getDrawable(LayerDrawable* __this, int arg0);
::uObject* LayerDrawable__getDrawable_IMPL_6241(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
int LayerDrawable__getNumberOfLayers(LayerDrawable* __this);
int LayerDrawable__getNumberOfLayers_IMPL_6240(::uStatic* __this, bool arg0_, jobject arg1_);
LayerDrawable* LayerDrawable__New_5(::uStatic* __this, ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable* arg0);

struct LayerDrawable : ::app::Android::android::graphics::drawable::Drawable
{
    void _ObjInit_6(::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable* arg0) { LayerDrawable___ObjInit_6(this, arg0); }
    ::app::Android::android::graphics::drawable::Drawable* getDrawable(int arg0) { return LayerDrawable__getDrawable(this, arg0); }
    int getNumberOfLayers() { return LayerDrawable__getNumberOfLayers(this); }
};

}}}}}


#endif
