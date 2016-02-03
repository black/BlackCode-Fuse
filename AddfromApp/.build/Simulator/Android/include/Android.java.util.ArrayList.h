// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.AbstractList.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.List.h>
#include <jni.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace util{struct ArrayList;}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public sealed extern class ArrayList :4100
// {
::g::Android::java::util::AbstractList_type* ArrayList_typeof();
void ArrayList___Init4_fn();
void ArrayList__add_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void ArrayList__add1_fn(ArrayList* __this, int* arg0, ::g::Android::java::lang::Object* arg1);
void ArrayList__add_IMPL_37553_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ArrayList__add_IMPL_37554_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_);
void ArrayList__addAll_fn(ArrayList* __this, uObject* arg0, bool* __retval);
void ArrayList__addAll1_fn(ArrayList* __this, int* arg0, uObject* arg1, bool* __retval);
void ArrayList__addAll_IMPL_37555_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ArrayList__addAll_IMPL_37556_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void ArrayList__clear_fn(ArrayList* __this);
void ArrayList__clear_IMPL_37557_fn(bool* arg0_, jobject* arg1_);
void ArrayList__contains_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void ArrayList__contains_IMPL_37563_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ArrayList__equals1_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void ArrayList__equals_IMPL_37575_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ArrayList__hashCode1_fn(ArrayList* __this, int* __retval);
void ArrayList__hashCode_IMPL_37574_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ArrayList__indexOf_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void ArrayList__indexOf_IMPL_37564_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void ArrayList__isEmpty_fn(ArrayList* __this, bool* __retval);
void ArrayList__isEmpty_IMPL_37562_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ArrayList__iterator_fn(ArrayList* __this, uObject** __retval);
void ArrayList__iterator_IMPL_37573_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ArrayList__lastIndexOf_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void ArrayList__lastIndexOf_IMPL_37565_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void ArrayList__remove_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void ArrayList__remove1_fn(ArrayList* __this, int* arg0, ::g::Android::java::lang::Object** __retval);
void ArrayList__remove_IMPL_37566_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void ArrayList__remove_IMPL_37567_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ArrayList__set_fn(ArrayList* __this, int* arg0, ::g::Android::java::lang::Object* arg1, ::g::Android::java::lang::Object** __retval);
void ArrayList__set_IMPL_37569_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval);
void ArrayList__toArray_fn(ArrayList* __this, ::g::Android::Runtime::ObjectArray** __retval);
void ArrayList__toArray1_fn(ArrayList* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval);
void ArrayList__toArray_IMPL_37570_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ArrayList__toArray_IMPL_37571_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);

struct ArrayList : ::g::Android::java::util::AbstractList
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID add_37553_ID_;
    static jmethodID& add_37553_ID() { return add_37553_ID_; }
    static jmethodID add_37554_ID_;
    static jmethodID& add_37554_ID() { return add_37554_ID_; }
    static jmethodID addAll_37555_ID_;
    static jmethodID& addAll_37555_ID() { return addAll_37555_ID_; }
    static jmethodID addAll_37556_ID_;
    static jmethodID& addAll_37556_ID() { return addAll_37556_ID_; }
    static jmethodID clear_37557_ID_;
    static jmethodID& clear_37557_ID() { return clear_37557_ID_; }
    static jmethodID contains_37563_ID_;
    static jmethodID& contains_37563_ID() { return contains_37563_ID_; }
    static jmethodID equals_37575_ID_;
    static jmethodID& equals_37575_ID() { return equals_37575_ID_; }
    static jmethodID hashCode_37574_ID_;
    static jmethodID& hashCode_37574_ID() { return hashCode_37574_ID_; }
    static jmethodID indexOf_37564_ID_;
    static jmethodID& indexOf_37564_ID() { return indexOf_37564_ID_; }
    static jmethodID isEmpty_37562_ID_;
    static jmethodID& isEmpty_37562_ID() { return isEmpty_37562_ID_; }
    static jmethodID iterator_37573_ID_;
    static jmethodID& iterator_37573_ID() { return iterator_37573_ID_; }
    static jmethodID lastIndexOf_37565_ID_;
    static jmethodID& lastIndexOf_37565_ID() { return lastIndexOf_37565_ID_; }
    static jmethodID remove_37566_ID_;
    static jmethodID& remove_37566_ID() { return remove_37566_ID_; }
    static jmethodID remove_37567_ID_;
    static jmethodID& remove_37567_ID() { return remove_37567_ID_; }
    static jmethodID set_37569_ID_;
    static jmethodID& set_37569_ID() { return set_37569_ID_; }
    static jmethodID toArray_37570_ID_;
    static jmethodID& toArray_37570_ID() { return toArray_37570_ID_; }
    static jmethodID toArray_37571_ID_;
    static jmethodID& toArray_37571_ID() { return toArray_37571_ID_; }

    static void _Init4();
    static bool add_IMPL_37553(bool arg0_, jobject arg1_, uObject* arg2_);
    static void add_IMPL_37554(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool addAll_IMPL_37555(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool addAll_IMPL_37556(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void clear_IMPL_37557(bool arg0_, jobject arg1_);
    static bool contains_IMPL_37563(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool equals_IMPL_37575(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_37574(bool arg0_, jobject arg1_);
    static int indexOf_IMPL_37564(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool isEmpty_IMPL_37562(bool arg0_, jobject arg1_);
    static uObject* iterator_IMPL_37573(bool arg0_, jobject arg1_);
    static int lastIndexOf_IMPL_37565(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* remove_IMPL_37566(bool arg0_, jobject arg1_, int arg2_);
    static bool remove_IMPL_37567(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* set_IMPL_37569(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static uObject* toArray_IMPL_37570(bool arg0_, jobject arg1_);
    static uObject* toArray_IMPL_37571(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::java::util
