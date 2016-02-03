// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RENDER_TARGET_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RENDER_TARGET_ENTRY_H__

#include <app/Uno.Collections.ICollection__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IList__Fuse_RenderTargetEntry.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct RenderTargetEntry; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_RenderTargetEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_RenderTargetEntry;

struct List__Fuse_RenderTargetEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_RenderTargetEntry __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_RenderTargetEntry __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_RenderTargetEntry __interface_2;
};

List__Fuse_RenderTargetEntry__uType* List__Fuse_RenderTargetEntry__typeof();

::uObject* List__Fuse_RenderTargetEntry__GetEnumerator_boxed(List__Fuse_RenderTargetEntry* __this);
void List__Fuse_RenderTargetEntry___ObjInit(List__Fuse_RenderTargetEntry* __this);
void List__Fuse_RenderTargetEntry___ObjInit_1(List__Fuse_RenderTargetEntry* __this, int capacity);
void List__Fuse_RenderTargetEntry__Add(List__Fuse_RenderTargetEntry* __this, ::app::Fuse::RenderTargetEntry* item);
void List__Fuse_RenderTargetEntry__AddRange(List__Fuse_RenderTargetEntry* __this, ::uObject* items);
void List__Fuse_RenderTargetEntry__BoundsCheck(List__Fuse_RenderTargetEntry* __this, int index);
void List__Fuse_RenderTargetEntry__Clear(List__Fuse_RenderTargetEntry* __this);
bool List__Fuse_RenderTargetEntry__Contains(List__Fuse_RenderTargetEntry* __this, ::app::Fuse::RenderTargetEntry* item);
void List__Fuse_RenderTargetEntry__EnsureCapacity(List__Fuse_RenderTargetEntry* __this);
int List__Fuse_RenderTargetEntry__get_Count(List__Fuse_RenderTargetEntry* __this);
::app::Fuse::RenderTargetEntry* List__Fuse_RenderTargetEntry__get_Item(List__Fuse_RenderTargetEntry* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_RenderTargetEntry List__Fuse_RenderTargetEntry__GetEnumerator(List__Fuse_RenderTargetEntry* __this);
int List__Fuse_RenderTargetEntry__IndexOf(List__Fuse_RenderTargetEntry* __this, ::app::Fuse::RenderTargetEntry* item);
void List__Fuse_RenderTargetEntry__Insert(List__Fuse_RenderTargetEntry* __this, int index, ::app::Fuse::RenderTargetEntry* item);
List__Fuse_RenderTargetEntry* List__Fuse_RenderTargetEntry__New_1(::uStatic* __this);
List__Fuse_RenderTargetEntry* List__Fuse_RenderTargetEntry__New_2(::uStatic* __this, int capacity);
bool List__Fuse_RenderTargetEntry__Remove(List__Fuse_RenderTargetEntry* __this, ::app::Fuse::RenderTargetEntry* item);
void List__Fuse_RenderTargetEntry__RemoveAt(List__Fuse_RenderTargetEntry* __this, int index);
void List__Fuse_RenderTargetEntry__set_Item(List__Fuse_RenderTargetEntry* __this, int index, ::app::Fuse::RenderTargetEntry* value);
void List__Fuse_RenderTargetEntry__Sort(List__Fuse_RenderTargetEntry* __this, ::uDelegate* comparer);
::uArray* List__Fuse_RenderTargetEntry__ToArray(List__Fuse_RenderTargetEntry* __this);

struct List__Fuse_RenderTargetEntry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_RenderTargetEntry__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_RenderTargetEntry___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_RenderTargetEntry___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::RenderTargetEntry* item) { List__Fuse_RenderTargetEntry__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_RenderTargetEntry__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_RenderTargetEntry__BoundsCheck(this, index); }
    void Clear() { List__Fuse_RenderTargetEntry__Clear(this); }
    bool Contains(::app::Fuse::RenderTargetEntry* item) { return List__Fuse_RenderTargetEntry__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_RenderTargetEntry__EnsureCapacity(this); }
    int Count() { return List__Fuse_RenderTargetEntry__get_Count(this); }
    ::app::Fuse::RenderTargetEntry* Item(int index) { return List__Fuse_RenderTargetEntry__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_RenderTargetEntry GetEnumerator();
    int IndexOf(::app::Fuse::RenderTargetEntry* item) { return List__Fuse_RenderTargetEntry__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::RenderTargetEntry* item) { List__Fuse_RenderTargetEntry__Insert(this, index, item); }
    bool Remove(::app::Fuse::RenderTargetEntry* item) { return List__Fuse_RenderTargetEntry__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_RenderTargetEntry__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::RenderTargetEntry* value) { List__Fuse_RenderTargetEntry__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_RenderTargetEntry__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_RenderTargetEntry__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_RenderTargetEntry.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_RenderTargetEntry List__Fuse_RenderTargetEntry::GetEnumerator() { return List__Fuse_RenderTargetEntry__GetEnumerator(this); }

}}}


#endif
