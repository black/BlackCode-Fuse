// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\drawable\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct PorterDuffDLRMode; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {
namespace drawable {

struct Drawable;

extern jclass Drawable___javaClass_2;
extern jmethodID Drawable__setColorFilter_6079_ID;

struct Drawable__uType : ::app::Android::java::lang::Object__uType
{
};

Drawable__uType* Drawable__typeof();

void Drawable___Init_2(::uStatic* __this);
void Drawable___ObjInit_5(Drawable* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void Drawable__setColorFilter_1(Drawable* __this, int arg0, ::app::Android::android::graphics::PorterDuffDLRMode* arg1);
void Drawable__setColorFilter_IMPL_6079(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);

struct Drawable : ::app::Android::java::lang::Object
{
    void _ObjInit_5(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Drawable___ObjInit_5(this, obj, utype, hasFallbackClass, resolveType); }
    void setColorFilter_1(int arg0, ::app::Android::android::graphics::PorterDuffDLRMode* arg1) { Drawable__setColorFilter_1(this, arg0, arg1); }
};

}}}}}


#endif
