// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\drawable\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_SHAPE_DRAWABLE_D_L_R_SHADER_FACTORY_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_SHAPE_DRAWABLE_D_L_R_SHADER_FACTORY_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Shader; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {
namespace drawable {

struct ShapeDrawableDLRShaderFactory;

extern jclass ShapeDrawableDLRShaderFactory___javaClass_2;
extern jmethodID ShapeDrawableDLRShaderFactory__ShapeDrawableDLRShaderFactory_6360_ID_c;

struct ShapeDrawableDLRShaderFactory__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::graphics::Shader*(*__fp_resize)(ShapeDrawableDLRShaderFactory*, int, int);
};

ShapeDrawableDLRShaderFactory__uType* ShapeDrawableDLRShaderFactory__typeof();

void ShapeDrawableDLRShaderFactory___Init_2(::uStatic* __this);
void ShapeDrawableDLRShaderFactory___ObjInit_4(ShapeDrawableDLRShaderFactory* __this);
void ShapeDrawableDLRShaderFactory___ObjInit_5(ShapeDrawableDLRShaderFactory* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);

struct ShapeDrawableDLRShaderFactory : ::app::Android::java::lang::Object
{
    void _ObjInit_4() { ShapeDrawableDLRShaderFactory___ObjInit_4(this); }
    void _ObjInit_5(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ShapeDrawableDLRShaderFactory___ObjInit_5(this, obj, utype, hasFallbackClass, resolveType); }
    ::app::Android::android::graphics::Shader* resize(int arg0, int arg1) { return (((ShapeDrawableDLRShaderFactory__uType*)this->__obj_type)->__fp_resize)(this, arg0, arg1); }
};

}}}}}


#endif
