// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_java_lang_Runnable;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_java_lang_Runnable :30426
// {
struct Android_java_lang_Runnable_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::lang::Runnable interface2;
};

Android_java_lang_Runnable_type* Android_java_lang_Runnable_typeof();
void Android_java_lang_Runnable__run_fn(Android_java_lang_Runnable* __this);
void Android_java_lang_Runnable__run_IMPL_31342_fn(bool* arg0_, jobject* arg1_);

struct Android_java_lang_Runnable : ::g::Android::java::lang::Object
{
    static jmethodID run_31342_ID_;
    static jmethodID& run_31342_ID() { return run_31342_ID_; }

    void run();
    static void run_IMPL_31342(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks
