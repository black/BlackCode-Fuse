// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Collection.h>
#include <jni.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_java_util_Collection;}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_java_util_Collection :30476
// {
struct Android_java_util_Collection_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::util::Collection interface2;
    ::g::Android::java::lang::Iterable interface3;
    ::g::Uno::Collections::IEnumerable interface4;
};

Android_java_util_Collection_type* Android_java_util_Collection_typeof();
void Android_java_util_Collection__add_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Android_java_util_Collection__add_IMPL_37811_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_Collection__addAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval);
void Android_java_util_Collection__addAll_IMPL_37812_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_Collection__clear_fn(Android_java_util_Collection* __this);
void Android_java_util_Collection__clear_IMPL_37813_fn(bool* arg0_, jobject* arg1_);
void Android_java_util_Collection__contains_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Android_java_util_Collection__contains_IMPL_37814_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_Collection__containsAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval);
void Android_java_util_Collection__containsAll_IMPL_37815_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_Collection__equals1_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Android_java_util_Collection__equals_IMPL_37816_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_Collection__GetEnumerator_fn(Android_java_util_Collection* __this, uObject** __retval);
void Android_java_util_Collection__hashCode1_fn(Android_java_util_Collection* __this, int* __retval);
void Android_java_util_Collection__hashCode_IMPL_37817_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_java_util_Collection__isEmpty_fn(Android_java_util_Collection* __this, bool* __retval);
void Android_java_util_Collection__isEmpty_IMPL_37818_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_java_util_Collection__iterator_fn(Android_java_util_Collection* __this, uObject** __retval);
void Android_java_util_Collection__iterator_IMPL_37819_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_java_util_Collection__remove_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Android_java_util_Collection__remove_IMPL_37820_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_Collection__removeAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval);
void Android_java_util_Collection__removeAll_IMPL_37821_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_Collection__retainAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval);
void Android_java_util_Collection__retainAll_IMPL_37822_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_Collection__size_fn(Android_java_util_Collection* __this, int* __retval);
void Android_java_util_Collection__size_IMPL_37823_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_java_util_Collection__toArray_fn(Android_java_util_Collection* __this, ::g::Android::Runtime::ObjectArray** __retval);
void Android_java_util_Collection__toArray1_fn(Android_java_util_Collection* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval);
void Android_java_util_Collection__toArray_IMPL_37824_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_java_util_Collection__toArray_IMPL_37825_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);

struct Android_java_util_Collection : ::g::Android::java::lang::Object
{
    static jmethodID add_37811_ID_;
    static jmethodID& add_37811_ID() { return add_37811_ID_; }
    static jmethodID addAll_37812_ID_;
    static jmethodID& addAll_37812_ID() { return addAll_37812_ID_; }
    static jmethodID clear_37813_ID_;
    static jmethodID& clear_37813_ID() { return clear_37813_ID_; }
    static jmethodID contains_37814_ID_;
    static jmethodID& contains_37814_ID() { return contains_37814_ID_; }
    static jmethodID containsAll_37815_ID_;
    static jmethodID& containsAll_37815_ID() { return containsAll_37815_ID_; }
    static jmethodID equals_37816_ID_;
    static jmethodID& equals_37816_ID() { return equals_37816_ID_; }
    static jmethodID hashCode_37817_ID_;
    static jmethodID& hashCode_37817_ID() { return hashCode_37817_ID_; }
    static jmethodID isEmpty_37818_ID_;
    static jmethodID& isEmpty_37818_ID() { return isEmpty_37818_ID_; }
    static jmethodID iterator_37819_ID_;
    static jmethodID& iterator_37819_ID() { return iterator_37819_ID_; }
    static jmethodID remove_37820_ID_;
    static jmethodID& remove_37820_ID() { return remove_37820_ID_; }
    static jmethodID removeAll_37821_ID_;
    static jmethodID& removeAll_37821_ID() { return removeAll_37821_ID_; }
    static jmethodID retainAll_37822_ID_;
    static jmethodID& retainAll_37822_ID() { return retainAll_37822_ID_; }
    static jmethodID size_37823_ID_;
    static jmethodID& size_37823_ID() { return size_37823_ID_; }
    static jmethodID toArray_37824_ID_;
    static jmethodID& toArray_37824_ID() { return toArray_37824_ID_; }
    static jmethodID toArray_37825_ID_;
    static jmethodID& toArray_37825_ID() { return toArray_37825_ID_; }

    bool add(::g::Android::java::lang::Object* arg0);
    bool addAll(uObject* arg0);
    void clear();
    bool contains(::g::Android::java::lang::Object* arg0);
    bool containsAll(uObject* arg0);
    uObject* GetEnumerator();
    bool isEmpty();
    uObject* iterator();
    bool remove(::g::Android::java::lang::Object* arg0);
    bool removeAll(uObject* arg0);
    bool retainAll(uObject* arg0);
    int size();
    ::g::Android::Runtime::ObjectArray* toArray();
    ::g::Android::Runtime::ObjectArray* toArray1(::g::Android::Runtime::ObjectArray* arg0);
    static bool add_IMPL_37811(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool addAll_IMPL_37812(bool arg0_, jobject arg1_, uObject* arg2_);
    static void clear_IMPL_37813(bool arg0_, jobject arg1_);
    static bool contains_IMPL_37814(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool containsAll_IMPL_37815(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool equals_IMPL_37816(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_37817(bool arg0_, jobject arg1_);
    static bool isEmpty_IMPL_37818(bool arg0_, jobject arg1_);
    static uObject* iterator_IMPL_37819(bool arg0_, jobject arg1_);
    static bool remove_IMPL_37820(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool removeAll_IMPL_37821(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool retainAll_IMPL_37822(bool arg0_, jobject arg1_, uObject* arg2_);
    static int size_IMPL_37823(bool arg0_, jobject arg1_);
    static uObject* toArray_IMPL_37824(bool arg0_, jobject arg1_);
    static uObject* toArray_IMPL_37825(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
