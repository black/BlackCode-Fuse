// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Observer.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_java_util_Observer;}}}
namespace g{namespace Android{namespace java{namespace util{struct Observable;}}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_java_util_Observer :32169
// {
struct Android_java_util_Observer_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::util::Observer interface2;
};

Android_java_util_Observer_type* Android_java_util_Observer_typeof();
void Android_java_util_Observer__update_fn(Android_java_util_Observer* __this, ::g::Android::java::util::Observable* arg0, ::g::Android::java::lang::Object* arg1);
void Android_java_util_Observer__update_IMPL_38392_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);

struct Android_java_util_Observer : ::g::Android::java::lang::Object
{
    static jmethodID update_38392_ID_;
    static jmethodID& update_38392_ID() { return update_38392_ID_; }

    void update(::g::Android::java::util::Observable* arg0, ::g::Android::java::lang::Object* arg1);
    static void update_IMPL_38392(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}} // ::g::Android::Fallbacks
