// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_CONTEXT_THEME_WRAPPER_H__
#define __APP_ANDROID_ANDROID_VIEW_CONTEXT_THEME_WRAPPER_H__

#include <app/Android.android.content.ContextWrapper.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Resources; } } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct ContextThemeWrapper;

extern jclass ContextThemeWrapper___javaClass_4;
extern jmethodID ContextThemeWrapper__getResources_21660_ID;
extern jmethodID ContextThemeWrapper__getSystemService_21663_ID;

struct ContextThemeWrapper__uType : ::app::Android::android::content::ContextWrapper__uType
{
};

ContextThemeWrapper__uType* ContextThemeWrapper__typeof();

void ContextThemeWrapper___Init_4(::uStatic* __this);
void ContextThemeWrapper___ObjInit_10(ContextThemeWrapper* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
::app::Android::android::content::res::Resources* ContextThemeWrapper__getResources(ContextThemeWrapper* __this);
::uObject* ContextThemeWrapper__getResources_IMPL_21660(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::Object* ContextThemeWrapper__getSystemService(ContextThemeWrapper* __this, ::app::Android::java::lang::String* arg0);
::uObject* ContextThemeWrapper__getSystemService_IMPL_21663(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct ContextThemeWrapper : ::app::Android::android::content::ContextWrapper
{
    void _ObjInit_10(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ContextThemeWrapper___ObjInit_10(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
