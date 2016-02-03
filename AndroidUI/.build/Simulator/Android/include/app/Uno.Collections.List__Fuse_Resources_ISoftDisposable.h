// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_I_SOFT_DISPOSABLE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_I_SOFT_DISPOSABLE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ISoftDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Resources_ISoftDisposable; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Resources_ISoftDisposable;

struct List__Fuse_Resources_ISoftDisposable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Resources_ISoftDisposable __interface_0;
};

List__Fuse_Resources_ISoftDisposable__uType* List__Fuse_Resources_ISoftDisposable__typeof();

::uObject* List__Fuse_Resources_ISoftDisposable__GetEnumerator_boxed(List__Fuse_Resources_ISoftDisposable* __this);
void List__Fuse_Resources_ISoftDisposable___ObjInit(List__Fuse_Resources_ISoftDisposable* __this);
void List__Fuse_Resources_ISoftDisposable___ObjInit_1(List__Fuse_Resources_ISoftDisposable* __this, int capacity);
void List__Fuse_Resources_ISoftDisposable__Add(List__Fuse_Resources_ISoftDisposable* __this, ::uObject* item);
void List__Fuse_Resources_ISoftDisposable__AddRange(List__Fuse_Resources_ISoftDisposable* __this, ::uObject* items);
void List__Fuse_Resources_ISoftDisposable__BoundsCheck(List__Fuse_Resources_ISoftDisposable* __this, int index);
void List__Fuse_Resources_ISoftDisposable__Clear(List__Fuse_Resources_ISoftDisposable* __this);
bool List__Fuse_Resources_ISoftDisposable__Contains(List__Fuse_Resources_ISoftDisposable* __this, ::uObject* item);
void List__Fuse_Resources_ISoftDisposable__EnsureCapacity(List__Fuse_Resources_ISoftDisposable* __this);
int List__Fuse_Resources_ISoftDisposable__get_Count(List__Fuse_Resources_ISoftDisposable* __this);
::uObject* List__Fuse_Resources_ISoftDisposable__get_Item(List__Fuse_Resources_ISoftDisposable* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ISoftDisposable List__Fuse_Resources_ISoftDisposable__GetEnumerator(List__Fuse_Resources_ISoftDisposable* __this);
int List__Fuse_Resources_ISoftDisposable__IndexOf(List__Fuse_Resources_ISoftDisposable* __this, ::uObject* item);
void List__Fuse_Resources_ISoftDisposable__Insert(List__Fuse_Resources_ISoftDisposable* __this, int index, ::uObject* item);
List__Fuse_Resources_ISoftDisposable* List__Fuse_Resources_ISoftDisposable__New_1(::uStatic* __this);
List__Fuse_Resources_ISoftDisposable* List__Fuse_Resources_ISoftDisposable__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Resources_ISoftDisposable__Remove(List__Fuse_Resources_ISoftDisposable* __this, ::uObject* item);
void List__Fuse_Resources_ISoftDisposable__RemoveAt(List__Fuse_Resources_ISoftDisposable* __this, int index);
void List__Fuse_Resources_ISoftDisposable__set_Item(List__Fuse_Resources_ISoftDisposable* __this, int index, ::uObject* value);
void List__Fuse_Resources_ISoftDisposable__Sort(List__Fuse_Resources_ISoftDisposable* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Resources_ISoftDisposable__ToArray(List__Fuse_Resources_ISoftDisposable* __this);

struct List__Fuse_Resources_ISoftDisposable : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Resources_ISoftDisposable__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Resources_ISoftDisposable___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Resources_ISoftDisposable___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_Resources_ISoftDisposable__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Resources_ISoftDisposable__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Resources_ISoftDisposable__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Resources_ISoftDisposable__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_Resources_ISoftDisposable__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Resources_ISoftDisposable__EnsureCapacity(this); }
    int Count() { return List__Fuse_Resources_ISoftDisposable__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Resources_ISoftDisposable__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ISoftDisposable GetEnumerator();
    int IndexOf(::uObject* item) { return List__Fuse_Resources_ISoftDisposable__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Fuse_Resources_ISoftDisposable__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Fuse_Resources_ISoftDisposable__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Resources_ISoftDisposable__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Resources_ISoftDisposable__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Resources_ISoftDisposable__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Resources_ISoftDisposable__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ISoftDisposable.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ISoftDisposable List__Fuse_Resources_ISoftDisposable::GetEnumerator() { return List__Fuse_Resources_ISoftDisposable__GetEnumerator(this); }

}}}


#endif
