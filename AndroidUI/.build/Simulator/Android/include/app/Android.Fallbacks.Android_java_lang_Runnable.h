// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_JAVA_LANG_RUNNABLE_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_JAVA_LANG_RUNNABLE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_java_lang_Runnable;

extern jmethodID Android_java_lang_Runnable__run_31342_ID;

struct Android_java_lang_Runnable__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::java::lang::Runnable __interface_2;
};

Android_java_lang_Runnable__uType* Android_java_lang_Runnable__typeof();

void Android_java_lang_Runnable__run(Android_java_lang_Runnable* __this);
void Android_java_lang_Runnable__run_IMPL_31342(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_java_lang_Runnable : ::app::Android::java::lang::Object
{
    void run() { Android_java_lang_Runnable__run(this); }
};

}}}


#endif
