// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.List.h>
#include <jni.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_java_util_List;}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_java_util_List :31079
// {
struct Android_java_util_List_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::util::List interface2;
    ::g::Android::java::util::Collection interface3;
    ::g::Android::java::lang::Iterable interface4;
    ::g::Uno::Collections::IEnumerable interface5;
};

Android_java_util_List_type* Android_java_util_List_typeof();
void Android_java_util_List__add_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Android_java_util_List__add1_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object* arg1);
void Android_java_util_List__add_IMPL_38220_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_);
void Android_java_util_List__add_IMPL_38221_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_List__addAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval);
void Android_java_util_List__addAll1_fn(Android_java_util_List* __this, int* arg0, uObject* arg1, bool* __retval);
void Android_java_util_List__addAll_IMPL_38222_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void Android_java_util_List__addAll_IMPL_38223_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_List__clear_fn(Android_java_util_List* __this);
void Android_java_util_List__clear_IMPL_38224_fn(bool* arg0_, jobject* arg1_);
void Android_java_util_List__contains_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Android_java_util_List__contains_IMPL_38225_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_List__containsAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval);
void Android_java_util_List__containsAll_IMPL_38226_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_List__equals1_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Android_java_util_List__equals_IMPL_38227_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_List__get_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object** __retval);
void Android_java_util_List__get_IMPL_38228_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_java_util_List__GetEnumerator_fn(Android_java_util_List* __this, uObject** __retval);
void Android_java_util_List__hashCode1_fn(Android_java_util_List* __this, int* __retval);
void Android_java_util_List__hashCode_IMPL_38229_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_java_util_List__indexOf_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Android_java_util_List__indexOf_IMPL_38230_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Android_java_util_List__isEmpty_fn(Android_java_util_List* __this, bool* __retval);
void Android_java_util_List__isEmpty_IMPL_38231_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_java_util_List__iterator_fn(Android_java_util_List* __this, uObject** __retval);
void Android_java_util_List__iterator_IMPL_38232_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_java_util_List__lastIndexOf_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Android_java_util_List__lastIndexOf_IMPL_38233_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Android_java_util_List__listIterator_fn(Android_java_util_List* __this, uObject** __retval);
void Android_java_util_List__listIterator1_fn(Android_java_util_List* __this, int* arg0, uObject** __retval);
void Android_java_util_List__listIterator_IMPL_38234_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_java_util_List__listIterator_IMPL_38235_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_java_util_List__remove_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Android_java_util_List__remove1_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object** __retval);
void Android_java_util_List__remove_IMPL_38236_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_java_util_List__remove_IMPL_38237_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_List__removeAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval);
void Android_java_util_List__removeAll_IMPL_38238_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_List__retainAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval);
void Android_java_util_List__retainAll_IMPL_38239_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_java_util_List__set_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object* arg1, ::g::Android::java::lang::Object** __retval);
void Android_java_util_List__set_IMPL_38240_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval);
void Android_java_util_List__size_fn(Android_java_util_List* __this, int* __retval);
void Android_java_util_List__size_IMPL_38241_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_java_util_List__subList_fn(Android_java_util_List* __this, int* arg0, int* arg1, uObject** __retval);
void Android_java_util_List__subList_IMPL_38242_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);
void Android_java_util_List__toArray_fn(Android_java_util_List* __this, ::g::Android::Runtime::ObjectArray** __retval);
void Android_java_util_List__toArray1_fn(Android_java_util_List* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval);
void Android_java_util_List__toArray_IMPL_38243_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_java_util_List__toArray_IMPL_38244_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);

struct Android_java_util_List : ::g::Android::java::lang::Object
{
    static jmethodID add_38220_ID_;
    static jmethodID& add_38220_ID() { return add_38220_ID_; }
    static jmethodID add_38221_ID_;
    static jmethodID& add_38221_ID() { return add_38221_ID_; }
    static jmethodID addAll_38222_ID_;
    static jmethodID& addAll_38222_ID() { return addAll_38222_ID_; }
    static jmethodID addAll_38223_ID_;
    static jmethodID& addAll_38223_ID() { return addAll_38223_ID_; }
    static jmethodID clear_38224_ID_;
    static jmethodID& clear_38224_ID() { return clear_38224_ID_; }
    static jmethodID contains_38225_ID_;
    static jmethodID& contains_38225_ID() { return contains_38225_ID_; }
    static jmethodID containsAll_38226_ID_;
    static jmethodID& containsAll_38226_ID() { return containsAll_38226_ID_; }
    static jmethodID equals_38227_ID_;
    static jmethodID& equals_38227_ID() { return equals_38227_ID_; }
    static jmethodID get_38228_ID_;
    static jmethodID& get_38228_ID() { return get_38228_ID_; }
    static jmethodID hashCode_38229_ID_;
    static jmethodID& hashCode_38229_ID() { return hashCode_38229_ID_; }
    static jmethodID indexOf_38230_ID_;
    static jmethodID& indexOf_38230_ID() { return indexOf_38230_ID_; }
    static jmethodID isEmpty_38231_ID_;
    static jmethodID& isEmpty_38231_ID() { return isEmpty_38231_ID_; }
    static jmethodID iterator_38232_ID_;
    static jmethodID& iterator_38232_ID() { return iterator_38232_ID_; }
    static jmethodID lastIndexOf_38233_ID_;
    static jmethodID& lastIndexOf_38233_ID() { return lastIndexOf_38233_ID_; }
    static jmethodID listIterator_38234_ID_;
    static jmethodID& listIterator_38234_ID() { return listIterator_38234_ID_; }
    static jmethodID listIterator_38235_ID_;
    static jmethodID& listIterator_38235_ID() { return listIterator_38235_ID_; }
    static jmethodID remove_38236_ID_;
    static jmethodID& remove_38236_ID() { return remove_38236_ID_; }
    static jmethodID remove_38237_ID_;
    static jmethodID& remove_38237_ID() { return remove_38237_ID_; }
    static jmethodID removeAll_38238_ID_;
    static jmethodID& removeAll_38238_ID() { return removeAll_38238_ID_; }
    static jmethodID retainAll_38239_ID_;
    static jmethodID& retainAll_38239_ID() { return retainAll_38239_ID_; }
    static jmethodID set_38240_ID_;
    static jmethodID& set_38240_ID() { return set_38240_ID_; }
    static jmethodID size_38241_ID_;
    static jmethodID& size_38241_ID() { return size_38241_ID_; }
    static jmethodID subList_38242_ID_;
    static jmethodID& subList_38242_ID() { return subList_38242_ID_; }
    static jmethodID toArray_38243_ID_;
    static jmethodID& toArray_38243_ID() { return toArray_38243_ID_; }
    static jmethodID toArray_38244_ID_;
    static jmethodID& toArray_38244_ID() { return toArray_38244_ID_; }

    bool add(::g::Android::java::lang::Object* arg0);
    void add1(int arg0, ::g::Android::java::lang::Object* arg1);
    bool addAll(uObject* arg0);
    bool addAll1(int arg0, uObject* arg1);
    void clear();
    bool contains(::g::Android::java::lang::Object* arg0);
    bool containsAll(uObject* arg0);
    ::g::Android::java::lang::Object* get(int arg0);
    uObject* GetEnumerator();
    int indexOf(::g::Android::java::lang::Object* arg0);
    bool isEmpty();
    uObject* iterator();
    int lastIndexOf(::g::Android::java::lang::Object* arg0);
    uObject* listIterator();
    uObject* listIterator1(int arg0);
    bool remove(::g::Android::java::lang::Object* arg0);
    ::g::Android::java::lang::Object* remove1(int arg0);
    bool removeAll(uObject* arg0);
    bool retainAll(uObject* arg0);
    ::g::Android::java::lang::Object* set(int arg0, ::g::Android::java::lang::Object* arg1);
    int size();
    uObject* subList(int arg0, int arg1);
    ::g::Android::Runtime::ObjectArray* toArray();
    ::g::Android::Runtime::ObjectArray* toArray1(::g::Android::Runtime::ObjectArray* arg0);
    static void add_IMPL_38220(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool add_IMPL_38221(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool addAll_IMPL_38222(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool addAll_IMPL_38223(bool arg0_, jobject arg1_, uObject* arg2_);
    static void clear_IMPL_38224(bool arg0_, jobject arg1_);
    static bool contains_IMPL_38225(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool containsAll_IMPL_38226(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool equals_IMPL_38227(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* get_IMPL_38228(bool arg0_, jobject arg1_, int arg2_);
    static int hashCode_IMPL_38229(bool arg0_, jobject arg1_);
    static int indexOf_IMPL_38230(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool isEmpty_IMPL_38231(bool arg0_, jobject arg1_);
    static uObject* iterator_IMPL_38232(bool arg0_, jobject arg1_);
    static int lastIndexOf_IMPL_38233(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* listIterator_IMPL_38234(bool arg0_, jobject arg1_);
    static uObject* listIterator_IMPL_38235(bool arg0_, jobject arg1_, int arg2_);
    static uObject* remove_IMPL_38236(bool arg0_, jobject arg1_, int arg2_);
    static bool remove_IMPL_38237(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool removeAll_IMPL_38238(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool retainAll_IMPL_38239(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* set_IMPL_38240(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static int size_IMPL_38241(bool arg0_, jobject arg1_);
    static uObject* subList_IMPL_38242(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static uObject* toArray_IMPL_38243(bool arg0_, jobject arg1_);
    static uObject* toArray_IMPL_38244(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
