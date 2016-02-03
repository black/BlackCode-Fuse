// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_ENTRY_H__

#include <app/Fuse.Entities.Entry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Entities_Entry.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Entities_Entry;

struct List__Fuse_Entities_Entry__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Entities_Entry __interface_0;
};

List__Fuse_Entities_Entry__uType* List__Fuse_Entities_Entry__typeof();

::uObject* List__Fuse_Entities_Entry__GetEnumerator_boxed(List__Fuse_Entities_Entry* __this);
void List__Fuse_Entities_Entry___ObjInit(List__Fuse_Entities_Entry* __this);
void List__Fuse_Entities_Entry___ObjInit_1(List__Fuse_Entities_Entry* __this, int capacity);
void List__Fuse_Entities_Entry__Add(List__Fuse_Entities_Entry* __this, ::app::Fuse::Entities::Entry item);
void List__Fuse_Entities_Entry__AddRange(List__Fuse_Entities_Entry* __this, ::uObject* items);
void List__Fuse_Entities_Entry__BoundsCheck(List__Fuse_Entities_Entry* __this, int index);
void List__Fuse_Entities_Entry__Clear(List__Fuse_Entities_Entry* __this);
bool List__Fuse_Entities_Entry__Contains(List__Fuse_Entities_Entry* __this, ::app::Fuse::Entities::Entry item);
void List__Fuse_Entities_Entry__EnsureCapacity(List__Fuse_Entities_Entry* __this);
int List__Fuse_Entities_Entry__get_Count(List__Fuse_Entities_Entry* __this);
::app::Fuse::Entities::Entry List__Fuse_Entities_Entry__get_Item(List__Fuse_Entities_Entry* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry List__Fuse_Entities_Entry__GetEnumerator(List__Fuse_Entities_Entry* __this);
int List__Fuse_Entities_Entry__IndexOf(List__Fuse_Entities_Entry* __this, ::app::Fuse::Entities::Entry item);
void List__Fuse_Entities_Entry__Insert(List__Fuse_Entities_Entry* __this, int index, ::app::Fuse::Entities::Entry item);
List__Fuse_Entities_Entry* List__Fuse_Entities_Entry__New_1(::uStatic* __this);
List__Fuse_Entities_Entry* List__Fuse_Entities_Entry__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Entities_Entry__Remove(List__Fuse_Entities_Entry* __this, ::app::Fuse::Entities::Entry item);
void List__Fuse_Entities_Entry__RemoveAt(List__Fuse_Entities_Entry* __this, int index);
void List__Fuse_Entities_Entry__set_Item(List__Fuse_Entities_Entry* __this, int index, ::app::Fuse::Entities::Entry value);
void List__Fuse_Entities_Entry__Sort(List__Fuse_Entities_Entry* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Entities_Entry__ToArray(List__Fuse_Entities_Entry* __this);

struct List__Fuse_Entities_Entry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Entities_Entry__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Entities_Entry___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Entities_Entry___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Entities::Entry item);
    void AddRange(::uObject* items) { List__Fuse_Entities_Entry__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Entities_Entry__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Entities_Entry__Clear(this); }
    bool Contains(::app::Fuse::Entities::Entry item);
    void EnsureCapacity() { List__Fuse_Entities_Entry__EnsureCapacity(this); }
    int Count() { return List__Fuse_Entities_Entry__get_Count(this); }
    ::app::Fuse::Entities::Entry Item(int index);
    ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry GetEnumerator();
    int IndexOf(::app::Fuse::Entities::Entry item);
    void Insert(int index, ::app::Fuse::Entities::Entry item);
    bool Remove(::app::Fuse::Entities::Entry item);
    void RemoveAt(int index) { List__Fuse_Entities_Entry__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Entities::Entry value);
    void Sort(::uDelegate* comparer) { List__Fuse_Entities_Entry__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Entities_Entry__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entry.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__Fuse_Entities_Entry::Add(::app::Fuse::Entities::Entry item) { List__Fuse_Entities_Entry__Add(this, item); }
inline bool List__Fuse_Entities_Entry::Contains(::app::Fuse::Entities::Entry item) { return List__Fuse_Entities_Entry__Contains(this, item); }
inline ::app::Fuse::Entities::Entry List__Fuse_Entities_Entry::Item(int index) { return List__Fuse_Entities_Entry__get_Item(this, index); }
inline ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry List__Fuse_Entities_Entry::GetEnumerator() { return List__Fuse_Entities_Entry__GetEnumerator(this); }
inline int List__Fuse_Entities_Entry::IndexOf(::app::Fuse::Entities::Entry item) { return List__Fuse_Entities_Entry__IndexOf(this, item); }
inline void List__Fuse_Entities_Entry::Insert(int index, ::app::Fuse::Entities::Entry item) { List__Fuse_Entities_Entry__Insert(this, index, item); }
inline bool List__Fuse_Entities_Entry::Remove(::app::Fuse::Entities::Entry item) { return List__Fuse_Entities_Entry__Remove(this, item); }
inline void List__Fuse_Entities_Entry::Item(int index, ::app::Fuse::Entities::Entry value) { List__Fuse_Entities_Entry__set_Item(this, index, value); }

}}}


#endif
