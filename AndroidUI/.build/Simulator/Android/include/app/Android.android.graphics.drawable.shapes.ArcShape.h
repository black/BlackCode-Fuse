// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\drawable\shapes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARC_SHAPE_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARC_SHAPE_H__

#include <app/Android.android.graphics.drawable.shapes.RectShape.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace graphics {
namespace drawable {
namespace shapes {

struct ArcShape;

extern jclass ArcShape___javaClass_4;
extern jmethodID ArcShape__ArcShape_5935_ID_c;

struct ArcShape__uType : ::app::Android::android::graphics::drawable::shapes::RectShape__uType
{
};

ArcShape__uType* ArcShape__typeof();

void ArcShape___Init_4(::uStatic* __this);
void ArcShape___ObjInit_8(ArcShape* __this, float arg0, float arg1);
ArcShape* ArcShape__New_7(::uStatic* __this, float arg0, float arg1);

struct ArcShape : ::app::Android::android::graphics::drawable::shapes::RectShape
{
    void _ObjInit_8(float arg0, float arg1) { ArcShape___ObjInit_8(this, arg0, arg1); }
};

}}}}}}


#endif
