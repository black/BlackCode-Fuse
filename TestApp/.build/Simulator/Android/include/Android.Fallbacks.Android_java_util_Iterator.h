// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Iterator.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_java_util_Iterator;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_java_util_Iterator :31038
// {
struct Android_java_util_Iterator_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::util::Iterator interface2;
};

Android_java_util_Iterator_type* Android_java_util_Iterator_typeof();
void Android_java_util_Iterator__hasNext_fn(Android_java_util_Iterator* __this, bool* __retval);
void Android_java_util_Iterator__hasNext_IMPL_38163_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_java_util_Iterator__next_fn(Android_java_util_Iterator* __this, ::g::Android::java::lang::Object** __retval);
void Android_java_util_Iterator__next_IMPL_38164_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_java_util_Iterator__remove_fn(Android_java_util_Iterator* __this);
void Android_java_util_Iterator__remove_IMPL_38165_fn(bool* arg0_, jobject* arg1_);

struct Android_java_util_Iterator : ::g::Android::java::lang::Object
{
    static jmethodID hasNext_38163_ID_;
    static jmethodID& hasNext_38163_ID() { return hasNext_38163_ID_; }
    static jmethodID next_38164_ID_;
    static jmethodID& next_38164_ID() { return next_38164_ID_; }
    static jmethodID remove_38165_ID_;
    static jmethodID& remove_38165_ID() { return remove_38165_ID_; }

    bool hasNext();
    ::g::Android::java::lang::Object* next();
    void remove();
    static bool hasNext_IMPL_38163(bool arg0_, jobject arg1_);
    static uObject* next_IMPL_38164(bool arg0_, jobject arg1_);
    static void remove_IMPL_38165(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks
