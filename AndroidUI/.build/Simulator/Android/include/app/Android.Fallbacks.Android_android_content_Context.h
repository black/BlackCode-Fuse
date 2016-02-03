// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_CONTENT_CONTEXT_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_CONTENT_CONTEXT_H__

#include <app/Android.android.content.Context.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Resources; } } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_content_Context;

extern jmethodID Android_android_content_Context__getResources_44466_ID;
extern jmethodID Android_android_content_Context__getSystemService_44532_ID;

struct Android_android_content_Context__uType : ::app::Android::android::content::Context__uType
{
};

Android_android_content_Context__uType* Android_android_content_Context__typeof();

::app::Android::android::content::res::Resources* Android_android_content_Context__getResources(Android_android_content_Context* __this);
::uObject* Android_android_content_Context__getResources_IMPL_44466(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::Object* Android_android_content_Context__getSystemService(Android_android_content_Context* __this, ::app::Android::java::lang::String* arg0);
::uObject* Android_android_content_Context__getSystemService_IMPL_44532(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_content_Context : ::app::Android::android::content::Context
{
};

}}}


#endif
