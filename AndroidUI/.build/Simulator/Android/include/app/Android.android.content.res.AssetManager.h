// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_RES_ASSET_MANAGER_H__
#define __APP_ANDROID_ANDROID_CONTENT_RES_ASSET_MANAGER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace io { struct InputStream; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace content {
namespace res {

struct AssetManager;

extern jclass AssetManager___javaClass_2;
extern jmethodID AssetManager__finalize_3516_ID;
extern jmethodID AssetManager__open_3508_ID;

struct AssetManager__uType : ::app::Android::java::lang::Object__uType
{
};

AssetManager__uType* AssetManager__typeof();

void AssetManager___Init_2(::uStatic* __this);
void AssetManager__finalize(AssetManager* __this);
void AssetManager__finalize_IMPL_3516(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::io::InputStream* AssetManager__open(AssetManager* __this, ::app::Android::java::lang::String* arg0);
::uObject* AssetManager__open_IMPL_3508(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct AssetManager : ::app::Android::java::lang::Object
{
    ::app::Android::java::io::InputStream* open(::app::Android::java::lang::String* arg0) { return AssetManager__open(this, arg0); }
};

}}}}}


#endif
