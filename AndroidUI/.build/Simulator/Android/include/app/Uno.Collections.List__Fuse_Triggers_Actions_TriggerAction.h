// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__

#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct TriggerAction; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Triggers_Actions_TriggerAction; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Triggers_Actions_TriggerAction;

struct List__Fuse_Triggers_Actions_TriggerAction__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Triggers_Actions_TriggerAction __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Triggers_Actions_TriggerAction __interface_2;
};

List__Fuse_Triggers_Actions_TriggerAction__uType* List__Fuse_Triggers_Actions_TriggerAction__typeof();

::uObject* List__Fuse_Triggers_Actions_TriggerAction__GetEnumerator_boxed(List__Fuse_Triggers_Actions_TriggerAction* __this);
void List__Fuse_Triggers_Actions_TriggerAction___ObjInit(List__Fuse_Triggers_Actions_TriggerAction* __this);
void List__Fuse_Triggers_Actions_TriggerAction___ObjInit_1(List__Fuse_Triggers_Actions_TriggerAction* __this, int capacity);
void List__Fuse_Triggers_Actions_TriggerAction__Add(List__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Fuse::Triggers::Actions::TriggerAction* item);
void List__Fuse_Triggers_Actions_TriggerAction__AddRange(List__Fuse_Triggers_Actions_TriggerAction* __this, ::uObject* items);
void List__Fuse_Triggers_Actions_TriggerAction__BoundsCheck(List__Fuse_Triggers_Actions_TriggerAction* __this, int index);
void List__Fuse_Triggers_Actions_TriggerAction__Clear(List__Fuse_Triggers_Actions_TriggerAction* __this);
bool List__Fuse_Triggers_Actions_TriggerAction__Contains(List__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Fuse::Triggers::Actions::TriggerAction* item);
void List__Fuse_Triggers_Actions_TriggerAction__EnsureCapacity(List__Fuse_Triggers_Actions_TriggerAction* __this);
int List__Fuse_Triggers_Actions_TriggerAction__get_Count(List__Fuse_Triggers_Actions_TriggerAction* __this);
::app::Fuse::Triggers::Actions::TriggerAction* List__Fuse_Triggers_Actions_TriggerAction__get_Item(List__Fuse_Triggers_Actions_TriggerAction* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List__Fuse_Triggers_Actions_TriggerAction__GetEnumerator(List__Fuse_Triggers_Actions_TriggerAction* __this);
int List__Fuse_Triggers_Actions_TriggerAction__IndexOf(List__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Fuse::Triggers::Actions::TriggerAction* item);
void List__Fuse_Triggers_Actions_TriggerAction__Insert(List__Fuse_Triggers_Actions_TriggerAction* __this, int index, ::app::Fuse::Triggers::Actions::TriggerAction* item);
List__Fuse_Triggers_Actions_TriggerAction* List__Fuse_Triggers_Actions_TriggerAction__New_1(::uStatic* __this);
List__Fuse_Triggers_Actions_TriggerAction* List__Fuse_Triggers_Actions_TriggerAction__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Triggers_Actions_TriggerAction__Remove(List__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Fuse::Triggers::Actions::TriggerAction* item);
void List__Fuse_Triggers_Actions_TriggerAction__RemoveAt(List__Fuse_Triggers_Actions_TriggerAction* __this, int index);
void List__Fuse_Triggers_Actions_TriggerAction__set_Item(List__Fuse_Triggers_Actions_TriggerAction* __this, int index, ::app::Fuse::Triggers::Actions::TriggerAction* value);
void List__Fuse_Triggers_Actions_TriggerAction__Sort(List__Fuse_Triggers_Actions_TriggerAction* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Triggers_Actions_TriggerAction__ToArray(List__Fuse_Triggers_Actions_TriggerAction* __this);

struct List__Fuse_Triggers_Actions_TriggerAction : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Triggers_Actions_TriggerAction__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Triggers_Actions_TriggerAction___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Triggers_Actions_TriggerAction___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Triggers::Actions::TriggerAction* item) { List__Fuse_Triggers_Actions_TriggerAction__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Triggers_Actions_TriggerAction__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Triggers_Actions_TriggerAction__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Triggers_Actions_TriggerAction__Clear(this); }
    bool Contains(::app::Fuse::Triggers::Actions::TriggerAction* item) { return List__Fuse_Triggers_Actions_TriggerAction__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Triggers_Actions_TriggerAction__EnsureCapacity(this); }
    int Count() { return List__Fuse_Triggers_Actions_TriggerAction__get_Count(this); }
    ::app::Fuse::Triggers::Actions::TriggerAction* Item(int index) { return List__Fuse_Triggers_Actions_TriggerAction__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction GetEnumerator();
    int IndexOf(::app::Fuse::Triggers::Actions::TriggerAction* item) { return List__Fuse_Triggers_Actions_TriggerAction__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Triggers::Actions::TriggerAction* item) { List__Fuse_Triggers_Actions_TriggerAction__Insert(this, index, item); }
    bool Remove(::app::Fuse::Triggers::Actions::TriggerAction* item) { return List__Fuse_Triggers_Actions_TriggerAction__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Triggers_Actions_TriggerAction__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Triggers::Actions::TriggerAction* value) { List__Fuse_Triggers_Actions_TriggerAction__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Triggers_Actions_TriggerAction__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Triggers_Actions_TriggerAction__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_Actions_TriggerAction.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List__Fuse_Triggers_Actions_TriggerAction::GetEnumerator() { return List__Fuse_Triggers_Actions_TriggerAction__GetEnumerator(this); }

}}}


#endif
