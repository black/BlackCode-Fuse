// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\drawable\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_SHAPE_DRAWABLE_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_SHAPE_DRAWABLE_H__

#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { namespace shapes { struct Shape; } } } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct ShapeDrawableDLRShaderFactory; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Paint; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {
namespace drawable {

struct ShapeDrawable;

extern jclass ShapeDrawable___javaClass_3;
extern jmethodID ShapeDrawable__getPaint_6368_ID;
extern jmethodID ShapeDrawable__setShaderFactory_6366_ID;
extern jmethodID ShapeDrawable__setShape_6365_ID;
extern jmethodID ShapeDrawable__ShapeDrawable_6362_ID_c;

struct ShapeDrawable__uType : ::app::Android::android::graphics::drawable::Drawable__uType
{
};

ShapeDrawable__uType* ShapeDrawable__typeof();

void ShapeDrawable___Init_3(::uStatic* __this);
void ShapeDrawable___ObjInit_6(ShapeDrawable* __this);
::app::Android::android::graphics::Paint* ShapeDrawable__getPaint(ShapeDrawable* __this);
::uObject* ShapeDrawable__getPaint_IMPL_6368(::uStatic* __this, bool arg0_, jobject arg1_);
ShapeDrawable* ShapeDrawable__New_5(::uStatic* __this);
void ShapeDrawable__setShaderFactory(ShapeDrawable* __this, ::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory* arg0);
void ShapeDrawable__setShaderFactory_IMPL_6366(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ShapeDrawable__setShape(ShapeDrawable* __this, ::app::Android::android::graphics::drawable::shapes::Shape* arg0);
void ShapeDrawable__setShape_IMPL_6365(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct ShapeDrawable : ::app::Android::android::graphics::drawable::Drawable
{
    void _ObjInit_6() { ShapeDrawable___ObjInit_6(this); }
    ::app::Android::android::graphics::Paint* getPaint() { return ShapeDrawable__getPaint(this); }
    void setShaderFactory(::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory* arg0) { ShapeDrawable__setShaderFactory(this, arg0); }
    void setShape(::app::Android::android::graphics::drawable::shapes::Shape* arg0) { ShapeDrawable__setShape(this, arg0); }
};

}}}}}


#endif
