// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_java_util_AbstractCollection.h>
#include <Android.Fallbacks.Android_java_util_AbstractList.h>
#include <Android.Fallbacks.Android_java_util_Collection.h>
#include <Android.Fallbacks.Android_java_util_Iterator.h>
#include <Android.Fallbacks.Android_java_util_List.h>
#include <Android.Fallbacks.Android_java_util_ListIterator.h>
#include <Android.Fallbacks.Android_java_util_Observer.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.AbstractCollection.h>
#include <Android.java.util.AbstractList.h>
#include <Android.java.util.ArrayList.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.Iterator.h>
#include <Android.java.util.List.h>
#include <Android.java.util.ListIterator.h>
#include <Android.java.util.Observable.h>
#include <Android.java.util.Observer.h>
#include <Android.Runtime.JEnumerator.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[10];

namespace g{
namespace Android{
namespace java{
namespace util{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(11)
// ----------------------------------------------------------------------

// public abstract extern class AbstractCollection :11
// {
AbstractCollection_type* AbstractCollection_typeof()
{
    static uSStrong<AbstractCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(AbstractCollection);
    options.TypeSize = sizeof(AbstractCollection_type);
    type = (AbstractCollection_type*)uClassType::New("Android.java.util.AbstractCollection", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_add = AbstractCollection__add_fn;
    type->fp_addAll = AbstractCollection__addAll_fn;
    type->fp_clear = AbstractCollection__clear_fn;
    type->fp_contains = AbstractCollection__contains_fn;
    type->fp_isEmpty = AbstractCollection__isEmpty_fn;
    type->fp_remove = AbstractCollection__remove_fn;
    type->fp_toArray = AbstractCollection__toArray_fn;
    type->fp_toArray1 = AbstractCollection__toArray1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))AbstractCollection__toString_fn;
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))AbstractCollection__Android_java_util_Collection_iterator_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))AbstractCollection__Android_java_util_Collection_size_fn;
    type->interface3.fp_iterator = (void(*)(uObject*, uObject**))AbstractCollection__Android_java_lang_Iterable_iterator_fn;
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))AbstractCollection__add_fn;
    type->interface2.fp_addAll = (void(*)(uObject*, uObject*, bool*))AbstractCollection__addAll_fn;
    type->interface2.fp_clear = (void(*)(uObject*))AbstractCollection__clear_fn;
    type->interface2.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))AbstractCollection__contains_fn;
    type->interface2.fp_containsAll = (void(*)(uObject*, uObject*, bool*))AbstractCollection__containsAll_fn;
    type->interface2.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::lang::Object__equals1_fn;
    type->interface2.fp_hashCode = (void(*)(uObject*, int*))::g::Android::java::lang::Object__hashCode1_fn;
    type->interface2.fp_isEmpty = (void(*)(uObject*, bool*))AbstractCollection__isEmpty_fn;
    type->interface2.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))AbstractCollection__remove_fn;
    type->interface2.fp_removeAll = (void(*)(uObject*, uObject*, bool*))AbstractCollection__removeAll_fn;
    type->interface2.fp_retainAll = (void(*)(uObject*, uObject*, bool*))AbstractCollection__retainAll_fn;
    type->interface2.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))AbstractCollection__toArray_fn;
    type->interface2.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))AbstractCollection__toArray1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface4.fp_GetEnumerator = (void(*)(uObject*, uObject**))AbstractCollection__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[4] = ::g::Android::java::lang::Iterable_typeof();
    ::TYPES[5] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[6] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(AbstractCollection_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AbstractCollection_type, interface1),
        ::g::Android::java::util::Collection_typeof(), offsetof(AbstractCollection_type, interface2),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(AbstractCollection_type, interface3),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(AbstractCollection_type, interface4));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::add_37433_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::addAll_37434_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::clear_37435_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::contains_37436_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::containsAll_37437_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::isEmpty_37438_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::iterator_45727_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::iterator_45729_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::remove_37440_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::removeAll_37441_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::retainAll_37442_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::size_45728_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::toArray_37444_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::toArray_37445_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractCollection::toString_37446_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(28,
        new uFunction("_Init", NULL, (void*)AbstractCollection___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("add", NULL, NULL, offsetof(AbstractCollection_type, fp_add), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("add_IMPL_37433", NULL, (void*)AbstractCollection__add_IMPL_37433_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("addAll", NULL, NULL, offsetof(AbstractCollection_type, fp_addAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("addAll_IMPL_37434", NULL, (void*)AbstractCollection__addAll_IMPL_37434_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("clear", NULL, NULL, offsetof(AbstractCollection_type, fp_clear), false, uVoid_typeof(), 0),
        new uFunction("clear_IMPL_37435", NULL, (void*)AbstractCollection__clear_IMPL_37435_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("contains", NULL, NULL, offsetof(AbstractCollection_type, fp_contains), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("contains_IMPL_37436", NULL, (void*)AbstractCollection__contains_IMPL_37436_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("containsAll", NULL, (void*)AbstractCollection__containsAll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("containsAll_IMPL_37437", NULL, (void*)AbstractCollection__containsAll_IMPL_37437_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("GetEnumerator", NULL, (void*)AbstractCollection__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 0),
        new uFunction("isEmpty", NULL, NULL, offsetof(AbstractCollection_type, fp_isEmpty), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isEmpty_IMPL_37438", NULL, (void*)AbstractCollection__isEmpty_IMPL_37438_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("iterator_IMPL_45727", NULL, (void*)AbstractCollection__iterator_IMPL_45727_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("iterator_IMPL_45729", NULL, (void*)AbstractCollection__iterator_IMPL_45729_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("remove", NULL, NULL, offsetof(AbstractCollection_type, fp_remove), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("remove_IMPL_37440", NULL, (void*)AbstractCollection__remove_IMPL_37440_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("removeAll", NULL, (void*)AbstractCollection__removeAll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("removeAll_IMPL_37441", NULL, (void*)AbstractCollection__removeAll_IMPL_37441_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("retainAll", NULL, (void*)AbstractCollection__retainAll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("retainAll_IMPL_37442", NULL, (void*)AbstractCollection__retainAll_IMPL_37442_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("size_IMPL_45728", NULL, (void*)AbstractCollection__size_IMPL_45728_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toArray", NULL, NULL, offsetof(AbstractCollection_type, fp_toArray), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 0),
        new uFunction("toArray", NULL, NULL, offsetof(AbstractCollection_type, fp_toArray1), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 1, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof())),
        new uFunction("toArray_IMPL_37444", NULL, (void*)AbstractCollection__toArray_IMPL_37444_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toArray_IMPL_37445", NULL, (void*)AbstractCollection__toArray_IMPL_37445_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("toString_IMPL_37446", NULL, (void*)AbstractCollection__toString_IMPL_37446_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static extern new void _Init() :15
void AbstractCollection___Init2_fn()
{
    AbstractCollection::_Init2();
}

// public virtual bool add(Android.java.lang.Object arg0) :35
void AbstractCollection__add_fn(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = AbstractCollection::add_IMPL_37433(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool add_IMPL_37433(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :133
void AbstractCollection__add_IMPL_37433_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractCollection::add_IMPL_37433(*arg0_, *arg1_, arg2_);
}

// public virtual bool addAll(Android.java.util.Collection arg0) :41
void AbstractCollection__addAll_fn(AbstractCollection* __this, uObject* arg0, bool* __retval)
{
    return *__retval = AbstractCollection::addAll_IMPL_37434(__this->_subclassed, __this->_javaObject, arg0), void();
}

// public static extern bool addAll_IMPL_37434(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :136
void AbstractCollection__addAll_IMPL_37434_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractCollection::addAll_IMPL_37434(*arg0_, *arg1_, arg2_);
}

// private Android.java.util.Iterator Android.java.lang.Iterable.iterator() :125
void AbstractCollection__Android_java_lang_Iterable_iterator_fn(AbstractCollection* __this, uObject** __retval)
{
    return *__retval = AbstractCollection::iterator_IMPL_45729(__this->_subclassed, __this->_javaObject), void();
}

// private Android.java.util.Iterator Android.java.util.Collection.iterator() :113
void AbstractCollection__Android_java_util_Collection_iterator_fn(AbstractCollection* __this, uObject** __retval)
{
    return *__retval = AbstractCollection::iterator_IMPL_45727(__this->_subclassed, __this->_javaObject), void();
}

// private int Android.java.util.Collection.size() :119
void AbstractCollection__Android_java_util_Collection_size_fn(AbstractCollection* __this, int* __retval)
{
    return *__retval = AbstractCollection::size_IMPL_45728(__this->_subclassed, __this->_javaObject), void();
}

// public virtual void clear() :47
void AbstractCollection__clear_fn(AbstractCollection* __this)
{
    AbstractCollection::clear_IMPL_37435(__this->_subclassed, __this->_javaObject);
}

// public static extern void clear_IMPL_37435(bool arg0, Android.Base.Primitives.ujobject arg1) :139
void AbstractCollection__clear_IMPL_37435_fn(bool* arg0_, jobject* arg1_)
{
    AbstractCollection::clear_IMPL_37435(*arg0_, *arg1_);
}

// public virtual bool contains(Android.java.lang.Object arg0) :53
void AbstractCollection__contains_fn(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = AbstractCollection::contains_IMPL_37436(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool contains_IMPL_37436(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :142
void AbstractCollection__contains_IMPL_37436_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractCollection::contains_IMPL_37436(*arg0_, *arg1_, arg2_);
}

// public bool containsAll(Android.java.util.Collection arg0) :59
void AbstractCollection__containsAll_fn(AbstractCollection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->containsAll(arg0);
}

// public static extern bool containsAll_IMPL_37437(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :145
void AbstractCollection__containsAll_IMPL_37437_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractCollection::containsAll_IMPL_37437(*arg0_, *arg1_, arg2_);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() :17
void AbstractCollection__GetEnumerator_fn(AbstractCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public virtual bool isEmpty() :65
void AbstractCollection__isEmpty_fn(AbstractCollection* __this, bool* __retval)
{
    return *__retval = AbstractCollection::isEmpty_IMPL_37438(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool isEmpty_IMPL_37438(bool arg0, Android.Base.Primitives.ujobject arg1) :148
void AbstractCollection__isEmpty_IMPL_37438_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = AbstractCollection::isEmpty_IMPL_37438(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_45727(bool arg0, Android.Base.Primitives.ujobject arg1) :169
void AbstractCollection__iterator_IMPL_45727_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AbstractCollection::iterator_IMPL_45727(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_45729(bool arg0, Android.Base.Primitives.ujobject arg1) :175
void AbstractCollection__iterator_IMPL_45729_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AbstractCollection::iterator_IMPL_45729(*arg0_, *arg1_);
}

// public virtual bool remove(Android.java.lang.Object arg0) :74
void AbstractCollection__remove_fn(AbstractCollection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = AbstractCollection::remove_IMPL_37440(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool remove_IMPL_37440(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :151
void AbstractCollection__remove_IMPL_37440_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractCollection::remove_IMPL_37440(*arg0_, *arg1_, arg2_);
}

// public bool removeAll(Android.java.util.Collection arg0) :80
void AbstractCollection__removeAll_fn(AbstractCollection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->removeAll(arg0);
}

// public static extern bool removeAll_IMPL_37441(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :154
void AbstractCollection__removeAll_IMPL_37441_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractCollection::removeAll_IMPL_37441(*arg0_, *arg1_, arg2_);
}

// public bool retainAll(Android.java.util.Collection arg0) :86
void AbstractCollection__retainAll_fn(AbstractCollection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->retainAll(arg0);
}

// public static extern bool retainAll_IMPL_37442(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :157
void AbstractCollection__retainAll_IMPL_37442_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractCollection::retainAll_IMPL_37442(*arg0_, *arg1_, arg2_);
}

// public static extern int size_IMPL_45728(bool arg0, Android.Base.Primitives.ujobject arg1) :172
void AbstractCollection__size_IMPL_45728_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AbstractCollection::size_IMPL_45728(*arg0_, *arg1_);
}

// public virtual Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() :95
void AbstractCollection__toArray_fn(AbstractCollection* __this, ::g::Android::Runtime::ObjectArray** __retval)
{
    return *__retval = uCast< ::g::Android::Runtime::ObjectArray*>(AbstractCollection::toArray_IMPL_37444(__this->_subclassed, __this->_javaObject), ::TYPES[5/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]), void();
}

// public virtual Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) :101
void AbstractCollection__toArray1_fn(AbstractCollection* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval)
{
    return *__retval = uCast< ::g::Android::Runtime::ObjectArray*>(AbstractCollection::toArray_IMPL_37445(__this->_subclassed, __this->_javaObject, (uObject*)arg0), ::TYPES[5/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37444(bool arg0, Android.Base.Primitives.ujobject arg1) :160
void AbstractCollection__toArray_IMPL_37444_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AbstractCollection::toArray_IMPL_37444(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37445(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :163
void AbstractCollection__toArray_IMPL_37445_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = AbstractCollection::toArray_IMPL_37445(*arg0_, *arg1_, arg2_);
}

// public override sealed Android.java.lang.String toString() :107
void AbstractCollection__toString_fn(AbstractCollection* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(AbstractCollection::toString_IMPL_37446(__this->_subclassed, __this->_javaObject), ::TYPES[6/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_37446(bool arg0, Android.Base.Primitives.ujobject arg1) :166
void AbstractCollection__toString_IMPL_37446_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AbstractCollection::toString_IMPL_37446(*arg0_, *arg1_);
}

jclass AbstractCollection::_javaClass2_;
jmethodID AbstractCollection::add_37433_ID_;
jmethodID AbstractCollection::addAll_37434_ID_;
jmethodID AbstractCollection::clear_37435_ID_;
jmethodID AbstractCollection::contains_37436_ID_;
jmethodID AbstractCollection::containsAll_37437_ID_;
jmethodID AbstractCollection::isEmpty_37438_ID_;
jmethodID AbstractCollection::iterator_45727_ID_;
jmethodID AbstractCollection::iterator_45729_ID_;
jmethodID AbstractCollection::remove_37440_ID_;
jmethodID AbstractCollection::removeAll_37441_ID_;
jmethodID AbstractCollection::retainAll_37442_ID_;
jmethodID AbstractCollection::size_45728_ID_;
jmethodID AbstractCollection::toArray_37444_ID_;
jmethodID AbstractCollection::toArray_37445_ID_;
jmethodID AbstractCollection::toString_37446_ID_;

// public bool containsAll(Android.java.util.Collection arg0) [instance] :59
bool AbstractCollection::containsAll(uObject* arg0)
{
    return AbstractCollection::containsAll_IMPL_37437(_subclassed, _javaObject, arg0);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() [instance] :17
uObject* AbstractCollection::GetEnumerator()
{
    return (uObject*)::g::Android::Runtime::JEnumerator::New1((uObject*)this);
}

// public bool removeAll(Android.java.util.Collection arg0) [instance] :80
bool AbstractCollection::removeAll(uObject* arg0)
{
    return AbstractCollection::removeAll_IMPL_37441(_subclassed, _javaObject, arg0);
}

// public bool retainAll(Android.java.util.Collection arg0) [instance] :86
bool AbstractCollection::retainAll(uObject* arg0)
{
    return AbstractCollection::retainAll_IMPL_37442(_subclassed, _javaObject, arg0);
}

// public static extern new void _Init() [static] :15
void AbstractCollection::_Init2()
{
    if (AbstractCollection::_javaClass2()) { return; }
    INIT_JNI;
    AbstractCollection::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/util/AbstractCollection"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AbstractCollection::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.util.AbstractCollection'", 52);; }
}

// public static extern bool add_IMPL_37433(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :133
bool AbstractCollection::add_IMPL_37433(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractCollection::add_37433_ID(),AbstractCollection::_javaClass2(),"add","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.AbstractCollection.add could not be cached",75);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::add_37433_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractCollection::add_37433_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_37434(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :136
bool AbstractCollection::addAll_IMPL_37434(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractCollection::addAll_37434_ID(),AbstractCollection::_javaClass2(),"addAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.AbstractCollection.addAll could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::addAll_37434_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractCollection::addAll_37434_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_37435(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :139
void AbstractCollection::clear_IMPL_37435(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    
    CACHE_METHOD(AbstractCollection::clear_37435_ID(),AbstractCollection::_javaClass2(),"clear","()V",GetMethodID,"Id for fallback method java.util.AbstractCollection.clear could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::clear_37435_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbstractCollection::clear_37435_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool contains_IMPL_37436(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :142
bool AbstractCollection::contains_IMPL_37436(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractCollection::contains_37436_ID(),AbstractCollection::_javaClass2(),"contains","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.AbstractCollection.contains could not be cached",80);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::contains_37436_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractCollection::contains_37436_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool containsAll_IMPL_37437(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :145
bool AbstractCollection::containsAll_IMPL_37437(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractCollection::containsAll_37437_ID(),AbstractCollection::_javaClass2(),"containsAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.AbstractCollection.containsAll could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::containsAll_37437_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractCollection::containsAll_37437_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isEmpty_IMPL_37438(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :148
bool AbstractCollection::isEmpty_IMPL_37438(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    
    bool result;
    CACHE_METHOD(AbstractCollection::isEmpty_37438_ID(),AbstractCollection::_javaClass2(),"isEmpty","()Z",GetMethodID,"Id for fallback method java.util.AbstractCollection.isEmpty could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::isEmpty_37438_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractCollection::isEmpty_37438_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_45727(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :169
uObject* AbstractCollection::iterator_IMPL_45727(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    
    uObject* result;
    CACHE_METHOD(AbstractCollection::iterator_45727_ID(),AbstractCollection::_javaClass2(),"iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.util.AbstractCollection.iterator could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::iterator_45727_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractCollection::iterator_45727_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_45729(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :175
uObject* AbstractCollection::iterator_IMPL_45729(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    
    uObject* result;
    CACHE_METHOD(AbstractCollection::iterator_45729_ID(),AbstractCollection::_javaClass2(),"iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.util.AbstractCollection.iterator could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::iterator_45729_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractCollection::iterator_45729_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool remove_IMPL_37440(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :151
bool AbstractCollection::remove_IMPL_37440(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractCollection::remove_37440_ID(),AbstractCollection::_javaClass2(),"remove","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.AbstractCollection.remove could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::remove_37440_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractCollection::remove_37440_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool removeAll_IMPL_37441(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :154
bool AbstractCollection::removeAll_IMPL_37441(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractCollection::removeAll_37441_ID(),AbstractCollection::_javaClass2(),"removeAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.AbstractCollection.removeAll could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::removeAll_37441_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractCollection::removeAll_37441_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool retainAll_IMPL_37442(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :157
bool AbstractCollection::retainAll_IMPL_37442(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractCollection::retainAll_37442_ID(),AbstractCollection::_javaClass2(),"retainAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.AbstractCollection.retainAll could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::retainAll_37442_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractCollection::retainAll_37442_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int size_IMPL_45728(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :172
int AbstractCollection::size_IMPL_45728(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    
    int result;
    CACHE_METHOD(AbstractCollection::size_45728_ID(),AbstractCollection::_javaClass2(),"size","()I",GetMethodID,"Id for fallback method java.util.AbstractCollection.size could not be cached",76);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::size_45728_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AbstractCollection::size_45728_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37444(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :160
uObject* AbstractCollection::toArray_IMPL_37444(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    
    uObject* result;
    CACHE_METHOD(AbstractCollection::toArray_37444_ID(),AbstractCollection::_javaClass2(),"toArray","()[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.AbstractCollection.toArray could not be cached",79);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::toArray_37444_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractCollection::toArray_37444_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37445(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :163
uObject* AbstractCollection::toArray_IMPL_37445(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(AbstractCollection::toArray_37445_ID(),AbstractCollection::_javaClass2(),"toArray","([Ljava/lang/Object;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.AbstractCollection.toArray could not be cached",79);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::toArray_37445_ID(), _obArg2),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractCollection::toArray_37445_ID(), _obArg2),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_37446(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :166
uObject* AbstractCollection::toString_IMPL_37446(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractCollection::_javaClass2(),AbstractCollection::_Init2());
    
    uObject* result;
    CACHE_METHOD(AbstractCollection::toString_37446_ID(),AbstractCollection::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.util.AbstractCollection.toString could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractCollection::_javaClass2(), AbstractCollection::toString_37446_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractCollection::toString_37446_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(190)
// -----------------------------------------------------------------------

// public abstract extern class AbstractList :190
// {
AbstractList_type* AbstractList_typeof()
{
    static uSStrong<AbstractList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(AbstractList);
    options.TypeSize = sizeof(AbstractList_type);
    type = (AbstractList_type*)uClassType::New("Android.java.util.AbstractList", options);
    type->SetBase(::g::Android::java::util::AbstractCollection_typeof());
    type->fp_add = (void(*)(::g::Android::java::util::AbstractCollection*, ::g::Android::java::lang::Object*, bool*))AbstractList__add_fn;
    type->fp_add1 = AbstractList__add1_fn;
    type->fp_addAll1 = AbstractList__addAll1_fn;
    type->fp_clear = (void(*)(::g::Android::java::util::AbstractCollection*))AbstractList__clear_fn;
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))AbstractList__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))AbstractList__hashCode1_fn;
    type->fp_indexOf = AbstractList__indexOf_fn;
    type->fp_iterator = AbstractList__iterator_fn;
    type->fp_lastIndexOf = AbstractList__lastIndexOf_fn;
    type->fp_remove1 = AbstractList__remove1_fn;
    type->fp_set = AbstractList__set_fn;
    type->interface5.fp_get = (void(*)(uObject*, int*, ::g::Android::java::lang::Object**))AbstractList__Android_java_util_List_get_fn;
    type->interface5.fp_add1 = (void(*)(uObject*, int*, ::g::Android::java::lang::Object*))AbstractList__add1_fn;
    type->interface5.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))AbstractList__add_fn;
    type->interface5.fp_addAll1 = (void(*)(uObject*, int*, uObject*, bool*))AbstractList__addAll1_fn;
    type->interface5.fp_addAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__addAll_fn;
    type->interface5.fp_clear = (void(*)(uObject*))AbstractList__clear_fn;
    type->interface5.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractCollection__contains_fn;
    type->interface5.fp_containsAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__containsAll_fn;
    type->interface5.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))AbstractList__equals1_fn;
    type->interface5.fp_hashCode = (void(*)(uObject*, int*))AbstractList__hashCode1_fn;
    type->interface5.fp_indexOf = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))AbstractList__indexOf_fn;
    type->interface5.fp_isEmpty = (void(*)(uObject*, bool*))::g::Android::java::util::AbstractCollection__isEmpty_fn;
    type->interface5.fp_iterator = (void(*)(uObject*, uObject**))AbstractList__iterator_fn;
    type->interface5.fp_lastIndexOf = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))AbstractList__lastIndexOf_fn;
    type->interface5.fp_listIterator = (void(*)(uObject*, uObject**))AbstractList__listIterator_fn;
    type->interface5.fp_listIterator1 = (void(*)(uObject*, int*, uObject**))AbstractList__listIterator1_fn;
    type->interface5.fp_remove1 = (void(*)(uObject*, int*, ::g::Android::java::lang::Object**))AbstractList__remove1_fn;
    type->interface5.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractCollection__remove_fn;
    type->interface5.fp_removeAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__removeAll_fn;
    type->interface5.fp_retainAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__retainAll_fn;
    type->interface5.fp_set = (void(*)(uObject*, int*, ::g::Android::java::lang::Object*, ::g::Android::java::lang::Object**))AbstractList__set_fn;
    type->interface5.fp_size = (void(*)(uObject*, int*))AbstractList__size_fn;
    type->interface5.fp_subList = (void(*)(uObject*, int*, int*, uObject**))AbstractList__subList_fn;
    type->interface5.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))::g::Android::java::util::AbstractCollection__toArray_fn;
    type->interface5.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))::g::Android::java::util::AbstractCollection__toArray1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))AbstractList__add_fn;
    type->interface2.fp_addAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__addAll_fn;
    type->interface2.fp_clear = (void(*)(uObject*))AbstractList__clear_fn;
    type->interface2.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractCollection__contains_fn;
    type->interface2.fp_containsAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__containsAll_fn;
    type->interface2.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))AbstractList__equals1_fn;
    type->interface2.fp_hashCode = (void(*)(uObject*, int*))AbstractList__hashCode1_fn;
    type->interface2.fp_isEmpty = (void(*)(uObject*, bool*))::g::Android::java::util::AbstractCollection__isEmpty_fn;
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))AbstractList__iterator_fn;
    type->interface2.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractCollection__remove_fn;
    type->interface2.fp_removeAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__removeAll_fn;
    type->interface2.fp_retainAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__retainAll_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))AbstractList__size_fn;
    type->interface2.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))::g::Android::java::util::AbstractCollection__toArray_fn;
    type->interface2.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))::g::Android::java::util::AbstractCollection__toArray1_fn;
    type->interface3.fp_iterator = (void(*)(uObject*, uObject**))AbstractList__iterator_fn;
    type->interface4.fp_GetEnumerator = (void(*)(uObject*, uObject**))AbstractList__GetEnumerator1_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[7] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[4] = ::g::Android::java::lang::Iterable_typeof();
    ::TYPES[2] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[8] = ::g::Android::java::util::ListIterator_typeof();
    ::TYPES[9] = ::g::Android::java::util::List_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(AbstractList_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AbstractList_type, interface1),
        ::g::Android::java::util::Collection_typeof(), offsetof(AbstractList_type, interface2),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(AbstractList_type, interface3),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(AbstractList_type, interface4),
        ::g::Android::java::util::List_typeof(), offsetof(AbstractList_type, interface5));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::add_37448_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::add_37449_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::addAll_37450_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::clear_37451_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::equals_37452_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::get_45730_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::hashCode_37454_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::indexOf_37455_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::iterator_37456_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::lastIndexOf_37457_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::listIterator_37458_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::listIterator_37459_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::remove_37460_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::set_37462_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::size_45731_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::AbstractList::subList_37463_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(29,
        new uFunction("_Init", NULL, (void*)AbstractList___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("add", NULL, NULL, offsetof(AbstractList_type, fp_add1), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::lang::Object_typeof()),
        new uFunction("add_IMPL_37448", NULL, (void*)AbstractList__add_IMPL_37448_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("add_IMPL_37449", NULL, (void*)AbstractList__add_IMPL_37449_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("addAll", NULL, NULL, offsetof(AbstractList_type, fp_addAll1), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::util::Collection_typeof()),
        new uFunction("addAll_IMPL_37450", NULL, (void*)AbstractList__addAll_IMPL_37450_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("clear_IMPL_37451", NULL, (void*)AbstractList__clear_IMPL_37451_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("equals_IMPL_37452", NULL, (void*)AbstractList__equals_IMPL_37452_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("get_IMPL_45730", NULL, (void*)AbstractList__get_IMPL_45730_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetEnumerator", NULL, (void*)AbstractList__GetEnumerator1_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 0),
        new uFunction("hashCode_IMPL_37454", NULL, (void*)AbstractList__hashCode_IMPL_37454_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("indexOf", NULL, NULL, offsetof(AbstractList_type, fp_indexOf), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("indexOf_IMPL_37455", NULL, (void*)AbstractList__indexOf_IMPL_37455_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("iterator", NULL, NULL, offsetof(AbstractList_type, fp_iterator), false, ::g::Android::java::util::Iterator_typeof(), 0),
        new uFunction("iterator_IMPL_37456", NULL, (void*)AbstractList__iterator_IMPL_37456_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("lastIndexOf", NULL, NULL, offsetof(AbstractList_type, fp_lastIndexOf), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("lastIndexOf_IMPL_37457", NULL, (void*)AbstractList__lastIndexOf_IMPL_37457_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("listIterator", NULL, (void*)AbstractList__listIterator_fn, 0, false, ::g::Android::java::util::ListIterator_typeof(), 0),
        new uFunction("listIterator", NULL, (void*)AbstractList__listIterator1_fn, 0, false, ::g::Android::java::util::ListIterator_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("listIterator_IMPL_37458", NULL, (void*)AbstractList__listIterator_IMPL_37458_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("listIterator_IMPL_37459", NULL, (void*)AbstractList__listIterator_IMPL_37459_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("remove", NULL, NULL, offsetof(AbstractList_type, fp_remove1), false, ::g::Android::java::lang::Object_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("remove_IMPL_37460", NULL, (void*)AbstractList__remove_IMPL_37460_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("set", NULL, NULL, offsetof(AbstractList_type, fp_set), false, ::g::Android::java::lang::Object_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::lang::Object_typeof()),
        new uFunction("set_IMPL_37462", NULL, (void*)AbstractList__set_IMPL_37462_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("size", NULL, (void*)AbstractList__size_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("size_IMPL_45731", NULL, (void*)AbstractList__size_IMPL_45731_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("subList", NULL, (void*)AbstractList__subList_fn, 0, false, ::g::Android::java::util::List_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("subList_IMPL_37463", NULL, (void*)AbstractList__subList_IMPL_37463_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :194
void AbstractList___Init3_fn()
{
    AbstractList::_Init3();
}

// public override bool add(Android.java.lang.Object arg0) :220
void AbstractList__add_fn(AbstractList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = AbstractList::add_IMPL_37449(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public virtual void add(int arg0, Android.java.lang.Object arg1) :214
void AbstractList__add1_fn(AbstractList* __this, int* arg0, ::g::Android::java::lang::Object* arg1)
{
    int arg0_ = *arg0;
    AbstractList::add_IMPL_37448(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1);
}

// public static extern void add_IMPL_37448(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :321
void AbstractList__add_IMPL_37448_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_)
{
    AbstractList::add_IMPL_37448(*arg0_, *arg1_, *arg2_, arg3_);
}

// public static extern bool add_IMPL_37449(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :324
void AbstractList__add_IMPL_37449_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractList::add_IMPL_37449(*arg0_, *arg1_, arg2_);
}

// public virtual bool addAll(int arg0, Android.java.util.Collection arg1) :226
void AbstractList__addAll1_fn(AbstractList* __this, int* arg0, uObject* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = AbstractList::addAll_IMPL_37450(__this->_subclassed, __this->_javaObject, arg0_, arg1), void();
}

// public static extern bool addAll_IMPL_37450(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :327
void AbstractList__addAll_IMPL_37450_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = AbstractList::addAll_IMPL_37450(*arg0_, *arg1_, *arg2_, arg3_);
}

// private Android.java.lang.Object Android.java.util.List.get(int arg0) :307
void AbstractList__Android_java_util_List_get_fn(AbstractList* __this, int* arg0, ::g::Android::java::lang::Object** __retval)
{
    int arg0_ = *arg0;
    return *__retval = uCast< ::g::Android::java::lang::Object*>(AbstractList::get_IMPL_45730(__this->_subclassed, __this->_javaObject, arg0_), ::TYPES[7/*Android.java.lang.Object*/]), void();
}

// public override void clear() :232
void AbstractList__clear_fn(AbstractList* __this)
{
    AbstractList::clear_IMPL_37451(__this->_subclassed, __this->_javaObject);
}

// public static extern void clear_IMPL_37451(bool arg0, Android.Base.Primitives.ujobject arg1) :330
void AbstractList__clear_IMPL_37451_fn(bool* arg0_, jobject* arg1_)
{
    AbstractList::clear_IMPL_37451(*arg0_, *arg1_);
}

// public override bool equals(Android.java.lang.Object arg0) :238
void AbstractList__equals1_fn(AbstractList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = AbstractList::equals_IMPL_37452(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_37452(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :333
void AbstractList__equals_IMPL_37452_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbstractList::equals_IMPL_37452(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper get_IMPL_45730(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :366
void AbstractList__get_IMPL_45730_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = AbstractList::get_IMPL_45730(*arg0_, *arg1_, *arg2_);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() :196
void AbstractList__GetEnumerator1_fn(AbstractList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator1();
}

// public override int hashCode() :247
void AbstractList__hashCode1_fn(AbstractList* __this, int* __retval)
{
    return *__retval = AbstractList::hashCode_IMPL_37454(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_37454(bool arg0, Android.Base.Primitives.ujobject arg1) :336
void AbstractList__hashCode_IMPL_37454_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AbstractList::hashCode_IMPL_37454(*arg0_, *arg1_);
}

// public virtual int indexOf(Android.java.lang.Object arg0) :253
void AbstractList__indexOf_fn(AbstractList* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    return *__retval = AbstractList::indexOf_IMPL_37455(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern int indexOf_IMPL_37455(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :339
void AbstractList__indexOf_IMPL_37455_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = AbstractList::indexOf_IMPL_37455(*arg0_, *arg1_, arg2_);
}

// public virtual Android.java.util.Iterator iterator() :259
void AbstractList__iterator_fn(AbstractList* __this, uObject** __retval)
{
    return *__retval = AbstractList::iterator_IMPL_37456(__this->_subclassed, __this->_javaObject), void();
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_37456(bool arg0, Android.Base.Primitives.ujobject arg1) :342
void AbstractList__iterator_IMPL_37456_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AbstractList::iterator_IMPL_37456(*arg0_, *arg1_);
}

// public virtual int lastIndexOf(Android.java.lang.Object arg0) :265
void AbstractList__lastIndexOf_fn(AbstractList* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    return *__retval = AbstractList::lastIndexOf_IMPL_37457(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern int lastIndexOf_IMPL_37457(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :345
void AbstractList__lastIndexOf_IMPL_37457_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = AbstractList::lastIndexOf_IMPL_37457(*arg0_, *arg1_, arg2_);
}

// public Android.java.util.ListIterator listIterator() :271
void AbstractList__listIterator_fn(AbstractList* __this, uObject** __retval)
{
    *__retval = __this->listIterator();
}

// public Android.java.util.ListIterator listIterator(int arg0) :277
void AbstractList__listIterator1_fn(AbstractList* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->listIterator1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_37458(bool arg0, Android.Base.Primitives.ujobject arg1) :348
void AbstractList__listIterator_IMPL_37458_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AbstractList::listIterator_IMPL_37458(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_37459(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :351
void AbstractList__listIterator_IMPL_37459_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = AbstractList::listIterator_IMPL_37459(*arg0_, *arg1_, *arg2_);
}

// public virtual Android.java.lang.Object remove(int arg0) :283
void AbstractList__remove1_fn(AbstractList* __this, int* arg0, ::g::Android::java::lang::Object** __retval)
{
    int arg0_ = *arg0;
    return *__retval = uCast< ::g::Android::java::lang::Object*>(AbstractList::remove_IMPL_37460(__this->_subclassed, __this->_javaObject, arg0_), ::TYPES[7/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper remove_IMPL_37460(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :354
void AbstractList__remove_IMPL_37460_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = AbstractList::remove_IMPL_37460(*arg0_, *arg1_, *arg2_);
}

// public virtual Android.java.lang.Object set(int arg0, Android.java.lang.Object arg1) :295
void AbstractList__set_fn(AbstractList* __this, int* arg0, ::g::Android::java::lang::Object* arg1, ::g::Android::java::lang::Object** __retval)
{
    int arg0_ = *arg0;
    return *__retval = uCast< ::g::Android::java::lang::Object*>(AbstractList::set_IMPL_37462(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), ::TYPES[7/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper set_IMPL_37462(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :360
void AbstractList__set_IMPL_37462_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = AbstractList::set_IMPL_37462(*arg0_, *arg1_, *arg2_, arg3_);
}

// public int size() :313
void AbstractList__size_fn(AbstractList* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_45731(bool arg0, Android.Base.Primitives.ujobject arg1) :369
void AbstractList__size_IMPL_45731_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AbstractList::size_IMPL_45731(*arg0_, *arg1_);
}

// public Android.java.util.List subList(int arg0, int arg1) :301
void AbstractList__subList_fn(AbstractList* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subList(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subList_IMPL_37463(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :363
void AbstractList__subList_IMPL_37463_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = AbstractList::subList_IMPL_37463(*arg0_, *arg1_, *arg2_, *arg3_);
}

jclass AbstractList::_javaClass3_;
jmethodID AbstractList::add_37448_ID_;
jmethodID AbstractList::add_37449_ID_;
jmethodID AbstractList::addAll_37450_ID_;
jmethodID AbstractList::clear_37451_ID_;
jmethodID AbstractList::equals_37452_ID_;
jmethodID AbstractList::get_45730_ID_;
jmethodID AbstractList::hashCode_37454_ID_;
jmethodID AbstractList::indexOf_37455_ID_;
jmethodID AbstractList::iterator_37456_ID_;
jmethodID AbstractList::lastIndexOf_37457_ID_;
jmethodID AbstractList::listIterator_37458_ID_;
jmethodID AbstractList::listIterator_37459_ID_;
jmethodID AbstractList::remove_37460_ID_;
jmethodID AbstractList::set_37462_ID_;
jmethodID AbstractList::size_45731_ID_;
jmethodID AbstractList::subList_37463_ID_;

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() [instance] :196
uObject* AbstractList::GetEnumerator1()
{
    return (uObject*)::g::Android::Runtime::JEnumerator::New1((uObject*)this);
}

// public Android.java.util.ListIterator listIterator() [instance] :271
uObject* AbstractList::listIterator()
{
    return AbstractList::listIterator_IMPL_37458(_subclassed, _javaObject);
}

// public Android.java.util.ListIterator listIterator(int arg0) [instance] :277
uObject* AbstractList::listIterator1(int arg0)
{
    int arg0_ = arg0;
    return AbstractList::listIterator_IMPL_37459(_subclassed, _javaObject, arg0_);
}

// public int size() [instance] :313
int AbstractList::size()
{
    return AbstractList::size_IMPL_45731(_subclassed, _javaObject);
}

// public Android.java.util.List subList(int arg0, int arg1) [instance] :301
uObject* AbstractList::subList(int arg0, int arg1)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    return AbstractList::subList_IMPL_37463(_subclassed, _javaObject, arg0_, arg1_);
}

// public static extern new void _Init() [static] :194
void AbstractList::_Init3()
{
    if (AbstractList::_javaClass3()) { return; }
    INIT_JNI;
    AbstractList::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/util/AbstractList"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AbstractList::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.util.AbstractList'", 46);; }
}

// public static extern void add_IMPL_37448(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :321
void AbstractList::add_IMPL_37448(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(AbstractList::add_37448_ID(),AbstractList::_javaClass3(),"add","(ILjava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.AbstractList.add could not be cached",69);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbstractList::_javaClass3(), AbstractList::add_37448_ID(), ((jint)arg2_), _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbstractList::add_37448_ID(), ((jint)arg2_), _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool add_IMPL_37449(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :324
bool AbstractList::add_IMPL_37449(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractList::add_37449_ID(),AbstractList::_javaClass3(),"add","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.AbstractList.add could not be cached",69);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractList::_javaClass3(), AbstractList::add_37449_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractList::add_37449_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_37450(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :327
bool AbstractList::addAll_IMPL_37450(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractList::addAll_37450_ID(),AbstractList::_javaClass3(),"addAll","(ILjava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.AbstractList.addAll could not be cached",72);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractList::_javaClass3(), AbstractList::addAll_37450_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractList::addAll_37450_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_37451(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :330
void AbstractList::clear_IMPL_37451(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    CACHE_METHOD(AbstractList::clear_37451_ID(),AbstractList::_javaClass3(),"clear","()V",GetMethodID,"Id for fallback method java.util.AbstractList.clear could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbstractList::_javaClass3(), AbstractList::clear_37451_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbstractList::clear_37451_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool equals_IMPL_37452(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :333
bool AbstractList::equals_IMPL_37452(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbstractList::equals_37452_ID(),AbstractList::_javaClass3(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.AbstractList.equals could not be cached",72);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbstractList::_javaClass3(), AbstractList::equals_37452_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbstractList::equals_37452_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper get_IMPL_45730(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :366
uObject* AbstractList::get_IMPL_45730(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    uObject* result;
    CACHE_METHOD(AbstractList::get_45730_ID(),AbstractList::_javaClass3(),"get","(I)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.AbstractList.get could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractList::_javaClass3(), AbstractList::get_45730_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractList::get_45730_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_37454(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :336
int AbstractList::hashCode_IMPL_37454(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    int result;
    CACHE_METHOD(AbstractList::hashCode_37454_ID(),AbstractList::_javaClass3(),"hashCode","()I",GetMethodID,"Id for fallback method java.util.AbstractList.hashCode could not be cached",74);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AbstractList::_javaClass3(), AbstractList::hashCode_37454_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AbstractList::hashCode_37454_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int indexOf_IMPL_37455(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :339
int AbstractList::indexOf_IMPL_37455(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(AbstractList::indexOf_37455_ID(),AbstractList::_javaClass3(),"indexOf","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.util.AbstractList.indexOf could not be cached",73);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AbstractList::_javaClass3(), AbstractList::indexOf_37455_ID(), _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AbstractList::indexOf_37455_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_37456(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :342
uObject* AbstractList::iterator_IMPL_37456(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    uObject* result;
    CACHE_METHOD(AbstractList::iterator_37456_ID(),AbstractList::_javaClass3(),"iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.util.AbstractList.iterator could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractList::_javaClass3(), AbstractList::iterator_37456_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractList::iterator_37456_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int lastIndexOf_IMPL_37457(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :345
int AbstractList::lastIndexOf_IMPL_37457(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(AbstractList::lastIndexOf_37457_ID(),AbstractList::_javaClass3(),"lastIndexOf","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.util.AbstractList.lastIndexOf could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AbstractList::_javaClass3(), AbstractList::lastIndexOf_37457_ID(), _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AbstractList::lastIndexOf_37457_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_37458(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :348
uObject* AbstractList::listIterator_IMPL_37458(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    uObject* result;
    CACHE_METHOD(AbstractList::listIterator_37458_ID(),AbstractList::_javaClass3(),"listIterator","()Ljava/util/ListIterator;",GetMethodID,"Id for fallback method java.util.AbstractList.listIterator could not be cached",78);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractList::_javaClass3(), AbstractList::listIterator_37458_ID()),result,::g::Android::Fallbacks::Android_java_util_ListIterator_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractList::listIterator_37458_ID()),result,::g::Android::Fallbacks::Android_java_util_ListIterator_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_37459(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :351
uObject* AbstractList::listIterator_IMPL_37459(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    uObject* result;
    CACHE_METHOD(AbstractList::listIterator_37459_ID(),AbstractList::_javaClass3(),"listIterator","(I)Ljava/util/ListIterator;",GetMethodID,"Id for fallback method java.util.AbstractList.listIterator could not be cached",78);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractList::_javaClass3(), AbstractList::listIterator_37459_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_java_util_ListIterator_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractList::listIterator_37459_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_java_util_ListIterator_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper remove_IMPL_37460(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :354
uObject* AbstractList::remove_IMPL_37460(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    uObject* result;
    CACHE_METHOD(AbstractList::remove_37460_ID(),AbstractList::_javaClass3(),"remove","(I)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.AbstractList.remove could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractList::_javaClass3(), AbstractList::remove_37460_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractList::remove_37460_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper set_IMPL_37462(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :360
uObject* AbstractList::set_IMPL_37462(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(AbstractList::set_37462_ID(),AbstractList::_javaClass3(),"set","(ILjava/lang/Object;)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.AbstractList.set could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractList::_javaClass3(), AbstractList::set_37462_ID(), ((jint)arg2_), _obArg3),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractList::set_37462_ID(), ((jint)arg2_), _obArg3),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int size_IMPL_45731(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :369
int AbstractList::size_IMPL_45731(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    int result;
    CACHE_METHOD(AbstractList::size_45731_ID(),AbstractList::_javaClass3(),"size","()I",GetMethodID,"Id for fallback method java.util.AbstractList.size could not be cached",70);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AbstractList::_javaClass3(), AbstractList::size_45731_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AbstractList::size_45731_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper subList_IMPL_37463(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :363
uObject* AbstractList::subList_IMPL_37463(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(AbstractList::_javaClass3(),AbstractList::_Init3());
    
    uObject* result;
    CACHE_METHOD(AbstractList::subList_37463_ID(),AbstractList::_javaClass3(),"subList","(II)Ljava/util/List;",GetMethodID,"Id for fallback method java.util.AbstractList.subList could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbstractList::_javaClass3(), AbstractList::subList_37463_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_util_List_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbstractList::subList_37463_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_util_List_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(4100)
// ------------------------------------------------------------------------

// public sealed extern class ArrayList :4100
// {
::g::Android::java::util::AbstractList_type* ArrayList_typeof()
{
    static uSStrong< ::g::Android::java::util::AbstractList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ArrayList);
    options.TypeSize = sizeof(::g::Android::java::util::AbstractList_type);
    type = (::g::Android::java::util::AbstractList_type*)uClassType::New("Android.java.util.ArrayList", options);
    type->SetBase(::g::Android::java::util::AbstractList_typeof());
    type->fp_add = (void(*)(::g::Android::java::util::AbstractCollection*, ::g::Android::java::lang::Object*, bool*))ArrayList__add_fn;
    type->fp_add1 = (void(*)(::g::Android::java::util::AbstractList*, int*, ::g::Android::java::lang::Object*))ArrayList__add1_fn;
    type->fp_addAll = (void(*)(::g::Android::java::util::AbstractCollection*, uObject*, bool*))ArrayList__addAll_fn;
    type->fp_addAll1 = (void(*)(::g::Android::java::util::AbstractList*, int*, uObject*, bool*))ArrayList__addAll1_fn;
    type->fp_clear = (void(*)(::g::Android::java::util::AbstractCollection*))ArrayList__clear_fn;
    type->fp_contains = (void(*)(::g::Android::java::util::AbstractCollection*, ::g::Android::java::lang::Object*, bool*))ArrayList__contains_fn;
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))ArrayList__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))ArrayList__hashCode1_fn;
    type->fp_indexOf = (void(*)(::g::Android::java::util::AbstractList*, ::g::Android::java::lang::Object*, int*))ArrayList__indexOf_fn;
    type->fp_isEmpty = (void(*)(::g::Android::java::util::AbstractCollection*, bool*))ArrayList__isEmpty_fn;
    type->fp_iterator = (void(*)(::g::Android::java::util::AbstractList*, uObject**))ArrayList__iterator_fn;
    type->fp_lastIndexOf = (void(*)(::g::Android::java::util::AbstractList*, ::g::Android::java::lang::Object*, int*))ArrayList__lastIndexOf_fn;
    type->fp_remove = (void(*)(::g::Android::java::util::AbstractCollection*, ::g::Android::java::lang::Object*, bool*))ArrayList__remove_fn;
    type->fp_remove1 = (void(*)(::g::Android::java::util::AbstractList*, int*, ::g::Android::java::lang::Object**))ArrayList__remove1_fn;
    type->fp_set = (void(*)(::g::Android::java::util::AbstractList*, int*, ::g::Android::java::lang::Object*, ::g::Android::java::lang::Object**))ArrayList__set_fn;
    type->fp_toArray = (void(*)(::g::Android::java::util::AbstractCollection*, ::g::Android::Runtime::ObjectArray**))ArrayList__toArray_fn;
    type->fp_toArray1 = (void(*)(::g::Android::java::util::AbstractCollection*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))ArrayList__toArray1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface5.fp_get = (void(*)(uObject*, int*, ::g::Android::java::lang::Object**))::g::Android::java::util::AbstractList__Android_java_util_List_get_fn;
    type->interface5.fp_add1 = (void(*)(uObject*, int*, ::g::Android::java::lang::Object*))ArrayList__add1_fn;
    type->interface5.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractList__add_fn;
    type->interface5.fp_addAll1 = (void(*)(uObject*, int*, uObject*, bool*))ArrayList__addAll1_fn;
    type->interface5.fp_addAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__addAll_fn;
    type->interface5.fp_clear = (void(*)(uObject*))::g::Android::java::util::AbstractList__clear_fn;
    type->interface5.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractCollection__contains_fn;
    type->interface5.fp_containsAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__containsAll_fn;
    type->interface5.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractList__equals1_fn;
    type->interface5.fp_hashCode = (void(*)(uObject*, int*))::g::Android::java::util::AbstractList__hashCode1_fn;
    type->interface5.fp_indexOf = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))ArrayList__indexOf_fn;
    type->interface5.fp_isEmpty = (void(*)(uObject*, bool*))::g::Android::java::util::AbstractCollection__isEmpty_fn;
    type->interface5.fp_iterator = (void(*)(uObject*, uObject**))::g::Android::java::util::AbstractList__iterator_fn;
    type->interface5.fp_lastIndexOf = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))ArrayList__lastIndexOf_fn;
    type->interface5.fp_listIterator = (void(*)(uObject*, uObject**))::g::Android::java::util::AbstractList__listIterator_fn;
    type->interface5.fp_listIterator1 = (void(*)(uObject*, int*, uObject**))::g::Android::java::util::AbstractList__listIterator1_fn;
    type->interface5.fp_remove1 = (void(*)(uObject*, int*, ::g::Android::java::lang::Object**))ArrayList__remove1_fn;
    type->interface5.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractCollection__remove_fn;
    type->interface5.fp_removeAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__removeAll_fn;
    type->interface5.fp_retainAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__retainAll_fn;
    type->interface5.fp_set = (void(*)(uObject*, int*, ::g::Android::java::lang::Object*, ::g::Android::java::lang::Object**))ArrayList__set_fn;
    type->interface5.fp_size = (void(*)(uObject*, int*))::g::Android::java::util::AbstractList__size_fn;
    type->interface5.fp_subList = (void(*)(uObject*, int*, int*, uObject**))::g::Android::java::util::AbstractList__subList_fn;
    type->interface5.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))::g::Android::java::util::AbstractCollection__toArray_fn;
    type->interface5.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))::g::Android::java::util::AbstractCollection__toArray1_fn;
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))ArrayList__add_fn;
    type->interface2.fp_addAll = (void(*)(uObject*, uObject*, bool*))ArrayList__addAll_fn;
    type->interface2.fp_clear = (void(*)(uObject*))ArrayList__clear_fn;
    type->interface2.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))ArrayList__contains_fn;
    type->interface2.fp_containsAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__containsAll_fn;
    type->interface2.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))::g::Android::java::util::AbstractList__equals1_fn;
    type->interface2.fp_hashCode = (void(*)(uObject*, int*))::g::Android::java::util::AbstractList__hashCode1_fn;
    type->interface2.fp_isEmpty = (void(*)(uObject*, bool*))ArrayList__isEmpty_fn;
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))::g::Android::java::util::AbstractList__iterator_fn;
    type->interface2.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))ArrayList__remove_fn;
    type->interface2.fp_removeAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__removeAll_fn;
    type->interface2.fp_retainAll = (void(*)(uObject*, uObject*, bool*))::g::Android::java::util::AbstractCollection__retainAll_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))::g::Android::java::util::AbstractList__size_fn;
    type->interface2.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))ArrayList__toArray_fn;
    type->interface2.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))ArrayList__toArray1_fn;
    type->interface3.fp_iterator = (void(*)(uObject*, uObject**))::g::Android::java::util::AbstractList__iterator_fn;
    type->interface4.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Android::java::util::AbstractList__GetEnumerator1_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[7] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[5] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::util::AbstractList_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::util::AbstractList_type, interface1),
        ::g::Android::java::util::Collection_typeof(), offsetof(::g::Android::java::util::AbstractList_type, interface2),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(::g::Android::java::util::AbstractList_type, interface3),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(::g::Android::java::util::AbstractList_type, interface4),
        ::g::Android::java::util::List_typeof(), offsetof(::g::Android::java::util::AbstractList_type, interface5));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::add_37553_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::add_37554_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::addAll_37555_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::addAll_37556_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::clear_37557_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::contains_37563_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::equals_37575_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::hashCode_37574_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::indexOf_37564_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::isEmpty_37562_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::iterator_37573_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::lastIndexOf_37565_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::remove_37566_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::remove_37567_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::set_37569_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::toArray_37570_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::ArrayList::toArray_37571_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(18,
        new uFunction("_Init", NULL, (void*)ArrayList___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("add_IMPL_37553", NULL, (void*)ArrayList__add_IMPL_37553_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("add_IMPL_37554", NULL, (void*)ArrayList__add_IMPL_37554_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("addAll_IMPL_37555", NULL, (void*)ArrayList__addAll_IMPL_37555_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("addAll_IMPL_37556", NULL, (void*)ArrayList__addAll_IMPL_37556_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("clear_IMPL_37557", NULL, (void*)ArrayList__clear_IMPL_37557_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("contains_IMPL_37563", NULL, (void*)ArrayList__contains_IMPL_37563_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("equals_IMPL_37575", NULL, (void*)ArrayList__equals_IMPL_37575_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("hashCode_IMPL_37574", NULL, (void*)ArrayList__hashCode_IMPL_37574_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("indexOf_IMPL_37564", NULL, (void*)ArrayList__indexOf_IMPL_37564_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("isEmpty_IMPL_37562", NULL, (void*)ArrayList__isEmpty_IMPL_37562_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("iterator_IMPL_37573", NULL, (void*)ArrayList__iterator_IMPL_37573_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("lastIndexOf_IMPL_37565", NULL, (void*)ArrayList__lastIndexOf_IMPL_37565_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("remove_IMPL_37566", NULL, (void*)ArrayList__remove_IMPL_37566_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("remove_IMPL_37567", NULL, (void*)ArrayList__remove_IMPL_37567_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("set_IMPL_37569", NULL, (void*)ArrayList__set_IMPL_37569_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("toArray_IMPL_37570", NULL, (void*)ArrayList__toArray_IMPL_37570_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toArray_IMPL_37571", NULL, (void*)ArrayList__toArray_IMPL_37571_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public static extern new void _Init() :4104
void ArrayList___Init4_fn()
{
    ArrayList::_Init4();
}

// public override sealed bool add(Android.java.lang.Object arg0) :4153
void ArrayList__add_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = ArrayList::add_IMPL_37553(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public override sealed void add(int arg0, Android.java.lang.Object arg1) :4159
void ArrayList__add1_fn(ArrayList* __this, int* arg0, ::g::Android::java::lang::Object* arg1)
{
    int arg0_ = *arg0;
    ArrayList::add_IMPL_37554(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1);
}

// public static extern bool add_IMPL_37553(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4295
void ArrayList__add_IMPL_37553_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ArrayList::add_IMPL_37553(*arg0_, *arg1_, arg2_);
}

// public static extern void add_IMPL_37554(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :4298
void ArrayList__add_IMPL_37554_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_)
{
    ArrayList::add_IMPL_37554(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed bool addAll(Android.java.util.Collection arg0) :4165
void ArrayList__addAll_fn(ArrayList* __this, uObject* arg0, bool* __retval)
{
    return *__retval = ArrayList::addAll_IMPL_37555(__this->_subclassed, __this->_javaObject, arg0), void();
}

// public override sealed bool addAll(int arg0, Android.java.util.Collection arg1) :4171
void ArrayList__addAll1_fn(ArrayList* __this, int* arg0, uObject* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = ArrayList::addAll_IMPL_37556(__this->_subclassed, __this->_javaObject, arg0_, arg1), void();
}

// public static extern bool addAll_IMPL_37555(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4301
void ArrayList__addAll_IMPL_37555_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ArrayList::addAll_IMPL_37555(*arg0_, *arg1_, arg2_);
}

// public static extern bool addAll_IMPL_37556(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :4304
void ArrayList__addAll_IMPL_37556_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = ArrayList::addAll_IMPL_37556(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed void clear() :4177
void ArrayList__clear_fn(ArrayList* __this)
{
    ArrayList::clear_IMPL_37557(__this->_subclassed, __this->_javaObject);
}

// public static extern void clear_IMPL_37557(bool arg0, Android.Base.Primitives.ujobject arg1) :4307
void ArrayList__clear_IMPL_37557_fn(bool* arg0_, jobject* arg1_)
{
    ArrayList::clear_IMPL_37557(*arg0_, *arg1_);
}

// public override sealed bool contains(Android.java.lang.Object arg0) :4213
void ArrayList__contains_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = ArrayList::contains_IMPL_37563(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool contains_IMPL_37563(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4325
void ArrayList__contains_IMPL_37563_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ArrayList::contains_IMPL_37563(*arg0_, *arg1_, arg2_);
}

// public override sealed bool equals(Android.java.lang.Object arg0) :4285
void ArrayList__equals1_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = ArrayList::equals_IMPL_37575(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_37575(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4361
void ArrayList__equals_IMPL_37575_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ArrayList::equals_IMPL_37575(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :4279
void ArrayList__hashCode1_fn(ArrayList* __this, int* __retval)
{
    return *__retval = ArrayList::hashCode_IMPL_37574(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_37574(bool arg0, Android.Base.Primitives.ujobject arg1) :4358
void ArrayList__hashCode_IMPL_37574_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ArrayList::hashCode_IMPL_37574(*arg0_, *arg1_);
}

// public override sealed int indexOf(Android.java.lang.Object arg0) :4219
void ArrayList__indexOf_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    return *__retval = ArrayList::indexOf_IMPL_37564(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern int indexOf_IMPL_37564(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4328
void ArrayList__indexOf_IMPL_37564_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = ArrayList::indexOf_IMPL_37564(*arg0_, *arg1_, arg2_);
}

// public override sealed bool isEmpty() :4207
void ArrayList__isEmpty_fn(ArrayList* __this, bool* __retval)
{
    return *__retval = ArrayList::isEmpty_IMPL_37562(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool isEmpty_IMPL_37562(bool arg0, Android.Base.Primitives.ujobject arg1) :4322
void ArrayList__isEmpty_IMPL_37562_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = ArrayList::isEmpty_IMPL_37562(*arg0_, *arg1_);
}

// public override sealed Android.java.util.Iterator iterator() :4273
void ArrayList__iterator_fn(ArrayList* __this, uObject** __retval)
{
    return *__retval = ArrayList::iterator_IMPL_37573(__this->_subclassed, __this->_javaObject), void();
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_37573(bool arg0, Android.Base.Primitives.ujobject arg1) :4355
void ArrayList__iterator_IMPL_37573_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ArrayList::iterator_IMPL_37573(*arg0_, *arg1_);
}

// public override sealed int lastIndexOf(Android.java.lang.Object arg0) :4225
void ArrayList__lastIndexOf_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    return *__retval = ArrayList::lastIndexOf_IMPL_37565(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern int lastIndexOf_IMPL_37565(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4331
void ArrayList__lastIndexOf_IMPL_37565_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = ArrayList::lastIndexOf_IMPL_37565(*arg0_, *arg1_, arg2_);
}

// public override sealed bool remove(Android.java.lang.Object arg0) :4237
void ArrayList__remove_fn(ArrayList* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = ArrayList::remove_IMPL_37567(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public override sealed Android.java.lang.Object remove(int arg0) :4231
void ArrayList__remove1_fn(ArrayList* __this, int* arg0, ::g::Android::java::lang::Object** __retval)
{
    int arg0_ = *arg0;
    return *__retval = uCast< ::g::Android::java::lang::Object*>(ArrayList::remove_IMPL_37566(__this->_subclassed, __this->_javaObject, arg0_), ::TYPES[7/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper remove_IMPL_37566(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :4334
void ArrayList__remove_IMPL_37566_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = ArrayList::remove_IMPL_37566(*arg0_, *arg1_, *arg2_);
}

// public static extern bool remove_IMPL_37567(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4337
void ArrayList__remove_IMPL_37567_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ArrayList::remove_IMPL_37567(*arg0_, *arg1_, arg2_);
}

// public override sealed Android.java.lang.Object set(int arg0, Android.java.lang.Object arg1) :4249
void ArrayList__set_fn(ArrayList* __this, int* arg0, ::g::Android::java::lang::Object* arg1, ::g::Android::java::lang::Object** __retval)
{
    int arg0_ = *arg0;
    return *__retval = uCast< ::g::Android::java::lang::Object*>(ArrayList::set_IMPL_37569(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), ::TYPES[7/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper set_IMPL_37569(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :4343
void ArrayList__set_IMPL_37569_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = ArrayList::set_IMPL_37569(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() :4255
void ArrayList__toArray_fn(ArrayList* __this, ::g::Android::Runtime::ObjectArray** __retval)
{
    return *__retval = uCast< ::g::Android::Runtime::ObjectArray*>(ArrayList::toArray_IMPL_37570(__this->_subclassed, __this->_javaObject), ::TYPES[5/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]), void();
}

// public override sealed Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) :4261
void ArrayList__toArray1_fn(ArrayList* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval)
{
    return *__retval = uCast< ::g::Android::Runtime::ObjectArray*>(ArrayList::toArray_IMPL_37571(__this->_subclassed, __this->_javaObject, (uObject*)arg0), ::TYPES[5/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37570(bool arg0, Android.Base.Primitives.ujobject arg1) :4346
void ArrayList__toArray_IMPL_37570_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ArrayList::toArray_IMPL_37570(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37571(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4349
void ArrayList__toArray_IMPL_37571_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = ArrayList::toArray_IMPL_37571(*arg0_, *arg1_, arg2_);
}

jclass ArrayList::_javaClass4_;
jmethodID ArrayList::add_37553_ID_;
jmethodID ArrayList::add_37554_ID_;
jmethodID ArrayList::addAll_37555_ID_;
jmethodID ArrayList::addAll_37556_ID_;
jmethodID ArrayList::clear_37557_ID_;
jmethodID ArrayList::contains_37563_ID_;
jmethodID ArrayList::equals_37575_ID_;
jmethodID ArrayList::hashCode_37574_ID_;
jmethodID ArrayList::indexOf_37564_ID_;
jmethodID ArrayList::isEmpty_37562_ID_;
jmethodID ArrayList::iterator_37573_ID_;
jmethodID ArrayList::lastIndexOf_37565_ID_;
jmethodID ArrayList::remove_37566_ID_;
jmethodID ArrayList::remove_37567_ID_;
jmethodID ArrayList::set_37569_ID_;
jmethodID ArrayList::toArray_37570_ID_;
jmethodID ArrayList::toArray_37571_ID_;

// public static extern new void _Init() [static] :4104
void ArrayList::_Init4()
{
    if (ArrayList::_javaClass4()) { return; }
    INIT_JNI;
    ArrayList::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/util/ArrayList"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ArrayList::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.util.ArrayList'", 43);; }
}

// public static extern bool add_IMPL_37553(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4295
bool ArrayList::add_IMPL_37553(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ArrayList::add_37553_ID(),ArrayList::_javaClass4(),"add","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.ArrayList.add could not be cached",66);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ArrayList::_javaClass4(), ArrayList::add_37553_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ArrayList::add_37553_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void add_IMPL_37554(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4298
void ArrayList::add_IMPL_37554(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ArrayList::add_37554_ID(),ArrayList::_javaClass4(),"add","(ILjava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.ArrayList.add could not be cached",66);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ArrayList::_javaClass4(), ArrayList::add_37554_ID(), ((jint)arg2_), _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ArrayList::add_37554_ID(), ((jint)arg2_), _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool addAll_IMPL_37555(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4301
bool ArrayList::addAll_IMPL_37555(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ArrayList::addAll_37555_ID(),ArrayList::_javaClass4(),"addAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.ArrayList.addAll could not be cached",69);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ArrayList::_javaClass4(), ArrayList::addAll_37555_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ArrayList::addAll_37555_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_37556(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4304
bool ArrayList::addAll_IMPL_37556(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ArrayList::addAll_37556_ID(),ArrayList::_javaClass4(),"addAll","(ILjava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.ArrayList.addAll could not be cached",69);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ArrayList::_javaClass4(), ArrayList::addAll_37556_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ArrayList::addAll_37556_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_37557(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4307
void ArrayList::clear_IMPL_37557(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    
    CACHE_METHOD(ArrayList::clear_37557_ID(),ArrayList::_javaClass4(),"clear","()V",GetMethodID,"Id for fallback method java.util.ArrayList.clear could not be cached",68);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ArrayList::_javaClass4(), ArrayList::clear_37557_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ArrayList::clear_37557_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool contains_IMPL_37563(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4325
bool ArrayList::contains_IMPL_37563(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ArrayList::contains_37563_ID(),ArrayList::_javaClass4(),"contains","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.ArrayList.contains could not be cached",71);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ArrayList::_javaClass4(), ArrayList::contains_37563_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ArrayList::contains_37563_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_37575(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4361
bool ArrayList::equals_IMPL_37575(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ArrayList::equals_37575_ID(),ArrayList::_javaClass4(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.ArrayList.equals could not be cached",69);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ArrayList::_javaClass4(), ArrayList::equals_37575_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ArrayList::equals_37575_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_37574(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4358
int ArrayList::hashCode_IMPL_37574(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    
    int result;
    CACHE_METHOD(ArrayList::hashCode_37574_ID(),ArrayList::_javaClass4(),"hashCode","()I",GetMethodID,"Id for fallback method java.util.ArrayList.hashCode could not be cached",71);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ArrayList::_javaClass4(), ArrayList::hashCode_37574_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ArrayList::hashCode_37574_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int indexOf_IMPL_37564(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4328
int ArrayList::indexOf_IMPL_37564(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(ArrayList::indexOf_37564_ID(),ArrayList::_javaClass4(),"indexOf","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.util.ArrayList.indexOf could not be cached",70);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ArrayList::_javaClass4(), ArrayList::indexOf_37564_ID(), _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ArrayList::indexOf_37564_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isEmpty_IMPL_37562(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4322
bool ArrayList::isEmpty_IMPL_37562(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    
    bool result;
    CACHE_METHOD(ArrayList::isEmpty_37562_ID(),ArrayList::_javaClass4(),"isEmpty","()Z",GetMethodID,"Id for fallback method java.util.ArrayList.isEmpty could not be cached",70);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ArrayList::_javaClass4(), ArrayList::isEmpty_37562_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ArrayList::isEmpty_37562_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_37573(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4355
uObject* ArrayList::iterator_IMPL_37573(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    
    uObject* result;
    CACHE_METHOD(ArrayList::iterator_37573_ID(),ArrayList::_javaClass4(),"iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.util.ArrayList.iterator could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ArrayList::_javaClass4(), ArrayList::iterator_37573_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ArrayList::iterator_37573_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int lastIndexOf_IMPL_37565(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4331
int ArrayList::lastIndexOf_IMPL_37565(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(ArrayList::lastIndexOf_37565_ID(),ArrayList::_javaClass4(),"lastIndexOf","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.util.ArrayList.lastIndexOf could not be cached",74);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ArrayList::_javaClass4(), ArrayList::lastIndexOf_37565_ID(), _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ArrayList::lastIndexOf_37565_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper remove_IMPL_37566(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :4334
uObject* ArrayList::remove_IMPL_37566(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    
    uObject* result;
    CACHE_METHOD(ArrayList::remove_37566_ID(),ArrayList::_javaClass4(),"remove","(I)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.ArrayList.remove could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ArrayList::_javaClass4(), ArrayList::remove_37566_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ArrayList::remove_37566_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool remove_IMPL_37567(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4337
bool ArrayList::remove_IMPL_37567(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ArrayList::remove_37567_ID(),ArrayList::_javaClass4(),"remove","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.ArrayList.remove could not be cached",69);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ArrayList::_javaClass4(), ArrayList::remove_37567_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ArrayList::remove_37567_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper set_IMPL_37569(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4343
uObject* ArrayList::set_IMPL_37569(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(ArrayList::set_37569_ID(),ArrayList::_javaClass4(),"set","(ILjava/lang/Object;)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.ArrayList.set could not be cached",66);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ArrayList::_javaClass4(), ArrayList::set_37569_ID(), ((jint)arg2_), _obArg3),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ArrayList::set_37569_ID(), ((jint)arg2_), _obArg3),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37570(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4346
uObject* ArrayList::toArray_IMPL_37570(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    
    uObject* result;
    CACHE_METHOD(ArrayList::toArray_37570_ID(),ArrayList::_javaClass4(),"toArray","()[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.ArrayList.toArray could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ArrayList::_javaClass4(), ArrayList::toArray_37570_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ArrayList::toArray_37570_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37571(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4349
uObject* ArrayList::toArray_IMPL_37571(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ArrayList::_javaClass4(),ArrayList::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(ArrayList::toArray_37571_ID(),ArrayList::_javaClass4(),"toArray","([Ljava/lang/Object;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.ArrayList.toArray could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ArrayList::_javaClass4(), ArrayList::toArray_37571_ID(), _obArg2),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ArrayList::toArray_37571_ID(), _obArg2),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(14397)
// -------------------------------------------------------------------------

// public abstract extern interface Collection :14397
// {
uInterfaceType* Collection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Collection", 0, 0);
    type->Reflection.SetFunctions(15,
        new uFunction("add", NULL, NULL, offsetof(Collection, fp_add), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("addAll", NULL, NULL, offsetof(Collection, fp_addAll), false, ::g::Uno::Bool_typeof(), 1, Collection_typeof()),
        new uFunction("clear", NULL, NULL, offsetof(Collection, fp_clear), false, uVoid_typeof(), 0),
        new uFunction("contains", NULL, NULL, offsetof(Collection, fp_contains), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("containsAll", NULL, NULL, offsetof(Collection, fp_containsAll), false, ::g::Uno::Bool_typeof(), 1, Collection_typeof()),
        new uFunction("equals", NULL, NULL, offsetof(Collection, fp_equals), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("hashCode", NULL, NULL, offsetof(Collection, fp_hashCode), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("isEmpty", NULL, NULL, offsetof(Collection, fp_isEmpty), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("iterator", NULL, NULL, offsetof(Collection, fp_iterator), false, ::g::Android::java::util::Iterator_typeof(), 0),
        new uFunction("remove", NULL, NULL, offsetof(Collection, fp_remove), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("removeAll", NULL, NULL, offsetof(Collection, fp_removeAll), false, ::g::Uno::Bool_typeof(), 1, Collection_typeof()),
        new uFunction("retainAll", NULL, NULL, offsetof(Collection, fp_retainAll), false, ::g::Uno::Bool_typeof(), 1, Collection_typeof()),
        new uFunction("size", NULL, NULL, offsetof(Collection, fp_size), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("toArray", NULL, NULL, offsetof(Collection, fp_toArray), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 0),
        new uFunction("toArray", NULL, NULL, offsetof(Collection, fp_toArray1), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 1, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof())));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(14649)
// -------------------------------------------------------------------------

// public abstract extern interface Iterator :14649
// {
uInterfaceType* Iterator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Iterator", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("hasNext", NULL, NULL, offsetof(Iterator, fp_hasNext), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("next", NULL, NULL, offsetof(Iterator, fp_next), false, ::g::Android::java::lang::Object_typeof(), 0),
        new uFunction("remove", NULL, NULL, offsetof(Iterator, fp_remove), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(14441)
// -------------------------------------------------------------------------

// public abstract extern interface List :14441
// {
uInterfaceType* List_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.List", 0, 0);
    type->Reflection.SetFunctions(25,
        new uFunction("add", NULL, NULL, offsetof(List, fp_add), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("add", NULL, NULL, offsetof(List, fp_add1), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::lang::Object_typeof()),
        new uFunction("addAll", NULL, NULL, offsetof(List, fp_addAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("addAll", NULL, NULL, offsetof(List, fp_addAll1), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::util::Collection_typeof()),
        new uFunction("clear", NULL, NULL, offsetof(List, fp_clear), false, uVoid_typeof(), 0),
        new uFunction("contains", NULL, NULL, offsetof(List, fp_contains), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("containsAll", NULL, NULL, offsetof(List, fp_containsAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("equals", NULL, NULL, offsetof(List, fp_equals), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("get", NULL, NULL, offsetof(List, fp_get), false, ::g::Android::java::lang::Object_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("hashCode", NULL, NULL, offsetof(List, fp_hashCode), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("indexOf", NULL, NULL, offsetof(List, fp_indexOf), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("isEmpty", NULL, NULL, offsetof(List, fp_isEmpty), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("iterator", NULL, NULL, offsetof(List, fp_iterator), false, ::g::Android::java::util::Iterator_typeof(), 0),
        new uFunction("lastIndexOf", NULL, NULL, offsetof(List, fp_lastIndexOf), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("listIterator", NULL, NULL, offsetof(List, fp_listIterator), false, ::g::Android::java::util::ListIterator_typeof(), 0),
        new uFunction("listIterator", NULL, NULL, offsetof(List, fp_listIterator1), false, ::g::Android::java::util::ListIterator_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("remove", NULL, NULL, offsetof(List, fp_remove), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("remove", NULL, NULL, offsetof(List, fp_remove1), false, ::g::Android::java::lang::Object_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("removeAll", NULL, NULL, offsetof(List, fp_removeAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("retainAll", NULL, NULL, offsetof(List, fp_retainAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("set", NULL, NULL, offsetof(List, fp_set), false, ::g::Android::java::lang::Object_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::lang::Object_typeof()),
        new uFunction("size", NULL, NULL, offsetof(List, fp_size), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("subList", NULL, NULL, offsetof(List, fp_subList), false, List_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("toArray", NULL, NULL, offsetof(List, fp_toArray), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 0),
        new uFunction("toArray", NULL, NULL, offsetof(List, fp_toArray1), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 1, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof())));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(14771)
// -------------------------------------------------------------------------

// public abstract extern interface ListIterator :14771
// {
uInterfaceType* ListIterator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.ListIterator", 0, 0);
    type->Reflection.SetFunctions(9,
        new uFunction("add", NULL, NULL, offsetof(ListIterator, fp_add), false, uVoid_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("hasNext", NULL, NULL, offsetof(ListIterator, fp_hasNext), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("hasPrevious", NULL, NULL, offsetof(ListIterator, fp_hasPrevious), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("next", NULL, NULL, offsetof(ListIterator, fp_next), false, ::g::Android::java::lang::Object_typeof(), 0),
        new uFunction("nextIndex", NULL, NULL, offsetof(ListIterator, fp_nextIndex), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("previous", NULL, NULL, offsetof(ListIterator, fp_previous), false, ::g::Android::java::lang::Object_typeof(), 0),
        new uFunction("previousIndex", NULL, NULL, offsetof(ListIterator, fp_previousIndex), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("remove", NULL, NULL, offsetof(ListIterator, fp_remove), false, uVoid_typeof(), 0),
        new uFunction("set", NULL, NULL, offsetof(ListIterator, fp_set), false, uVoid_typeof(), 1, ::g::Android::java::lang::Object_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(3279)
// ------------------------------------------------------------------------

// public sealed extern class Observable :3279
// {
::g::Android::java::lang::Object_type* Observable_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.util.Observable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::util::Observable::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Observable::notifyObservers_38389_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Observable::notifyObservers_38390_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("_Init", NULL, (void*)Observable___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("notifyObservers", NULL, (void*)Observable__notifyObservers_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("notifyObservers", NULL, (void*)Observable__notifyObservers1_fn, 0, false, uVoid_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("notifyObservers_IMPL_38389", NULL, (void*)Observable__notifyObservers_IMPL_38389_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("notifyObservers_IMPL_38390", NULL, (void*)Observable__notifyObservers_IMPL_38390_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public static extern new void _Init() :3283
void Observable___Init2_fn()
{
    Observable::_Init2();
}

// public void notifyObservers() :3337
void Observable__notifyObservers_fn(Observable* __this)
{
    __this->notifyObservers();
}

// public void notifyObservers(Android.java.lang.Object arg0) :3343
void Observable__notifyObservers1_fn(Observable* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->notifyObservers1(arg0);
}

// public static extern void notifyObservers_IMPL_38389(bool arg0, Android.Base.Primitives.ujobject arg1) :3375
void Observable__notifyObservers_IMPL_38389_fn(bool* arg0_, jobject* arg1_)
{
    Observable::notifyObservers_IMPL_38389(*arg0_, *arg1_);
}

// public static extern void notifyObservers_IMPL_38390(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3378
void Observable__notifyObservers_IMPL_38390_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Observable::notifyObservers_IMPL_38390(*arg0_, *arg1_, arg2_);
}

jclass Observable::_javaClass2_;
jmethodID Observable::notifyObservers_38389_ID_;
jmethodID Observable::notifyObservers_38390_ID_;

// public void notifyObservers() [instance] :3337
void Observable::notifyObservers()
{
    Observable::notifyObservers_IMPL_38389(_subclassed, _javaObject);
}

// public void notifyObservers(Android.java.lang.Object arg0) [instance] :3343
void Observable::notifyObservers1(::g::Android::java::lang::Object* arg0)
{
    Observable::notifyObservers_IMPL_38390(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :3283
void Observable::_Init2()
{
    if (Observable::_javaClass2()) { return; }
    INIT_JNI;
    Observable::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/util/Observable"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Observable::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.util.Observable'", 44);; }
}

// public static extern void notifyObservers_IMPL_38389(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3375
void Observable::notifyObservers_IMPL_38389(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Observable::_javaClass2(),Observable::_Init2());
    
    CACHE_METHOD(Observable::notifyObservers_38389_ID(),Observable::_javaClass2(),"notifyObservers","()V",GetMethodID,"Id for fallback method java.util.Observable.notifyObservers could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Observable::_javaClass2(), Observable::notifyObservers_38389_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Observable::notifyObservers_38389_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void notifyObservers_IMPL_38390(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3378
void Observable::notifyObservers_IMPL_38390(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Observable::_javaClass2(),Observable::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Observable::notifyObservers_38390_ID(),Observable::_javaClass2(),"notifyObservers","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.Observable.notifyObservers could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Observable::_javaClass2(), Observable::notifyObservers_38390_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Observable::notifyObservers_38390_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno(14979)
// -------------------------------------------------------------------------

// public abstract extern interface Observer :14979
// {
uInterfaceType* Observer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Observer", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("update", NULL, NULL, offsetof(Observer, fp_update), false, uVoid_typeof(), 2, ::g::Android::java::util::Observable_typeof(), ::g::Android::java::lang::Object_typeof()));
    return type;
}
// }

}}}} // ::g::Android::java::util
