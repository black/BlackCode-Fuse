// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_NAVIGATION_I_PAGE_RESOURCE_BINDING_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_NAVIGATION_I_PAGE_RESOURCE_BINDING_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Navigation_IPageResourceBinding; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Navigation_IPageResourceBinding;

struct List__Fuse_Navigation_IPageResourceBinding__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Navigation_IPageResourceBinding __interface_0;
};

List__Fuse_Navigation_IPageResourceBinding__uType* List__Fuse_Navigation_IPageResourceBinding__typeof();

::uObject* List__Fuse_Navigation_IPageResourceBinding__GetEnumerator_boxed(List__Fuse_Navigation_IPageResourceBinding* __this);
void List__Fuse_Navigation_IPageResourceBinding___ObjInit(List__Fuse_Navigation_IPageResourceBinding* __this);
void List__Fuse_Navigation_IPageResourceBinding___ObjInit_1(List__Fuse_Navigation_IPageResourceBinding* __this, int capacity);
void List__Fuse_Navigation_IPageResourceBinding__Add(List__Fuse_Navigation_IPageResourceBinding* __this, ::uObject* item);
void List__Fuse_Navigation_IPageResourceBinding__AddRange(List__Fuse_Navigation_IPageResourceBinding* __this, ::uObject* items);
void List__Fuse_Navigation_IPageResourceBinding__BoundsCheck(List__Fuse_Navigation_IPageResourceBinding* __this, int index);
void List__Fuse_Navigation_IPageResourceBinding__Clear(List__Fuse_Navigation_IPageResourceBinding* __this);
bool List__Fuse_Navigation_IPageResourceBinding__Contains(List__Fuse_Navigation_IPageResourceBinding* __this, ::uObject* item);
void List__Fuse_Navigation_IPageResourceBinding__EnsureCapacity(List__Fuse_Navigation_IPageResourceBinding* __this);
int List__Fuse_Navigation_IPageResourceBinding__get_Count(List__Fuse_Navigation_IPageResourceBinding* __this);
::uObject* List__Fuse_Navigation_IPageResourceBinding__get_Item(List__Fuse_Navigation_IPageResourceBinding* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding List__Fuse_Navigation_IPageResourceBinding__GetEnumerator(List__Fuse_Navigation_IPageResourceBinding* __this);
int List__Fuse_Navigation_IPageResourceBinding__IndexOf(List__Fuse_Navigation_IPageResourceBinding* __this, ::uObject* item);
void List__Fuse_Navigation_IPageResourceBinding__Insert(List__Fuse_Navigation_IPageResourceBinding* __this, int index, ::uObject* item);
List__Fuse_Navigation_IPageResourceBinding* List__Fuse_Navigation_IPageResourceBinding__New_1(::uStatic* __this);
List__Fuse_Navigation_IPageResourceBinding* List__Fuse_Navigation_IPageResourceBinding__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Navigation_IPageResourceBinding__Remove(List__Fuse_Navigation_IPageResourceBinding* __this, ::uObject* item);
void List__Fuse_Navigation_IPageResourceBinding__RemoveAt(List__Fuse_Navigation_IPageResourceBinding* __this, int index);
void List__Fuse_Navigation_IPageResourceBinding__set_Item(List__Fuse_Navigation_IPageResourceBinding* __this, int index, ::uObject* value);
void List__Fuse_Navigation_IPageResourceBinding__Sort(List__Fuse_Navigation_IPageResourceBinding* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Navigation_IPageResourceBinding__ToArray(List__Fuse_Navigation_IPageResourceBinding* __this);

struct List__Fuse_Navigation_IPageResourceBinding : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Navigation_IPageResourceBinding__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Navigation_IPageResourceBinding___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Navigation_IPageResourceBinding___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_Navigation_IPageResourceBinding__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Navigation_IPageResourceBinding__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Navigation_IPageResourceBinding__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Navigation_IPageResourceBinding__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_Navigation_IPageResourceBinding__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Navigation_IPageResourceBinding__EnsureCapacity(this); }
    int Count() { return List__Fuse_Navigation_IPageResourceBinding__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Navigation_IPageResourceBinding__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding GetEnumerator();
    int IndexOf(::uObject* item) { return List__Fuse_Navigation_IPageResourceBinding__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Fuse_Navigation_IPageResourceBinding__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Fuse_Navigation_IPageResourceBinding__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Navigation_IPageResourceBinding__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Navigation_IPageResourceBinding__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Navigation_IPageResourceBinding__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Navigation_IPageResourceBinding__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Navigation_IPageResourceBinding.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding List__Fuse_Navigation_IPageResourceBinding::GetEnumerator() { return List__Fuse_Navigation_IPageResourceBinding__GetEnumerator(this); }

}}}


#endif
