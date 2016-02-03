// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_java_lang_Iterable;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_java_lang_Iterable :30374
// {
struct Android_java_lang_Iterable_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::lang::Iterable interface2;
    ::g::Uno::Collections::IEnumerable interface3;
};

Android_java_lang_Iterable_type* Android_java_lang_Iterable_typeof();
void Android_java_lang_Iterable__GetEnumerator_fn(Android_java_lang_Iterable* __this, uObject** __retval);
void Android_java_lang_Iterable__iterator_fn(Android_java_lang_Iterable* __this, uObject** __retval);
void Android_java_lang_Iterable__iterator_IMPL_31161_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Android_java_lang_Iterable : ::g::Android::java::lang::Object
{
    static jmethodID iterator_31161_ID_;
    static jmethodID& iterator_31161_ID() { return iterator_31161_ID_; }

    uObject* GetEnumerator();
    uObject* iterator();
    static uObject* iterator_IMPL_31161(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks
