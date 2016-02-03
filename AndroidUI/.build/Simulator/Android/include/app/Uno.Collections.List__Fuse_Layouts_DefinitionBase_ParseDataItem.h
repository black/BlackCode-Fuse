// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_DEFINITION_BASE_PARSE_DATA_ITEM_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_DEFINITION_BASE_PARSE_DATA_ITEM_H__

#include <app/Fuse.Layouts.DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Layouts_DefinitionBase_ParseDataItem;

struct List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_DefinitionBase_ParseDataItem __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem __interface_1;
};

List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType* List__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof();

::uObject* List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator_boxed(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit_1(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, int capacity);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__Add(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__AddRange(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::uObject* items);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__BoundsCheck(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, int index);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__Clear(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
bool List__Fuse_Layouts_DefinitionBase_ParseDataItem__Contains(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__EnsureCapacity(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
int List__Fuse_Layouts_DefinitionBase_ParseDataItem__get_Count(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
::app::Fuse::Layouts::DefinitionBase_ParseDataItem List__Fuse_Layouts_DefinitionBase_ParseDataItem__get_Item(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
int List__Fuse_Layouts_DefinitionBase_ParseDataItem__IndexOf(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__Insert(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, int index, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
List__Fuse_Layouts_DefinitionBase_ParseDataItem* List__Fuse_Layouts_DefinitionBase_ParseDataItem__New_1(::uStatic* __this);
List__Fuse_Layouts_DefinitionBase_ParseDataItem* List__Fuse_Layouts_DefinitionBase_ParseDataItem__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Layouts_DefinitionBase_ParseDataItem__Remove(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__RemoveAt(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, int index);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__set_Item(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, int index, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem value);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__Sort(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Layouts_DefinitionBase_ParseDataItem__ToArray(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);

struct List__Fuse_Layouts_DefinitionBase_ParseDataItem : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
    void AddRange(::uObject* items) { List__Fuse_Layouts_DefinitionBase_ParseDataItem__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Layouts_DefinitionBase_ParseDataItem__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Layouts_DefinitionBase_ParseDataItem__Clear(this); }
    bool Contains(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
    void EnsureCapacity() { List__Fuse_Layouts_DefinitionBase_ParseDataItem__EnsureCapacity(this); }
    int Count() { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__get_Count(this); }
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem Item(int index);
    ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem GetEnumerator();
    int IndexOf(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
    void Insert(int index, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
    bool Remove(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
    void RemoveAt(int index) { List__Fuse_Layouts_DefinitionBase_ParseDataItem__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem value);
    void Sort(::uDelegate* comparer) { List__Fuse_Layouts_DefinitionBase_ParseDataItem__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_DefinitionBase_P-e6d8205a.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__Fuse_Layouts_DefinitionBase_ParseDataItem::Add(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item) { List__Fuse_Layouts_DefinitionBase_ParseDataItem__Add(this, item); }
inline bool List__Fuse_Layouts_DefinitionBase_ParseDataItem::Contains(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item) { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__Contains(this, item); }
inline ::app::Fuse::Layouts::DefinitionBase_ParseDataItem List__Fuse_Layouts_DefinitionBase_ParseDataItem::Item(int index) { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__get_Item(this, index); }
inline ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem List__Fuse_Layouts_DefinitionBase_ParseDataItem::GetEnumerator() { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator(this); }
inline int List__Fuse_Layouts_DefinitionBase_ParseDataItem::IndexOf(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item) { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__IndexOf(this, item); }
inline void List__Fuse_Layouts_DefinitionBase_ParseDataItem::Insert(int index, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item) { List__Fuse_Layouts_DefinitionBase_ParseDataItem__Insert(this, index, item); }
inline bool List__Fuse_Layouts_DefinitionBase_ParseDataItem::Remove(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item) { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__Remove(this, item); }
inline void List__Fuse_Layouts_DefinitionBase_ParseDataItem::Item(int index, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem value) { List__Fuse_Layouts_DefinitionBase_ParseDataItem__set_Item(this, index, value); }

}}}


#endif
