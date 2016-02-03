// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Iterator.h>
#include <Android.java.util.ListIterator.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_java_util_ListIterator;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_java_util_ListIterator :31298
// {
struct Android_java_util_ListIterator_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::util::ListIterator interface2;
    ::g::Android::java::util::Iterator interface3;
};

Android_java_util_ListIterator_type* Android_java_util_ListIterator_typeof();
void Android_java_util_ListIterator__add_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object* arg0);
void Android_java_util_ListIterator__add_IMPL_38245_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_java_util_ListIterator__hasNext_fn(Android_java_util_ListIterator* __this, bool* __retval);
void Android_java_util_ListIterator__hasNext_IMPL_38246_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_java_util_ListIterator__hasPrevious_fn(Android_java_util_ListIterator* __this, bool* __retval);
void Android_java_util_ListIterator__hasPrevious_IMPL_38247_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_java_util_ListIterator__next_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object** __retval);
void Android_java_util_ListIterator__next_IMPL_38248_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_java_util_ListIterator__nextIndex_fn(Android_java_util_ListIterator* __this, int* __retval);
void Android_java_util_ListIterator__nextIndex_IMPL_38249_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_java_util_ListIterator__previous_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object** __retval);
void Android_java_util_ListIterator__previous_IMPL_38250_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_java_util_ListIterator__previousIndex_fn(Android_java_util_ListIterator* __this, int* __retval);
void Android_java_util_ListIterator__previousIndex_IMPL_38251_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_java_util_ListIterator__remove_fn(Android_java_util_ListIterator* __this);
void Android_java_util_ListIterator__remove_IMPL_38252_fn(bool* arg0_, jobject* arg1_);
void Android_java_util_ListIterator__set_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object* arg0);
void Android_java_util_ListIterator__set_IMPL_38253_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_java_util_ListIterator : ::g::Android::java::lang::Object
{
    static jmethodID add_38245_ID_;
    static jmethodID& add_38245_ID() { return add_38245_ID_; }
    static jmethodID hasNext_38246_ID_;
    static jmethodID& hasNext_38246_ID() { return hasNext_38246_ID_; }
    static jmethodID hasPrevious_38247_ID_;
    static jmethodID& hasPrevious_38247_ID() { return hasPrevious_38247_ID_; }
    static jmethodID next_38248_ID_;
    static jmethodID& next_38248_ID() { return next_38248_ID_; }
    static jmethodID nextIndex_38249_ID_;
    static jmethodID& nextIndex_38249_ID() { return nextIndex_38249_ID_; }
    static jmethodID previous_38250_ID_;
    static jmethodID& previous_38250_ID() { return previous_38250_ID_; }
    static jmethodID previousIndex_38251_ID_;
    static jmethodID& previousIndex_38251_ID() { return previousIndex_38251_ID_; }
    static jmethodID remove_38252_ID_;
    static jmethodID& remove_38252_ID() { return remove_38252_ID_; }
    static jmethodID set_38253_ID_;
    static jmethodID& set_38253_ID() { return set_38253_ID_; }

    void add(::g::Android::java::lang::Object* arg0);
    bool hasNext();
    bool hasPrevious();
    ::g::Android::java::lang::Object* next();
    int nextIndex();
    ::g::Android::java::lang::Object* previous();
    int previousIndex();
    void remove();
    void set(::g::Android::java::lang::Object* arg0);
    static void add_IMPL_38245(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool hasNext_IMPL_38246(bool arg0_, jobject arg1_);
    static bool hasPrevious_IMPL_38247(bool arg0_, jobject arg1_);
    static uObject* next_IMPL_38248(bool arg0_, jobject arg1_);
    static int nextIndex_IMPL_38249(bool arg0_, jobject arg1_);
    static uObject* previous_IMPL_38250(bool arg0_, jobject arg1_);
    static int previousIndex_IMPL_38251(bool arg0_, jobject arg1_);
    static void remove_IMPL_38252(bool arg0_, jobject arg1_);
    static void set_IMPL_38253(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
