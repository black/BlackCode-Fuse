// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\drawable\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct LayerDrawable;}}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{
namespace drawable{

// public sealed extern class LayerDrawable :2948
// {
::g::Android::java::lang::Object_type* LayerDrawable_typeof();
void LayerDrawable__ctor_7_fn(LayerDrawable* __this, ::g::Android::Runtime::ObjectArray* arg0);
void LayerDrawable___Init3_fn();
void LayerDrawable__getDrawable_fn(LayerDrawable* __this, int* arg0, ::g::Android::android::graphics::drawable::Drawable** __retval);
void LayerDrawable__getDrawable_IMPL_6241_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void LayerDrawable__getNumberOfLayers_fn(LayerDrawable* __this, int* __retval);
void LayerDrawable__getNumberOfLayers_IMPL_6240_fn(bool* arg0_, jobject* arg1_, int* __retval);
void LayerDrawable__New6_fn(::g::Android::Runtime::ObjectArray* arg0, LayerDrawable** __retval);

struct LayerDrawable : ::g::Android::android::graphics::drawable::Drawable
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID getDrawable_6241_ID_;
    static jmethodID& getDrawable_6241_ID() { return getDrawable_6241_ID_; }
    static jmethodID getNumberOfLayers_6240_ID_;
    static jmethodID& getNumberOfLayers_6240_ID() { return getNumberOfLayers_6240_ID_; }
    static jmethodID LayerDrawable_6236_ID_c_;
    static jmethodID& LayerDrawable_6236_ID_c() { return LayerDrawable_6236_ID_c_; }

    void ctor_7(::g::Android::Runtime::ObjectArray* arg0);
    ::g::Android::android::graphics::drawable::Drawable* getDrawable(int arg0);
    int getNumberOfLayers();
    static void _Init3();
    static uObject* getDrawable_IMPL_6241(bool arg0_, jobject arg1_, int arg2_);
    static int getNumberOfLayers_IMPL_6240(bool arg0_, jobject arg1_);
    static LayerDrawable* New6(::g::Android::Runtime::ObjectArray* arg0);
};
// }

}}}}} // ::g::Android::android::graphics::drawable
