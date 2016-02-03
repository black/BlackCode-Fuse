// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_OBJECT_ARRAY__ANDROID_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_H__
#define __APP_ANDROID_RUNTIME_OBJECT_ARRAY__ANDROID_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }

namespace app {
namespace Android {
namespace Runtime {

struct ObjectArray__Android_android_graphics_drawable_Drawable;

struct ObjectArray__Android_android_graphics_drawable_Drawable__uType : ::app::Android::java::lang::Object__uType
{
};

ObjectArray__Android_android_graphics_drawable_Drawable__uType* ObjectArray__Android_android_graphics_drawable_Drawable__typeof();

void ObjectArray__Android_android_graphics_drawable_Drawable___ObjInit_4(ObjectArray__Android_android_graphics_drawable_Drawable* __this, int length);
void ObjectArray__Android_android_graphics_drawable_Drawable___ObjInit_5(ObjectArray__Android_android_graphics_drawable_Drawable* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType);
::app::Android::android::graphics::drawable::Drawable* ObjectArray__Android_android_graphics_drawable_Drawable__get_Item(ObjectArray__Android_android_graphics_drawable_Drawable* __this, int i);
ObjectArray__Android_android_graphics_drawable_Drawable* ObjectArray__Android_android_graphics_drawable_Drawable__New_5(::uStatic* __this, int length);
void ObjectArray__Android_android_graphics_drawable_Drawable__set_Item(ObjectArray__Android_android_graphics_drawable_Drawable* __this, int i, ::app::Android::android::graphics::drawable::Drawable* value);

struct ObjectArray__Android_android_graphics_drawable_Drawable : ::app::Android::java::lang::Object
{
    void _ObjInit_4(int length) { ObjectArray__Android_android_graphics_drawable_Drawable___ObjInit_4(this, length); }
    void _ObjInit_5(jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType) { ObjectArray__Android_android_graphics_drawable_Drawable___ObjInit_5(this, obj, typePtr, typeHasFallbackClass, resolveType); }
    ::app::Android::android::graphics::drawable::Drawable* Item(int i) { return ObjectArray__Android_android_graphics_drawable_Drawable__get_Item(this, i); }
    void Item(int i, ::app::Android::android::graphics::drawable::Drawable* value) { ObjectArray__Android_android_graphics_drawable_Drawable__set_Item(this, i, value); }
};

}}}


#endif
