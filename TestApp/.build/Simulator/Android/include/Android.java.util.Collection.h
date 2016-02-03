// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public abstract extern interface Collection :14397
// {
uInterfaceType* Collection_typeof();

struct Collection
{
    void(*fp_add)(uObject*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_addAll)(uObject*, uObject*, bool*);
    void(*fp_clear)(uObject*);
    void(*fp_contains)(uObject*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_containsAll)(uObject*, uObject*, bool*);
    void(*fp_equals)(uObject*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_hashCode)(uObject*, int*);
    void(*fp_isEmpty)(uObject*, bool*);
    void(*fp_iterator)(uObject*, uObject**);
    void(*fp_remove)(uObject*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_removeAll)(uObject*, uObject*, bool*);
    void(*fp_retainAll)(uObject*, uObject*, bool*);
    void(*fp_size)(uObject*, int*);
    void(*fp_toArray)(uObject*, ::g::Android::Runtime::ObjectArray**);
    void(*fp_toArray1)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**);
    static bool add(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return __this.VTable<Collection>()->fp_add(__this, arg0, &__retval), __retval; }
    static bool addAll(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<Collection>()->fp_addAll(__this, arg0, &__retval), __retval; }
    static void clear(const uInterface& __this) { __this.VTable<Collection>()->fp_clear(__this); }
    static bool contains(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return __this.VTable<Collection>()->fp_contains(__this, arg0, &__retval), __retval; }
    static bool containsAll(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<Collection>()->fp_containsAll(__this, arg0, &__retval), __retval; }
    static bool equals(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return __this.VTable<Collection>()->fp_equals(__this, arg0, &__retval), __retval; }
    static int hashCode(const uInterface& __this) { int __retval; return __this.VTable<Collection>()->fp_hashCode(__this, &__retval), __retval; }
    static bool isEmpty(const uInterface& __this) { bool __retval; return __this.VTable<Collection>()->fp_isEmpty(__this, &__retval), __retval; }
    static uObject* iterator(const uInterface& __this) { uObject* __retval; return __this.VTable<Collection>()->fp_iterator(__this, &__retval), __retval; }
    static bool remove(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { bool __retval; return __this.VTable<Collection>()->fp_remove(__this, arg0, &__retval), __retval; }
    static bool removeAll(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<Collection>()->fp_removeAll(__this, arg0, &__retval), __retval; }
    static bool retainAll(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<Collection>()->fp_retainAll(__this, arg0, &__retval), __retval; }
    static int size(const uInterface& __this) { int __retval; return __this.VTable<Collection>()->fp_size(__this, &__retval), __retval; }
    static ::g::Android::Runtime::ObjectArray* toArray(const uInterface& __this) { ::g::Android::Runtime::ObjectArray* __retval; return __this.VTable<Collection>()->fp_toArray(__this, &__retval), __retval; }
    static ::g::Android::Runtime::ObjectArray* toArray1(const uInterface& __this, ::g::Android::Runtime::ObjectArray* arg0) { ::g::Android::Runtime::ObjectArray* __retval; return __this.VTable<Collection>()->fp_toArray1(__this, arg0, &__retval), __retval; }
};
// }

}}}} // ::g::Android::java::util
