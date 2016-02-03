// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Collection.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public abstract extern interface List :14441
// {
uInterfaceType* List_typeof();

struct List
{
    void(*fp_add)(uObject*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_add1)(uObject*, int*, ::g::Android::java::lang::Object*);
    void(*fp_addAll)(uObject*, uObject*, bool*);
    void(*fp_addAll1)(uObject*, int*, uObject*, bool*);
    void(*fp_clear)(uObject*);
    void(*fp_contains)(uObject*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_containsAll)(uObject*, uObject*, bool*);
    void(*fp_equals)(uObject*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_get)(uObject*, int*, ::g::Android::java::lang::Object**);
    void(*fp_hashCode)(uObject*, int*);
    void(*fp_indexOf)(uObject*, ::g::Android::java::lang::Object*, int*);
    void(*fp_isEmpty)(uObject*, bool*);
    void(*fp_iterator)(uObject*, uObject**);
    void(*fp_lastIndexOf)(uObject*, ::g::Android::java::lang::Object*, int*);
    void(*fp_listIterator)(uObject*, uObject**);
    void(*fp_listIterator1)(uObject*, int*, uObject**);
    void(*fp_remove)(uObject*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_remove1)(uObject*, int*, ::g::Android::java::lang::Object**);
    void(*fp_removeAll)(uObject*, uObject*, bool*);
    void(*fp_retainAll)(uObject*, uObject*, bool*);
    void(*fp_set)(uObject*, int*, ::g::Android::java::lang::Object*, ::g::Android::java::lang::Object**);
    void(*fp_size)(uObject*, int*);
    void(*fp_subList)(uObject*, int*, int*, uObject**);
    void(*fp_toArray)(uObject*, ::g::Android::Runtime::ObjectArray**);
    void(*fp_toArray1)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**);
    static bool add(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return __this.VTable<List>()->fp_add(__this, arg0, &__retval), __retval; }
    static void add1(const uInterface& __this, int arg0, ::g::Android::java::lang::Object* arg1) { __this.VTable<List>()->fp_add1(__this, &arg0, arg1); }
    static bool addAll(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<List>()->fp_addAll(__this, arg0, &__retval), __retval; }
    static bool addAll1(const uInterface& __this, int arg0, uObject* arg1) { bool __retval; return __this.VTable<List>()->fp_addAll1(__this, &arg0, arg1, &__retval), __retval; }
    static void clear(const uInterface& __this) { __this.VTable<List>()->fp_clear(__this); }
    static bool contains(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return __this.VTable<List>()->fp_contains(__this, arg0, &__retval), __retval; }
    static bool containsAll(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<List>()->fp_containsAll(__this, arg0, &__retval), __retval; }
    static bool equals(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return __this.VTable<List>()->fp_equals(__this, arg0, &__retval), __retval; }
    static ::g::Android::java::lang::Object* get(const uInterface& __this, int arg0) { ::g::Android::java::lang::Object* __retval; return __this.VTable<List>()->fp_get(__this, &arg0, &__retval), __retval; }
    static int hashCode(const uInterface& __this) { int __retval; return __this.VTable<List>()->fp_hashCode(__this, &__retval), __retval; }
    static int indexOf(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { int __retval; return __this.VTable<List>()->fp_indexOf(__this, arg0, &__retval), __retval; }
    static bool isEmpty(const uInterface& __this) { bool __retval; return __this.VTable<List>()->fp_isEmpty(__this, &__retval), __retval; }
    static uObject* iterator(const uInterface& __this) { uObject* __retval; return __this.VTable<List>()->fp_iterator(__this, &__retval), __retval; }
    static int lastIndexOf(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { int __retval; return __this.VTable<List>()->fp_lastIndexOf(__this, arg0, &__retval), __retval; }
    static uObject* listIterator(const uInterface& __this) { uObject* __retval; return __this.VTable<List>()->fp_listIterator(__this, &__retval), __retval; }
    static uObject* listIterator1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<List>()->fp_listIterator1(__this, &arg0, &__retval), __retval; }
    static bool remove(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return __this.VTable<List>()->fp_remove(__this, arg0, &__retval), __retval; }
    static ::g::Android::java::lang::Object* remove1(const uInterface& __this, int arg0) { ::g::Android::java::lang::Object* __retval; return __this.VTable<List>()->fp_remove1(__this, &arg0, &__retval), __retval; }
    static bool removeAll(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<List>()->fp_removeAll(__this, arg0, &__retval), __retval; }
    static bool retainAll(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<List>()->fp_retainAll(__this, arg0, &__retval), __retval; }
    static ::g::Android::java::lang::Object* set(const uInterface& __this, int arg0, ::g::Android::java::lang::Object* arg1) { ::g::Android::java::lang::Object* __retval; return __this.VTable<List>()->fp_set(__this, &arg0, arg1, &__retval), __retval; }
    static int size(const uInterface& __this) { int __retval; return __this.VTable<List>()->fp_size(__this, &__retval), __retval; }
    static uObject* subList(const uInterface& __this, int arg0, int arg1) { uObject* __retval; return __this.VTable<List>()->fp_subList(__this, &arg0, &arg1, &__retval), __retval; }
    static ::g::Android::Runtime::ObjectArray* toArray(const uInterface& __this) { ::g::Android::Runtime::ObjectArray* __retval; return __this.VTable<List>()->fp_toArray(__this, &__retval), __retval; }
    static ::g::Android::Runtime::ObjectArray* toArray1(const uInterface& __this, ::g::Android::Runtime::ObjectArray* arg0) { ::g::Android::Runtime::ObjectArray* __retval; return __this.VTable<List>()->fp_toArray1(__this, arg0, &__retval), __retval; }
};
// }

}}}} // ::g::Android::java::util
