// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\drawable\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct ShapeDrawableDLRShaderFactory;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Shader;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{
namespace drawable{

// public abstract extern class ShapeDrawableDLRShaderFactory :760
// {
struct ShapeDrawableDLRShaderFactory_type : ::g::Android::java::lang::Object_type
{
    void(*fp_resize)(::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory*, int*, int*, ::g::Android::android::graphics::Shader**);
};

ShapeDrawableDLRShaderFactory_type* ShapeDrawableDLRShaderFactory_typeof();
void ShapeDrawableDLRShaderFactory__ctor_4_fn(ShapeDrawableDLRShaderFactory* __this);
void ShapeDrawableDLRShaderFactory__ctor_5_fn(ShapeDrawableDLRShaderFactory* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ShapeDrawableDLRShaderFactory___Init2_fn();

struct ShapeDrawableDLRShaderFactory : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID ShapeDrawableDLRShaderFactory_6360_ID_c_;
    static jmethodID& ShapeDrawableDLRShaderFactory_6360_ID_c() { return ShapeDrawableDLRShaderFactory_6360_ID_c_; }

    void ctor_4();
    void ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::graphics::Shader* resize(int arg0, int arg1) { ::g::Android::android::graphics::Shader* __retval; return (((ShapeDrawableDLRShaderFactory_type*)__type)->fp_resize)(this, &arg0, &arg1, &__retval), __retval; }
    static void _Init2();
};
// }

}}}}} // ::g::Android::android::graphics::drawable
