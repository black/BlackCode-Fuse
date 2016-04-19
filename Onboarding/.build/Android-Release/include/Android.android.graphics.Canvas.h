// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Canvas :3802
// {
::g::Android::java::lang::Object_type* Canvas_typeof();
void Canvas__ctor_5_fn(Canvas* __this, ::g::Android::android::graphics::Bitmap* arg0);
void Canvas___Init2_fn();
void Canvas__New6_fn(::g::Android::android::graphics::Bitmap* arg0, Canvas** __retval);
void Canvas__translate_fn(Canvas* __this, float* arg0, float* arg1);
void Canvas__translate_IMPL_6596_fn(bool* arg0_, jobject* arg1_, float* arg2_, float* arg3_);

struct Canvas : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID Canvas_6577_ID_c_;
    static jmethodID& Canvas_6577_ID_c() { return Canvas_6577_ID_c_; }
    static jmethodID translate_6596_ID_;
    static jmethodID& translate_6596_ID() { return translate_6596_ID_; }

    void ctor_5(::g::Android::android::graphics::Bitmap* arg0);
    void translate(float arg0, float arg1);
    static void _Init2();
    static Canvas* New6(::g::Android::android::graphics::Bitmap* arg0);
    static void translate_IMPL_6596(bool arg0_, jobject arg1_, float arg2_, float arg3_);
};
// }

}}}} // ::g::Android::android::graphics
