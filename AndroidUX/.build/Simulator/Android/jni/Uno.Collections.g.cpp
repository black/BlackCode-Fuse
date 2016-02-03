// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ConcurrentCollection-1.DeferLockImpl.h>
#include <Uno.Collections.ConcurrentCollection-1.h>
#include <Uno.Collections.ConcurrentCollection-1.ModItem.h>
#include <Uno.Collections.Dictionary-2.Bucket.h>
#include <Uno.Collections.Dictionary-2.BucketState.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EmptyEnumerable-1.h>
#include <Uno.Collections.EmptyEnumerator-1.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.EnumerableExtensions.LinkedList-1.h>
#include <Uno.Collections.HashSet-1.Enumerator.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.LinkedList-1.Enumerator.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.LinkedListNode-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Collections.OrderByCompare-1.h>
#include <Uno.Collections.Queue-1.Enumerator.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Collections.SelectEnumerable-2.h>
#include <Uno.Collections.SelectEnumerator-2.h>
#include <Uno.Collections.Stack-1.Enumerator.h>
#include <Uno.Collections.Stack-1.h>
#include <Uno.Collections.UnionEnumerable-1.h>
#include <Uno.Collections.UnionEnumerator-1.h>
#include <Uno.Collections.WhereEnumerable-1.h>
#include <Uno.Collections.WhereEnumerator-1.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Generic.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
static uString* STRINGS[12];
static uType* TYPES[47];

namespace g{
namespace Uno{
namespace Collections{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(18)
// ---------------------------------------------------------------------------

// internal struct Dictionary<TKey, TValue>.Bucket :18
// {
uStructType* Dictionary__Bucket_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.Dictionary`2.Bucket", options);
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Collections::Dictionary__BucketState_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(10)
// ---------------------------------------------------------------------------

// internal enum Dictionary<TKey, TValue>.BucketState :10
uEnumType* Dictionary__BucketState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Collections.Dictionary`2.BucketState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Empty", 0LL,
        "Used", 1LL,
        "Dummy", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Internal\$.uno(146)
// ---------------------------------------------------------------

// internal sealed class ConcurrentCollection<T> :146
// {
ConcurrentCollection_type* ConcurrentCollection_typeof()
{
    static uSStrong<ConcurrentCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(ConcurrentCollection);
    options.TypeSize = sizeof(ConcurrentCollection_type);
    type = (ConcurrentCollection_type*)uClassType::New("Uno.Collections.ConcurrentCollection`1", options);
    type->fp_ctor_ = (void*)ConcurrentCollection__New1_fn;
    type->interface0.fp_Clear = (void(*)(uObject*))ConcurrentCollection__Clear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))ConcurrentCollection__Add_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))ConcurrentCollection__Remove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))ConcurrentCollection__Contains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))ConcurrentCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))ConcurrentCollection__GetEnumerator_fn;
    ::TYPES[0] = ::g::Uno::Collections::List_typeof();
    ::TYPES[1] = ConcurrentCollection__ModItem_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Bool_typeof();
    ::TYPES[4] = ConcurrentCollection__DeferLockImpl_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(type->T(0)),
        ::TYPES[1/*Uno.Collections.ConcurrentCollection`1.ModItem*/]->MakeType(type->T(0)),
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(::TYPES[1/*Uno.Collections.ConcurrentCollection`1.ModItem*/]->MakeType(type->T(0))),
        ::TYPES[4/*Uno.Collections.ConcurrentCollection`1.DeferLockImpl*/]->MakeType(type->T(0)),
        ::TYPES[6/*Uno.Collections.List`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(ConcurrentCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ConcurrentCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ConcurrentCollection, _back), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Collections::ConcurrentCollection, _defer), 0,
        ConcurrentCollection__DeferLockImpl_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ConcurrentCollection, _lockImpl), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(ConcurrentCollection__ModItem_typeof()->MakeType(type->T(0))), offsetof(::g::Uno::Collections::ConcurrentCollection, _mod), 0);
    return type;
}

// public generated ConcurrentCollection() :146
void ConcurrentCollection__ctor__fn(ConcurrentCollection* __this)
{
    __this->ctor_();
}

// public void Add(T item) :200
void ConcurrentCollection__Add_fn(ConcurrentCollection* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __this->__type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT collection1(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret2(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ;
    ;

    if (__this->_defer)
    {
        for (int i = 0; i < uPtr(__this->Mod())->Count(); ++i)
            if (::g::Uno::Object::Equals1(uBoxPtr(__types[0], (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->Mod()), uCRef<int>(i), &ret2), ret2)[0/*Item*/]), uBoxPtr(__types[0], item)) && !(::g::Uno::Collections::List__get_Item_fn(uPtr(__this->Mod()), uCRef<int>(i), &ret3), ret3)[1/*Add*/].Value<bool>())
            {
                uPtr(__this->Mod())->RemoveAt(i);
                return;
            }

        ::g::Uno::Collections::List__Add_fn(uPtr(__this->Mod()), (collection1.Default(), collection1[0/*Item*/] = item, collection1[1/*Add*/].Value<bool>() = true, collection1));
    }
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_back), item);
}

// public void Clear() :193
void ConcurrentCollection__Clear_fn(ConcurrentCollection* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :246
void ConcurrentCollection__Contains_fn(ConcurrentCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __this->__type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT m(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    bool ret5;

    if (__this->_mod != NULL)

        for (int i = 0; i < uPtr(__this->_mod)->Count(); ++i)
        {
            m = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_mod), uCRef<int>(i), &ret4), ret4);

            if (!::g::Uno::Object::Equals1(uBoxPtr(__types[0], m[0/*Item*/]), uBoxPtr(__types[0], item)))
                continue;

            return *__retval = m[1/*Add*/].Value<bool>(), void();
        }

    return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(__this->_back), item, &ret5), ret5), void();
}

// public int get_Count() :265
void ConcurrentCollection__get_Count_fn(ConcurrentCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void DeferChanges() :169
void ConcurrentCollection__DeferChanges_fn(ConcurrentCollection* __this)
{
    __this->DeferChanges();
}

// public Uno.IDisposable DeferLock() :313
void ConcurrentCollection__DeferLock_fn(ConcurrentCollection* __this, uObject** __retval)
{
    *__retval = __this->DeferLock();
}

// public void EndDefer() :174
void ConcurrentCollection__EndDefer_fn(ConcurrentCollection* __this)
{
    __this->EndDefer();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :292
void ConcurrentCollection__GetEnumerator_fn(ConcurrentCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public T get_Item(int index) :286
void ConcurrentCollection__get_Item_fn(ConcurrentCollection* __this, int* index, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int index_ = *index;
    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_back), uCRef<int>(index_), &ret14), ret14)), void();
}

// private Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem> get_Mod() :159
void ConcurrentCollection__get_Mod_fn(ConcurrentCollection* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Mod();
}

// public generated ConcurrentCollection New() :146
void ConcurrentCollection__New1_fn(uType* __type, ConcurrentCollection** __retval)
{
    *__retval = ConcurrentCollection::New1(__type);
}

// public bool Remove(T item) :220
void ConcurrentCollection__Remove_fn(ConcurrentCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __this->__type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT collection2(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret9(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret10(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ;
    ;
    bool ret11;
    bool ret12;

    if (__this->_defer)
    {
        for (int i = 0; i < uPtr(__this->Mod())->Count(); ++i)
            if (::g::Uno::Object::Equals1(uBoxPtr(__types[0], (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->Mod()), uCRef<int>(i), &ret9), ret9)[0/*Item*/]), uBoxPtr(__types[0], item)) && (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->Mod()), uCRef<int>(i), &ret10), ret10)[1/*Add*/].Value<bool>())
            {
                uPtr(__this->Mod())->RemoveAt(i);
                return *__retval = true, void();
            }

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(__this->_back), item, &ret11), ret11))
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(__this->Mod()), (collection2.Default(), collection2[0/*Item*/] = item, collection2[1/*Add*/].Value<bool>() = false, collection2));
            return *__retval = true, void();
        }

        return *__retval = false, void();
    }

    return *__retval = (::g::Uno::Collections::List__Remove_fn(uPtr(__this->_back), item, &ret12), ret12), void();
}

// public generated ConcurrentCollection() [instance] :146
void ConcurrentCollection::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->T(0),
    };
    _back = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// public void Clear() [instance] :193
void ConcurrentCollection::Clear()
{
    uPtr(_back)->Clear();

    if (_mod != NULL)
        uPtr(_mod)->Clear();
}

// public int get_Count() [instance] :265
int ConcurrentCollection::Count()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int c = uPtr(_back)->Count();

    if (_mod != NULL)

        for (int i = 0; i < uPtr(_mod)->Count(); ++i)
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_mod), uCRef<int>(i), &ret13), ret13)[1/*Add*/].Value<bool>())
                c++;
            else
                c--;

    return c;
}

// public void DeferChanges() [instance] :169
void ConcurrentCollection::DeferChanges()
{
    _defer = true;
}

// public Uno.IDisposable DeferLock() [instance] :313
uObject* ConcurrentCollection::DeferLock()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.ConcurrentCollection<T>.DeferLockImpl*/),
        __type->T(0),
    };

    if (_lockImpl == NULL)
        _lockImpl = ConcurrentCollection__DeferLockImpl::New1(__types[0], this);

    DeferChanges();
    return (uObject*)_lockImpl;
}

// public void EndDefer() [instance] :174
void ConcurrentCollection::EndDefer()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __type->T(0),
        __type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT a(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret7;
    _defer = false;

    if (_mod != NULL)
    {
        for (int i = 0; i < uPtr(_mod)->Count(); ++i)
        {
            a = (::g::Uno::Collections::List__get_Item_fn(uPtr(_mod), uCRef<int>(i), &ret6), ret6);

            if (a[1/*Add*/].Value<bool>())
                ::g::Uno::Collections::List__Add_fn(uPtr(_back), a[0/*Item*/]);
            else
                ::g::Uno::Collections::List__Remove_fn(uPtr(_back), a[0/*Item*/], &ret7);
        }

        uPtr(_mod)->Clear();
    }
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :292
uObject* ConcurrentCollection::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(4/*Uno.Collections.List<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(5/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_back), &ret8), ret8));
}

// private Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem> get_Mod() [instance] :159
::g::Uno::Collections::List* ConcurrentCollection::Mod()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
        __type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __type->T(0),
    };

    if (_mod == NULL)
        _mod = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));

    return _mod;
}

// public generated ConcurrentCollection New() [static] :146
ConcurrentCollection* ConcurrentCollection::New1(uType* __type)
{
    ConcurrentCollection* obj1 = (ConcurrentCollection*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Internal\$.uno(297)
// ---------------------------------------------------------------

// private sealed class ConcurrentCollection<T>.DeferLockImpl :297
// {
ConcurrentCollection__DeferLockImpl_type* ConcurrentCollection__DeferLockImpl_typeof()
{
    static uSStrong<ConcurrentCollection__DeferLockImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ConcurrentCollection__DeferLockImpl);
    options.TypeSize = sizeof(ConcurrentCollection__DeferLockImpl_type);
    type = (ConcurrentCollection__DeferLockImpl_type*)uClassType::New("Uno.Collections.ConcurrentCollection`1.DeferLockImpl", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))ConcurrentCollection__DeferLockImpl__Dispose_fn;
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ConcurrentCollection__DeferLockImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ConcurrentCollection__DeferLockImpl, _collection), 0);
    return type;
}

// public DeferLockImpl(Uno.Collections.ConcurrentCollection<T> c) :300
void ConcurrentCollection__DeferLockImpl__ctor__fn(ConcurrentCollection__DeferLockImpl* __this, ::g::Uno::Collections::ConcurrentCollection* c)
{
    __this->ctor_(c);
}

// public void Dispose() :305
void ConcurrentCollection__DeferLockImpl__Dispose_fn(ConcurrentCollection__DeferLockImpl* __this)
{
    __this->Dispose();
}

// public DeferLockImpl New(Uno.Collections.ConcurrentCollection<T> c) :300
void ConcurrentCollection__DeferLockImpl__New1_fn(uType* __type, ::g::Uno::Collections::ConcurrentCollection* c, ConcurrentCollection__DeferLockImpl** __retval)
{
    *__retval = ConcurrentCollection__DeferLockImpl::New1(__type, c);
}

// public DeferLockImpl(Uno.Collections.ConcurrentCollection<T> c) [instance] :300
void ConcurrentCollection__DeferLockImpl::ctor_(::g::Uno::Collections::ConcurrentCollection* c)
{
    _collection = c;
}

// public void Dispose() [instance] :305
void ConcurrentCollection__DeferLockImpl::Dispose()
{
    uPtr(_collection)->EndDefer();
}

// public DeferLockImpl New(Uno.Collections.ConcurrentCollection<T> c) [static] :300
ConcurrentCollection__DeferLockImpl* ConcurrentCollection__DeferLockImpl::New1(uType* __type, ::g::Uno::Collections::ConcurrentCollection* c)
{
    ConcurrentCollection__DeferLockImpl* obj1 = (ConcurrentCollection__DeferLockImpl*)uNew(__type);
    obj1->ctor_(c);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(8)
// --------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue> :8
// {
Dictionary_type* Dictionary_typeof()
{
    static uSStrong<Dictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 8;
    options.ObjectSize = sizeof(Dictionary);
    options.TypeSize = sizeof(Dictionary_type);
    type = (Dictionary_type*)uClassType::New("Uno.Collections.Dictionary`2", options);
    type->fp_ctor_ = (void*)Dictionary__New1_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))Dictionary__Uno_Collections_ICollection_Uno_Collections_KeyValuePair_TKey__TValue___Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__Uno_Collections_ICollection_Uno_Collections_KeyValuePair_TKey__TValue___Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__Uno_Collections_ICollection_Uno_Collections_KeyValuePair_TKey__TValue___Contains_fn;
    type->interface0.fp_TryGetValue = (void(*)(uObject*, void*, uTRef, bool*))Dictionary__TryGetValue_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))Dictionary__Clear_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))Dictionary__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__GetEnumerator_boxed_fn;
    ::STRINGS[0] = uString::Const("Dictionary already contains the given key");
    ::STRINGS[1] = uString::Const("Dictionary did not contain the given key");
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[9] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[11] = Dictionary__Bucket_typeof();
    ::TYPES[12] = ::g::Uno::Generic_typeof();
    ::TYPES[13] = Dictionary__Enumerator_typeof();
    ::TYPES[14] = Dictionary__KeyCollection_typeof();
    ::TYPES[15] = Dictionary__ValueCollection_typeof();
    type->SetPrecalc(
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1))->Array(),
        ::TYPES[9/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(::TYPES[9/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1))),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[12/*Uno.Generic*/]->MakeMethod(1, type->T(0)),
        ::TYPES[13/*Uno.Collections.Dictionary`2.Enumerator*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[14/*Uno.Collections.Dictionary`2.KeyCollection*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[15/*Uno.Collections.Dictionary`2.ValueCollection*/]->MakeType(type->T(0), type->T(1)));
    type->SetInterfaces(
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1)), offsetof(Dictionary_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1))), offsetof(Dictionary_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1))), offsetof(Dictionary_type, interface2));
    type->SetFields(0,
        Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1))->Array(), offsetof(::g::Uno::Collections::Dictionary, _buckets), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _count), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _dummies), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _version), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("Add", NULL, (void*)Dictionary__Add_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction("Clear", NULL, (void*)Dictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("ContainsKey", NULL, (void*)Dictionary__ContainsKey_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)Dictionary__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__GetEnumerator_fn, 0, false, Dictionary__Enumerator_typeof()->MakeType(type->T(0), type->T(1)), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1))), 0),
        new uFunction("get_Item", NULL, (void*)Dictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)Dictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction("get_Keys", NULL, (void*)Dictionary__get_Keys_fn, 0, false, Dictionary__KeyCollection_typeof()->MakeType(type->T(0), type->T(1)), 0),
        new uFunction(".ctor", type, (void*)Dictionary__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Dictionary__New2_fn, 0, true, type, 1, ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1))),
        new uFunction("Remove", NULL, (void*)Dictionary__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("TryGetValue", NULL, (void*)Dictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()),
        new uFunction("get_Values", NULL, (void*)Dictionary__get_Values_fn, 0, false, Dictionary__ValueCollection_typeof()->MakeType(type->T(0), type->T(1)), 0));
    return type;
}

// public Dictionary() :267
void Dictionary__ctor__fn(Dictionary* __this)
{
    __this->ctor_();
}

// public Dictionary(Uno.Collections.IDictionary<TKey, TValue> dictionary) :274
void Dictionary__ctor_1_fn(Dictionary* __this, uObject* dictionary)
{
    __this->ctor_1(dictionary);
}

// public void Add(TKey key, TValue value) :329
void Dictionary__Add_fn(Dictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->Precalced(4/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret6;

    if ((__this->_count + __this->_dummies) > (uPtr(__this->_buckets)->Length() / 2))
        __this->Rehash();

    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 1;
            uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
            uPtr(__this->_buckets)->TItem(x)[0/*Key*/] = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 2)
        {
            uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 1;
            uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
            uPtr(__this->_buckets)->TItem(x)[0/*Key*/] = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret6), ret6))
                U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Dictionary ...*/]));
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public void Clear() :315
void Dictionary__Clear_fn(Dictionary* __this)
{
    __this->Clear();
}

// public bool ContainsKey(TKey key) :428
void Dictionary__ContainsKey_fn(Dictionary* __this, void* key, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->T(1),
        __this->__type->Precalced(4/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret7;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret7), ret7))
                return *__retval = true, void();
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            return *__retval = false, void();

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public int get_Count() :299
void Dictionary__get_Count_fn(Dictionary* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() :282
void Dictionary__GetEnumerator_fn(Dictionary* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(5/*Uno.Collections.Dictionary<TKey, TValue>.Enumerator*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((Dictionary__Enumerator__New1_fn(__types[0], __this, &ret8), ret8)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() :282
void Dictionary__GetEnumerator_boxed_fn(Dictionary* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public TValue get_Item(TKey key) :455
void Dictionary__get_Item_fn(Dictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->T(1),
        __this->__type->Precalced(4/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret13;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret13), ret13))
                return __retval.Store(uPtr(__this->_buckets)->TItem(x)[1/*Value*/]), void();
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Dictionary ...*/]));

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public void set_Item(TKey key, TValue value) :479
void Dictionary__set_Item_fn(Dictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->Precalced(4/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret14;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret14), ret14))
            {
                uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
                __this->_version++;
                return;
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            Dictionary__Add_fn(__this, key, value);
            return;
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection get_Keys() :289
void Dictionary__get_Keys_fn(Dictionary* __this, Dictionary__KeyCollection** __retval)
{
    *__retval = __this->Keys();
}

// public Dictionary New() :267
void Dictionary__New1_fn(uType* __type, Dictionary** __retval)
{
    *__retval = Dictionary::New1(__type);
}

// public Dictionary New(Uno.Collections.IDictionary<TKey, TValue> dictionary) :274
void Dictionary__New2_fn(uType* __type, uObject* dictionary, Dictionary** __retval)
{
    *__retval = Dictionary::New2(__type, dictionary);
}

// private void Rehash() :302
void Dictionary__Rehash_fn(Dictionary* __this)
{
    __this->Rehash();
}

// public bool Remove(TKey key) :397
void Dictionary__Remove_fn(Dictionary* __this, void* key, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->T(1),
        __this->__type->Precalced(4/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret9;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret9), ret9))
            {
                uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 2;
                uPtr(__this->_buckets)->TItem(x)[1/*Value*/].Default();
                uPtr(__this->_buckets)->TItem(x)[0/*Key*/].Default();
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return *__retval = true, void();
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            return *__retval = false, void();

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public bool TryGetValue(TKey key, TValue& value) :370
void Dictionary__TryGetValue_fn(Dictionary* __this, void* key, uTRef value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->Precalced(4/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret10;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret10), ret10))
            {
                value.Store(uPtr(__this->_buckets)->TItem(x)[1/*Value*/]);
                return *__retval = true, void();
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            value.Default(__types[1]);
            return *__retval = false, void();
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// private void Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Add(Uno.Collections.KeyValuePair<TKey, TValue> item) :508
void Dictionary__Uno_Collections_ICollection_Uno_Collections_KeyValuePair_TKey__TValue___Add_fn(Dictionary* __this, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uT ret11(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT item_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[2], U_ALLOCA(__types[2]->ValueSize));
    ;
    item_ = item;
    ;
    Dictionary__Add_fn(__this, (::g::Uno::Collections::KeyValuePair__get_Key_fn(&item_, __types[0], &ret11), ret11), (::g::Uno::Collections::KeyValuePair__get_Value_fn(&item_, __types[0], &ret12), ret12));
}

// private bool Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Contains(Uno.Collections.KeyValuePair<TKey, TValue> item) :518
void Dictionary__Uno_Collections_ICollection_Uno_Collections_KeyValuePair_TKey__TValue___Contains_fn(Dictionary* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Remove(Uno.Collections.KeyValuePair<TKey, TValue> item) :513
void Dictionary__Uno_Collections_ICollection_Uno_Collections_KeyValuePair_TKey__TValue___Remove_fn(Dictionary* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection get_Values() :294
void Dictionary__get_Values_fn(Dictionary* __this, Dictionary__ValueCollection** __retval)
{
    *__retval = __this->Values();
}

// public Dictionary() [instance] :267
void Dictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    _buckets = uArray::New(__types[0], 8);
    _count = 0;
    _dummies = 0;
}

// public Dictionary(Uno.Collections.IDictionary<TKey, TValue> dictionary) [instance] :274
void Dictionary::ctor_1(uObject* dictionary)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(2/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret5(__types[2], U_ALLOCA(__types[2]->ValueSize));
    uT keyValuePair(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    ctor_();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(dictionary), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        keyValuePair = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[3]), &ret3), ret3);
        Dictionary__Add_fn(this, (::g::Uno::Collections::KeyValuePair__get_Key_fn(&keyValuePair, __types[0], &ret4), ret4), (::g::Uno::Collections::KeyValuePair__get_Value_fn(&keyValuePair, __types[0], &ret5), ret5));
    }
}

// public void Clear() [instance] :315
void Dictionary::Clear()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->T(0),
        __type->T(1),
    };

    for (int i = 0; i < uPtr(_buckets)->Length(); i++)
    {
        uPtr(_buckets)->TItem(i)[2/*State*/].Value<int>() = 0;
        uPtr(_buckets)->TItem(i)[1/*Value*/].Default();
        uPtr(_buckets)->TItem(i)[0/*Key*/].Default();
    }

    _count = 0;
    _dummies = 0;
    _version++;
}

// public int get_Count() [instance] :299
int Dictionary::Count()
{
    return _count;
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() [instance] :282
uObject* Dictionary::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(5/*Uno.Collections.Dictionary<TKey, TValue>.Enumerator*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(2/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
        __type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (Dictionary__GetEnumerator_fn(this, &ret15), ret15));
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection get_Keys() [instance] :289
Dictionary__KeyCollection* Dictionary::Keys()
{
    uType* __types[] = {
        __type->Precalced(6/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection*/),
        __type->T(0),
        __type->T(1),
    };
    return Dictionary__KeyCollection::New1(__types[0], this);
}

// private void Rehash() [instance] :302
void Dictionary::Rehash()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->T(0),
        __type->T(1),
    };
    uArray* oldBuckets = _buckets;
    _buckets = uArray::New(__types[0], uPtr(oldBuckets)->Length() * 2);
    _count = 0;
    _dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
        if (oldBuckets->TItem(i)[2/*State*/].Value<int>() == 1)
            Dictionary__Add_fn(this, oldBuckets->TItem(i)[0/*Key*/], oldBuckets->TItem(i)[1/*Value*/]);
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection get_Values() [instance] :294
Dictionary__ValueCollection* Dictionary::Values()
{
    uType* __types[] = {
        __type->Precalced(7/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection*/),
        __type->T(0),
        __type->T(1),
    };
    return Dictionary__ValueCollection::New1(__types[0], this);
}

// public Dictionary New() [static] :267
Dictionary* Dictionary::New1(uType* __type)
{
    Dictionary* obj1 = (Dictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public Dictionary New(Uno.Collections.IDictionary<TKey, TValue> dictionary) [static] :274
Dictionary* Dictionary::New2(uType* __type, uObject* dictionary)
{
    Dictionary* obj2 = (Dictionary*)uNew(__type);
    obj2->ctor_1(dictionary);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(5)
// ----------------------------------------------------------------------

// public sealed class EmptyEnumerable<T> :5
// {
EmptyEnumerable_type* EmptyEnumerable_typeof()
{
    static uSStrong<EmptyEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(EmptyEnumerable);
    options.TypeSize = sizeof(EmptyEnumerable_type);
    type = (EmptyEnumerable_type*)uClassType::New("Uno.Collections.EmptyEnumerable`1", options);
    type->fp_ctor_ = (void*)EmptyEnumerable__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))EmptyEnumerable__GetEnumerator_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[16] = ::g::Uno::Collections::EmptyEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[16/*Uno.Collections.EmptyEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(EmptyEnumerable_type, interface0));
    type->Reflection.SetFunctions(2,
        new uFunction("GetEnumerator", NULL, (void*)EmptyEnumerable__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction(".ctor", type, (void*)EmptyEnumerable__New1_fn, 0, true, type, 0));
    return type;
}

// public generated EmptyEnumerable() :5
void EmptyEnumerable__ctor__fn(EmptyEnumerable* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :7
void EmptyEnumerable__GetEnumerator_fn(EmptyEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public generated EmptyEnumerable New() :5
void EmptyEnumerable__New1_fn(uType* __type, EmptyEnumerable** __retval)
{
    *__retval = EmptyEnumerable::New1(__type);
}

// public generated EmptyEnumerable() [instance] :5
void EmptyEnumerable::ctor_()
{
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :7
uObject* EmptyEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.EmptyEnumerator<T>*/),
    };
    return (uObject*)((::g::Uno::Collections::EmptyEnumerator*)::g::Uno::Collections::EmptyEnumerator::New1(__types[2]));
}

// public generated EmptyEnumerable New() [static] :5
EmptyEnumerable* EmptyEnumerable::New1(uType* __type)
{
    EmptyEnumerable* obj1 = (EmptyEnumerable*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(13)
// -----------------------------------------------------------------------

// internal sealed class EmptyEnumerator<T> :13
// {
EmptyEnumerator_type* EmptyEnumerator_typeof()
{
    static uSStrong<EmptyEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EmptyEnumerator);
    options.TypeSize = sizeof(EmptyEnumerator_type);
    type = (EmptyEnumerator_type*)uClassType::New("Uno.Collections.EmptyEnumerator`1", options);
    type->fp_ctor_ = (void*)EmptyEnumerator__New1_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))EmptyEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))EmptyEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))EmptyEnumerator__MoveNext_fn;
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(EmptyEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EmptyEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(EmptyEnumerator_type, interface2));
    return type;
}

// public generated EmptyEnumerator() :13
void EmptyEnumerator__ctor__fn(EmptyEnumerator* __this)
{
    __this->ctor_();
}

// public T get_Current() :15
void EmptyEnumerator__get_Current_fn(EmptyEnumerator* __this, uTRef __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public void Dispose() :18
void EmptyEnumerator__Dispose_fn(EmptyEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :17
void EmptyEnumerator__MoveNext_fn(EmptyEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public generated EmptyEnumerator New() :13
void EmptyEnumerator__New1_fn(uType* __type, EmptyEnumerator** __retval)
{
    *__retval = EmptyEnumerator::New1(__type);
}

// public generated EmptyEnumerator() [instance] :13
void EmptyEnumerator::ctor_()
{
}

// public void Dispose() [instance] :18
void EmptyEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :17
bool EmptyEnumerator::MoveNext()
{
    return false;
}

// public generated EmptyEnumerator New() [static] :13
EmptyEnumerator* EmptyEnumerator::New1(uType* __type)
{
    EmptyEnumerator* obj1 = (EmptyEnumerator*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(26)
// -----------------------------------------------------------------------

// public static class EnumerableExtensions :26
// {
uClassType* EnumerableExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Collections.EnumerableExtensions", options);
    ::TYPES[17] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[18] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[19] = ::g::Uno::Predicate_typeof();
    ::TYPES[20] = ::g::Uno::Comparison_typeof();
    ::TYPES[21] = ::g::Uno::Collections::OrderByCompare_typeof();
    ::TYPES[22] = ::g::Uno::Collections::SelectEnumerable_typeof();
    ::TYPES[23] = EnumerableExtensions__LinkedList_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[0] = ::g::Uno::Collections::List_typeof();
    ::TYPES[24] = ::g::Uno::Collections::UnionEnumerable_typeof();
    ::TYPES[25] = ::g::Uno::Collections::WhereEnumerable_typeof();
    type->Reflection.SetFunctions(11,
        new uFunction("AsEnumerable`1", type, (void*)EnumerableExtensions__AsEnumerable_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), 1, type->U(0)->Array()),
        new uFunction("Count`1", type, (void*)EnumerableExtensions__Count_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("First`1", type, (void*)EnumerableExtensions__First_fn, 0, true, type->U(0), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("FirstOrDefault`1", type, (void*)EnumerableExtensions__FirstOrDefault_fn, 0, true, type->U(0), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("FirstOrDefault`1", type, (void*)EnumerableExtensions__FirstOrDefault1_fn, 0, true, type->U(0), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), ::g::Uno::Predicate_typeof()->MakeType(type->U(0))),
        new uFunction("OrderBy`1", type, (void*)EnumerableExtensions__OrderBy1_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), ::g::Uno::Func2_typeof()->MakeType(type->U(0), type->U(0), ::g::Uno::Int_typeof())),
        new uFunction("Select`2", type, (void*)EnumerableExtensions__Select_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(1)), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), ::g::Uno::Func1_typeof()->MakeType(type->U(0), type->U(1))),
        new uFunction("ToArray`1", type, (void*)EnumerableExtensions__ToArray_fn, 0, true, type->U(0)->Array(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("ToList`1", type, (void*)EnumerableExtensions__ToList_fn, 0, true, ::g::Uno::Collections::List_typeof()->MakeType(type->U(0)), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("Union`1", type, (void*)EnumerableExtensions__Union_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("Where`1", type, (void*)EnumerableExtensions__Where_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), ::g::Uno::Predicate_typeof()->MakeType(type->U(0))));
    return type;
}

// public static Uno.Collections.IEnumerable<T> AsEnumerable<T>(T[] self) :28
void EnumerableExtensions__AsEnumerable_fn(uType* __type, uArray* self, uObject** __retval)
{
    *__retval = EnumerableExtensions::AsEnumerable(__type, self);
}

// public static int Count<T>(Uno.Collections.IEnumerable<T> self) :132
void EnumerableExtensions__Count_fn(uType* __type, uObject* self, int* __retval)
{
    *__retval = EnumerableExtensions::Count(__type, self);
}

// public static T First<T>(Uno.Collections.IEnumerable<T> self) :162
void EnumerableExtensions__First_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret6), ret6);
        return __retval.Store(item), void();
    }

    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public static T FirstOrDefault<T>(Uno.Collections.IEnumerable<T> self) :177
void EnumerableExtensions__FirstOrDefault_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret7), ret7);
        return __retval.Store(item), void();
    }

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// public static T FirstOrDefault<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> where) :169
void EnumerableExtensions__FirstOrDefault1_fn(uType* __type, uObject* self, uDelegate* where, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
        ::TYPES[19/*Uno.Predicate`1*/]->MakeType(__type->U(0)),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret9;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret8), ret8);

        if ((uPtr(where)->Invoke(&ret9, 1, (void*)item), ret9))
            return __retval.Store(item), void();
    }

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// public static Uno.Collections.IEnumerable<T> OrderBy<T>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, T, int> orderFunction) :45
void EnumerableExtensions__OrderBy1_fn(uType* __type, uObject* self, uDelegate* orderFunction, uObject** __retval)
{
    *__retval = EnumerableExtensions::OrderBy1(__type, self, orderFunction);
}

// public static Uno.Collections.IEnumerable<TRet> Select<T, TRet>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, TRet> func) :52
void EnumerableExtensions__Select_fn(uType* __type, uObject* self, uDelegate* func, uObject** __retval)
{
    *__retval = EnumerableExtensions::Select(__type, self, func);
}

// public static T[] ToArray<T>(Uno.Collections.IEnumerable<T> self) :91
void EnumerableExtensions__ToArray_fn(uType* __type, uObject* self, uArray** __retval)
{
    *__retval = EnumerableExtensions::ToArray(__type, self);
}

// public static Uno.Collections.List<T> ToList<T>(Uno.Collections.IEnumerable<T> self) :107
void EnumerableExtensions__ToList_fn(uType* __type, uObject* self, ::g::Uno::Collections::List** __retval)
{
    *__retval = EnumerableExtensions::ToList(__type, self);
}

// public static Uno.Collections.IEnumerable<T> Union<T>(Uno.Collections.IEnumerable<T> self, Uno.Collections.IEnumerable<T> other) :57
void EnumerableExtensions__Union_fn(uType* __type, uObject* self, uObject* other, uObject** __retval)
{
    *__retval = EnumerableExtensions::Union(__type, self, other);
}

// public static Uno.Collections.IEnumerable<T> Where<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> predicate) :62
void EnumerableExtensions__Where_fn(uType* __type, uObject* self, uDelegate* predicate, uObject** __retval)
{
    *__retval = EnumerableExtensions::Where(__type, self, predicate);
}

// public static Uno.Collections.IEnumerable<T> AsEnumerable<T>(T[] self) [static] :28
uObject* EnumerableExtensions::AsEnumerable(uType* __type, uArray* self)
{
    uType* __types[] = {
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[18/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(__type->U(0)),
    };
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[2], self));
}

// public static int Count<T>(Uno.Collections.IEnumerable<T> self) [static] :132
int EnumerableExtensions::Count(uType* __type, uObject* self)
{
    int c = 0;
    uObject* enumerator = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0))));

    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enumerator), ::g::Uno::Collections::IEnumerator_typeof())))
        c++;

    return c;
}

// public static Uno.Collections.IEnumerable<T> OrderBy<T>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, T, int> orderFunction) [static] :45
uObject* EnumerableExtensions::OrderBy1(uType* __type, uObject* self, uDelegate* orderFunction)
{
    uType* __types[] = {
        EnumerableExtensions_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        ::TYPES[20/*Uno.Comparison`1*/]->MakeType(__type->U(0)),
        ::TYPES[21/*Uno.Collections.OrderByCompare`1*/]->MakeType(__type->U(0)),
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
    };
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)EnumerableExtensions::ToList(__types[0], self);
    uPtr(list)->Sort(uDelegate::New(__types[2], (void*)::g::Uno::Collections::OrderByCompare__Compare_fn, (::g::Uno::Collections::OrderByCompare*)::g::Uno::Collections::OrderByCompare::New1(__types[3], orderFunction)));
    return (uObject*)list;
}

// public static Uno.Collections.IEnumerable<TRet> Select<T, TRet>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, TRet> func) [static] :52
uObject* EnumerableExtensions::Select(uType* __type, uObject* self, uDelegate* func)
{
    uType* __types[] = {
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(1)),
        __type->U(1),
        ::TYPES[22/*Uno.Collections.SelectEnumerable`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
    };
    return (uObject*)((::g::Uno::Collections::SelectEnumerable*)::g::Uno::Collections::SelectEnumerable::New1(__types[2], self, func));
}

// public static T[] ToArray<T>(Uno.Collections.IEnumerable<T> self) [static] :91
uArray* EnumerableExtensions::ToArray(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
        ::TYPES[23/*Uno.Collections.EnumerableExtensions.LinkedList`1*/]->MakeType(__type->U(0)),
        __type->U(0)->Array(),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    EnumerableExtensions__LinkedList* ret16;
    EnumerableExtensions__LinkedList* head = NULL;
    int count = 0;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret15), ret15);
        head = (EnumerableExtensions__LinkedList__New1_fn(__types[2], item, head, &ret16), ret16);
        count++;
    }

    uArray* res = uArray::New(__types[3], count);

    for (EnumerableExtensions__LinkedList* current = head; current != NULL; current = (EnumerableExtensions__LinkedList*)uPtr(current)->Next)
        res->TItem(--count) = uPtr(current)->Item();

    return res;
}

// public static Uno.Collections.List<T> ToList<T>(Uno.Collections.IEnumerable<T> self) [static] :107
::g::Uno::Collections::List* EnumerableExtensions::ToList(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
        ::TYPES[23/*Uno.Collections.EnumerableExtensions.LinkedList`1*/]->MakeType(__type->U(0)),
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(__type->U(0)),
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        ::TYPES[18/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(__type->U(0)),
        __type->U(0)->Array(),
    };
    uT ret17(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    EnumerableExtensions__LinkedList* ret18;
    EnumerableExtensions__LinkedList* head = NULL;
    int count = 0;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[4])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret17), ret17);
        head = (EnumerableExtensions__LinkedList__New1_fn(__types[2], item, head, &ret18), ret18);
        count++;
    }

    ::g::Uno::Collections::List* res = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(__types[3], count);
    res->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[5], uArray::New(__types[6], count))));

    for (EnumerableExtensions__LinkedList* current = head; current != NULL; current = (EnumerableExtensions__LinkedList*)uPtr(current)->Next)
        ::g::Uno::Collections::List__set_Item_fn(res, uCRef<int>(--count), uPtr(current)->Item());

    return res;
}

// public static Uno.Collections.IEnumerable<T> Union<T>(Uno.Collections.IEnumerable<T> self, Uno.Collections.IEnumerable<T> other) [static] :57
uObject* EnumerableExtensions::Union(uType* __type, uObject* self, uObject* other)
{
    uType* __types[] = {
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[24/*Uno.Collections.UnionEnumerable`1*/]->MakeType(__type->U(0)),
    };
    return (uObject*)((::g::Uno::Collections::UnionEnumerable*)::g::Uno::Collections::UnionEnumerable::New1(__types[2], self, other));
}

// public static Uno.Collections.IEnumerable<T> Where<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> predicate) [static] :62
uObject* EnumerableExtensions::Where(uType* __type, uObject* self, uDelegate* predicate)
{
    uType* __types[] = {
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[25/*Uno.Collections.WhereEnumerable`1*/]->MakeType(__type->U(0)),
    };
    return (uObject*)((::g::Uno::Collections::WhereEnumerable*)::g::Uno::Collections::WhereEnumerable::New1(__types[2], self, predicate));
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(172)
// ----------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.ValueCollection.Enumerator :172
// {
// public TValue get_Current() [adapter] :188
static void Dictionary__ValueCollection__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__ValueCollection__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :191
static void Dictionary__ValueCollection__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__ValueCollection__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :203
static void Dictionary__ValueCollection__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__ValueCollection__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

Dictionary__ValueCollection__Enumerator_type* Dictionary__ValueCollection__Enumerator_typeof()
{
    static uSStrong<Dictionary__ValueCollection__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.TypeSize = sizeof(Dictionary__ValueCollection__Enumerator_type);
    type = (Dictionary__ValueCollection__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.ValueCollection.Enumerator", options);
    type->interface0.fp_get_Current = Dictionary__ValueCollection__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__ValueCollection__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__ValueCollection__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[26/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1))->Array());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1)), offsetof(Dictionary__ValueCollection__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__ValueCollection__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__ValueCollection__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1)), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Dictionary__ValueCollection__Enumerator__get_Current_fn, 0, false, type->T(1), 0),
        new uFunction("Dispose", type, (void*)Dictionary__ValueCollection__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Dictionary__ValueCollection__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :179
void Dictionary__ValueCollection__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public TValue get_Current() :188
void Dictionary__ValueCollection__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :191
void Dictionary__ValueCollection__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :203
void Dictionary__ValueCollection__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->Precalced(2/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    uT bucket(__types[3], U_ALLOCA(__types[3]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[1/*Value*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :179
void Dictionary__ValueCollection__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    Dictionary__ValueCollection__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(1447)
// -----------------------------------------------------------------------------

// public struct Stack<T>.Enumerator :1447
// {
// public T get_Current() [adapter] :1463
static void Stack__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Stack__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1469
static void Stack__Enumerator__Dispose_ex(uObject* __this)
{
    Stack__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1481
static void Stack__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Stack__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

Stack__Enumerator_type* Stack__Enumerator_typeof()
{
    static uSStrong<Stack__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(Stack__Enumerator_type);
    type = (Stack__Enumerator_type*)uStructType::New("Uno.Collections.Stack`1.Enumerator", options);
    type->interface0.fp_get_Current = Stack__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Stack__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Stack__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[27] = ::g::Uno::Collections::Stack_typeof();
    type->SetPrecalc(
        ::TYPES[27/*Uno.Collections.Stack`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(Stack__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Stack__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Stack__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Stack_typeof()->MakeType(type->T(0)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Stack__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)Stack__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Stack__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal Enumerator(Uno.Collections.Stack<T> source) :1454
void Stack__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Stack* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Stack<T>*/),
        __type->T(0),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Stack*>() = source;
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = source->_used;
}

// public T get_Current() :1463
void Stack__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :1469
void Stack__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :1481
void Stack__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Stack<T>*/),
        __type->T(0),
    };

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Stack*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    __type->Field(__this, 2/*_iterator*/).Value<int>()--;

    if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= 0)
    {
        __type->Field(__this, 3/*_current*/) = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Stack*>())->_data)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.Stack<T> source) :1454
void Stack__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Stack* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    Stack__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(79)
// ---------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.KeyCollection.Enumerator :79
// {
// public TKey get_Current() [adapter] :96
static void Dictionary__KeyCollection__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__KeyCollection__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :99
static void Dictionary__KeyCollection__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__KeyCollection__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :111
static void Dictionary__KeyCollection__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__KeyCollection__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

Dictionary__KeyCollection__Enumerator_type* Dictionary__KeyCollection__Enumerator_typeof()
{
    static uSStrong<Dictionary__KeyCollection__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.TypeSize = sizeof(Dictionary__KeyCollection__Enumerator_type);
    type = (Dictionary__KeyCollection__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.KeyCollection.Enumerator", options);
    type->interface0.fp_get_Current = Dictionary__KeyCollection__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__KeyCollection__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__KeyCollection__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[26/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1))->Array());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(Dictionary__KeyCollection__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__KeyCollection__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__KeyCollection__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1)), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Dictionary__KeyCollection__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)Dictionary__KeyCollection__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Dictionary__KeyCollection__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :87
void Dictionary__KeyCollection__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public TKey get_Current() :96
void Dictionary__KeyCollection__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :99
void Dictionary__KeyCollection__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :111
void Dictionary__KeyCollection__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->Precalced(2/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    uT bucket(__types[3], U_ALLOCA(__types[3]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[0/*Key*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :87
void Dictionary__KeyCollection__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    Dictionary__KeyCollection__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(25)
// ---------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.Enumerator :25
// {
// public Uno.Collections.KeyValuePair<TKey, TValue> get_Current() [adapter] :41
static void Dictionary__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :44
static void Dictionary__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :56
static void Dictionary__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

Dictionary__Enumerator_type* Dictionary__Enumerator_typeof()
{
    static uSStrong<Dictionary__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.TypeSize = sizeof(Dictionary__Enumerator_type);
    type = (Dictionary__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.Enumerator", options);
    type->interface0.fp_get_Current = Dictionary__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[9] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[26/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[9/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1))->Array());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1))), offsetof(Dictionary__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Dictionary__Enumerator__get_Current_fn, 0, false, ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1)), 0),
        new uFunction("Dispose", type, (void*)Dictionary__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Dictionary__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :32
void Dictionary__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public Uno.Collections.KeyValuePair<TKey, TValue> get_Current() :41
void Dictionary__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :44
void Dictionary__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :56
void Dictionary__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->Precalced(2/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT bucket(__types[4], U_ALLOCA(__types[4]->ValueSize));
    ;

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = (::g::Uno::Collections::KeyValuePair__New1_fn(__types[0], bucket[0/*Key*/], bucket[1/*Value*/], &ret2), ret2);
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :32
void Dictionary__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    Dictionary__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(1226)
// -----------------------------------------------------------------------------

// public struct Queue<T>.Enumerator :1226
// {
// public T get_Current() [adapter] :1243
static void Queue__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Queue__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1253
static void Queue__Enumerator__Dispose_ex(uObject* __this)
{
    Queue__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1264
static void Queue__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Queue__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

Queue__Enumerator_type* Queue__Enumerator_typeof()
{
    static uSStrong<Queue__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(Queue__Enumerator_type);
    type = (Queue__Enumerator_type*)uStructType::New("Uno.Collections.Queue`1.Enumerator", options);
    type->interface0.fp_get_Current = Queue__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Queue__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Queue__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::STRINGS[3] = uString::Const("Enumerator is invalid");
    ::TYPES[28] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::TYPES[28/*Uno.Collections.Queue`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(Queue__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Queue__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Queue__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Queue__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)Queue__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Queue__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal Enumerator(Uno.Collections.Queue<T> source) :1233
void Queue__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Queue* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>() = source;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_index*/).Value<int>() = -1;
}

// public T get_Current() :1243
void Queue__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    if (__type->Field(__this, 2/*_index*/).Value<int>() < 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[3/*"Enumerator ...*/]));

    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :1253
void Queue__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :1264
void Queue__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    __type->Field(__this, 2/*_index*/).Value<int>()++;

    if (__type->Field(__this, 2/*_index*/).Value<int>() < uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_size)
    {
        __type->Field(__this, 3/*_current*/) = (::g::Uno::Collections::Queue__ElementAt_fn(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>()), uCRef<int>(__type->Field(__this, 2/*_index*/).Value<int>()), &ret2), ret2);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.Queue<T> source) :1233
void Queue__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Queue* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    Queue__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(1013)
// -----------------------------------------------------------------------------

// public struct List<T>.Enumerator :1013
// {
// public T get_Current() [adapter] :1029
static void List__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    List__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1032
static void List__Enumerator__Dispose_ex(uObject* __this)
{
    List__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1044
static void List__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    List__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

List__Enumerator_type* List__Enumerator_typeof()
{
    static uSStrong<List__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(List__Enumerator_type);
    type = (List__Enumerator_type*)uStructType::New("Uno.Collections.List`1.Enumerator", options);
    type->interface0.fp_get_Current = List__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = List__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = List__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(List__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(List__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(List__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)List__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)List__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)List__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal Enumerator(Uno.Collections.List<T> source) :1020
void List__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::List* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->T(0),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>() = source;
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public T get_Current() :1029
void List__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :1032
void List__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :1044
void List__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->T(0),
    };

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    __type->Field(__this, 2/*_iterator*/).Value<int>()++;

    if (__type->Field(__this, 2/*_iterator*/).Value<int>() < uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_used)
    {
        __type->Field(__this, 3/*_current*/) = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_data)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.List<T> source) :1020
void List__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::List* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    List__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(534)
// ----------------------------------------------------------------------------

// public struct HashSet<T>.Enumerator :534
// {
// public T get_Current() [adapter] :550
static void HashSet__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    HashSet__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :553
static void HashSet__Enumerator__Dispose_ex(uObject* __this)
{
    HashSet__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :565
static void HashSet__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    HashSet__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

HashSet__Enumerator_type* HashSet__Enumerator_typeof()
{
    static uSStrong<HashSet__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.TypeSize = sizeof(HashSet__Enumerator_type);
    type = (HashSet__Enumerator_type*)uStructType::New("Uno.Collections.HashSet`1.Enumerator", options);
    type->interface0.fp_get_Current = HashSet__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = HashSet__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = HashSet__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[3] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[26/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::TYPES[3/*bool*/]),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), ::TYPES[3/*bool*/]),
        ::TYPES[11/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), ::TYPES[3/*bool*/])->Array());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(HashSet__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(HashSet__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(HashSet__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof()), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)HashSet__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)HashSet__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)HashSet__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<T, bool> source) :541
void HashSet__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->T(0),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public T get_Current() :550
void HashSet__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :553
void HashSet__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :565
void HashSet__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.Dictionary<T, bool>.Bucket*/),
        __type->Precalced(2/*Uno.Collections.Dictionary<T, bool>.Bucket[]*/),
    };
    uT bucket(__types[2], U_ALLOCA(__types[2]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[0/*Key*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<T, bool> source) :541
void HashSet__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    HashSet__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(814)
// ----------------------------------------------------------------------------

// public struct LinkedList<T>.Enumerator :814
// {
// public T get_Current() [adapter] :825
static void LinkedList__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    LinkedList__Enumerator__get_Current_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :827
static void LinkedList__Enumerator__Dispose_ex(uObject* __this)
{
    LinkedList__Enumerator__Dispose_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :837
static void LinkedList__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    LinkedList__Enumerator__MoveNext_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

LinkedList__Enumerator_type* LinkedList__Enumerator_typeof()
{
    static uSStrong<LinkedList__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ValueSize = sizeof(LinkedList__Enumerator);
    options.TypeSize = sizeof(LinkedList__Enumerator_type);
    type = (LinkedList__Enumerator_type*)uStructType::New("Uno.Collections.LinkedList`1.Enumerator", options);
    type->interface0.fp_get_Current = LinkedList__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = LinkedList__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = LinkedList__Enumerator__MoveNext_ex;
    ::TYPES[29] = ::g::Uno::Collections::LinkedList_typeof();
    ::TYPES[30] = ::g::Uno::Collections::LinkedListNode_typeof();
    type->SetPrecalc(
        ::TYPES[29/*Uno.Collections.LinkedList`1*/]->MakeType(type->T(0)),
        ::TYPES[30/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(LinkedList__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LinkedList__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(LinkedList__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _list), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _current), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _next), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)LinkedList__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)LinkedList__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)LinkedList__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal Enumerator(Uno.Collections.LinkedList<T> list) :819
void LinkedList__Enumerator__ctor__fn(LinkedList__Enumerator* __this, uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    __this->ctor_(__type, list);
}

// public T get_Current() :825
void LinkedList__Enumerator__get_Current_fn(LinkedList__Enumerator* __this, uType* __type, uTRef __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(__this->_current), &ret2), ret2)), void();
}

// public void Dispose() :827
void LinkedList__Enumerator__Dispose_fn(LinkedList__Enumerator* __this, uType* __type)
{
    __this->Dispose(__type);
}

// public bool MoveNext() :837
void LinkedList__Enumerator__MoveNext_fn(LinkedList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->MoveNext(__type);
}

// internal Enumerator New(Uno.Collections.LinkedList<T> list) :819
void LinkedList__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::LinkedList* list, LinkedList__Enumerator* __retval)
{
    *__retval = LinkedList__Enumerator__New1(__type, list);
}

// internal Enumerator(Uno.Collections.LinkedList<T> list) [instance] :819
void LinkedList__Enumerator::ctor_(uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedList<T>*/),
        __type->T(0),
    };
    _list = list;
    _next = uPtr(_list)->First();
}

// public void Dispose() [instance] :827
void LinkedList__Enumerator::Dispose(uType* __type)
{
}

// public bool MoveNext() [instance] :837
bool LinkedList__Enumerator::MoveNext(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };

    if (_next == NULL)
        return false;

    _current = _next;
    _next = ((::g::Uno::Collections::LinkedListNode*)uPtr(_next)->Next());
    return true;
}

// internal Enumerator New(Uno.Collections.LinkedList<T> list) [static] :819
LinkedList__Enumerator LinkedList__Enumerator__New1(uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    LinkedList__Enumerator obj1;
    obj1.ctor_(__type, list);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(532)
// ----------------------------------------------------------------------------

// public sealed class HashSet<T> :532
// {
HashSet_type* HashSet_typeof()
{
    static uSStrong<HashSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(HashSet);
    options.TypeSize = sizeof(HashSet_type);
    type = (HashSet_type*)uClassType::New("Uno.Collections.HashSet`1", options);
    type->fp_ctor_ = (void*)HashSet__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))HashSet__GetEnumerator_boxed_fn;
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[3] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[31] = HashSet__Enumerator_typeof();
    type->SetPrecalc(
        ::TYPES[26/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::TYPES[3/*bool*/]),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[31/*Uno.Collections.HashSet`1.Enumerator*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(HashSet_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof()), offsetof(::g::Uno::Collections::HashSet, _map), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("Add", NULL, (void*)HashSet__Add_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("Clear", NULL, (void*)HashSet__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)HashSet__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)HashSet__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)HashSet__GetEnumerator_fn, 0, false, HashSet__Enumerator_typeof()->MakeType(type->T(0)), 0),
        new uFunction("GetEnumerator", NULL, (void*)HashSet__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction(".ctor", type, (void*)HashSet__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)HashSet__New2_fn, 0, true, type, 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0))),
        new uFunction("Remove", NULL, (void*)HashSet__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("SetEquals", NULL, (void*)HashSet__SetEquals_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0))));
    return type;
}

// public HashSet() :588
void HashSet__ctor__fn(HashSet* __this)
{
    __this->ctor_();
}

// public HashSet(Uno.Collections.IEnumerable<T> items) :590
void HashSet__ctor_1_fn(HashSet* __this, uObject* items)
{
    __this->ctor_1(items);
}

// public bool Add(T item) :613
void HashSet__Add_fn(HashSet* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
    };
    bool ret5;
    bool result = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_map), item, &ret5), ret5);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_map), item, uCRef(true));
    return *__retval = result, void();
}

// public void Clear() :635
void HashSet__Clear_fn(HashSet* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :620
void HashSet__Contains_fn(HashSet* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    bool ret6;
    return *__retval = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_map), item, &ret6), ret6), void();
}

// public int get_Count() :632
void HashSet__get_Count_fn(HashSet* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() :640
void HashSet__GetEnumerator_fn(HashSet* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Collections.HashSet<T>.Enumerator*/),
        __this->__type->T(0),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((HashSet__Enumerator__New1_fn(__types[0], __this->_map, &ret7), ret7)), void();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() :640
void HashSet__GetEnumerator_boxed_fn(HashSet* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public HashSet New() :588
void HashSet__New1_fn(uType* __type, HashSet** __retval)
{
    *__retval = HashSet::New1(__type);
}

// public HashSet New(Uno.Collections.IEnumerable<T> items) :590
void HashSet__New2_fn(uType* __type, uObject* items, HashSet** __retval)
{
    *__retval = HashSet::New2(__type, items);
}

// public bool Remove(T item) :625
void HashSet__Remove_fn(HashSet* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    bool ret8;
    return *__retval = (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_map), item, &ret8), ret8), void();
}

// public bool SetEquals(Uno.Collections.IEnumerable<T> that) :596
void HashSet__SetEquals_fn(HashSet* __this, uObject* that, bool* __retval)
{
    *__retval = __this->SetEquals(that);
}

// public HashSet() [instance] :588
void HashSet::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->T(0),
    };
    _map = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public HashSet(Uno.Collections.IEnumerable<T> items) [instance] :590
void HashSet::ctor_1(uObject* items)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret4;
    _map = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[1]));

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(items), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret3), ret3);
        HashSet__Add_fn(this, item, &ret4);
    }
}

// public void Clear() [instance] :635
void HashSet::Clear()
{
    uPtr(_map)->Clear();
}

// public int get_Count() [instance] :632
int HashSet::Count()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->T(0),
    };
    return uPtr(_map)->Count();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() [instance] :640
uObject* HashSet::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.HashSet<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (HashSet__GetEnumerator_fn(this, &ret16), ret16));
}

// public bool SetEquals(Uno.Collections.IEnumerable<T> that) [instance] :596
bool HashSet::SetEquals(uObject* that)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(2/*Uno.Collections.HashSet<T>.Enumerator*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT enum3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT item1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret10;
    bool ret11;
    ;
    bool ret13;
    ;
    bool ret15;
    HashSet* thatSet = HashSet::New1(__type);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(that), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), __types[2]), &ret9), ret9);

        if (!(HashSet__Contains_fn(this, item, &ret10), ret10))
            return false;

        HashSet__Add_fn(uPtr(thatSet), item, &ret11);
    }

    for (enum3 = (HashSet__GetEnumerator_fn(this, &ret12), ret12); (HashSet__Enumerator__MoveNext_fn(&enum3, __types[1], &ret13), ret13); )
    {
        item1 = (HashSet__Enumerator__get_Current_fn(&enum3, __types[1], &ret14), ret14);

        if (!(HashSet__Contains_fn(uPtr(thatSet), item1, &ret15), ret15))
            return false;
    }

    return true;
}

// public HashSet New() [static] :588
HashSet* HashSet::New1(uType* __type)
{
    HashSet* obj1 = (HashSet*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public HashSet New(Uno.Collections.IEnumerable<T> items) [static] :590
HashSet* HashSet::New2(uType* __type, uObject* items)
{
    HashSet* obj2 = (HashSet*)uNew(__type);
    obj2->ctor_1(items);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(653)
// ----------------------------------------------------------------------------

// public abstract interface ICollection<T> :653
// {
uInterfaceType* ICollection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.ICollection`1", 1, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Add", NULL, NULL, offsetof(ICollection, fp_Add), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Clear", NULL, NULL, offsetof(ICollection, fp_Clear), false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, NULL, offsetof(ICollection, fp_Contains), false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, NULL, offsetof(ICollection, fp_get_Count), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Remove", NULL, NULL, offsetof(ICollection, fp_Remove), false, ::g::Uno::Bool_typeof(), 1, type->T(0)));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(670)
// ----------------------------------------------------------------------------

// public abstract interface IDictionary<TKey, TValue> :670
// {
uInterfaceType* IDictionary_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IDictionary`2", 2, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("TryGetValue", NULL, NULL, offsetof(IDictionary, fp_TryGetValue), false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(693)
// ----------------------------------------------------------------------------

// public abstract interface IEnumerable<T> :693
// {
uInterfaceType* IEnumerable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerable`1", 1, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, NULL, offsetof(IEnumerable, fp_GetEnumerator), false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(706)
// ----------------------------------------------------------------------------

// public abstract interface IEnumerator :706
// {
uInterfaceType* IEnumerator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerator", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("MoveNext", NULL, NULL, offsetof(IEnumerator, fp_MoveNext), false, ::g::Uno::Bool_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(713)
// ----------------------------------------------------------------------------

// public abstract interface IEnumerator<T> :713
// {
uInterfaceType* IEnumerator1_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerator`1", 1, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Current", NULL, NULL, offsetof(IEnumerator1, fp_get_Current), false, type->T(0), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(726)
// ----------------------------------------------------------------------------

// public abstract interface IList<T> :726
// {
uInterfaceType* IList_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IList`1", 1, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Insert", NULL, NULL, offsetof(IList, fp_Insert), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction("get_Item", NULL, NULL, offsetof(IList, fp_get_Item), false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("RemoveAt", NULL, NULL, offsetof(IList, fp_RemoveAt), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(247)
// ------------------------------------------------------------------------

// public static class IListExtensions :247
// {
uClassType* IListExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Collections.IListExtensions", options);
    ::STRINGS[4] = uString::Const("collection");
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[32] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[33] = ::g::Uno::Collections::IList_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("AddRange`1", type, (void*)IListExtensions__AddRange_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Collections::IList_typeof()->MakeType(type->U(0)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("Last`1", type, (void*)IListExtensions__Last_fn, 0, true, type->U(0), 1, ::g::Uno::Collections::IList_typeof()->MakeType(type->U(0))),
        new uFunction("RemoveLast`1", type, (void*)IListExtensions__RemoveLast_fn, 0, true, type->U(0), 1, ::g::Uno::Collections::IList_typeof()->MakeType(type->U(0))));
    return type;
}

// public static void AddRange<T>(Uno.Collections.IList<T> self, Uno.Collections.IEnumerable<T> collection) :249
void IListExtensions__AddRange_fn(uType* __type, uObject* self, uObject* collection)
{
    IListExtensions::AddRange(__type, self, collection);
}

// public static T Last<T>(Uno.Collections.IList<T> self) :283
void IListExtensions__Last_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[32/*Uno.Collections.ICollection`1*/]->MakeType(__type->U(0)),
        ::TYPES[33/*Uno.Collections.IList`1*/]->MakeType(__type->U(0)),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(self), __types[1])) - 1;
    return __retval.Store((::g::Uno::Collections::IList::get_Item_ex(uInterface(self, __types[2]), uCRef<int>(i), &ret4), ret4)), void();
}

// public static T RemoveLast<T>(Uno.Collections.IList<T> self) :297
void IListExtensions__RemoveLast_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[32/*Uno.Collections.ICollection`1*/]->MakeType(__type->U(0)),
        ::TYPES[33/*Uno.Collections.IList`1*/]->MakeType(__type->U(0)),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT t(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(self), __types[1])) - 1;
    t = (::g::Uno::Collections::IList::get_Item_ex(uInterface(self, __types[2]), uCRef<int>(i), &ret6), ret6);
    ::g::Uno::Collections::IList::RemoveAt(uInterface(self, __types[2]), i);
    return __retval.Store(t), void();
}

// public static void AddRange<T>(Uno.Collections.IList<T> self, Uno.Collections.IEnumerable<T> collection) [static] :249
void IListExtensions::AddRange(uType* __type, uObject* self, uObject* collection)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (collection == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"collection"*/]));

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(collection), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret1), ret1);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self), ::TYPES[32/*Uno.Collections.ICollection`1*/]->MakeType(__types[0])), item);
    }
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(77)
// ---------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue>.KeyCollection :77
// {
Dictionary__KeyCollection_type* Dictionary__KeyCollection_typeof()
{
    static uSStrong<Dictionary__KeyCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Dictionary__KeyCollection);
    options.TypeSize = sizeof(Dictionary__KeyCollection_type);
    type = (Dictionary__KeyCollection_type*)uClassType::New("Uno.Collections.Dictionary`2.KeyCollection", options);
    type->interface0.fp_Clear = (void(*)(uObject*))Dictionary__KeyCollection__Uno_Collections_ICollection_TKey__Clear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))Dictionary__KeyCollection__Uno_Collections_ICollection_TKey__Add_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__KeyCollection__Uno_Collections_ICollection_TKey__Remove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__KeyCollection__Uno_Collections_ICollection_TKey__Contains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))Dictionary__KeyCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__KeyCollection__GetEnumerator_boxed_fn;
    ::TYPES[34] = Dictionary__KeyCollection__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof();
    type->SetPrecalc(
        ::TYPES[34/*Uno.Collections.Dictionary`2.KeyCollection.Enumerator*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[26/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(Dictionary__KeyCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(Dictionary__KeyCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Collections::Dictionary__KeyCollection, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Count", NULL, (void*)Dictionary__KeyCollection__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__KeyCollection__GetEnumerator_fn, 0, false, Dictionary__KeyCollection__Enumerator_typeof()->MakeType(type->T(0), type->T(1)), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__KeyCollection__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0));
    return type;
}

// internal KeyCollection(Uno.Collections.Dictionary<TKey, TValue> source) :134
void Dictionary__KeyCollection__ctor__fn(Dictionary__KeyCollection* __this, ::g::Uno::Collections::Dictionary* source)
{
    __this->ctor_(source);
}

// public int get_Count() :166
void Dictionary__KeyCollection__get_Count_fn(Dictionary__KeyCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() :139
void Dictionary__KeyCollection__GetEnumerator_fn(Dictionary__KeyCollection* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((Dictionary__KeyCollection__Enumerator__New1_fn(__types[0], __this->_source, &ret2), ret2)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() :139
void Dictionary__KeyCollection__GetEnumerator_boxed_fn(Dictionary__KeyCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// internal KeyCollection New(Uno.Collections.Dictionary<TKey, TValue> source) :134
void Dictionary__KeyCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__KeyCollection** __retval)
{
    *__retval = Dictionary__KeyCollection::New1(__type, source);
}

// private void Uno.Collections.ICollection<TKey>.Add(TKey item) :149
void Dictionary__KeyCollection__Uno_Collections_ICollection_TKey__Add_fn(Dictionary__KeyCollection* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private void Uno.Collections.ICollection<TKey>.Clear() :144
void Dictionary__KeyCollection__Uno_Collections_ICollection_TKey__Clear_fn(Dictionary__KeyCollection* __this)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TKey>.Contains(TKey item) :159
void Dictionary__KeyCollection__Uno_Collections_ICollection_TKey__Contains_fn(Dictionary__KeyCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TKey>.Remove(TKey item) :154
void Dictionary__KeyCollection__Uno_Collections_ICollection_TKey__Remove_fn(Dictionary__KeyCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// internal KeyCollection(Uno.Collections.Dictionary<TKey, TValue> source) [instance] :134
void Dictionary__KeyCollection::ctor_(::g::Uno::Collections::Dictionary* source)
{
    _source = source;
}

// public int get_Count() [instance] :166
int Dictionary__KeyCollection::Count()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
    };
    return uPtr(_source)->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() [instance] :139
uObject* Dictionary__KeyCollection::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(1/*Uno.Collections.IEnumerator<TKey>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (Dictionary__KeyCollection__GetEnumerator_fn(this, &ret3), ret3));
}

// internal KeyCollection New(Uno.Collections.Dictionary<TKey, TValue> source) [static] :134
Dictionary__KeyCollection* Dictionary__KeyCollection::New1(uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    Dictionary__KeyCollection* obj1 = (Dictionary__KeyCollection*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(764)
// ----------------------------------------------------------------------------

// public struct KeyValuePair<TKey, TValue> :764
// {
uStructType* KeyValuePair_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.KeyValuePair`2", options);
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Key", type, (void*)KeyValuePair__get_Key_fn, 0, false, type->T(0), 0),
        new uFunction(".ctor", type, (void*)KeyValuePair__New1_fn, 0, true, type, 2, type->T(0), type->T(1)),
        new uFunction("get_Value", type, (void*)KeyValuePair__get_Value_fn, 0, false, type->T(1), 0));
    return type;
}

// public KeyValuePair(TKey key, TValue value) :769
void KeyValuePair__ctor__fn(uTRef __this, uType* __type, void* key, void* value)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
    };
    __type->Field(__this, 0/*_key*/) = key;
    __type->Field(__this, 1/*_value*/) = value;
}

// public TKey get_Key() :777
void KeyValuePair__get_Key_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 0/*_key*/)), void();
}

// public KeyValuePair New(TKey key, TValue value) :769
void KeyValuePair__New1_fn(uType* __type, void* key, void* value, uTRef __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
    };
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    KeyValuePair__ctor__fn(&obj1, __type, key, value);
    return __retval.Store(obj1), void();
}

// public TValue get_Value() :782
void KeyValuePair__get_Value_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_value*/)), void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(808)
// ----------------------------------------------------------------------------

// public sealed class LinkedList<T> :808
// {
LinkedList_type* LinkedList_typeof()
{
    static uSStrong<LinkedList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(LinkedList);
    options.TypeSize = sizeof(LinkedList_type);
    type = (LinkedList_type*)uClassType::New("Uno.Collections.LinkedList`1", options);
    type->fp_ctor_ = (void*)LinkedList__New1_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))LinkedList__Uno_Collections_ICollection_T__Add_fn;
    type->interface0.fp_Clear = (void(*)(uObject*))LinkedList__Clear_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))LinkedList__Remove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))LinkedList__Contains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))LinkedList__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))LinkedList__GetEnumerator_fn;
    ::STRINGS[5] = uString::Const("node");
    ::STRINGS[6] = uString::Const("The LinkedList node already belongs to a LinkedList.");
    ::STRINGS[7] = uString::Const("The LinkedList node does not belong to current LinkedList.");
    ::TYPES[30] = ::g::Uno::Collections::LinkedListNode_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[35] = LinkedList__Enumerator_typeof();
    type->SetPrecalc(
        ::TYPES[30/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[35/*Uno.Collections.LinkedList`1.Enumerator*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(LinkedList_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(LinkedList_type, interface1));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::LinkedList, _Count), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList, _First), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList, _Last), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("AddFirst", NULL, (void*)LinkedList__AddFirst_fn, 0, false, ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), 1, type->T(0)),
        new uFunction("AddFirst", NULL, (void*)LinkedList__AddFirst1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0))),
        new uFunction("AddLast", NULL, (void*)LinkedList__AddLast_fn, 0, false, ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), 1, type->T(0)),
        new uFunction("AddLast", NULL, (void*)LinkedList__AddLast1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0))),
        new uFunction("Clear", NULL, (void*)LinkedList__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)LinkedList__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)LinkedList__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Find", NULL, (void*)LinkedList__Find_fn, 0, false, ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), 1, type->T(0)),
        new uFunction("get_First", NULL, (void*)LinkedList__get_First_fn, 0, false, ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), 0),
        new uFunction("GetEnumerator", NULL, (void*)LinkedList__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_Last", NULL, (void*)LinkedList__get_Last_fn, 0, false, ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), 0),
        new uFunction(".ctor", type, (void*)LinkedList__New1_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)LinkedList__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("Remove", NULL, (void*)LinkedList__Remove1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0))));
    return type;
}

// public generated LinkedList() :808
void LinkedList__ctor__fn(LinkedList* __this)
{
    __this->ctor_();
}

// public Uno.Collections.LinkedListNode<T> AddFirst(T value) :881
void LinkedList__AddFirst_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    ::g::Uno::Collections::LinkedListNode* ret2;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[1], value, &ret2), ret2);
    __this->AddFirst1(node);
    return *__retval = node, void();
}

// public void AddFirst(Uno.Collections.LinkedListNode<T> node) :853
void LinkedList__AddFirst1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->AddFirst1(node);
}

// public Uno.Collections.LinkedListNode<T> AddLast(T value) :916
void LinkedList__AddLast_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    ::g::Uno::Collections::LinkedListNode* ret3;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[1], value, &ret3), ret3);
    __this->AddLast1(node);
    return *__retval = node, void();
}

// public void AddLast(Uno.Collections.LinkedListNode<T> node) :888
void LinkedList__AddLast1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->AddLast1(node);
}

// public void Clear() :935
void LinkedList__Clear_fn(LinkedList* __this)
{
    __this->Clear();
}

// public bool Contains(T value) :958
void LinkedList__Contains_fn(LinkedList* __this, void* value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    ::g::Uno::Collections::LinkedListNode* ret4;
    return *__retval = (LinkedList__Find_fn(__this, value, &ret4), ret4) != NULL, void();
}

// public generated int get_Count() :810
void LinkedList__get_Count_fn(LinkedList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private generated void set_Count(int value) :810
void LinkedList__set_Count_fn(LinkedList* __this, int* value)
{
    __this->Count(*value);
}

// public Uno.Collections.LinkedListNode<T> Find(T value) :923
void LinkedList__Find_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Uno::Collections::LinkedListNode* curr = __this->First();

    while (curr != NULL)
    {
        if (::g::Uno::Object::Equals(uBoxPtr(__types[0], (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(curr), &ret5), ret5), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], value)))
            return *__retval = curr, void();

        curr = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
    }

    return *__retval = NULL, void();
}

// public generated Uno.Collections.LinkedListNode<T> get_First() :811
void LinkedList__get_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Uno.Collections.LinkedListNode<T> value) :811
void LinkedList__set_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value)
{
    __this->First(value);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :848
void LinkedList__GetEnumerator_fn(LinkedList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public generated Uno.Collections.LinkedListNode<T> get_Last() :812
void LinkedList__get_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->Last();
}

// private generated void set_Last(Uno.Collections.LinkedListNode<T> value) :812
void LinkedList__set_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value)
{
    __this->Last(value);
}

// public generated LinkedList New() :808
void LinkedList__New1_fn(uType* __type, LinkedList** __retval)
{
    *__retval = LinkedList::New1(__type);
}

// public bool Remove(T value) :987
void LinkedList__Remove_fn(LinkedList* __this, void* value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    ::g::Uno::Collections::LinkedListNode* ret6;
    ::g::Uno::Collections::LinkedListNode* node = (LinkedList__Find_fn(__this, value, &ret6), ret6);

    if (node != NULL)
    {
        __this->Remove1(node);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public void Remove(Uno.Collections.LinkedListNode<T> node) :963
void LinkedList__Remove1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->Remove1(node);
}

// public void Uno.Collections.ICollection<T>.Add(T value) :953
void LinkedList__Uno_Collections_ICollection_T__Add_fn(LinkedList* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    ::g::Uno::Collections::LinkedListNode* ret7;
    LinkedList__AddLast_fn(__this, value, &ret7);
}

// public generated LinkedList() [instance] :808
void LinkedList::ctor_()
{
}

// public void AddFirst(Uno.Collections.LinkedListNode<T> node) [instance] :853
void LinkedList::AddFirst1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[6/*"The LinkedL...*/]));

    if (Last() == NULL)
        First((Last(node), node));
    else
    {
        uPtr(First())->Previous(node);
        uPtr(node)->Next(First());
        node->Previous(NULL);
        First(node);
    }

    if (((LinkedList*)uPtr(node)->List()) != this)
    {
        uPtr(node)->List(this);
        Count(Count() + 1);
    }
}

// public void AddLast(Uno.Collections.LinkedListNode<T> node) [instance] :888
void LinkedList::AddLast1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[6/*"The LinkedL...*/]));

    if (Last() == NULL)
        First((Last(node), node));
    else
    {
        uPtr(Last())->Next(node);
        uPtr(node)->Next(NULL);
        node->Previous(Last());
        Last(node);
    }

    if (((LinkedList*)uPtr(node)->List()) != this)
    {
        uPtr(node)->List(this);
        Count(Count() + 1);
    }
}

// public void Clear() [instance] :935
void LinkedList::Clear()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };
    ::g::Uno::Collections::LinkedListNode* curr = First();

    while (curr != NULL)
    {
        ::g::Uno::Collections::LinkedListNode* next = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
        curr->Previous(NULL);
        curr->Next(NULL);
        curr->List(NULL);
        curr = next;
    }

    First((Last(NULL), uCast< ::g::Uno::Collections::LinkedListNode*>(NULL, __types[0])));
    Count(0);
}

// public generated int get_Count() [instance] :810
int LinkedList::Count()
{
    return _Count;
}

// private generated void set_Count(int value) [instance] :810
void LinkedList::Count(int value)
{
    _Count = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_First() [instance] :811
::g::Uno::Collections::LinkedListNode* LinkedList::First()
{
    return _First;
}

// private generated void set_First(Uno.Collections.LinkedListNode<T> value) [instance] :811
void LinkedList::First(::g::Uno::Collections::LinkedListNode* value)
{
    _First = value;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :848
uObject* LinkedList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(2/*Uno.Collections.LinkedList<T>.Enumerator*/),
    };
    return uBox(__types[2], LinkedList__Enumerator__New1(__types[2], this));
}

// public generated Uno.Collections.LinkedListNode<T> get_Last() [instance] :812
::g::Uno::Collections::LinkedListNode* LinkedList::Last()
{
    return _Last;
}

// private generated void set_Last(Uno.Collections.LinkedListNode<T> value) [instance] :812
void LinkedList::Last(::g::Uno::Collections::LinkedListNode* value)
{
    _Last = value;
}

// public void Remove(Uno.Collections.LinkedListNode<T> node) [instance] :963
void LinkedList::Remove1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != this)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[7/*"The LinkedL...*/]));

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous())->Next((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());

    if (((::g::Uno::Collections::LinkedListNode*)node->Next()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)node->Next())->Previous((::g::Uno::Collections::LinkedListNode*)node->Previous());

    if (node == First())
        First((::g::Uno::Collections::LinkedListNode*)node->Next());

    if (node == Last())
        Last((::g::Uno::Collections::LinkedListNode*)node->Previous());

    node->List(NULL);
    Count(Count() - 1);
}

// public generated LinkedList New() [static] :808
LinkedList* LinkedList::New1(uType* __type)
{
    LinkedList* obj1 = (LinkedList*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(79)
// -----------------------------------------------------------------------

// private sealed class EnumerableExtensions.LinkedList<T> :79
// {
uType* EnumerableExtensions__LinkedList_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(EnumerableExtensions__LinkedList);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.EnumerableExtensions.LinkedList`1", options);
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type, offsetof(::g::Uno::Collections::EnumerableExtensions__LinkedList, Next), 0);
    return type;
}

// public LinkedList(T item, Uno.Collections.EnumerableExtensions.LinkedList<T> next) :84
void EnumerableExtensions__LinkedList__ctor__fn(EnumerableExtensions__LinkedList* __this, void* item, EnumerableExtensions__LinkedList* next)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->Item() = item;
    __this->Next = next;
}

// public LinkedList New(T item, Uno.Collections.EnumerableExtensions.LinkedList<T> next) :84
void EnumerableExtensions__LinkedList__New1_fn(uType* __type, void* item, EnumerableExtensions__LinkedList* next, EnumerableExtensions__LinkedList** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    EnumerableExtensions__LinkedList* obj1 = (EnumerableExtensions__LinkedList*)uNew(__type);
    EnumerableExtensions__LinkedList__ctor__fn(obj1, item, next);
    return *__retval = obj1, void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(794)
// ----------------------------------------------------------------------------

// public sealed class LinkedListNode<T> :794
// {
uType* LinkedListNode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(LinkedListNode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.LinkedListNode`1", options);
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedListNode, _List), 0,
        type, offsetof(::g::Uno::Collections::LinkedListNode, _Next), 0,
        type, offsetof(::g::Uno::Collections::LinkedListNode, _Previous), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(5,
        new uFunction("get_List", NULL, (void*)LinkedListNode__get_List_fn, 0, false, ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0)), 0),
        new uFunction(".ctor", type, (void*)LinkedListNode__New1_fn, 0, true, type, 1, type->T(0)),
        new uFunction("get_Next", NULL, (void*)LinkedListNode__get_Next_fn, 0, false, type, 0),
        new uFunction("get_Previous", NULL, (void*)LinkedListNode__get_Previous_fn, 0, false, type, 0),
        new uFunction("get_Value", NULL, (void*)LinkedListNode__get_Value_fn, 0, false, type->T(0), 0));
    return type;
}

// public LinkedListNode(T value) :801
void LinkedListNode__ctor__fn(LinkedListNode* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    LinkedListNode__set_Value_fn(__this, value);
}

// public generated Uno.Collections.LinkedList<T> get_List() :796
void LinkedListNode__get_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList** __retval)
{
    *__retval = __this->List();
}

// internal generated void set_List(Uno.Collections.LinkedList<T> value) :796
void LinkedListNode__set_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList* value)
{
    __this->List(value);
}

// public LinkedListNode New(T value) :801
void LinkedListNode__New1_fn(uType* __type, void* value, LinkedListNode** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    LinkedListNode* obj1 = (LinkedListNode*)uNew(__type);
    LinkedListNode__ctor__fn(obj1, value);
    return *__retval = obj1, void();
}

// public generated Uno.Collections.LinkedListNode<T> get_Next() :797
void LinkedListNode__get_Next_fn(LinkedListNode* __this, LinkedListNode** __retval)
{
    *__retval = __this->Next();
}

// internal generated void set_Next(Uno.Collections.LinkedListNode<T> value) :797
void LinkedListNode__set_Next_fn(LinkedListNode* __this, LinkedListNode* value)
{
    __this->Next(value);
}

// public generated Uno.Collections.LinkedListNode<T> get_Previous() :798
void LinkedListNode__get_Previous_fn(LinkedListNode* __this, LinkedListNode** __retval)
{
    *__retval = __this->Previous();
}

// internal generated void set_Previous(Uno.Collections.LinkedListNode<T> value) :798
void LinkedListNode__set_Previous_fn(LinkedListNode* __this, LinkedListNode* value)
{
    __this->Previous(value);
}

// public generated T get_Value() :799
void LinkedListNode__get_Value_fn(LinkedListNode* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :799
void LinkedListNode__set_Value_fn(LinkedListNode* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Value() = value;
}

// public generated Uno.Collections.LinkedList<T> get_List() [instance] :796
::g::Uno::Collections::LinkedList* LinkedListNode::List()
{
    return _List;
}

// internal generated void set_List(Uno.Collections.LinkedList<T> value) [instance] :796
void LinkedListNode::List(::g::Uno::Collections::LinkedList* value)
{
    _List = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_Next() [instance] :797
LinkedListNode* LinkedListNode::Next()
{
    return _Next;
}

// internal generated void set_Next(Uno.Collections.LinkedListNode<T> value) [instance] :797
void LinkedListNode::Next(LinkedListNode* value)
{
    _Next = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_Previous() [instance] :798
LinkedListNode* LinkedListNode::Previous()
{
    return _Previous;
}

// internal generated void set_Previous(Uno.Collections.LinkedListNode<T> value) [instance] :798
void LinkedListNode::Previous(LinkedListNode* value)
{
    _Previous = value;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(1007)
// -----------------------------------------------------------------------------

// public sealed class List<T> :1007
// {
List_type* List_typeof()
{
    static uSStrong<List_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(List);
    options.TypeSize = sizeof(List_type);
    type = (List_type*)uClassType::New("Uno.Collections.List`1", options);
    type->fp_ctor_ = (void*)List__New1_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))List__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))List__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))List__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))List__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))List__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))List__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))List__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))List__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))List__GetEnumerator_boxed_fn;
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[12] = ::g::Uno::Generic_typeof();
    ::TYPES[6] = List__Enumerator_typeof();
    ::TYPES[36] = ::g::Uno::Array_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[12/*Uno.Generic*/]->MakeMethod(1, type->T(0)),
        ::TYPES[6/*Uno.Collections.List`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[36/*Uno.Array*/]->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0)), offsetof(List_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(List_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(List_type, interface2));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Collections::List, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::List, _used), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::List, _version), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("Add", NULL, (void*)List__Add_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("AddRange", NULL, (void*)List__AddRange_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0))),
        new uFunction("Clear", NULL, (void*)List__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)List__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)List__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)List__GetEnumerator_fn, 0, false, List__Enumerator_typeof()->MakeType(type->T(0)), 0),
        new uFunction("GetEnumerator", NULL, (void*)List__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("IndexOf", NULL, (void*)List__IndexOf_fn, 0, false, ::g::Uno::Int_typeof(), 1, type->T(0)),
        new uFunction("Insert", NULL, (void*)List__Insert_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction("get_Item", NULL, (void*)List__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)List__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction(".ctor", type, (void*)List__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)List__New2_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Remove", NULL, (void*)List__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("RemoveAt", NULL, (void*)List__RemoveAt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Sort", NULL, (void*)List__Sort_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Comparison_typeof()->MakeType(type->T(0))),
        new uFunction("ToArray", NULL, (void*)List__ToArray_fn, 0, false, type->T(0)->Array(), 0));
    return type;
}

// public List() :1061
void List__ctor__fn(List* __this)
{
    __this->ctor_();
}

// public List(int capacity) :1067
void List__ctor_1_fn(List* __this, int* capacity)
{
    __this->ctor_1(*capacity);
}

// public void Add(T item) :1116
void List__Add_fn(List* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_used++) = item;
    __this->_version++;
}

// public void AddRange(Uno.Collections.IEnumerable<T> items) :1123
void List__AddRange_fn(List* __this, uObject* items)
{
    __this->AddRange(items);
}

// private void BoundsCheck(int index) :1088
void List__BoundsCheck_fn(List* __this, int* index)
{
    __this->BoundsCheck(*index);
}

// public void Clear() :1178
void List__Clear_fn(List* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :1185
void List__Contains_fn(List* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.Generic.Equals<T>*/),
    };
    bool ret4;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[1], uPtr(__this->_data)->TItem(i), item, &ret4), ret4))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public int get_Count() :1113
void List__get_Count_fn(List* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private void EnsureCapacity() :1094
void List__EnsureCapacity_fn(List* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() :1073
void List__GetEnumerator_fn(List* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Uno.Collections.List<T>.Enumerator*/),
        __this->__type->T(0),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((List__Enumerator__New1_fn(__types[0], __this, &ret5), ret5)), void();
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() :1073
void List__GetEnumerator_boxed_fn(List* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public int IndexOf(T item) :1143
void List__IndexOf_fn(List* __this, void* item, int* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.Generic.Equals<T>*/),
    };
    bool ret6;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[1], uPtr(__this->_data)->TItem(i), item, &ret6), ret6))
            return *__retval = i, void();

    return *__retval = -1, void();
}

// public void Insert(int index, T item) :1128
void List__Insert_fn(List* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    int index_ = *index;

    if ((index_ < 0) || (index_ > __this->_used))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index_; i--)
        uPtr(__this->_data)->TItem(i + 1) = uPtr(__this->_data)->TItem(i);

    uPtr(__this->_data)->TItem(index_) = item;
    __this->_version++;
    __this->_used++;
}

// public T get_Item(int index) :1196
void List__get_Item_fn(List* __this, int* index, uTRef __retval)
{
    int index_ = *index;
    __this->BoundsCheck(index_);
    return __retval.Store(uPtr(__this->_data)->TItem(index_)), void();
}

// public void set_Item(int index, T value) :1201
void List__set_Item_fn(List* __this, int* index, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    int index_ = *index;
    __this->BoundsCheck(index_);
    uPtr(__this->_data)->TItem(index_) = value;
    __this->_version++;
}

// public List New() :1061
void List__New1_fn(uType* __type, List** __retval)
{
    *__retval = List::New1(__type);
}

// public List New(int capacity) :1067
void List__New2_fn(uType* __type, int* capacity, List** __retval)
{
    *__retval = List::New2(__type, *capacity);
}

// public bool Remove(T item) :1152
void List__Remove_fn(List* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.Generic.Equals<T>*/),
    };
    bool ret7;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[1], uPtr(__this->_data)->TItem(i), item, &ret7), ret7))
        {
            __this->RemoveAt(i);
            return *__retval = true, void();
        }

    return *__retval = false, void();
}

// public void RemoveAt(int index) :1166
void List__RemoveAt_fn(List* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public void Sort(Uno.Comparison<T> comparer) :1209
void List__Sort_fn(List* __this, uDelegate* comparer)
{
    __this->Sort(comparer);
}

// public T[] ToArray() :1078
void List__ToArray_fn(List* __this, uArray** __retval)
{
    *__retval = __this->ToArray();
}

// public List() [instance] :1061
void List::ctor_()
{
    _data = NULL;
    _used = 0;
}

// public List(int capacity) [instance] :1067
void List::ctor_1(int capacity)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    _data = uArray::New(__types[0], capacity);
    _used = 0;
}

// public void AddRange(Uno.Collections.IEnumerable<T> items) [instance] :1123
void List::AddRange(uObject* items)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT i(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(items), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        i = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret3), ret3);
        List__Add_fn(this, i);
    }
}

// private void BoundsCheck(int index) [instance] :1088
void List::BoundsCheck(int index)
{
    if ((index < 0) || (index >= Count()))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void Clear() [instance] :1178
void List::Clear()
{
    _data = NULL;
    _used = 0;
    _version++;
}

// public int get_Count() [instance] :1113
int List::Count()
{
    return _used;
}

// private void EnsureCapacity() [instance] :1094
void List::EnsureCapacity()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };

    if (_data == NULL)
        _data = uArray::New(__types[0], 2);
    else if ((_used + 1) == uPtr(_data)->Length())
    {
        uArray* newData = uArray::New(__types[0], uPtr(_data)->Length() * 2);

        for (int i = 0; i < _used; i++)
            newData->TItem(i) = uPtr(_data)->TItem(i);

        _data = newData;
    }
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() [instance] :1073
uObject* List::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.List<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (List__GetEnumerator_fn(this, &ret8), ret8));
}

// public void RemoveAt(int index) [instance] :1166
void List::RemoveAt(int index)
{
    BoundsCheck(index);

    for (int i = index; i < (_used - 1); i++)
        uPtr(_data)->TItem(i) = uPtr(_data)->TItem(i + 1);

    _used = (_used - 1);
    uPtr(_data)->TItem(_used).Default();
    _version++;
}

// public void Sort(Uno.Comparison<T> comparer) [instance] :1209
void List::Sort(uDelegate* comparer)
{
    uType* __types[] = {
        __type->Precalced(4/*Uno.Array.Sort<T>*/),
        __type->T(0),
    };
    ::g::Uno::Array::Sort(__types[0], _data, 0, _used, comparer);
    _version++;
}

// public T[] ToArray() [instance] :1078
uArray* List::ToArray()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    uArray* t = uArray::New(__types[0], _used);

    for (int i = 0; i < _used; i++)
        t->TItem(i) = uPtr(_data)->TItem(i);

    return t;
}

// public List New() [static] :1061
List* List::New1(uType* __type)
{
    List* obj1 = (List*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public List New(int capacity) [static] :1067
List* List::New2(uType* __type, int capacity)
{
    List* obj2 = (List*)uNew(__type);
    obj2->ctor_1(capacity);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Internal\$.uno(150)
// ---------------------------------------------------------------

// private struct ConcurrentCollection<T>.ModItem :150
// {
uStructType* ConcurrentCollection__ModItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.ConcurrentCollection`1.ModItem", options);
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\$.uno(8)
// -----------------------------------------------------------

// public sealed class ObservableList<T> :8
// {
ObservableList_type* ObservableList_typeof()
{
    static uSStrong<ObservableList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(ObservableList);
    options.TypeSize = sizeof(ObservableList_type);
    type = (ObservableList_type*)uClassType::New("Uno.Collections.ObservableList`1", options);
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))ObservableList__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))ObservableList__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))ObservableList__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ObservableList__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ObservableList__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ObservableList__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ObservableList__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ObservableList__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ObservableList__GetEnumerator_fn;
    ::STRINGS[8] = uString::Const("added");
    ::STRINGS[9] = uString::Const("removed");
    ::TYPES[37] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = ::g::Uno::Collections::List_typeof();
    ::TYPES[38] = ::g::Uno::Action1_typeof();
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(type->T(0)),
        ::TYPES[38/*Uno.Action`1*/]->MakeType(type->T(0)),
        ::TYPES[6/*Uno.Collections.List`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0)), offsetof(ObservableList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(ObservableList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ObservableList_type, interface2));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ObservableList, added), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ObservableList, items), 0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ObservableList, removed), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Add", NULL, (void*)ObservableList__Add_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Clear", NULL, (void*)ObservableList__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)ObservableList__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)ObservableList__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)ObservableList__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("Insert", NULL, (void*)ObservableList__Insert_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction("get_Item", NULL, (void*)ObservableList__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", type, (void*)ObservableList__New1_fn, 0, true, type, 2, ::g::Uno::Action1_typeof()->MakeType(type->T(0)), ::g::Uno::Action1_typeof()->MakeType(type->T(0))),
        new uFunction("Remove", NULL, (void*)ObservableList__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("RemoveAt", NULL, (void*)ObservableList__RemoveAt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("ReplaceAt", NULL, (void*)ObservableList__ReplaceAt_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)));
    return type;
}

// public ObservableList(Uno.Action<T> added, Uno.Action<T> removed) :14
void ObservableList__ctor__fn(ObservableList* __this, uDelegate* added1, uDelegate* removed1)
{
    __this->ctor_(added1, removed1);
}

// public void Add(T item) :44
void ObservableList__Add_fn(ObservableList* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
        __this->__type->Precalced(1/*Uno.Action<T>*/),
    };

    if (__this->items == NULL)
        __this->items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[1]));

    ::g::Uno::Collections::List__Add_fn(uPtr(__this->items), item);
    uPtr(__this->added)->InvokeVoid(item);
}

// public void Clear() :25
void ObservableList__Clear_fn(ObservableList* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :36
void ObservableList__Contains_fn(ObservableList* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    bool ret5;

    if (__this->items == NULL)
        return *__retval = false, void();

    return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(__this->items), item, &ret5), ret5), void();
}

// public int get_Count() :92
void ObservableList__get_Count_fn(ObservableList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :105
void ObservableList__GetEnumerator_fn(ObservableList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public void Insert(int index, T item) :53
void ObservableList__Insert_fn(ObservableList* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
        __this->__type->Precalced(1/*Uno.Action<T>*/),
    };
    int index_ = *index;

    if (__this->items == NULL)
        __this->items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[1]));

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->items), uCRef<int>(index_), item);
    uPtr(__this->added)->InvokeVoid(item);
}

// public T get_Item(int index) :96
void ObservableList__get_Item_fn(ObservableList* __this, int* index, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int index_ = *index;

    if (__this->items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->items), uCRef<int>(index_), &ret11), ret11)), void();
}

// public ObservableList New(Uno.Action<T> added, Uno.Action<T> removed) :14
void ObservableList__New1_fn(uType* __type, uDelegate* added1, uDelegate* removed1, ObservableList** __retval)
{
    *__retval = ObservableList::New1(__type, added1, removed1);
}

// public bool Remove(T item) :81
void ObservableList__Remove_fn(ObservableList* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Action<T>*/),
    };
    bool ret7;

    if (__this->items == NULL)
        return *__retval = false, void();

    bool res = (::g::Uno::Collections::List__Remove_fn(uPtr(__this->items), item, &ret7), ret7);

    if (res)
        uPtr(__this->removed)->InvokeVoid(item);

    return *__retval = res, void();
}

// public void RemoveAt(int index) :73
void ObservableList__RemoveAt_fn(ObservableList* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public void ReplaceAt(int index, T item) :62
void ObservableList__ReplaceAt_fn(ObservableList* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
        __this->__type->Precalced(1/*Uno.Action<T>*/),
    };
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT old(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int index_ = *index;

    if (__this->items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    old = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->items), uCRef<int>(index_), &ret10), ret10);
    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->items), uCRef<int>(index_), item);
    uPtr(__this->removed)->InvokeVoid(old);
    uPtr(__this->added)->InvokeVoid(item);
}

// public ObservableList(Uno.Action<T> added, Uno.Action<T> removed) [instance] :14
void ObservableList::ctor_(uDelegate* added1, uDelegate* removed1)
{
    if (::g::Uno::Delegate::op_Equality(added1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"added"*/]));

    if (::g::Uno::Delegate::op_Equality(removed1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[9/*"removed"*/]));

    added = added1;
    removed = removed1;
}

// public void Clear() [instance] :25
void ObservableList::Clear()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.List<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Action<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT i(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    bool ret3;
    ;

    if (items != NULL)
    {
        ::g::Uno::Collections::List* removedItems = items;
        items = NULL;

        for (enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removedItems), &ret2), ret2); (::g::Uno::Collections::List__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3); )
        {
            i = (::g::Uno::Collections::List__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
            uPtr(removed)->InvokeVoid(i);
        }
    }
}

// public int get_Count() [instance] :92
int ObservableList::Count()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->T(0),
    };
    return (items != NULL) ? uPtr(items)->Count() : 0;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :105
uObject* ObservableList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.List<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->Precalced(3/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (items == NULL)
        items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[2]));

    return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(items), &ret6), ret6));
}

// public void RemoveAt(int index) [instance] :73
void ObservableList::RemoveAt(int index)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret8;
    ;

    if (items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    ObservableList__Remove_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(items), uCRef<int>(index), &ret9), ret9), &ret8);
}

// public ObservableList New(Uno.Action<T> added, Uno.Action<T> removed) [static] :14
ObservableList* ObservableList::New1(uType* __type, uDelegate* added1, uDelegate* removed1)
{
    ObservableList* obj1 = (ObservableList*)uNew(__type);
    obj1->ctor_(added1, removed1);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(398)
// ------------------------------------------------------------------------

// internal sealed class OrderByCompare<T> :398
// {
uType* OrderByCompare_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(OrderByCompare);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.OrderByCompare`1", options);
    ::TYPES[39] = ::g::Uno::Func2_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    type->SetPrecalc(
        ::TYPES[39/*Uno.Func`3*/]->MakeType(type->T(0), type->T(0), ::TYPES[10/*int*/]));
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(0), ::g::Uno::Int_typeof()), offsetof(::g::Uno::Collections::OrderByCompare, _orderFunction), 0);
    return type;
}

// public OrderByCompare(Uno.Func<T, T, int> orderFunction) :402
void OrderByCompare__ctor__fn(OrderByCompare* __this, uDelegate* orderFunction)
{
    __this->ctor_(orderFunction);
}

// public int Compare(T a, T b) :407
void OrderByCompare__Compare_fn(OrderByCompare* __this, void* a, void* b, int* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Func<T, T, int>*/),
    };
    int ret2;
    return *__retval = (uPtr(__this->_orderFunction)->Invoke(&ret2, 2, a, b), ret2), void();
}

// public OrderByCompare New(Uno.Func<T, T, int> orderFunction) :402
void OrderByCompare__New1_fn(uType* __type, uDelegate* orderFunction, OrderByCompare** __retval)
{
    *__retval = OrderByCompare::New1(__type, orderFunction);
}

// public OrderByCompare(Uno.Func<T, T, int> orderFunction) [instance] :402
void OrderByCompare::ctor_(uDelegate* orderFunction)
{
    _orderFunction = orderFunction;
}

// public OrderByCompare New(Uno.Func<T, T, int> orderFunction) [static] :402
OrderByCompare* OrderByCompare::New1(uType* __type, uDelegate* orderFunction)
{
    OrderByCompare* obj1 = (OrderByCompare*)uNew(__type);
    obj1->ctor_(orderFunction);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(1224)
// -----------------------------------------------------------------------------

// public sealed class Queue<T> :1224
// {
Queue_type* Queue_typeof()
{
    static uSStrong<Queue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Queue);
    options.TypeSize = sizeof(Queue_type);
    type = (Queue_type*)uClassType::New("Uno.Collections.Queue`1", options);
    type->fp_ctor_ = (void*)Queue__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Queue__GetEnumerator_boxed_fn;
    ::STRINGS[10] = uString::Const("Queue is empty");
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[12] = ::g::Uno::Generic_typeof();
    ::TYPES[40] = Queue__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::TYPES[12/*Uno.Generic*/]->MakeMethod(1, type->T(0)),
        ::TYPES[40/*Uno.Collections.Queue`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(Queue_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Collections::Queue, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _head), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _size), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _tail), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _version), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("Clear", NULL, (void*)Queue__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)Queue__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)Queue__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Dequeue", NULL, (void*)Queue__Dequeue_fn, 0, false, type->T(0), 0),
        new uFunction("Enqueue", NULL, (void*)Queue__Enqueue_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("GetEnumerator", NULL, (void*)Queue__GetEnumerator_fn, 0, false, Queue__Enumerator_typeof()->MakeType(type->T(0)), 0),
        new uFunction("GetEnumerator", NULL, (void*)Queue__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction(".ctor", type, (void*)Queue__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Queue__New2_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Peek", NULL, (void*)Queue__Peek_fn, 0, false, type->T(0), 0));
    return type;
}

// public Queue() :1287
void Queue__ctor__fn(Queue* __this)
{
    __this->ctor_();
}

// public Queue(int capacity) :1295
void Queue__ctor_1_fn(Queue* __this, int* capacity)
{
    __this->ctor_1(*capacity);
}

// public void Clear() :1313
void Queue__Clear_fn(Queue* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :1322
void Queue__Contains_fn(Queue* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Generic.Equals<T>*/),
    };
    bool ret3;

    for (int i = __this->_head; i < __this->_tail; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[1], uPtr(__this->_data)->TItem(i), item, &ret3), ret3))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public int get_Count() :1305
void Queue__get_Count_fn(Queue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public T Dequeue() :1340
void Queue__Dequeue_fn(Queue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_size == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[10/*"Queue is em...*/]));

    result = uPtr(__this->_data)->TItem(__this->_head);
    uPtr(__this->_data)->TItem(__this->_head).Default();
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return __retval.Store(result), void();
}

// private T ElementAt(int index) :1384
void Queue__ElementAt_fn(Queue* __this, int* index, uTRef __retval)
{
    int index_ = *index;
    return __retval.Store(uPtr(__this->_data)->TItem(__this->_head + index_)), void();
}

// public void Enqueue(T item) :1331
void Queue__Enqueue_fn(Queue* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

// private void EnsureCapacity() :1363
void Queue__EnsureCapacity_fn(Queue* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() :1308
void Queue__GetEnumerator_fn(Queue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Collections.Queue<T>.Enumerator*/),
        __this->__type->T(0),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((Queue__Enumerator__New1_fn(__types[0], __this, &ret5), ret5)), void();
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() :1308
void Queue__GetEnumerator_boxed_fn(Queue* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public Queue New() :1287
void Queue__New1_fn(uType* __type, Queue** __retval)
{
    *__retval = Queue::New1(__type);
}

// public Queue New(int capacity) :1295
void Queue__New2_fn(uType* __type, int* capacity, Queue** __retval)
{
    *__retval = Queue::New2(__type, *capacity);
}

// public T Peek() :1354
void Queue__Peek_fn(Queue* __this, uTRef __retval)
{
    if (__this->_size == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[10/*"Queue is em...*/]));

    return __retval.Store(uPtr(__this->_data)->TItem(__this->_head)), void();
}

// public Queue() [instance] :1287
void Queue::ctor_()
{
    _data = NULL;
    _head = 0;
    _tail = 0;
    _size = 0;
}

// public Queue(int capacity) [instance] :1295
void Queue::ctor_1(int capacity)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    _data = uArray::New(__types[0], capacity);
    _head = 0;
    _tail = 0;
    _size = 0;
}

// public void Clear() [instance] :1313
void Queue::Clear()
{
    _data = NULL;
    _head = 0;
    _tail = 0;
    _size = 0;
    _version++;
}

// public int get_Count() [instance] :1305
int Queue::Count()
{
    return _size;
}

// private void EnsureCapacity() [instance] :1363
void Queue::EnsureCapacity()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*T[]*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (_data == NULL)
        _data = uArray::New(__types[1], 2);

    if (_tail == uPtr(_data)->Length())
    {
        int newSize = (_size != 0) ? _size * 2 : uPtr(_data)->Length();
        uArray* newData = uArray::New(__types[1], newSize);

        for (int i = 0; i < _size; i++)
            newData->TItem(i) = (Queue__ElementAt_fn(this, uCRef<int>(i), &ret4), ret4);

        _data = newData;
        _head = 0;
        _tail = _size;
    }
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() [instance] :1308
uObject* Queue::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.Queue<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(3/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (Queue__GetEnumerator_fn(this, &ret6), ret6));
}

// public Queue New() [static] :1287
Queue* Queue::New1(uType* __type)
{
    Queue* obj1 = (Queue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public Queue New(int capacity) [static] :1295
Queue* Queue::New2(uType* __type, int capacity)
{
    Queue* obj2 = (Queue*)uNew(__type);
    obj2->ctor_1(capacity);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(1399)
// -----------------------------------------------------------------------------

// public sealed class ReadOnlyCollection<T> :1399
// {
uType* ReadOnlyCollection_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ReadOnlyCollection);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.ReadOnlyCollection`1", options);
    ::TYPES[32] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[33] = ::g::Uno::Collections::IList_typeof();
    type->SetPrecalc(
        ::TYPES[32/*Uno.Collections.ICollection`1*/]->MakeType(type->T(0)),
        ::TYPES[33/*Uno.Collections.IList`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ReadOnlyCollection, _list), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Count", NULL, (void*)ReadOnlyCollection__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)ReadOnlyCollection__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", type, (void*)ReadOnlyCollection__New1_fn, 0, true, type, 1, ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0))));
    return type;
}

// public ReadOnlyCollection(Uno.Collections.IList<T> list) :1403
void ReadOnlyCollection__ctor__fn(ReadOnlyCollection* __this, uObject* list)
{
    __this->ctor_(list);
}

// public int get_Count() :1408
void ReadOnlyCollection__get_Count_fn(ReadOnlyCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public T get_Item(int index) :1410
void ReadOnlyCollection__get_Item_fn(ReadOnlyCollection* __this, int* index, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int index_ = *index;
    return __retval.Store((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_list), __types[1]), uCRef<int>(index_), &ret2), ret2)), void();
}

// public ReadOnlyCollection New(Uno.Collections.IList<T> list) :1403
void ReadOnlyCollection__New1_fn(uType* __type, uObject* list, ReadOnlyCollection** __retval)
{
    *__retval = ReadOnlyCollection::New1(__type, list);
}

// public ReadOnlyCollection(Uno.Collections.IList<T> list) [instance] :1403
void ReadOnlyCollection::ctor_(uObject* list)
{
    _list = list;
}

// public int get_Count() [instance] :1408
int ReadOnlyCollection::Count()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->T(0),
    };
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_list), __types[0]));
}

// public ReadOnlyCollection New(Uno.Collections.IList<T> list) [static] :1403
ReadOnlyCollection* ReadOnlyCollection::New1(uType* __type, uObject* list)
{
    ReadOnlyCollection* obj1 = (ReadOnlyCollection*)uNew(__type);
    obj1->ctor_(list);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(418)
// ------------------------------------------------------------------------

// internal sealed class SelectEnumerable<T, TRet> :418
// {
SelectEnumerable_type* SelectEnumerable_typeof()
{
    static uSStrong<SelectEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SelectEnumerable);
    options.TypeSize = sizeof(SelectEnumerable_type);
    type = (SelectEnumerable_type*)uClassType::New("Uno.Collections.SelectEnumerable`2", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))SelectEnumerable__GetEnumerator_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[41] = ::g::Uno::Collections::SelectEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(1)),
        ::TYPES[41/*Uno.Collections.SelectEnumerator`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(1)), offsetof(SelectEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Collections::SelectEnumerable, _select), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::SelectEnumerable, _source), 0);
    return type;
}

// public SelectEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) :423
void SelectEnumerable__ctor__fn(SelectEnumerable* __this, uObject* source, uDelegate* select)
{
    __this->ctor_(source, select);
}

// public Uno.Collections.IEnumerator<TRet> GetEnumerator() :429
void SelectEnumerable__GetEnumerator_fn(SelectEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public SelectEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) :423
void SelectEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerable** __retval)
{
    *__retval = SelectEnumerable::New1(__type, source, select);
}

// public SelectEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) [instance] :423
void SelectEnumerable::ctor_(uObject* source, uDelegate* select)
{
    _source = source;
    _select = select;
}

// public Uno.Collections.IEnumerator<TRet> GetEnumerator() [instance] :429
uObject* SelectEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<TRet>*/),
        __type->T(1),
        __type->Precalced(1/*Uno.Collections.SelectEnumerator<T, TRet>*/),
        __type->T(0),
    };
    return (uObject*)((::g::Uno::Collections::SelectEnumerator*)::g::Uno::Collections::SelectEnumerator::New1(__types[2], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[3]))), _select));
}

// public SelectEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) [static] :423
SelectEnumerable* SelectEnumerable::New1(uType* __type, uObject* source, uDelegate* select)
{
    SelectEnumerable* obj1 = (SelectEnumerable*)uNew(__type);
    obj1->ctor_(source, select);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(435)
// ------------------------------------------------------------------------

// internal sealed class SelectEnumerator<T, TRet> :435
// {
SelectEnumerator_type* SelectEnumerator_typeof()
{
    static uSStrong<SelectEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SelectEnumerator);
    options.TypeSize = sizeof(SelectEnumerator_type);
    type = (SelectEnumerator_type*)uClassType::New("Uno.Collections.SelectEnumerator`2", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))SelectEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SelectEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))SelectEnumerator__MoveNext_fn;
    ::TYPES[42] = ::g::Uno::Func1_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[42/*Uno.Func`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1)), offsetof(SelectEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SelectEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(SelectEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Collections::SelectEnumerator, _select), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::SelectEnumerator, _source), 0);
    return type;
}

// public SelectEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) :440
void SelectEnumerator__ctor__fn(SelectEnumerator* __this, uObject* source, uDelegate* select)
{
    __this->ctor_(source, select);
}

// public TRet get_Current() :448
void SelectEnumerator__get_Current_fn(SelectEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Func<T, TRet>*/),
        __this->__type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ;
    return __retval.Store((uPtr(__this->_select)->Invoke(&ret2, 1, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(__this->_source), __types[3]), &ret3), (void*)ret3)), ret2)), void();
}

// public void Dispose() :451
void SelectEnumerator__Dispose_fn(SelectEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :461
void SelectEnumerator__MoveNext_fn(SelectEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public SelectEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) :440
void SelectEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerator** __retval)
{
    *__retval = SelectEnumerator::New1(__type, source, select);
}

// public SelectEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) [instance] :440
void SelectEnumerator::ctor_(uObject* source, uDelegate* select)
{
    _source = source;
    _select = select;
}

// public void Dispose() [instance] :451
void SelectEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :461
bool SelectEnumerator::MoveNext()
{
    return ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::g::Uno::Collections::IEnumerator_typeof()));
}

// public SelectEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) [static] :440
SelectEnumerator* SelectEnumerator::New1(uType* __type, uObject* source, uDelegate* select)
{
    SelectEnumerator* obj1 = (SelectEnumerator*)uNew(__type);
    obj1->ctor_(source, select);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(1421)
// -----------------------------------------------------------------------------

// public sealed class Stack<T> :1421
// {
Stack_type* Stack_typeof()
{
    static uSStrong<Stack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Stack);
    options.TypeSize = sizeof(Stack_type);
    type = (Stack_type*)uClassType::New("Uno.Collections.Stack`1", options);
    type->fp_ctor_ = (void*)Stack__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Stack__GetEnumerator_fn;
    ::STRINGS[11] = uString::Const("Stack is empty");
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[12] = ::g::Uno::Generic_typeof();
    ::TYPES[43] = Stack__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::TYPES[12/*Uno.Generic*/]->MakeMethod(1, type->T(0)),
        ::TYPES[43/*Uno.Collections.Stack`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(Stack_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Collections::Stack, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Stack, _used), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Stack, _version), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("Clear", NULL, (void*)Stack__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)Stack__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)Stack__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)Stack__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction(".ctor", type, (void*)Stack__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Stack__New2_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Peek", NULL, (void*)Stack__Peek_fn, 0, false, type->T(0), 0),
        new uFunction("Pop", NULL, (void*)Stack__Pop_fn, 0, false, type->T(0), 0),
        new uFunction("Push", NULL, (void*)Stack__Push_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// public Stack() :1427
void Stack__ctor__fn(Stack* __this)
{
    __this->ctor_();
}

// public Stack(int capacity) :1433
void Stack__ctor_1_fn(Stack* __this, int* capacity)
{
    __this->ctor_1(*capacity);
}

// public void Clear() :1503
void Stack__Clear_fn(Stack* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :1510
void Stack__Contains_fn(Stack* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Generic.Equals<T>*/),
    };
    bool ret3;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[1], uPtr(__this->_data)->TItem(i), item, &ret3), ret3))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public int get_Count() :1441
void Stack__get_Count_fn(Stack* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private void EnsureCapacity() :1547
void Stack__EnsureCapacity_fn(Stack* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :1498
void Stack__GetEnumerator_fn(Stack* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Stack New() :1427
void Stack__New1_fn(uType* __type, Stack** __retval)
{
    *__retval = Stack::New1(__type);
}

// public Stack New(int capacity) :1433
void Stack__New2_fn(uType* __type, int* capacity, Stack** __retval)
{
    *__retval = Stack::New2(__type, *capacity);
}

// public T Peek() :1538
void Stack__Peek_fn(Stack* __this, uTRef __retval)
{
    if (__this->_used == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[11/*"Stack is em...*/]));

    return __retval.Store(uPtr(__this->_data)->TItem(__this->_used - 1)), void();
}

// public T Pop() :1526
void Stack__Pop_fn(Stack* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_used == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[11/*"Stack is em...*/]));

    __this->_version++;
    result = uPtr(__this->_data)->TItem(--__this->_used);
    uPtr(__this->_data)->TItem(__this->_used).Default();
    return __retval.Store(result), void();
}

// public void Push(T item) :1519
void Stack__Push_fn(Stack* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_used++) = item;
    __this->_version++;
}

// public Stack() [instance] :1427
void Stack::ctor_()
{
    _data = NULL;
    _used = 0;
}

// public Stack(int capacity) [instance] :1433
void Stack::ctor_1(int capacity)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    _data = uArray::New(__types[0], capacity);
    _used = 0;
}

// public void Clear() [instance] :1503
void Stack::Clear()
{
    _data = NULL;
    _used = 0;
    _version++;
}

// public int get_Count() [instance] :1441
int Stack::Count()
{
    return _used;
}

// private void EnsureCapacity() [instance] :1547
void Stack::EnsureCapacity()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };

    if (_data == NULL)
        _data = uArray::New(__types[0], 2);
    else if ((_used + 1) == uPtr(_data)->Length())
    {
        uArray* newData = uArray::New(__types[0], uPtr(_data)->Length() * 2);

        for (int i = 0; i < _used; i++)
            newData->TItem(i) = uPtr(_data)->TItem(i);

        _data = newData;
    }
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :1498
uObject* Stack::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.Stack<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(3/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (Stack__Enumerator__New1_fn(__types[0], this, &ret4), ret4));
}

// public Stack New() [static] :1427
Stack* Stack::New1(uType* __type)
{
    Stack* obj1 = (Stack*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public Stack New(int capacity) [static] :1433
Stack* Stack::New2(uType* __type, int capacity)
{
    Stack* obj2 = (Stack*)uNew(__type);
    obj2->ctor_1(capacity);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(472)
// ------------------------------------------------------------------------

// internal sealed class UnionEnumerable<T> :472
// {
UnionEnumerable_type* UnionEnumerable_typeof()
{
    static uSStrong<UnionEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(UnionEnumerable);
    options.TypeSize = sizeof(UnionEnumerable_type);
    type = (UnionEnumerable_type*)uClassType::New("Uno.Collections.UnionEnumerable`1", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))UnionEnumerable__GetEnumerator_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[44] = ::g::Uno::Collections::UnionEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[44/*Uno.Collections.UnionEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(UnionEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerable, _first), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerable, _second), 0);
    return type;
}

// public UnionEnumerable(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) :477
void UnionEnumerable__ctor__fn(UnionEnumerable* __this, uObject* first, uObject* second)
{
    __this->ctor_(first, second);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :483
void UnionEnumerable__GetEnumerator_fn(UnionEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public UnionEnumerable New(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) :477
void UnionEnumerable__New1_fn(uType* __type, uObject* first, uObject* second, UnionEnumerable** __retval)
{
    *__retval = UnionEnumerable::New1(__type, first, second);
}

// public UnionEnumerable(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) [instance] :477
void UnionEnumerable::ctor_(uObject* first, uObject* second)
{
    _first = first;
    _second = second;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :483
uObject* UnionEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.UnionEnumerator<T>*/),
    };
    return (uObject*)((::g::Uno::Collections::UnionEnumerator*)::g::Uno::Collections::UnionEnumerator::New1(__types[2], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_first), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[1]))), (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_second), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[1])))));
}

// public UnionEnumerable New(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) [static] :477
UnionEnumerable* UnionEnumerable::New1(uType* __type, uObject* first, uObject* second)
{
    UnionEnumerable* obj1 = (UnionEnumerable*)uNew(__type);
    obj1->ctor_(first, second);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(489)
// ------------------------------------------------------------------------

// internal sealed class UnionEnumerator<T> :489
// {
UnionEnumerator_type* UnionEnumerator_typeof()
{
    static uSStrong<UnionEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(UnionEnumerator);
    options.TypeSize = sizeof(UnionEnumerator_type);
    type = (UnionEnumerator_type*)uClassType::New("Uno.Collections.UnionEnumerator`1", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))UnionEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))UnionEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))UnionEnumerator__MoveNext_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(UnionEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(UnionEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(UnionEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerator, _current), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerator, _first), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerator, _second), 0);
    return type;
}

// public UnionEnumerator(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) :495
void UnionEnumerator__ctor__fn(UnionEnumerator* __this, uObject* first, uObject* second)
{
    __this->ctor_(first, second);
}

// public T get_Current() :504
void UnionEnumerator__get_Current_fn(UnionEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(__this->_current), __types[1]), &ret2), ret2)), void();
}

// public void Dispose() :507
void UnionEnumerator__Dispose_fn(UnionEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :519
void UnionEnumerator__MoveNext_fn(UnionEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public UnionEnumerator New(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) :495
void UnionEnumerator__New1_fn(uType* __type, uObject* first, uObject* second, UnionEnumerator** __retval)
{
    *__retval = UnionEnumerator::New1(__type, first, second);
}

// public UnionEnumerator(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) [instance] :495
void UnionEnumerator::ctor_(uObject* first, uObject* second)
{
    _first = first;
    _second = second;
    _current = _first;
}

// public void Dispose() [instance] :507
void UnionEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :519
bool UnionEnumerator::MoveNext()
{
    if (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_current), ::g::Uno::Collections::IEnumerator_typeof())))
        return true;

    if (_current == _first)
    {
        _current = _second;
        return MoveNext();
    }

    return false;
}

// public UnionEnumerator New(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) [static] :495
UnionEnumerator* UnionEnumerator::New1(uType* __type, uObject* first, uObject* second)
{
    UnionEnumerator* obj1 = (UnionEnumerator*)uNew(__type);
    obj1->ctor_(first, second);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno(170)
// ----------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue>.ValueCollection :170
// {
Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof()
{
    static uSStrong<Dictionary__ValueCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Dictionary__ValueCollection);
    options.TypeSize = sizeof(Dictionary__ValueCollection_type);
    type = (Dictionary__ValueCollection_type*)uClassType::New("Uno.Collections.Dictionary`2.ValueCollection", options);
    type->interface0.fp_Clear = (void(*)(uObject*))Dictionary__ValueCollection__Uno_Collections_ICollection_TValue__Clear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))Dictionary__ValueCollection__Uno_Collections_ICollection_TValue__Add_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__ValueCollection__Uno_Collections_ICollection_TValue__Remove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__ValueCollection__Uno_Collections_ICollection_TValue__Contains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))Dictionary__ValueCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__ValueCollection__GetEnumerator_boxed_fn;
    ::TYPES[45] = Dictionary__ValueCollection__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof();
    type->SetPrecalc(
        ::TYPES[45/*Uno.Collections.Dictionary`2.ValueCollection.Enumerator*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(1)),
        ::TYPES[26/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(1)), offsetof(Dictionary__ValueCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(1)), offsetof(Dictionary__ValueCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Collections::Dictionary__ValueCollection, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Count", NULL, (void*)Dictionary__ValueCollection__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__ValueCollection__GetEnumerator_fn, 0, false, Dictionary__ValueCollection__Enumerator_typeof()->MakeType(type->T(0), type->T(1)), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__ValueCollection__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1)), 0));
    return type;
}

// internal ValueCollection(Uno.Collections.Dictionary<TKey, TValue> source) :226
void Dictionary__ValueCollection__ctor__fn(Dictionary__ValueCollection* __this, ::g::Uno::Collections::Dictionary* source)
{
    __this->ctor_(source);
}

// public int get_Count() :258
void Dictionary__ValueCollection__get_Count_fn(Dictionary__ValueCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() :231
void Dictionary__ValueCollection__GetEnumerator_fn(Dictionary__ValueCollection* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((Dictionary__ValueCollection__Enumerator__New1_fn(__types[0], __this->_source, &ret2), ret2)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() :231
void Dictionary__ValueCollection__GetEnumerator_boxed_fn(Dictionary__ValueCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// internal ValueCollection New(Uno.Collections.Dictionary<TKey, TValue> source) :226
void Dictionary__ValueCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__ValueCollection** __retval)
{
    *__retval = Dictionary__ValueCollection::New1(__type, source);
}

// private void Uno.Collections.ICollection<TValue>.Add(TValue item) :241
void Dictionary__ValueCollection__Uno_Collections_ICollection_TValue__Add_fn(Dictionary__ValueCollection* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private void Uno.Collections.ICollection<TValue>.Clear() :236
void Dictionary__ValueCollection__Uno_Collections_ICollection_TValue__Clear_fn(Dictionary__ValueCollection* __this)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TValue>.Contains(TValue item) :251
void Dictionary__ValueCollection__Uno_Collections_ICollection_TValue__Contains_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TValue>.Remove(TValue item) :246
void Dictionary__ValueCollection__Uno_Collections_ICollection_TValue__Remove_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// internal ValueCollection(Uno.Collections.Dictionary<TKey, TValue> source) [instance] :226
void Dictionary__ValueCollection::ctor_(::g::Uno::Collections::Dictionary* source)
{
    _source = source;
}

// public int get_Count() [instance] :258
int Dictionary__ValueCollection::Count()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
    };
    return uPtr(_source)->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() [instance] :231
uObject* Dictionary__ValueCollection::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(1/*Uno.Collections.IEnumerator<TValue>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (Dictionary__ValueCollection__GetEnumerator_fn(this, &ret3), ret3));
}

// internal ValueCollection New(Uno.Collections.Dictionary<TKey, TValue> source) [static] :226
Dictionary__ValueCollection* Dictionary__ValueCollection::New1(uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    Dictionary__ValueCollection* obj1 = (Dictionary__ValueCollection*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(539)
// ------------------------------------------------------------------------

// internal sealed class WhereEnumerable<T> :539
// {
WhereEnumerable_type* WhereEnumerable_typeof()
{
    static uSStrong<WhereEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhereEnumerable);
    options.TypeSize = sizeof(WhereEnumerable_type);
    type = (WhereEnumerable_type*)uClassType::New("Uno.Collections.WhereEnumerable`1", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))WhereEnumerable__GetEnumerator_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[46] = ::g::Uno::Collections::WhereEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[46/*Uno.Collections.WhereEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(WhereEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Predicate_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::WhereEnumerable, _predicate), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::WhereEnumerable, _source), 0);
    return type;
}

// public WhereEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) :544
void WhereEnumerable__ctor__fn(WhereEnumerable* __this, uObject* source, uDelegate* predicate)
{
    __this->ctor_(source, predicate);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :550
void WhereEnumerable__GetEnumerator_fn(WhereEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public WhereEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) :544
void WhereEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* predicate, WhereEnumerable** __retval)
{
    *__retval = WhereEnumerable::New1(__type, source, predicate);
}

// public WhereEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) [instance] :544
void WhereEnumerable::ctor_(uObject* source, uDelegate* predicate)
{
    _source = source;
    _predicate = predicate;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :550
uObject* WhereEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.WhereEnumerator<T>*/),
    };
    return (uObject*)((::g::Uno::Collections::WhereEnumerator*)::g::Uno::Collections::WhereEnumerator::New1(__types[2], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[1]))), _predicate));
}

// public WhereEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) [static] :544
WhereEnumerable* WhereEnumerable::New1(uType* __type, uObject* source, uDelegate* predicate)
{
    WhereEnumerable* obj1 = (WhereEnumerable*)uNew(__type);
    obj1->ctor_(source, predicate);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Collections\0.19.2\Extensions\$.uno(556)
// ------------------------------------------------------------------------

// internal sealed class WhereEnumerator<T> :556
// {
WhereEnumerator_type* WhereEnumerator_typeof()
{
    static uSStrong<WhereEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhereEnumerator);
    options.TypeSize = sizeof(WhereEnumerator_type);
    type = (WhereEnumerator_type*)uClassType::New("Uno.Collections.WhereEnumerator`1", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))WhereEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WhereEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))WhereEnumerator__MoveNext_fn;
    ::TYPES[3] = ::g::Uno::Bool_typeof();
    ::TYPES[19] = ::g::Uno::Predicate_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[19/*Uno.Predicate`1*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(WhereEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WhereEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(WhereEnumerator_type, interface2));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Predicate_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::WhereEnumerator, _predicate), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::WhereEnumerator, _source), 0);
    return type;
}

// public WhereEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) :562
void WhereEnumerator__ctor__fn(WhereEnumerator* __this, uObject* source, uDelegate* predicate)
{
    __this->ctor_(source, predicate);
}

// public T get_Current() :570
void WhereEnumerator__get_Current_fn(WhereEnumerator* __this, uTRef __retval)
{
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :573
void WhereEnumerator__Dispose_fn(WhereEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :583
void WhereEnumerator__MoveNext_fn(WhereEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public WhereEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) :562
void WhereEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* predicate, WhereEnumerator** __retval)
{
    *__retval = WhereEnumerator::New1(__type, source, predicate);
}

// public WhereEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) [instance] :562
void WhereEnumerator::ctor_(uObject* source, uDelegate* predicate)
{
    _source = source;
    _predicate = predicate;
}

// public void Dispose() [instance] :573
void WhereEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :583
bool WhereEnumerator::MoveNext()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Predicate<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;
    ;
    ;

    while (true)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::g::Uno::Collections::IEnumerator_typeof())))
            return false;

        if ((uPtr(_predicate)->Invoke(&ret2, 1, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[2]), &ret3), (void*)ret3)), ret2))
        {
            _current() = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[2]), &ret4), ret4);
            return true;
        }
    }

    return false;
}

// public WhereEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) [static] :562
WhereEnumerator* WhereEnumerator::New1(uType* __type, uObject* source, uDelegate* predicate)
{
    WhereEnumerator* obj1 = (WhereEnumerator*)uNew(__type);
    obj1->ctor_(source, predicate);
    return obj1;
}
// }

}}} // ::g::Uno::Collections
