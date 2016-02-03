// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_SHADER_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_SHADER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct Shader;

extern jclass Shader___javaClass_2;
extern jmethodID Shader__finalize_7293_ID;

struct Shader__uType : ::app::Android::java::lang::Object__uType
{
};

Shader__uType* Shader__typeof();

void Shader___Init_2(::uStatic* __this);
void Shader___ObjInit_5(Shader* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void Shader__finalize(Shader* __this);
void Shader__finalize_IMPL_7293(::uStatic* __this, bool arg0_, jobject arg1_);

struct Shader : ::app::Android::java::lang::Object
{
    void _ObjInit_5(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Shader___ObjInit_5(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
