// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_BATCH_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_BATCH_ENTRY_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementBatchEntry; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_ElementBatchEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Elements_ElementBatchEntry;

struct List__Fuse_Elements_ElementBatchEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Elements_ElementBatchEntry __interface_0;
};

List__Fuse_Elements_ElementBatchEntry__uType* List__Fuse_Elements_ElementBatchEntry__typeof();

::uObject* List__Fuse_Elements_ElementBatchEntry__GetEnumerator_boxed(List__Fuse_Elements_ElementBatchEntry* __this);
void List__Fuse_Elements_ElementBatchEntry___ObjInit(List__Fuse_Elements_ElementBatchEntry* __this);
void List__Fuse_Elements_ElementBatchEntry___ObjInit_1(List__Fuse_Elements_ElementBatchEntry* __this, int capacity);
void List__Fuse_Elements_ElementBatchEntry__Add(List__Fuse_Elements_ElementBatchEntry* __this, ::app::Fuse::Elements::ElementBatchEntry* item);
void List__Fuse_Elements_ElementBatchEntry__AddRange(List__Fuse_Elements_ElementBatchEntry* __this, ::uObject* items);
void List__Fuse_Elements_ElementBatchEntry__BoundsCheck(List__Fuse_Elements_ElementBatchEntry* __this, int index);
void List__Fuse_Elements_ElementBatchEntry__Clear(List__Fuse_Elements_ElementBatchEntry* __this);
bool List__Fuse_Elements_ElementBatchEntry__Contains(List__Fuse_Elements_ElementBatchEntry* __this, ::app::Fuse::Elements::ElementBatchEntry* item);
void List__Fuse_Elements_ElementBatchEntry__EnsureCapacity(List__Fuse_Elements_ElementBatchEntry* __this);
int List__Fuse_Elements_ElementBatchEntry__get_Count(List__Fuse_Elements_ElementBatchEntry* __this);
::app::Fuse::Elements::ElementBatchEntry* List__Fuse_Elements_ElementBatchEntry__get_Item(List__Fuse_Elements_ElementBatchEntry* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry List__Fuse_Elements_ElementBatchEntry__GetEnumerator(List__Fuse_Elements_ElementBatchEntry* __this);
int List__Fuse_Elements_ElementBatchEntry__IndexOf(List__Fuse_Elements_ElementBatchEntry* __this, ::app::Fuse::Elements::ElementBatchEntry* item);
void List__Fuse_Elements_ElementBatchEntry__Insert(List__Fuse_Elements_ElementBatchEntry* __this, int index, ::app::Fuse::Elements::ElementBatchEntry* item);
List__Fuse_Elements_ElementBatchEntry* List__Fuse_Elements_ElementBatchEntry__New_1(::uStatic* __this);
List__Fuse_Elements_ElementBatchEntry* List__Fuse_Elements_ElementBatchEntry__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Elements_ElementBatchEntry__Remove(List__Fuse_Elements_ElementBatchEntry* __this, ::app::Fuse::Elements::ElementBatchEntry* item);
void List__Fuse_Elements_ElementBatchEntry__RemoveAt(List__Fuse_Elements_ElementBatchEntry* __this, int index);
void List__Fuse_Elements_ElementBatchEntry__set_Item(List__Fuse_Elements_ElementBatchEntry* __this, int index, ::app::Fuse::Elements::ElementBatchEntry* value);
void List__Fuse_Elements_ElementBatchEntry__Sort(List__Fuse_Elements_ElementBatchEntry* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Elements_ElementBatchEntry__ToArray(List__Fuse_Elements_ElementBatchEntry* __this);

struct List__Fuse_Elements_ElementBatchEntry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Elements_ElementBatchEntry__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Elements_ElementBatchEntry___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Elements_ElementBatchEntry___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Elements::ElementBatchEntry* item) { List__Fuse_Elements_ElementBatchEntry__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Elements_ElementBatchEntry__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Elements_ElementBatchEntry__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Elements_ElementBatchEntry__Clear(this); }
    bool Contains(::app::Fuse::Elements::ElementBatchEntry* item) { return List__Fuse_Elements_ElementBatchEntry__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Elements_ElementBatchEntry__EnsureCapacity(this); }
    int Count() { return List__Fuse_Elements_ElementBatchEntry__get_Count(this); }
    ::app::Fuse::Elements::ElementBatchEntry* Item(int index) { return List__Fuse_Elements_ElementBatchEntry__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry GetEnumerator();
    int IndexOf(::app::Fuse::Elements::ElementBatchEntry* item) { return List__Fuse_Elements_ElementBatchEntry__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Elements::ElementBatchEntry* item) { List__Fuse_Elements_ElementBatchEntry__Insert(this, index, item); }
    bool Remove(::app::Fuse::Elements::ElementBatchEntry* item) { return List__Fuse_Elements_ElementBatchEntry__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Elements_ElementBatchEntry__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Elements::ElementBatchEntry* value) { List__Fuse_Elements_ElementBatchEntry__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Elements_ElementBatchEntry__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Elements_ElementBatchEntry__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatchEntry.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry List__Fuse_Elements_ElementBatchEntry::GetEnumerator() { return List__Fuse_Elements_ElementBatchEntry__GetEnumerator(this); }

}}}


#endif
