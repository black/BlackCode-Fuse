// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_CONTEXT_WRAPPER_H__
#define __APP_ANDROID_ANDROID_CONTENT_CONTEXT_WRAPPER_H__

#include <app/Android.android.content.Context.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct AssetManager; } } } } }
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Resources; } } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace content {

struct ContextWrapper;

extern jclass ContextWrapper___javaClass_3;
extern jmethodID ContextWrapper__getAssets_4263_ID;
extern jmethodID ContextWrapper__getResources_4264_ID;
extern jmethodID ContextWrapper__getSystemService_4330_ID;

struct ContextWrapper__uType : ::app::Android::android::content::Context__uType
{
};

ContextWrapper__uType* ContextWrapper__typeof();

void ContextWrapper___Init_3(::uStatic* __this);
void ContextWrapper___ObjInit_7(ContextWrapper* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
::app::Android::android::content::res::AssetManager* ContextWrapper__getAssets(ContextWrapper* __this);
::uObject* ContextWrapper__getAssets_IMPL_4263(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::content::res::Resources* ContextWrapper__getResources(ContextWrapper* __this);
::uObject* ContextWrapper__getResources_IMPL_4264(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::Object* ContextWrapper__getSystemService(ContextWrapper* __this, ::app::Android::java::lang::String* arg0);
::uObject* ContextWrapper__getSystemService_IMPL_4330(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct ContextWrapper : ::app::Android::android::content::Context
{
    void _ObjInit_7(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ContextWrapper___ObjInit_7(this, obj, utype, hasFallbackClass, resolveType); }
    ::app::Android::android::content::res::AssetManager* getAssets() { return ContextWrapper__getAssets(this); }
};

}}}}


#endif
