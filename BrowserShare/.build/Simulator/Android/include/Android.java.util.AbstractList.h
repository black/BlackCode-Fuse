// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.AbstractCollection.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.List.h>
#include <jni.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace util{struct AbstractList;}}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public abstract extern class AbstractList :190
// {
struct AbstractList_type : ::g::Android::java::util::AbstractCollection_type
{
    ::g::Android::java::util::List interface5;
    void(*fp_add1)(::g::Android::java::util::AbstractList*, int*, ::g::Android::java::lang::Object*);
    void(*fp_addAll1)(::g::Android::java::util::AbstractList*, int*, uObject*, bool*);
    void(*fp_indexOf)(::g::Android::java::util::AbstractList*, ::g::Android::java::lang::Object*, int*);
    void(*fp_iterator)(::g::Android::java::util::AbstractList*, uObject**);
    void(*fp_lastIndexOf)(::g::Android::java::util::AbstractList*, ::g::Android::java::lang::Object*, int*);
    void(*fp_remove1)(::g::Android::java::util::AbstractList*, int*, ::g::Android::java::lang::Object**);
    void(*fp_set)(::g::Android::java::util::AbstractList*, int*, ::g::Android::java::lang::Object*, ::g::Android::java::lang::Object**);
};

AbstractList_type* AbstractList_typeof();
void AbstractList___Init3_fn();
void AbstractList__add_fn(AbstractList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void AbstractList__add1_fn(AbstractList* __this, int* arg0, ::g::Android::java::lang::Object* arg1);
void AbstractList__add_IMPL_37448_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_);
void AbstractList__add_IMPL_37449_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractList__addAll1_fn(AbstractList* __this, int* arg0, uObject* arg1, bool* __retval);
void AbstractList__addAll_IMPL_37450_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void AbstractList__Android_java_util_List_get_fn(AbstractList* __this, int* arg0, ::g::Android::java::lang::Object** __retval);
void AbstractList__clear_fn(AbstractList* __this);
void AbstractList__clear_IMPL_37451_fn(bool* arg0_, jobject* arg1_);
void AbstractList__equals1_fn(AbstractList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void AbstractList__equals_IMPL_37452_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractList__get_IMPL_45730_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void AbstractList__GetEnumerator1_fn(AbstractList* __this, uObject** __retval);
void AbstractList__hashCode1_fn(AbstractList* __this, int* __retval);
void AbstractList__hashCode_IMPL_37454_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AbstractList__indexOf_fn(AbstractList* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void AbstractList__indexOf_IMPL_37455_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void AbstractList__iterator_fn(AbstractList* __this, uObject** __retval);
void AbstractList__iterator_IMPL_37456_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AbstractList__lastIndexOf_fn(AbstractList* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void AbstractList__lastIndexOf_IMPL_37457_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void AbstractList__listIterator_fn(AbstractList* __this, uObject** __retval);
void AbstractList__listIterator1_fn(AbstractList* __this, int* arg0, uObject** __retval);
void AbstractList__listIterator_IMPL_37458_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AbstractList__listIterator_IMPL_37459_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void AbstractList__remove1_fn(AbstractList* __this, int* arg0, ::g::Android::java::lang::Object** __retval);
void AbstractList__remove_IMPL_37460_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void AbstractList__set_fn(AbstractList* __this, int* arg0, ::g::Android::java::lang::Object* arg1, ::g::Android::java::lang::Object** __retval);
void AbstractList__set_IMPL_37462_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval);
void AbstractList__size_fn(AbstractList* __this, int* __retval);
void AbstractList__size_IMPL_45731_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AbstractList__subList_fn(AbstractList* __this, int* arg0, int* arg1, uObject** __retval);
void AbstractList__subList_IMPL_37463_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);

struct AbstractList : ::g::Android::java::util::AbstractCollection
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID add_37448_ID_;
    static jmethodID& add_37448_ID() { return add_37448_ID_; }
    static jmethodID add_37449_ID_;
    static jmethodID& add_37449_ID() { return add_37449_ID_; }
    static jmethodID addAll_37450_ID_;
    static jmethodID& addAll_37450_ID() { return addAll_37450_ID_; }
    static jmethodID clear_37451_ID_;
    static jmethodID& clear_37451_ID() { return clear_37451_ID_; }
    static jmethodID equals_37452_ID_;
    static jmethodID& equals_37452_ID() { return equals_37452_ID_; }
    static jmethodID get_45730_ID_;
    static jmethodID& get_45730_ID() { return get_45730_ID_; }
    static jmethodID hashCode_37454_ID_;
    static jmethodID& hashCode_37454_ID() { return hashCode_37454_ID_; }
    static jmethodID indexOf_37455_ID_;
    static jmethodID& indexOf_37455_ID() { return indexOf_37455_ID_; }
    static jmethodID iterator_37456_ID_;
    static jmethodID& iterator_37456_ID() { return iterator_37456_ID_; }
    static jmethodID lastIndexOf_37457_ID_;
    static jmethodID& lastIndexOf_37457_ID() { return lastIndexOf_37457_ID_; }
    static jmethodID listIterator_37458_ID_;
    static jmethodID& listIterator_37458_ID() { return listIterator_37458_ID_; }
    static jmethodID listIterator_37459_ID_;
    static jmethodID& listIterator_37459_ID() { return listIterator_37459_ID_; }
    static jmethodID remove_37460_ID_;
    static jmethodID& remove_37460_ID() { return remove_37460_ID_; }
    static jmethodID set_37462_ID_;
    static jmethodID& set_37462_ID() { return set_37462_ID_; }
    static jmethodID size_45731_ID_;
    static jmethodID& size_45731_ID() { return size_45731_ID_; }
    static jmethodID subList_37463_ID_;
    static jmethodID& subList_37463_ID() { return subList_37463_ID_; }

    void add1(int arg0, ::g::Android::java::lang::Object* arg1) { (((AbstractList_type*)__type)->fp_add1)(this, &arg0, arg1); }
    bool addAll1(int arg0, uObject* arg1) { bool __retval; return (((AbstractList_type*)__type)->fp_addAll1)(this, &arg0, arg1, &__retval), __retval; }
    uObject* GetEnumerator1();
    int indexOf(::g::Android::java::lang::Object* arg0) { int __retval; return (((AbstractList_type*)__type)->fp_indexOf)(this, arg0, &__retval), __retval; }
    uObject* iterator() { uObject* __retval; return (((AbstractList_type*)__type)->fp_iterator)(this, &__retval), __retval; }
    int lastIndexOf(::g::Android::java::lang::Object* arg0) { int __retval; return (((AbstractList_type*)__type)->fp_lastIndexOf)(this, arg0, &__retval), __retval; }
    uObject* listIterator();
    uObject* listIterator1(int arg0);
    ::g::Android::java::lang::Object* remove1(int arg0) { ::g::Android::java::lang::Object* __retval; return (((AbstractList_type*)__type)->fp_remove1)(this, &arg0, &__retval), __retval; }
    ::g::Android::java::lang::Object* set(int arg0, ::g::Android::java::lang::Object* arg1) { ::g::Android::java::lang::Object* __retval; return (((AbstractList_type*)__type)->fp_set)(this, &arg0, arg1, &__retval), __retval; }
    int size();
    uObject* subList(int arg0, int arg1);
    static void _Init3();
    static void add1(AbstractList* __this, int arg0, ::g::Android::java::lang::Object* arg1) { AbstractList__add1_fn(__this, &arg0, arg1); }
    static void add_IMPL_37448(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool add_IMPL_37449(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool addAll1(AbstractList* __this, int arg0, uObject* arg1) { bool __retval; return AbstractList__addAll1_fn(__this, &arg0, arg1, &__retval), __retval; }
    static bool addAll_IMPL_37450(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void clear_IMPL_37451(bool arg0_, jobject arg1_);
    static bool equals_IMPL_37452(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* get_IMPL_45730(bool arg0_, jobject arg1_, int arg2_);
    static int hashCode_IMPL_37454(bool arg0_, jobject arg1_);
    static int indexOf(AbstractList* __this, ::g::Android::java::lang::Object* arg0) { int __retval; return AbstractList__indexOf_fn(__this, arg0, &__retval), __retval; }
    static int indexOf_IMPL_37455(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* iterator(AbstractList* __this) { uObject* __retval; return AbstractList__iterator_fn(__this, &__retval), __retval; }
    static uObject* iterator_IMPL_37456(bool arg0_, jobject arg1_);
    static int lastIndexOf(AbstractList* __this, ::g::Android::java::lang::Object* arg0) { int __retval; return AbstractList__lastIndexOf_fn(__this, arg0, &__retval), __retval; }
    static int lastIndexOf_IMPL_37457(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* listIterator_IMPL_37458(bool arg0_, jobject arg1_);
    static uObject* listIterator_IMPL_37459(bool arg0_, jobject arg1_, int arg2_);
    static ::g::Android::java::lang::Object* remove1(AbstractList* __this, int arg0) { ::g::Android::java::lang::Object* __retval; return AbstractList__remove1_fn(__this, &arg0, &__retval), __retval; }
    static uObject* remove_IMPL_37460(bool arg0_, jobject arg1_, int arg2_);
    static ::g::Android::java::lang::Object* set(AbstractList* __this, int arg0, ::g::Android::java::lang::Object* arg1) { ::g::Android::java::lang::Object* __retval; return AbstractList__set_fn(__this, &arg0, arg1, &__retval), __retval; }
    static uObject* set_IMPL_37462(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static int size_IMPL_45731(bool arg0_, jobject arg1_);
    static uObject* subList_IMPL_37463(bool arg0_, jobject arg1_, int arg2_, int arg3_);
};
// }

}}}} // ::g::Android::java::util
