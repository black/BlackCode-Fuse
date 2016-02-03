// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\drawable\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{namespace shapes{struct Shape;}}}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct ShapeDrawable;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct ShapeDrawableDLRShaderFactory;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Paint;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{
namespace drawable{

// public sealed extern class ShapeDrawable :3639
// {
::g::Android::java::lang::Object_type* ShapeDrawable_typeof();
void ShapeDrawable__ctor_6_fn(ShapeDrawable* __this);
void ShapeDrawable___Init3_fn();
void ShapeDrawable__getPaint_fn(ShapeDrawable* __this, ::g::Android::android::graphics::Paint** __retval);
void ShapeDrawable__getPaint_IMPL_6368_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ShapeDrawable__New5_fn(ShapeDrawable** __retval);
void ShapeDrawable__setShaderFactory_fn(ShapeDrawable* __this, ::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory* arg0);
void ShapeDrawable__setShaderFactory_IMPL_6366_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ShapeDrawable__setShape_fn(ShapeDrawable* __this, ::g::Android::android::graphics::drawable::shapes::Shape* arg0);
void ShapeDrawable__setShape_IMPL_6365_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct ShapeDrawable : ::g::Android::android::graphics::drawable::Drawable
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID getPaint_6368_ID_;
    static jmethodID& getPaint_6368_ID() { return getPaint_6368_ID_; }
    static jmethodID setShaderFactory_6366_ID_;
    static jmethodID& setShaderFactory_6366_ID() { return setShaderFactory_6366_ID_; }
    static jmethodID setShape_6365_ID_;
    static jmethodID& setShape_6365_ID() { return setShape_6365_ID_; }
    static jmethodID ShapeDrawable_6362_ID_c_;
    static jmethodID& ShapeDrawable_6362_ID_c() { return ShapeDrawable_6362_ID_c_; }

    void ctor_6();
    ::g::Android::android::graphics::Paint* getPaint();
    void setShaderFactory(::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory* arg0);
    void setShape(::g::Android::android::graphics::drawable::shapes::Shape* arg0);
    static void _Init3();
    static uObject* getPaint_IMPL_6368(bool arg0_, jobject arg1_);
    static ShapeDrawable* New5();
    static void setShaderFactory_IMPL_6366(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setShape_IMPL_6365(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}}} // ::g::Android::android::graphics::drawable
