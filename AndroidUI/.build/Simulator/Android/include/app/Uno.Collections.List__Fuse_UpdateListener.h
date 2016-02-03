// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_UPDATE_LISTENER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_UPDATE_LISTENER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_UpdateListener.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct UpdateListener; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_UpdateListener; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_UpdateListener;

struct List__Fuse_UpdateListener__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_UpdateListener __interface_0;
};

List__Fuse_UpdateListener__uType* List__Fuse_UpdateListener__typeof();

::uObject* List__Fuse_UpdateListener__GetEnumerator_boxed(List__Fuse_UpdateListener* __this);
void List__Fuse_UpdateListener___ObjInit(List__Fuse_UpdateListener* __this);
void List__Fuse_UpdateListener___ObjInit_1(List__Fuse_UpdateListener* __this, int capacity);
void List__Fuse_UpdateListener__Add(List__Fuse_UpdateListener* __this, ::app::Fuse::UpdateListener* item);
void List__Fuse_UpdateListener__AddRange(List__Fuse_UpdateListener* __this, ::uObject* items);
void List__Fuse_UpdateListener__BoundsCheck(List__Fuse_UpdateListener* __this, int index);
void List__Fuse_UpdateListener__Clear(List__Fuse_UpdateListener* __this);
bool List__Fuse_UpdateListener__Contains(List__Fuse_UpdateListener* __this, ::app::Fuse::UpdateListener* item);
void List__Fuse_UpdateListener__EnsureCapacity(List__Fuse_UpdateListener* __this);
int List__Fuse_UpdateListener__get_Count(List__Fuse_UpdateListener* __this);
::app::Fuse::UpdateListener* List__Fuse_UpdateListener__get_Item(List__Fuse_UpdateListener* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener List__Fuse_UpdateListener__GetEnumerator(List__Fuse_UpdateListener* __this);
int List__Fuse_UpdateListener__IndexOf(List__Fuse_UpdateListener* __this, ::app::Fuse::UpdateListener* item);
void List__Fuse_UpdateListener__Insert(List__Fuse_UpdateListener* __this, int index, ::app::Fuse::UpdateListener* item);
List__Fuse_UpdateListener* List__Fuse_UpdateListener__New_1(::uStatic* __this);
List__Fuse_UpdateListener* List__Fuse_UpdateListener__New_2(::uStatic* __this, int capacity);
bool List__Fuse_UpdateListener__Remove(List__Fuse_UpdateListener* __this, ::app::Fuse::UpdateListener* item);
void List__Fuse_UpdateListener__RemoveAt(List__Fuse_UpdateListener* __this, int index);
void List__Fuse_UpdateListener__set_Item(List__Fuse_UpdateListener* __this, int index, ::app::Fuse::UpdateListener* value);
void List__Fuse_UpdateListener__Sort(List__Fuse_UpdateListener* __this, ::uDelegate* comparer);
::uArray* List__Fuse_UpdateListener__ToArray(List__Fuse_UpdateListener* __this);

struct List__Fuse_UpdateListener : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_UpdateListener__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_UpdateListener___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_UpdateListener___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::UpdateListener* item) { List__Fuse_UpdateListener__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_UpdateListener__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_UpdateListener__BoundsCheck(this, index); }
    void Clear() { List__Fuse_UpdateListener__Clear(this); }
    bool Contains(::app::Fuse::UpdateListener* item) { return List__Fuse_UpdateListener__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_UpdateListener__EnsureCapacity(this); }
    int Count() { return List__Fuse_UpdateListener__get_Count(this); }
    ::app::Fuse::UpdateListener* Item(int index) { return List__Fuse_UpdateListener__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener GetEnumerator();
    int IndexOf(::app::Fuse::UpdateListener* item) { return List__Fuse_UpdateListener__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::UpdateListener* item) { List__Fuse_UpdateListener__Insert(this, index, item); }
    bool Remove(::app::Fuse::UpdateListener* item) { return List__Fuse_UpdateListener__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_UpdateListener__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::UpdateListener* value) { List__Fuse_UpdateListener__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_UpdateListener__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_UpdateListener__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_UpdateListener.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener List__Fuse_UpdateListener::GetEnumerator() { return List__Fuse_UpdateListener__GetEnumerator(this); }

}}}


#endif
