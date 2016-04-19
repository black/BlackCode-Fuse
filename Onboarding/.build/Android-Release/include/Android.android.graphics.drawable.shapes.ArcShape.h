// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\drawable\shapes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.drawable.shapes.RectShape.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{namespace shapes{struct ArcShape;}}}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{
namespace drawable{
namespace shapes{

// public sealed extern class ArcShape :176
// {
::g::Android::java::lang::Object_type* ArcShape_typeof();
void ArcShape__ctor_9_fn(ArcShape* __this, float* arg0, float* arg1);
void ArcShape___Init4_fn();
void ArcShape__New8_fn(float* arg0, float* arg1, ArcShape** __retval);

struct ArcShape : ::g::Android::android::graphics::drawable::shapes::RectShape
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID ArcShape_5935_ID_c_;
    static jmethodID& ArcShape_5935_ID_c() { return ArcShape_5935_ID_c_; }

    void ctor_9(float arg0, float arg1);
    static void _Init4();
    static ArcShape* New8(float arg0, float arg1);
};
// }

}}}}}} // ::g::Android::android::graphics::drawable::shapes
