// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_TRIGGERS_STATE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_TRIGGERS_STATE_H__

#include <app/Uno.Collections.ICollection__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_State.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Triggers_State; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Triggers_State;

struct List__Fuse_Triggers_State__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Triggers_State __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Triggers_State __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State __interface_2;
};

List__Fuse_Triggers_State__uType* List__Fuse_Triggers_State__typeof();

::uObject* List__Fuse_Triggers_State__GetEnumerator_boxed(List__Fuse_Triggers_State* __this);
void List__Fuse_Triggers_State___ObjInit(List__Fuse_Triggers_State* __this);
void List__Fuse_Triggers_State___ObjInit_1(List__Fuse_Triggers_State* __this, int capacity);
void List__Fuse_Triggers_State__Add(List__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* item);
void List__Fuse_Triggers_State__AddRange(List__Fuse_Triggers_State* __this, ::uObject* items);
void List__Fuse_Triggers_State__BoundsCheck(List__Fuse_Triggers_State* __this, int index);
void List__Fuse_Triggers_State__Clear(List__Fuse_Triggers_State* __this);
bool List__Fuse_Triggers_State__Contains(List__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* item);
void List__Fuse_Triggers_State__EnsureCapacity(List__Fuse_Triggers_State* __this);
int List__Fuse_Triggers_State__get_Count(List__Fuse_Triggers_State* __this);
::app::Fuse::Triggers::State* List__Fuse_Triggers_State__get_Item(List__Fuse_Triggers_State* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_State List__Fuse_Triggers_State__GetEnumerator(List__Fuse_Triggers_State* __this);
int List__Fuse_Triggers_State__IndexOf(List__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* item);
void List__Fuse_Triggers_State__Insert(List__Fuse_Triggers_State* __this, int index, ::app::Fuse::Triggers::State* item);
List__Fuse_Triggers_State* List__Fuse_Triggers_State__New_1(::uStatic* __this);
List__Fuse_Triggers_State* List__Fuse_Triggers_State__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Triggers_State__Remove(List__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* item);
void List__Fuse_Triggers_State__RemoveAt(List__Fuse_Triggers_State* __this, int index);
void List__Fuse_Triggers_State__set_Item(List__Fuse_Triggers_State* __this, int index, ::app::Fuse::Triggers::State* value);
void List__Fuse_Triggers_State__Sort(List__Fuse_Triggers_State* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Triggers_State__ToArray(List__Fuse_Triggers_State* __this);

struct List__Fuse_Triggers_State : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Triggers_State__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Triggers_State___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Triggers_State___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Triggers::State* item) { List__Fuse_Triggers_State__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Triggers_State__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Triggers_State__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Triggers_State__Clear(this); }
    bool Contains(::app::Fuse::Triggers::State* item) { return List__Fuse_Triggers_State__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Triggers_State__EnsureCapacity(this); }
    int Count() { return List__Fuse_Triggers_State__get_Count(this); }
    ::app::Fuse::Triggers::State* Item(int index) { return List__Fuse_Triggers_State__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_State GetEnumerator();
    int IndexOf(::app::Fuse::Triggers::State* item) { return List__Fuse_Triggers_State__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Triggers::State* item) { List__Fuse_Triggers_State__Insert(this, index, item); }
    bool Remove(::app::Fuse::Triggers::State* item) { return List__Fuse_Triggers_State__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Triggers_State__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Triggers::State* value) { List__Fuse_Triggers_State__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Triggers_State__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Triggers_State__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_State.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_State List__Fuse_Triggers_State::GetEnumerator() { return List__Fuse_Triggers_State__GetEnumerator(this); }

}}}


#endif
