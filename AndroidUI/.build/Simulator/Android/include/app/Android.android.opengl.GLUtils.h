// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\opengl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OPENGL_G_L_UTILS_H__
#define __APP_ANDROID_ANDROID_OPENGL_G_L_UTILS_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }

namespace app {
namespace Android {
namespace android {
namespace opengl {

struct GLUtils;

extern jclass GLUtils___javaClass_2;
extern jmethodID GLUtils__texImage2D_13332_ID;

struct GLUtils__uType : ::app::Android::java::lang::Object__uType
{
};

GLUtils__uType* GLUtils__typeof();

void GLUtils___Init_2(::uStatic* __this);
void GLUtils__texImage2D(::uStatic* __this, int arg0, int arg1, ::app::Android::android::graphics::Bitmap* arg2, int arg3);
void GLUtils__texImage2D_IMPL_13332(::uStatic* __this, int arg0_, int arg1_, ::uObject* arg2_, int arg3_);

struct GLUtils : ::app::Android::java::lang::Object
{
};

}}}}


#endif
