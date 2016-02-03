// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\drawable\shapes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUND_RECT_SHAPE_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUND_RECT_SHAPE_H__

#include <app/Android.android.graphics.drawable.shapes.RectShape.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct RectF; } } } }
namespace app { namespace Android { namespace Runtime { struct FloatArray; } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {
namespace drawable {
namespace shapes {

struct RoundRectShape;

extern jclass RoundRectShape___javaClass_4;
extern jmethodID RoundRectShape__RoundRectShape_5948_ID_c;

struct RoundRectShape__uType : ::app::Android::android::graphics::drawable::shapes::RectShape__uType
{
};

RoundRectShape__uType* RoundRectShape__typeof();

void RoundRectShape___Init_4(::uStatic* __this);
void RoundRectShape___ObjInit_8(RoundRectShape* __this, ::app::Android::Runtime::FloatArray* arg0, ::app::Android::android::graphics::RectF* arg1, ::app::Android::Runtime::FloatArray* arg2);
RoundRectShape* RoundRectShape__New_7(::uStatic* __this, ::app::Android::Runtime::FloatArray* arg0, ::app::Android::android::graphics::RectF* arg1, ::app::Android::Runtime::FloatArray* arg2);

struct RoundRectShape : ::app::Android::android::graphics::drawable::shapes::RectShape
{
    void _ObjInit_8(::app::Android::Runtime::FloatArray* arg0, ::app::Android::android::graphics::RectF* arg1, ::app::Android::Runtime::FloatArray* arg2) { RoundRectShape___ObjInit_8(this, arg0, arg1, arg2); }
};

}}}}}}


#endif
