// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_BATCH_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_BATCH_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementBatch; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_ElementBatch; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Elements_ElementBatch;

struct List__Fuse_Elements_ElementBatch__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Elements_ElementBatch __interface_0;
};

List__Fuse_Elements_ElementBatch__uType* List__Fuse_Elements_ElementBatch__typeof();

::uObject* List__Fuse_Elements_ElementBatch__GetEnumerator_boxed(List__Fuse_Elements_ElementBatch* __this);
void List__Fuse_Elements_ElementBatch___ObjInit(List__Fuse_Elements_ElementBatch* __this);
void List__Fuse_Elements_ElementBatch___ObjInit_1(List__Fuse_Elements_ElementBatch* __this, int capacity);
void List__Fuse_Elements_ElementBatch__Add(List__Fuse_Elements_ElementBatch* __this, ::app::Fuse::Elements::ElementBatch* item);
void List__Fuse_Elements_ElementBatch__AddRange(List__Fuse_Elements_ElementBatch* __this, ::uObject* items);
void List__Fuse_Elements_ElementBatch__BoundsCheck(List__Fuse_Elements_ElementBatch* __this, int index);
void List__Fuse_Elements_ElementBatch__Clear(List__Fuse_Elements_ElementBatch* __this);
bool List__Fuse_Elements_ElementBatch__Contains(List__Fuse_Elements_ElementBatch* __this, ::app::Fuse::Elements::ElementBatch* item);
void List__Fuse_Elements_ElementBatch__EnsureCapacity(List__Fuse_Elements_ElementBatch* __this);
int List__Fuse_Elements_ElementBatch__get_Count(List__Fuse_Elements_ElementBatch* __this);
::app::Fuse::Elements::ElementBatch* List__Fuse_Elements_ElementBatch__get_Item(List__Fuse_Elements_ElementBatch* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch List__Fuse_Elements_ElementBatch__GetEnumerator(List__Fuse_Elements_ElementBatch* __this);
int List__Fuse_Elements_ElementBatch__IndexOf(List__Fuse_Elements_ElementBatch* __this, ::app::Fuse::Elements::ElementBatch* item);
void List__Fuse_Elements_ElementBatch__Insert(List__Fuse_Elements_ElementBatch* __this, int index, ::app::Fuse::Elements::ElementBatch* item);
List__Fuse_Elements_ElementBatch* List__Fuse_Elements_ElementBatch__New_1(::uStatic* __this);
List__Fuse_Elements_ElementBatch* List__Fuse_Elements_ElementBatch__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Elements_ElementBatch__Remove(List__Fuse_Elements_ElementBatch* __this, ::app::Fuse::Elements::ElementBatch* item);
void List__Fuse_Elements_ElementBatch__RemoveAt(List__Fuse_Elements_ElementBatch* __this, int index);
void List__Fuse_Elements_ElementBatch__set_Item(List__Fuse_Elements_ElementBatch* __this, int index, ::app::Fuse::Elements::ElementBatch* value);
void List__Fuse_Elements_ElementBatch__Sort(List__Fuse_Elements_ElementBatch* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Elements_ElementBatch__ToArray(List__Fuse_Elements_ElementBatch* __this);

struct List__Fuse_Elements_ElementBatch : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Elements_ElementBatch__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Elements_ElementBatch___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Elements_ElementBatch___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Elements::ElementBatch* item) { List__Fuse_Elements_ElementBatch__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Elements_ElementBatch__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Elements_ElementBatch__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Elements_ElementBatch__Clear(this); }
    bool Contains(::app::Fuse::Elements::ElementBatch* item) { return List__Fuse_Elements_ElementBatch__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Elements_ElementBatch__EnsureCapacity(this); }
    int Count() { return List__Fuse_Elements_ElementBatch__get_Count(this); }
    ::app::Fuse::Elements::ElementBatch* Item(int index) { return List__Fuse_Elements_ElementBatch__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch GetEnumerator();
    int IndexOf(::app::Fuse::Elements::ElementBatch* item) { return List__Fuse_Elements_ElementBatch__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Elements::ElementBatch* item) { List__Fuse_Elements_ElementBatch__Insert(this, index, item); }
    bool Remove(::app::Fuse::Elements::ElementBatch* item) { return List__Fuse_Elements_ElementBatch__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Elements_ElementBatch__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Elements::ElementBatch* value) { List__Fuse_Elements_ElementBatch__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Elements_ElementBatch__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Elements_ElementBatch__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatch.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch List__Fuse_Elements_ElementBatch::GetEnumerator() { return List__Fuse_Elements_ElementBatch__GetEnumerator(this); }

}}}


#endif
