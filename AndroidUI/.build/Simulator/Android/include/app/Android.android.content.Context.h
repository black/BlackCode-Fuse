// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_CONTEXT_H__
#define __APP_ANDROID_ANDROID_CONTENT_CONTEXT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Resources; } } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace content {

struct Context;

extern jclass Context___javaClass_2;
extern jfieldID Context__INPUT_METHOD_SERVICE_4144_ID;
extern jfieldID Context__VIBRATOR_SERVICE_4135_ID;

struct Context__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::content::res::Resources*(*__fp_getResources)(Context*);
    ::app::Android::java::lang::Object*(*__fp_getSystemService)(Context*, ::app::Android::java::lang::String*);
};

Context__uType* Context__typeof();

void Context___Init_2(::uStatic* __this);
void Context___ObjInit_5(Context* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
::app::Android::java::lang::String* Context__get_INPUT_METHOD_SERVICE(::uStatic* __this);
::app::Android::java::lang::String* Context__get_VIBRATOR_SERVICE(::uStatic* __this);

struct Context : ::app::Android::java::lang::Object
{
    void _ObjInit_5(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Context___ObjInit_5(this, obj, utype, hasFallbackClass, resolveType); }
    ::app::Android::android::content::res::Resources* getResources() { return (((Context__uType*)this->__obj_type)->__fp_getResources)(this); }
    ::app::Android::java::lang::Object* getSystemService(::app::Android::java::lang::String* arg0) { return (((Context__uType*)this->__obj_type)->__fp_getSystemService)(this, arg0); }
};

}}}}


#endif
