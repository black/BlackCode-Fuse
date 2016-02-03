// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_CANVAS_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_CANVAS_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct Canvas;

extern jclass Canvas___javaClass_2;
extern jmethodID Canvas__Canvas_6577_ID_c;
extern jmethodID Canvas__translate_6596_ID;

struct Canvas__uType : ::app::Android::java::lang::Object__uType
{
};

Canvas__uType* Canvas__typeof();

void Canvas___Init_2(::uStatic* __this);
void Canvas___ObjInit_5(Canvas* __this, ::app::Android::android::graphics::Bitmap* arg0);
Canvas* Canvas__New_6(::uStatic* __this, ::app::Android::android::graphics::Bitmap* arg0);
void Canvas__translate(Canvas* __this, float arg0, float arg1);
void Canvas__translate_IMPL_6596(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_, float arg3_);

struct Canvas : ::app::Android::java::lang::Object
{
    void _ObjInit_5(::app::Android::android::graphics::Bitmap* arg0) { Canvas___ObjInit_5(this, arg0); }
    void translate(float arg0, float arg1) { Canvas__translate(this, arg0, arg1); }
};

}}}}


#endif
