// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\drawable\shapes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.drawable.shapes.RectShape.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{namespace shapes{struct RoundRectShape;}}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct RectF;}}}}
namespace g{namespace Android{namespace Runtime{struct FloatArray;}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{
namespace drawable{
namespace shapes{

// public sealed extern class RoundRectShape :330
// {
::g::Android::java::lang::Object_type* RoundRectShape_typeof();
void RoundRectShape__ctor_9_fn(RoundRectShape* __this, ::g::Android::Runtime::FloatArray* arg0, ::g::Android::android::graphics::RectF* arg1, ::g::Android::Runtime::FloatArray* arg2);
void RoundRectShape___Init4_fn();
void RoundRectShape__New8_fn(::g::Android::Runtime::FloatArray* arg0, ::g::Android::android::graphics::RectF* arg1, ::g::Android::Runtime::FloatArray* arg2, RoundRectShape** __retval);

struct RoundRectShape : ::g::Android::android::graphics::drawable::shapes::RectShape
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID RoundRectShape_5948_ID_c_;
    static jmethodID& RoundRectShape_5948_ID_c() { return RoundRectShape_5948_ID_c_; }

    void ctor_9(::g::Android::Runtime::FloatArray* arg0, ::g::Android::android::graphics::RectF* arg1, ::g::Android::Runtime::FloatArray* arg2);
    static void _Init4();
    static RoundRectShape* New8(::g::Android::Runtime::FloatArray* arg0, ::g::Android::android::graphics::RectF* arg1, ::g::Android::Runtime::FloatArray* arg2);
};
// }

}}}}}} // ::g::Android::android::graphics::drawable::shapes
