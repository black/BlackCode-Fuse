// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_RES_RESOURCES_H__
#define __APP_ANDROID_ANDROID_CONTENT_RES_RESOURCES_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }

namespace app {
namespace Android {
namespace android {
namespace content {
namespace res {

struct Resources;

extern jclass Resources___javaClass_2;
extern jmethodID Resources__getDrawable_3664_ID;

struct Resources__uType : ::app::Android::java::lang::Object__uType
{
};

Resources__uType* Resources__typeof();

void Resources___Init_2(::uStatic* __this);
::app::Android::android::graphics::drawable::Drawable* Resources__getDrawable(Resources* __this, int arg0);
::uObject* Resources__getDrawable_IMPL_3664(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);

struct Resources : ::app::Android::java::lang::Object
{
    ::app::Android::android::graphics::drawable::Drawable* getDrawable(int arg0) { return Resources__getDrawable(this, arg0); }
};

}}}}}


#endif
