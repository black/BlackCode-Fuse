// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ConcurrentCollection-1.ModItem.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection;}}}
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection__DeferLockImpl;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class ConcurrentCollection<T> :146
// {
struct ConcurrentCollection_type : uType
{
    ::g::Uno::Collections::ICollection interface0;
    ::g::Uno::Collections::IEnumerable interface1;
};

ConcurrentCollection_type* ConcurrentCollection_typeof();
void ConcurrentCollection__ctor__fn(ConcurrentCollection* __this);
void ConcurrentCollection__Add_fn(ConcurrentCollection* __this, void* item);
void ConcurrentCollection__Clear_fn(ConcurrentCollection* __this);
void ConcurrentCollection__Contains_fn(ConcurrentCollection* __this, void* item, bool* __retval);
void ConcurrentCollection__get_Count_fn(ConcurrentCollection* __this, int* __retval);
void ConcurrentCollection__DeferChanges_fn(ConcurrentCollection* __this);
void ConcurrentCollection__DeferLock_fn(ConcurrentCollection* __this, uObject** __retval);
void ConcurrentCollection__EndDefer_fn(ConcurrentCollection* __this);
void ConcurrentCollection__GetEnumerator_fn(ConcurrentCollection* __this, uObject** __retval);
void ConcurrentCollection__get_Item_fn(ConcurrentCollection* __this, int* index, uTRef __retval);
void ConcurrentCollection__get_Mod_fn(ConcurrentCollection* __this, ::g::Uno::Collections::List** __retval);
void ConcurrentCollection__New1_fn(uType* __type, ConcurrentCollection** __retval);
void ConcurrentCollection__Remove_fn(ConcurrentCollection* __this, void* item, bool* __retval);

struct ConcurrentCollection : uObject
{
    uStrong< ::g::Uno::Collections::List*> _back;
    bool _defer;
    uStrong<ConcurrentCollection__DeferLockImpl*> _lockImpl;
    uStrong< ::g::Uno::Collections::List*> _mod;

    void ctor_();
    template<class T>
    void Add(T item) { ConcurrentCollection__Add_fn(this, uConstrain(__type->T(0), item)); }
    void Clear();
    template<class T>
    bool Contains(T item) { bool __retval; return ConcurrentCollection__Contains_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    int Count();
    void DeferChanges();
    uObject* DeferLock();
    void EndDefer();
    uObject* GetEnumerator();
    template<class T>
    T Item(int index) { T __retval; return ConcurrentCollection__get_Item_fn(this, &index, &__retval), __retval; }
    ::g::Uno::Collections::List* Mod();
    template<class T>
    bool Remove(T item) { bool __retval; return ConcurrentCollection__Remove_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    static ConcurrentCollection* New1(uType* __type);
};
// }

}}} // ::g::Uno::Collections
