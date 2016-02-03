// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Collection.h>
#include <jni.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace java{namespace util{struct AbstractCollection;}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public abstract extern class AbstractCollection :11
// {
struct AbstractCollection_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::util::Collection interface2;
    ::g::Android::java::lang::Iterable interface3;
    ::g::Uno::Collections::IEnumerable interface4;
    void(*fp_add)(::g::Android::java::util::AbstractCollection*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_addAll)(::g::Android::java::util::AbstractCollection*, uObject*, bool*);
    void(*fp_clear)(::g::Android::java::util::AbstractCollection*);
    void(*fp_contains)(::g::Android::java::util::AbstractCollection*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_isEmpty)(::g::Android::java::util::AbstractCollection*, bool*);
    void(*fp_remove)(::g::Android::java::util::AbstractCollection*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_toArray)(::g::Android::java::util::AbstractCollection*, ::g::Android::Runtime::ObjectArray**);
    void(*fp_toArray1)(::g::Android::java::util::AbstractCollection*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**);
};

AbstractCollection_type* AbstractCollection_typeof();
void AbstractCollection___Init2_fn();
void AbstractCollection__add_fn(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void AbstractCollection__add_IMPL_37433_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractCollection__addAll_fn(AbstractCollection* __this, uObject* arg0, bool* __retval);
void AbstractCollection__addAll_IMPL_37434_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractCollection__Android_java_lang_Iterable_iterator_fn(AbstractCollection* __this, uObject** __retval);
void AbstractCollection__Android_java_util_Collection_iterator_fn(AbstractCollection* __this, uObject** __retval);
void AbstractCollection__Android_java_util_Collection_size_fn(AbstractCollection* __this, int* __retval);
void AbstractCollection__clear_fn(AbstractCollection* __this);
void AbstractCollection__clear_IMPL_37435_fn(bool* arg0_, jobject* arg1_);
void AbstractCollection__contains_fn(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void AbstractCollection__contains_IMPL_37436_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractCollection__containsAll_fn(AbstractCollection* __this, uObject* arg0, bool* __retval);
void AbstractCollection__containsAll_IMPL_37437_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractCollection__GetEnumerator_fn(AbstractCollection* __this, uObject** __retval);
void AbstractCollection__isEmpty_fn(AbstractCollection* __this, bool* __retval);
void AbstractCollection__isEmpty_IMPL_37438_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void AbstractCollection__iterator_IMPL_45727_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AbstractCollection__iterator_IMPL_45729_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AbstractCollection__remove_fn(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void AbstractCollection__remove_IMPL_37440_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractCollection__removeAll_fn(AbstractCollection* __this, uObject* arg0, bool* __retval);
void AbstractCollection__removeAll_IMPL_37441_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractCollection__retainAll_fn(AbstractCollection* __this, uObject* arg0, bool* __retval);
void AbstractCollection__retainAll_IMPL_37442_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbstractCollection__size_IMPL_45728_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AbstractCollection__toArray_fn(AbstractCollection* __this, ::g::Android::Runtime::ObjectArray** __retval);
void AbstractCollection__toArray1_fn(AbstractCollection* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval);
void AbstractCollection__toArray_IMPL_37444_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AbstractCollection__toArray_IMPL_37445_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void AbstractCollection__toString_fn(AbstractCollection* __this, ::g::Android::java::lang::String** __retval);
void AbstractCollection__toString_IMPL_37446_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct AbstractCollection : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID add_37433_ID_;
    static jmethodID& add_37433_ID() { return add_37433_ID_; }
    static jmethodID addAll_37434_ID_;
    static jmethodID& addAll_37434_ID() { return addAll_37434_ID_; }
    static jmethodID clear_37435_ID_;
    static jmethodID& clear_37435_ID() { return clear_37435_ID_; }
    static jmethodID contains_37436_ID_;
    static jmethodID& contains_37436_ID() { return contains_37436_ID_; }
    static jmethodID containsAll_37437_ID_;
    static jmethodID& containsAll_37437_ID() { return containsAll_37437_ID_; }
    static jmethodID isEmpty_37438_ID_;
    static jmethodID& isEmpty_37438_ID() { return isEmpty_37438_ID_; }
    static jmethodID iterator_45727_ID_;
    static jmethodID& iterator_45727_ID() { return iterator_45727_ID_; }
    static jmethodID iterator_45729_ID_;
    static jmethodID& iterator_45729_ID() { return iterator_45729_ID_; }
    static jmethodID remove_37440_ID_;
    static jmethodID& remove_37440_ID() { return remove_37440_ID_; }
    static jmethodID removeAll_37441_ID_;
    static jmethodID& removeAll_37441_ID() { return removeAll_37441_ID_; }
    static jmethodID retainAll_37442_ID_;
    static jmethodID& retainAll_37442_ID() { return retainAll_37442_ID_; }
    static jmethodID size_45728_ID_;
    static jmethodID& size_45728_ID() { return size_45728_ID_; }
    static jmethodID toArray_37444_ID_;
    static jmethodID& toArray_37444_ID() { return toArray_37444_ID_; }
    static jmethodID toArray_37445_ID_;
    static jmethodID& toArray_37445_ID() { return toArray_37445_ID_; }
    static jmethodID toString_37446_ID_;
    static jmethodID& toString_37446_ID() { return toString_37446_ID_; }

    bool add(::g::Android::java::lang::Object* arg0) { bool __retval; return (((AbstractCollection_type*)__type)->fp_add)(this, arg0, &__retval), __retval; }
    bool addAll(uObject* arg0) { bool __retval; return (((AbstractCollection_type*)__type)->fp_addAll)(this, arg0, &__retval), __retval; }
    void clear() { (((AbstractCollection_type*)__type)->fp_clear)(this); }
    bool contains(::g::Android::java::lang::Object* arg0) { bool __retval; return (((AbstractCollection_type*)__type)->fp_contains)(this, arg0, &__retval), __retval; }
    bool containsAll(uObject* arg0);
    uObject* GetEnumerator();
    bool isEmpty() { bool __retval; return (((AbstractCollection_type*)__type)->fp_isEmpty)(this, &__retval), __retval; }
    bool remove(::g::Android::java::lang::Object* arg0) { bool __retval; return (((AbstractCollection_type*)__type)->fp_remove)(this, arg0, &__retval), __retval; }
    bool removeAll(uObject* arg0);
    bool retainAll(uObject* arg0);
    ::g::Android::Runtime::ObjectArray* toArray() { ::g::Android::Runtime::ObjectArray* __retval; return (((AbstractCollection_type*)__type)->fp_toArray)(this, &__retval), __retval; }
    ::g::Android::Runtime::ObjectArray* toArray1(::g::Android::Runtime::ObjectArray* arg0) { ::g::Android::Runtime::ObjectArray* __retval; return (((AbstractCollection_type*)__type)->fp_toArray1)(this, arg0, &__retval), __retval; }
    static void _Init2();
    static bool add(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return AbstractCollection__add_fn(__this, arg0, &__retval), __retval; }
    static bool add_IMPL_37433(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool addAll(AbstractCollection* __this, uObject* arg0) { bool __retval; return AbstractCollection__addAll_fn(__this, arg0, &__retval), __retval; }
    static bool addAll_IMPL_37434(bool arg0_, jobject arg1_, uObject* arg2_);
    static void clear(AbstractCollection* __this) { AbstractCollection__clear_fn(__this); }
    static void clear_IMPL_37435(bool arg0_, jobject arg1_);
    static bool contains(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return AbstractCollection__contains_fn(__this, arg0, &__retval), __retval; }
    static bool contains_IMPL_37436(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool containsAll_IMPL_37437(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool isEmpty(AbstractCollection* __this) { bool __retval; return AbstractCollection__isEmpty_fn(__this, &__retval), __retval; }
    static bool isEmpty_IMPL_37438(bool arg0_, jobject arg1_);
    static uObject* iterator_IMPL_45727(bool arg0_, jobject arg1_);
    static uObject* iterator_IMPL_45729(bool arg0_, jobject arg1_);
    static bool remove(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return AbstractCollection__remove_fn(__this, arg0, &__retval), __retval; }
    static bool remove_IMPL_37440(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool removeAll_IMPL_37441(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool retainAll_IMPL_37442(bool arg0_, jobject arg1_, uObject* arg2_);
    static int size_IMPL_45728(bool arg0_, jobject arg1_);
    static ::g::Android::Runtime::ObjectArray* toArray(AbstractCollection* __this) { ::g::Android::Runtime::ObjectArray* __retval; return AbstractCollection__toArray_fn(__this, &__retval), __retval; }
    static ::g::Android::Runtime::ObjectArray* toArray1(AbstractCollection* __this, ::g::Android::Runtime::ObjectArray* arg0) { ::g::Android::Runtime::ObjectArray* __retval; return AbstractCollection__toArray1_fn(__this, arg0, &__retval), __retval; }
    static uObject* toArray_IMPL_37444(bool arg0_, jobject arg1_);
    static uObject* toArray_IMPL_37445(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* toString_IMPL_37446(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::util
