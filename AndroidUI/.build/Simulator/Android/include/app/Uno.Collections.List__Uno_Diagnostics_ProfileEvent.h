// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_DIAGNOSTICS_PROFILE_EVENT_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_DIAGNOSTICS_PROFILE_EVENT_H__

#include <app/Uno.Collections.IEnumerable__Uno_Diagnostics_ProfileEvent.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Diagnostics_ProfileEvent; } } }
namespace app { namespace Uno { namespace Diagnostics { struct ProfileEvent; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Diagnostics_ProfileEvent;

struct List__Uno_Diagnostics_ProfileEvent__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Diagnostics_ProfileEvent __interface_0;
};

List__Uno_Diagnostics_ProfileEvent__uType* List__Uno_Diagnostics_ProfileEvent__typeof();

::uObject* List__Uno_Diagnostics_ProfileEvent__GetEnumerator_boxed(List__Uno_Diagnostics_ProfileEvent* __this);
void List__Uno_Diagnostics_ProfileEvent___ObjInit(List__Uno_Diagnostics_ProfileEvent* __this);
void List__Uno_Diagnostics_ProfileEvent___ObjInit_1(List__Uno_Diagnostics_ProfileEvent* __this, int capacity);
void List__Uno_Diagnostics_ProfileEvent__Add(List__Uno_Diagnostics_ProfileEvent* __this, ::app::Uno::Diagnostics::ProfileEvent* item);
void List__Uno_Diagnostics_ProfileEvent__AddRange(List__Uno_Diagnostics_ProfileEvent* __this, ::uObject* items);
void List__Uno_Diagnostics_ProfileEvent__BoundsCheck(List__Uno_Diagnostics_ProfileEvent* __this, int index);
void List__Uno_Diagnostics_ProfileEvent__Clear(List__Uno_Diagnostics_ProfileEvent* __this);
bool List__Uno_Diagnostics_ProfileEvent__Contains(List__Uno_Diagnostics_ProfileEvent* __this, ::app::Uno::Diagnostics::ProfileEvent* item);
void List__Uno_Diagnostics_ProfileEvent__EnsureCapacity(List__Uno_Diagnostics_ProfileEvent* __this);
int List__Uno_Diagnostics_ProfileEvent__get_Count(List__Uno_Diagnostics_ProfileEvent* __this);
::app::Uno::Diagnostics::ProfileEvent* List__Uno_Diagnostics_ProfileEvent__get_Item(List__Uno_Diagnostics_ProfileEvent* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Diagnostics_ProfileEvent List__Uno_Diagnostics_ProfileEvent__GetEnumerator(List__Uno_Diagnostics_ProfileEvent* __this);
int List__Uno_Diagnostics_ProfileEvent__IndexOf(List__Uno_Diagnostics_ProfileEvent* __this, ::app::Uno::Diagnostics::ProfileEvent* item);
void List__Uno_Diagnostics_ProfileEvent__Insert(List__Uno_Diagnostics_ProfileEvent* __this, int index, ::app::Uno::Diagnostics::ProfileEvent* item);
List__Uno_Diagnostics_ProfileEvent* List__Uno_Diagnostics_ProfileEvent__New_1(::uStatic* __this);
List__Uno_Diagnostics_ProfileEvent* List__Uno_Diagnostics_ProfileEvent__New_2(::uStatic* __this, int capacity);
bool List__Uno_Diagnostics_ProfileEvent__Remove(List__Uno_Diagnostics_ProfileEvent* __this, ::app::Uno::Diagnostics::ProfileEvent* item);
void List__Uno_Diagnostics_ProfileEvent__RemoveAt(List__Uno_Diagnostics_ProfileEvent* __this, int index);
void List__Uno_Diagnostics_ProfileEvent__set_Item(List__Uno_Diagnostics_ProfileEvent* __this, int index, ::app::Uno::Diagnostics::ProfileEvent* value);
void List__Uno_Diagnostics_ProfileEvent__Sort(List__Uno_Diagnostics_ProfileEvent* __this, ::uDelegate* comparer);
::uArray* List__Uno_Diagnostics_ProfileEvent__ToArray(List__Uno_Diagnostics_ProfileEvent* __this);

struct List__Uno_Diagnostics_ProfileEvent : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Diagnostics_ProfileEvent__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Diagnostics_ProfileEvent___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Diagnostics_ProfileEvent___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Diagnostics::ProfileEvent* item) { List__Uno_Diagnostics_ProfileEvent__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Diagnostics_ProfileEvent__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Diagnostics_ProfileEvent__BoundsCheck(this, index); }
    void Clear() { List__Uno_Diagnostics_ProfileEvent__Clear(this); }
    bool Contains(::app::Uno::Diagnostics::ProfileEvent* item) { return List__Uno_Diagnostics_ProfileEvent__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Diagnostics_ProfileEvent__EnsureCapacity(this); }
    int Count() { return List__Uno_Diagnostics_ProfileEvent__get_Count(this); }
    ::app::Uno::Diagnostics::ProfileEvent* Item(int index) { return List__Uno_Diagnostics_ProfileEvent__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Diagnostics_ProfileEvent GetEnumerator();
    int IndexOf(::app::Uno::Diagnostics::ProfileEvent* item) { return List__Uno_Diagnostics_ProfileEvent__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Diagnostics::ProfileEvent* item) { List__Uno_Diagnostics_ProfileEvent__Insert(this, index, item); }
    bool Remove(::app::Uno::Diagnostics::ProfileEvent* item) { return List__Uno_Diagnostics_ProfileEvent__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Diagnostics_ProfileEvent__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Diagnostics::ProfileEvent* value) { List__Uno_Diagnostics_ProfileEvent__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Diagnostics_ProfileEvent__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Diagnostics_ProfileEvent__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Diagnostics_ProfileEvent.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Diagnostics_ProfileEvent List__Uno_Diagnostics_ProfileEvent::GetEnumerator() { return List__Uno_Diagnostics_ProfileEvent__GetEnumerator(this); }

}}}


#endif
